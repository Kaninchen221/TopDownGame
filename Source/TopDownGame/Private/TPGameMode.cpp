// Copyright Epic Games, Inc. All Rights Reserved.

#include "TPGameMode.h"
#include "TPPlayerCharacter.h"

ATPGameMode::ATPGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = ATPPlayerCharacter::StaticClass();	
}
