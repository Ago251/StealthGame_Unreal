// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyAIController.h"
#include "../StealthGameCharacter.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Perception/AIPerceptionComponent.h"

AEnemyAIController::AEnemyAIController() {
    PrimaryActorTick.bCanEverTick = true;

	// Set AI perception
	
	PerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AI Perception"));
	
	SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Sight Config"));
	SightConfig->SightRadius = 3000.0f;
	SightConfig->LoseSightRadius = 3500.0f;
	SightConfig->DetectionByAffiliation.bDetectNeutrals = true;
	SightConfig->PeripheralVisionAngleDegrees = 45.0f;
	SightConfig->AutoSuccessRangeFromLastSeenLocation = 1600.0f;

    HearingConfig = CreateDefaultSubobject<UAISenseConfig_Hearing>(TEXT("Hearing Config"));
	HearingConfig->HearingRange = 3000.0f;
	HearingConfig->DetectionByAffiliation.bDetectNeutrals = true;
	HearingConfig->DetectionByAffiliation.bDetectFriendlies = true;

    PerceptionComponent->ConfigureSense(*SightConfig);
    PerceptionComponent->ConfigureSense(*HearingConfig);
    PerceptionComponent->SetDominantSense(SightConfig->GetSenseImplementation());
}

void AEnemyAIController::BeginPlay() {
	Super::BeginPlay();
	RunBehaviorTree(BehaviourTree);
	PerceptionComponent->OnPerceptionUpdated.AddDynamic(this, &AEnemyAIController::OnPerceptionUpdate_SenseManagement);
}

void AEnemyAIController::OnPerceptionUpdate_SenseManagement(const TArray<AActor*>& UpdateActors) {
	for (auto& Actor : UpdateActors) {
		AStealthGameCharacter* PlayerCharacter = Cast<AStealthGameCharacter>(Actor);
		
		if (PlayerCharacter) { // If spotted the player character
			const FActorPerceptionInfo* ActorInfo = PerceptionComponent->GetActorInfo(*Actor);
			
			FAISenseID SightID = SightConfig->GetSenseID();

			if (ActorInfo->LastSensedStimuli.IsValidIndex(SightID)) { // Was the sight stimuled?
				if (ActorInfo->LastSensedStimuli[SightID].WasSuccessfullySensed()) {
					GetBlackboardComponent()->SetValueAsBool("SawPlayer", true);
					return;
				}
			}

			FAISenseID HearingID = HearingConfig->GetSenseID();

			if (ActorInfo->LastSensedStimuli.IsValidIndex(HearingID)) { // Was the hearing stimuled?
				if (ActorInfo->LastSensedStimuli[HearingID].WasSuccessfullySensed()) {
					GetBlackboardComponent()->SetValueAsBool("SawPlayer", true);
					return;
				}
			}
		}
	}
	GetBlackboardComponent()->SetValueAsBool("SawPlayer", false);
}