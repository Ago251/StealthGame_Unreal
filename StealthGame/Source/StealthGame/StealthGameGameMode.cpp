// Copyright Epic Games, Inc. All Rights Reserved.

#include "StealthGameGameMode.h"
#include "StealthGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AStealthGameGameMode::AStealthGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
