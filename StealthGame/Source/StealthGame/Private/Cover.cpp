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

