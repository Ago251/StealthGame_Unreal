// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Path.h"
#include "HealthComponent.h"
#include "ProceduralMeshComponent.h"
#include "Enemy.generated.h"

UCLASS(Blueprintable, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class STEALTHGAME_API AEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemy();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Path")
	APath* PathToPatrol;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	UHealthComponent* HealthComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = AI, meta = (AllowPrivateAccess = "true"))
	class UProceduralMeshComponent* ViewCone;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = AI, meta = (AllowPrivateAccess = "true"))
	UMaterial* ViewConeMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = AI, meta = (AllowPrivateAccess = "true"))
	UMaterialInstanceDynamic*  ViewConeMaterialPersonal;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = AI, meta = (AllowPrivateAccess = "true"))
	FVector offestViewCone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AI, meta = (AllowPrivateAccess = "true"))
	float halfAngleDegreeForViewCone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AI, meta = (AllowPrivateAccess = "true"))
	float radiusForViewCone;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void CreateCone(FVector Origin, FVector Forward, int TotalTrace, float DegreePerTrace, float distance);

	UFUNCTION(BlueprintCallable, Category = "Health")
	FORCEINLINE class UHealthComponent* GetHealthComponent() const { return HealthComponent; }
};
