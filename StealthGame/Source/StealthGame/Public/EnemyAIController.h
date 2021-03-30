// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Perception/AISenseConfig_Hearing.h"
#include "BehaviorTree/BehaviorTree.h"
#include "Enemy.h"
#include "EnemyAIController.generated.h"

/**
 * 
 */
UCLASS()
class STEALTHGAME_API AEnemyAIController : public AAIController
{
	GENERATED_BODY()
	
public:
	AEnemyAIController();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI: behaviour tree")
	UBehaviorTree* BehaviourTree;

	AEnemy* pawnControlled;
	
	UFUNCTION()
	void OnPerceptionUpdate_SenseManagement(const TArray<AActor*>& UpdateActors);
protected:
	virtual void BeginPlay() override;

private:
	UAISenseConfig_Sight* SightConfig;
	UAISenseConfig_Hearing* HearingConfig;
	void StopAI();
};
