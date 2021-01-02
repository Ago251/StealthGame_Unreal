// Fill out your copyright notice in the Description page of Project Settings.


#include "Path.h"
#include "DrawDebugHelpers.h"

// Sets default values
APath::APath()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APath::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APath::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APath::OnConstruction(const FTransform & Transform) {
	FlushPersistentDebugLines(GetWorld());
	FTransform transform = GetTransform();

	for(int i = 0; i < Points.Num(); i++){
		FVector A = transform.TransformPosition(Points[i].position);
		FVector B = transform.TransformPosition(Points[i].position + (Points[i].ViewDirection * length));
		DrawDebugLine(GetWorld(), A, B, FColor::Red, true, -1, 0, 10);
	}

	for(int i = 0; i < Points.Num(); i++){
		if(i + 1 < Points.Num()){
			FVector A = transform.TransformPosition(Points[i].position);
			FVector B = transform.TransformPosition(Points[i + 1].position);
			DrawDebugLine(GetWorld(), A, B, FColor::Emerald, true, -1, 0, 10);
		}
	}
}
