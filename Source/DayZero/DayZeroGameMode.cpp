// Copyright Epic Games, Inc. All Rights Reserved.

#include "DayZeroGameMode.h"
#include "DayZeroCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADayZeroGameMode::ADayZeroGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
