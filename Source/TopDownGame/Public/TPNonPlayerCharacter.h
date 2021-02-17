// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Containers/UnrealString.h"

#include "TPCharacter.h"

#include "TPNonPlayerCharacter.generated.h"

class UDialogComponent;

/**
 * 
 */
UCLASS(config = NonPlayerCharacter, BlueprintType, Blueprintable)
class TOPDOWNGAME_API ATPNonPlayerCharacter : public ATPCharacter
{
	GENERATED_BODY()
	
public:

	ATPNonPlayerCharacter();

private:

protected:

public:

};
