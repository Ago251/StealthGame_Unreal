// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Path.generated.h"

USTRUCT(BlueprintType)
struct FPatrolPoint{
	GENERATED_USTRUCT_BODY()
public:
	UPROPERTY(EditAnywhere, Meta = (MakeEditWidget = true))FVector position;
	UPROPERTY(EditAnywhere)FVector ViewDirection;
	UPROPERTY(EditAnywhere)float time;

	FPatrolPoint(){}
};

UCLASS()
class STEALTHGAME_API APath : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APath();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Path Points")
	TArray<FPatrolPoint> Points;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Path Points")
	float length;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void OnConstruction(const FTransform& Transform) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
