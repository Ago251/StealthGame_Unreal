// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "GoalController.generated.h"

UCLASS()
class STEALTHGAME_API AGoalController : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGoalController();

	UPROPERTY(VisibleAnywhere, Category = "Settings")
	class UBoxComponent* BoxCollider;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Mesh")
	UStaticMeshComponent* SM;

	// UPROPERTY(EditAnywhere, BlueprintReadWrite)
	// TSubclassOf<UUserWidget> YourHudWidgetClass;
 
 	// UPROPERTY()
 	// UUserWidget* YourHudWidget;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// UFUNCTION()
	// void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
