// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TopDownPlayerState.h"
#include "TopDownPlayerStateInInteraction.generated.h"

/**
 * 
 */
UCLASS()
class TOPDOWNGAME_API UTopDownPlayerStateInInteraction : public UTopDownPlayerState
{
	GENERATED_BODY()
	
public:

	virtual void Enter(ATopDownPlayerCharacter* TopDownPlayerCharacter);

	virtual void Tick(float DeltaSeconds);

	virtual void MoveVertical(float Value);
	virtual void MoveHorizontal(float Value);

	virtual void Exit();

	UFUNCTION(BlueprintCallable)
	void ChangePlayerStateToIdle();

};
