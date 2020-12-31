// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TopDownPlayerState.h"
#include "TopDownPlayerStateWalk.generated.h"

class UPaperFlipbook;

/**
 * 
 */
UCLASS()
class TOPDOWNGAME_API UTopDownPlayerStateWalk : public UTopDownPlayerState
{
	GENERATED_BODY()
	
public:

	virtual void Enter(ATopDownPlayerCharacter* TopDownPlayerCharacter) override;

	virtual void Tick(float DeltaSeconds) override;

	virtual void MoveVertical(float Value) override;
	virtual void MoveHorizontal(float Value) override;

	bool ShouldChangeStateToIdle();

	bool IsWalkingVertical();
	bool IsWalkingHorizontal();

	bool IsWalkingUp();
	bool IsWalkingDown();
	bool IsWalkingRight();
	bool IsWalkingLeft();

	UFUNCTION(BlueprintCallable)
	void SetMaxWalkSpeed(float Value) noexcept;

	UFUNCTION(BlueprintCallable)
	FORCEINLINE float GetMaxWalkSpeed() const noexcept { return MaxWalkSpeed; }

protected:

	UPROPERTY(Category = Animations, EditAnywhere, BlueprintReadWrite)
	class UPaperFlipbook* RunFrontAnimation;

	UPROPERTY(Category = Animations, EditAnywhere, BlueprintReadWrite)
	class UPaperFlipbook* RunBackAnimation;

	UPROPERTY(Category = Animations, EditAnywhere, BlueprintReadWrite)
	class UPaperFlipbook* RunRightSideAnimation;

	UPROPERTY(Category = Animations, EditAnywhere, BlueprintReadWrite)
	class UPaperFlipbook* RunLeftSideAnimation;

private:

	float MoveVerticalValue = 0.f;
	float MoveHorizontalValue = 0.f;

	float MaxWalkSpeed = 200.f;

};
