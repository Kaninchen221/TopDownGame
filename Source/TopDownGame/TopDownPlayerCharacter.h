// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TopDownCharacter.h"
#include "Templates/SharedPointer.h"
#include "Containers/Array.h"
#include "UObject/SoftObjectPtr.h"

#include "TopDownPlayerState.h"

#include "TopDownPlayerCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UPlayerStateIdle;
class UPaperFlipbook;

UENUM(BlueprintType)
enum class ETopDownPlayerDirection : uint8 {
	UP = 0		UMETA(DisplayName = "UP"),
	DOWN = 1	UMETA(DisplayName = "DOWN"),
	LEFT = 2	UMETA(DisplayName = "LEFT"),
	RIGHT = 3	UMETA(DisplayName = "RIGHT"),
};

/**
 * 
 */
UCLASS(config = PlayerCharacter, BlueprintType, Blueprintable)
class TOPDOWNGAME_API ATopDownPlayerCharacter : public ATopDownCharacter
{
	GENERATED_BODY()

	virtual void Tick(float DeltaSeconds) override;

public:

	ATopDownPlayerCharacter();

	UPROPERTY(Category = Camera, EditAnywhere, BlueprintReadWrite)
	USpringArmComponent* CameraArmComponent;

	UPROPERTY(Category = Camera, EditAnywhere, BlueprintReadWrite)
	UCameraComponent* CameraComponent;

	UPROPERTY(Category = PlayerState, EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UTopDownPlayerState> TopDownPlayerState;

	UPROPERTY(Category = PlayerState, EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UTopDownPlayerState> TopDownPlayerStateIdle;

	UPROPERTY(Category = PlayerState, EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UTopDownPlayerState> TopDownPlayerStateWalk;

	virtual void PostInitializeComponents() override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void ChangeCurrentAnimation(UPaperFlipbook* DesiredAnimation);

private:

	void InitializeCameraArmComponent();
	void InitializeCameraComponent();

	void InitializeTopDownPlayerStates();

	void InitializeTopDownPlayerState();
	void InitializeTopDownPlayerStateIdle();
	void InitializeTopDownPlayerStateWalk();

	ETopDownPlayerDirection CurrentDirection = ETopDownPlayerDirection::DOWN;

protected:

	virtual void BeginPlay() override;

	void MoveVertical(float Value);
	void MoveHorizontal(float Value);

	UPROPERTY(Category = Character, EditAnywhere, BlueprintReadWrite)
	TArray<TSoftObjectPtr<ATopDownCharacter>> InteractableCharacters;

public:

	FORCEINLINE ETopDownPlayerDirection GetCurrentDirection() const noexcept { return CurrentDirection; }
	FORCEINLINE void SetCurrentDirection(ETopDownPlayerDirection Direction) noexcept { CurrentDirection = Direction; }

};
