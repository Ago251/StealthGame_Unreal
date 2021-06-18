// Fill out your copyright notice in the Description page of Project Settings.


#include "Cover.h"

// Sets default values
ACover::ACover()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SM = CreateDefaultSubobject<UStaticMeshComponent>(FName("SM"));
	BoxComp = CreateDefaultSubobject<UBoxComponent>(FName("BoxComp"));

	SetRootComponent(SM);
	BoxComp->SetupAttachment(SM);
}

// Called when the game starts or when spawned
void ACover::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ACover::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FName ACover::GetNearbySocket(FVector target) {
	FName NearestSocket = AvailableSockets[0]; // Get the first one if something goes wrong
	
	float MinDistance = INFINITY;
	//Find the socket that is close to the character
	for (uint8 SocketPtr = 0; SocketPtr < 12; SocketPtr++) {
		FVector SocketLocation = SM->GetSocketLocation(AvailableSockets[SocketPtr]);
		float Distance = FVector::Distance(target, SocketLocation);
		if (Distance < MinDistance) {
			NearestSocket = AvailableSockets[SocketPtr];
			MinDistance = Distance;
		}
	}

	return NearestSocket;
}

FVector ACover::GetNearbySocketPosition(FVector target) {
	FVector NearestSocket = SM->GetSocketLocation(AvailableSockets[0]); // Get the first one if something goes wrong
	
	float MinDistance = INFINITY;
	//Find the socket that is close to the character
	for (uint8 SocketPtr = 0; SocketPtr < 12; SocketPtr++) {
		FVector SocketLocation = SM->GetSocketLocation(AvailableSockets[SocketPtr]);
		float Distance = FVector::Distance(target, SocketLocation);
		if (Distance < MinDistance) {
			NearestSocket = SocketLocation;
			MinDistance = Distance;
		}
	}

	return NearestSocket;
}

FRotator ACover::GetSocketRotation(FName socket){
	return SM->GetSocketRotation(socket);
}

FVector ACover::GetSocketLocation(FName socket){
	return SM->GetSocketLocation(socket);
}

void ACover::DetermineMovementDirection(FVector Position, FVector& MovementDirection, FRotator& FacingDirection/*, FVector& limitA, FVector& limitB*/) {
	FName NearbySocket = GetNearbySocket(Position);
	
	//Determine the movement and facing direction of the player
	FRotator FacingRot = GetActorRotation();

	if (NearbySocket.IsEqual("ForwardSocket_1") || NearbySocket.IsEqual("ForwardSocket_2")) {
		//GEngine->AddOnScreenDebugMessage(-1, 1.2f, FColor::Green, TEXT("socket forward"));
		MovementDirection = GetActorForwardVector();
		FacingDirection = FacingRot + FRotator(0, 180, 0);;
	}
	else if (NearbySocket.IsEqual("BackwardSocket_1") || NearbySocket.IsEqual("BackwardSocket_2")) {
		//GEngine->AddOnScreenDebugMessage(-1, 1.2f, FColor::Green, TEXT("socket backward"));
		MovementDirection = -GetActorForwardVector();
		FacingDirection = FacingRot + FRotator(0, 0, 0);
	}
	else if (NearbySocket.IsEqual("RightSocket_1") || NearbySocket.IsEqual("RightSocket_2")) {
		//GEngine->AddOnScreenDebugMessage(-1, 1.2f, FColor::Green, TEXT("socket right"));
		MovementDirection = -GetActorRightVector();
		FacingDirection = FacingRot + FRotator(0, -90, 0);
	}
	else { //LeftSocket
		//GEngine->AddOnScreenDebugMessage(-1, 1.2f, FColor::Green, TEXT("socket left"));
		MovementDirection = GetActorRightVector();
		FacingDirection = FacingRot + FRotator(0, 90.f, 0);
	}
}

void ACover::GetLimits(FVector Position, FVector& limitA, FVector& limitB, bool& axisX) {
	FName NearbySocket = GetNearbySocket(Position);

	if (NearbySocket.IsEqual("ForwardSocket_1") || NearbySocket.IsEqual("ForwardSocket_2")) {
		//GEngine->AddOnScreenDebugMessage(-1, 1.2f, FColor::Green, TEXT("socket forward"));
		limitA = GetSocketLocation("ForwardSocket_2");
		limitB = GetSocketLocation("ForwardSocket_1");
		axisX = true;
	}
	else if (NearbySocket.IsEqual("BackwardSocket_1") || NearbySocket.IsEqual("BackwardSocket_2")) {
		//GEngine->AddOnScreenDebugMessage(-1, 1.2f, FColor::Green, TEXT("socket backward"));
		limitA = GetSocketLocation("BackwardSocket_1");
		limitB = GetSocketLocation("BackwardSocket_2");
		axisX = true;
	}
	else if (NearbySocket.IsEqual("RightSocket_1") || NearbySocket.IsEqual("RightSocket_2")) {
		//GEngine->AddOnScreenDebugMessage(-1, 1.2f, FColor::Green, TEXT("socket right"));
		limitA = GetSocketLocation("RightSocket_1");
		limitB = GetSocketLocation("RightSocket_2");
		axisX = false;
	}
	else { //LeftSocket
		//GEngine->AddOnScreenDebugMessage(-1, 1.2f, FColor::Green, TEXT("socket left"));
		limitA = GetSocketLocation("LeftSocket_2");
		limitB = GetSocketLocation("LeftSocket_1");
		axisX = false;
	}
}


