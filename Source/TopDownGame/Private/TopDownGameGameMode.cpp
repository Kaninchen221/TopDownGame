// Copyright Epic Games, Inc. All Rights Reserved.

#include "TopDownGameGameMode.h"
#include "TopDownPlayerCharacter.h"

ATopDownGameGameMode::ATopDownGameGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = ATopDownPlayerCharacter::StaticClass();	
}
