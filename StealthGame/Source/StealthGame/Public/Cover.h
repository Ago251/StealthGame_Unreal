// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Cover.generated.h"

UCLASS()
class STEALTHGAME_API ACover : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACover();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Mesh")
	UStaticMeshComponent* SM;

	UPROPERTY(VisibleAnywhere)
	UBoxComponent* BoxComp;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	FName GetNearbySocket(FVector target);
	FVector GetNearbySocketPosition(FVector target);
	FRotator GetSocketRotation(FName socket);
	FVector GetSocketLocation(FName socket);
	FName AvailableSockets[12] =
	{
		FName("ForwardSocket_1"),
		FName("ForwardSocket_2"),
		//FName("ForwardSocket_3"),
		FName("BackwardSocket_1"),
		FName("BackwardSocket_2"),
		//FName("BackwardSocket_3"),
		FName("RightSocket_1"),
		FName("RightSocket_2"),
		//FName("RightSocket_3"),
		FName("LeftSocket_1"),
		FName("LeftSocket_2"),
		//FName("LeftSocket_3")
	};
};
