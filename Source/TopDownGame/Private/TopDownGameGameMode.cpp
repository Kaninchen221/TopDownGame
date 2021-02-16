// Copyright Epic Games, Inc. All Rights Reserved.

#include "TopDownGameGameMode.h"
#include "TPPlayerCharacter.h"

ATopDownGameGameMode::ATopDownGameGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = ATPPlayerCharacter::StaticClass();	
}
