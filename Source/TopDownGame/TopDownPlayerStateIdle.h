// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TopDownPlayerState.h"
#include "TopDownPlayerCharacter.h"
#include "TopDownPlayerStateIdle.generated.h"

class UPaperFlipbook;

/**
 * 
 */
UCLASS()
class TOPDOWNGAME_API UTopDownPlayerStateIdle : public UTopDownPlayerState
{
	GENERATED_BODY()
	
public:

	virtual void Enter(ATopDownPlayerCharacter* TopDownPlayerCharacter) override;

	virtual void Tick(float DeltaSeconds) override;

	virtual void MoveVertical(float Value) override;
	virtual void MoveHorizontal(float Value) override;

protected:

	void UpdateCurrentAnimationBasingAtDirection(ETopDownPlayerDirection Direction);

	UPROPERTY(Category = Animations, EditAnywhere, BlueprintReadWrite)
	UPaperFlipbook* IdleFrontAnimation;

	UPROPERTY(Category = Animations, EditAnywhere, BlueprintReadWrite)
	UPaperFlipbook* IdleBackAnimation;

	UPROPERTY(Category = Animations, EditAnywhere, BlueprintReadWrite)
	UPaperFlipbook* IdleRightSideAnimation;

	UPROPERTY(Category = Animations, EditAnywhere, BlueprintReadWrite)
	UPaperFlipbook* IdleLeftSideAnimation;
};
