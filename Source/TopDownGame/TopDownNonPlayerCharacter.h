// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Containers/UnrealString.h"

#include "TopDownCharacter.h"

#include "TopDownNonPlayerCharacter.generated.h"

class UDialogComponent;

/**
 * 
 */
UCLASS(config = NonPlayerCharacter, BlueprintType, Blueprintable)
class TOPDOWNGAME_API ATopDownNonPlayerCharacter : public ATopDownCharacter
{
	GENERATED_BODY()
	
public:

	ATopDownNonPlayerCharacter();

private:

protected:

public:

};
