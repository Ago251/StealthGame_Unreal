// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHealtDelegate);
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class STEALTHGAME_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHealthComponent();
protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health system")
	float HealthDefaultValue;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health system")
	float HealthMaxValue;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health system")
	float Health;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health system")
	bool isDead;
public:	
	UPROPERTY(BlueprintAssignable)
	FHealtDelegate OnHealtToZero;
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void GetDamage(float Amount);
};
