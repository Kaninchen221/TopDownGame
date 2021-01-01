// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Misc/FilterCollection.h"

#include "TopDownPlayerState.generated.h"

class ATopDownPlayerCharacter;

/**
 * 
 */
UCLASS(config = PlayerCharacter, BlueprintType, Blueprintable)
class TOPDOWNGAME_API UTopDownPlayerState : public UObject
{
	GENERATED_BODY()

	friend ATopDownPlayerCharacter;

public:

	UFUNCTION(BlueprintCallable)
	void ChangeTopDownPlayerState(TSubclassOf<UTopDownPlayerState> PlayerState);

	virtual void Enter(ATopDownPlayerCharacter* TopDownPlayerCharacter);

	virtual void Tick(float DeltaSeconds);

	virtual void MoveVertical(float Value);
	virtual void MoveHorizontal(float Value);

	virtual void Exit();

protected:

	ATopDownPlayerCharacter* PlayerCharacter; 

};
