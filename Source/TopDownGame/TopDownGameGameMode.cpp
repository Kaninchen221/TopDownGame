// Copyright Epic Games, Inc. All Rights Reserved.

#include "TopDownGameGameMode.h"
#include "TopDownGameCharacter.h"

ATopDownGameGameMode::ATopDownGameGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = ATopDownGameCharacter::StaticClass();	
}
