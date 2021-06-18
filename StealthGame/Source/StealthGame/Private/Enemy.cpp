// Fill out your copyright notice in the Description page of Project Settings.

#include "Enemy.h"
#include "HealthComponent.h"
#include "ProceduralMeshComponent.h"
#include "Engine.h"

// Sets default values
AEnemy::AEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("Health Component"));
	ViewCone = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("ViewCone"));
	ViewCone->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if(HealthComponent->isDead == false){
		CreateCone(GetActorLocation() + offestViewCone, GetActorForwardVector(), 20, (halfAngleDegreeForViewCone * 2) / 20, radiusForViewCone);
	}
}

// Called to bind functionality to input
void AEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AEnemy::CreateCone(FVector Origin, FVector Forward, int TotalTrace, float DegreePerTrace, float distance){
	FCollisionQueryParams collisionParams;
	collisionParams.AddIgnoredActor(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	collisionParams.AddIgnoredActor(GetOwner());
	TArray<FVector> vertices;
	vertices.Init(FVector(0, 0, 0), TotalTrace);
	FHitResult outHit;
	TArray<TEnumAsByte<EObjectTypeQuery>> TraceObjectTypes;
	TraceObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_WorldStatic));

	FVector relativeLoc = GetTransform().InverseTransformPosition(Origin);
	vertices[0] = relativeLoc;
	TArray<FVector2D> UV;
	UV.Init(FVector2D(0, 0), TotalTrace);
	//Get all vertices
	for(int i = 1; i < TotalTrace; i++){
		float agree = (TotalTrace * DegreePerTrace) / -2;
		FRotator Rot(0, agree, 0);
		FVector result = Rot.RotateVector(Forward);
		Rot = FRotator(0, i * DegreePerTrace, 0);
		FVector direction = Rot.RotateVector(result);
		direction = direction * distance;
		FVector destination = Origin + direction;
		//bool bHit = GetWorld()->LineTraceSingleByChannel(outHit, Origin, destination, ECollisionChannel::ECC_WorldStatic, collisionParams);
		bool bHit = GetWorld()->LineTraceSingleByObjectType(outHit, Origin, destination, TraceObjectTypes);
		if(bHit){
			vertices[i] = FVector(outHit.ImpactPoint.X - Origin.X, outHit.ImpactPoint.Y - Origin.Y, relativeLoc.Z);
			UV[i] = FVector2D(1, 1);
			//DrawDebugLine(GetWorld(), Origin, destination, FColor::Red, false, 1, 0, 1);
			//DrawDebugLine(GetWorld(), Origin, outHit.ImpactPoint, FColor::Red, false, 1, 0, 1);
		}else{
			//GEngine->AddOnScreenDebugMessage(-2, 5.f, FColor::Red, FString::Printf(TEXT("Point: %s"), *destination.ToString()));
			vertices[i] = FVector(destination.X - Origin.X, destination.Y - Origin.Y, relativeLoc.Z);
			UV[i] = FVector2D(1, 1);
			//DrawDebugLine(GetWorld(), Origin, destination, FColor::Red, false, 1, 0, 1);
		}
	}

	//Get all triangles
	TArray<int> triangles;
	triangles.Init(0, TotalTrace * 3);
	for(int i = 0; i < TotalTrace * 3; i++){
		if(i * 3 < TotalTrace * 3){
			triangles[i * 3] = 0;
		}
		if((i * 3) + 1 < TotalTrace * 3){
			triangles[(i * 3) + 1] = i + 1;
		}
		if((i * 3) + 2 < TotalTrace * 3){
			triangles[(i * 3) + 2] = i + 2;
		}
	}

	TArray<FLinearColor> VertexColors;
	// VertexColors.Add(FLinearColor(0.f, 0.f, 1.f));
	// VertexColors.Add(FLinearColor(1.f, 0.f, 0.f));
	// VertexColors.Add(FLinearColor(1.f, 0.f, 0.f));
	// VertexColors.Add(FLinearColor(0.f, 1.f, 0.f));
	// VertexColors.Add(FLinearColor(0.5f, 1.f, 0.5f));
	// VertexColors.Add(FLinearColor(0.f, 1.f, 0.f));
	// VertexColors.Add(FLinearColor(1.f, 1.f, 0.f));
	// VertexColors.Add(FLinearColor(0.f, 1.f, 1.f));
	//TArray<FVector> normals;
	//normals.Init(FVector(0, 0, 0), TotalTrace * 3);

	ViewCone->CreateMeshSection_LinearColor(0, vertices, triangles,  TArray<FVector>(), UV, VertexColors, TArray<FProcMeshTangent>(),true);
	if(!ViewConeMaterialPersonal){
		ViewConeMaterialPersonal = UMaterialInstanceDynamic::Create(ViewConeMaterial, this);
	}
	ViewCone->SetMaterial(0, ViewConeMaterialPersonal);
	ViewCone->SetWorldRotation(FRotator(0, 0, 0));
}



