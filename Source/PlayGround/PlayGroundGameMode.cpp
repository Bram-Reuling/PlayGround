// Copyright Epic Games, Inc. All Rights Reserved.

#include "PlayGroundGameMode.h"
#include "PlayGroundCharacter.h"
#include "UObject/ConstructorHelpers.h"

APlayGroundGameMode::APlayGroundGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
