// Copyright Epic Games, Inc. All Rights Reserved.

#include "cplusplusForBlueprinGameMode.h"
#include "cplusplusForBlueprinCharacter.h"
#include "UObject/ConstructorHelpers.h"

AcplusplusForBlueprinGameMode::AcplusplusForBlueprinGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
