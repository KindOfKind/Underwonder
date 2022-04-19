// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnderwonderGameMode.h"
#include "UnderwonderCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnderwonderGameMode::AUnderwonderGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Underwonder/Core/Player/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
