// Copyright Epic Games, Inc. All Rights Reserved.

#include "StealthGameCharacter.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "Components/TimelineComponent.h"
#include "Engine.h"
#include "DrawDebugHelpers.h"
#include "Cover.h"
#include "GameFramework/SpringArmComponent.h"

//////////////////////////////////////////////////////////////////////////
// AStealthGameCharacter

AStealthGameCharacter::AStealthGameCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	WeaponMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WeaponMesh"));
	WeaponMesh->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, "hand_r");

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)
}

void AStealthGameCharacter::BeginPlay() {
	Super::BeginPlay();
	GEngine->AddOnScreenDebugMessage(0, 100, FColor::Green, TEXT("Begin play"));
	if (MovementCurve && OffsetCurve) {
		GEngine->AddOnScreenDebugMessage(1, 100, FColor::Green, TEXT("Registering"));
		FOnTimelineFloat ProgressFunctionLength;
		ProgressFunctionLength.BindUFunction(this, "HandleProgressArmLength");
		AimTimeline.AddInterpFloat(MovementCurve, ProgressFunctionLength);

		FOnTimelineVector ProgressFunctionOffset;
		ProgressFunctionOffset.BindUFunction(this, "HandleProgressCameraOffset");
		AimTimeline.AddInterpVector(OffsetCurve, ProgressFunctionOffset);
	}
}

void AStealthGameCharacter::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	AimTimeline.TickTimeline(DeltaTime);
}

void AStealthGameCharacter::HandleProgressArmLength(float Length) {
	GEngine->AddOnScreenDebugMessage(2, 100, FColor::Green, TEXT("Aim In"));
	CameraBoom->TargetArmLength = Length;
}

void AStealthGameCharacter::HandleProgressCameraOffset(FVector Offset) {
	GEngine->AddOnScreenDebugMessage(3, 100, FColor::Green, TEXT("Aim In"));
	CameraBoom->SocketOffset = Offset;
}

//////////////////////////////////////////////////////////////////////////
// Input

void AStealthGameCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);

	if(!crouchButtonDown){
		PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AStealthGameCharacter::JumpCharacter);
		PlayerInputComponent->BindAction("Jump", IE_Released, this, &AStealthGameCharacter::ReleaseJumpCharacter);
	}

	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AStealthGameCharacter::FireCharacter);
	PlayerInputComponent->BindAction("Aim", IE_Pressed, this, &AStealthGameCharacter::AimIn);
	PlayerInputComponent->BindAction("Aim", IE_Released, this, &AStealthGameCharacter::AimOut);

	PlayerInputComponent->BindAction("Cover", IE_Pressed, this, &AStealthGameCharacter::Cover);

	PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &AStealthGameCharacter::CrouchCharacter);
	PlayerInputComponent->BindAction("Crouch", IE_Released, this, &AStealthGameCharacter::StandUpCharacter);

	PlayerInputComponent->BindAxis("MoveForward", this, &AStealthGameCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AStealthGameCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AStealthGameCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AStealthGameCharacter::LookUpAtRate);

	// handle touch devices
	PlayerInputComponent->BindTouch(IE_Pressed, this, &AStealthGameCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &AStealthGameCharacter::TouchStopped);

	// VR headset functionality
	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &AStealthGameCharacter::OnResetVR);
}


void AStealthGameCharacter::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void AStealthGameCharacter::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
{
		Jump();
}

void AStealthGameCharacter::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
{
		StopJumping();
}

void AStealthGameCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AStealthGameCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void AStealthGameCharacter::JumpCharacter(){
	UE_LOG(LogTemp, Warning, TEXT("Jump"));
	if(!crouchButtonDown){
		Jump();
		jumpButtonDown = true;
	}
}

void AStealthGameCharacter::ReleaseJumpCharacter(){
	StopJumping();
	jumpButtonDown = false;
}

void AStealthGameCharacter::CrouchCharacter(){
	crouchButtonDown = true;
}

void AStealthGameCharacter::StandUpCharacter(){
	crouchButtonDown = false;
}

bool AStealthGameCharacter::CanJumpCharacter(bool jumpButton, bool crouchButton){
	if(jumpButton && !crouchButton){
		return true;
	}
	return false;
}

void AStealthGameCharacter::AimIn() {
	bUseControllerRotationYaw = true;
	GetCharacterMovement()->bOrientRotationToMovement = false;
	AimTimeline.Play();
}

void AStealthGameCharacter::AimOut() {
	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;
	AimTimeline.Reverse();
}


void AStealthGameCharacter::FireCharacter(){
	FHitResult outHit;

	FVector start = FollowCamera->GetComponentLocation();
	FVector forwardVector = FollowCamera->GetForwardVector();

	start = WeaponMesh->GetComponentLocation();
	FVector end = start + (WeaponMesh->GetRightVector() * WeaponRange);

	FCollisionQueryParams collisionParams;
	collisionParams.AddIgnoredActor(this->GetOwner());
	DrawDebugLine(GetWorld(), start, end, FColor::Green, false, 1, 0, 1);
}

void AStealthGameCharacter::MoveForward(float Value)
{
	if ((Controller != NULL) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

bool AStealthGameCharacter::HitCover(){
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));

	FVector start = FollowCamera->GetComponentLocation();
	FVector forwardVector = FollowCamera->GetForwardVector();

	start = start + (forwardVector * CameraBoom->TargetArmLength);
	FVector end = start + (forwardVector * 5000.f);

	FHitResult Hit;
	bool bHit = GetWorld()->LineTraceSingleByChannel(Hit, start, end, ECC_Pawn, Params);

	if(bHit){
		DrawDebugLine(GetWorld(), start, end, FColor::Red, false, 1, 0, 1);
		ACover* HitCover = Cast<ACover>(Hit.Actor.Get());
		FString name = Hit.Actor->GetName();
		if (HitCover) {
			GEngine->AddOnScreenDebugMessage(10, 100, FColor::Green, TEXT("Find Cover"));
			return true;
		}
	}

	GEngine->AddOnScreenDebugMessage(10, 100, FColor::Green, TEXT("Not find cover"));
	return false;
}

void AStealthGameCharacter::Cover(){
	if(HitCover()){

	}
}

void AStealthGameCharacter::MoveRight(float Value)
{
	if ( (Controller != NULL) && (Value != 0.0f) )
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
	
		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}
