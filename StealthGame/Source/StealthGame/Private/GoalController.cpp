// Fill out your copyright notice in the Description page of Project Settings.

#include "StealthGame/StealthGameCharacter.h"
#include "GoalController.h"

// Sets default values
AGoalController::AGoalController()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SM = CreateDefaultSubobject<UStaticMeshComponent>(FName("SM"));
	BoxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollider"));
	SetRootComponent(SM);
	BoxCollider->SetupAttachment(SM);
	// BoxCollider->OnComponentBeginOverlap.AddDynamic(this, &AGoalController::OnOverlapBegin);
}

// Called when the game starts or when spawned
void AGoalController::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AGoalController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// void AGoalController::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
// {
// 	 AStealthGameCharacter* player = Cast<AStealthGameCharacter>(OtherActor);
// 	 if(player) 
// 	 {
    
//  	 }
// }

