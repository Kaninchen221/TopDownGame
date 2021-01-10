// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TopDownCharacter.h"
#include "UObject/SoftObjectPtr.h"
#include "Containers/Array.h"
#include "Templates/SharedPointer.h"

#include "TopDownPlayerState.h"

#include "TopDownPlayerCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UPlayerStateIdle;
class UPaperFlipbook;
class ATopDownNonPlayerCharacter;
class UUserWidget;

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

	friend class UTopDownPlayerState;
	friend class UTopDownPlayerStateWalk;
	friend class UTopDownPlayerStateIdle;
	friend class UTopDownPlayerStateInInteraction;

	virtual void Tick(float DeltaSeconds) override;

public:

	ATopDownPlayerCharacter();

protected:

	UPROPERTY(Category = Camera, EditAnywhere, BlueprintReadWrite)
	USpringArmComponent* CameraArmComponent;

	UPROPERTY(Category = Camera, EditAnywhere, BlueprintReadWrite)
	UCameraComponent* CameraComponent;

	UPROPERTY(Category = UI, EditAnywhere, BlueprintReadWrite)
	UUserWidget* UserInterface;

	UPROPERTY(Category = PlayerState, EditAnywhere, BlueprintReadWrite)
	UTopDownPlayerState* TopDownPlayerState;

	UPROPERTY(Category = PlayerState, EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UTopDownPlayerState> TopDownPlayerStateIdle;

	UPROPERTY(Category = PlayerState, EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UTopDownPlayerState> TopDownPlayerStateWalk;

	UPROPERTY(Category = PlayerState, EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UTopDownPlayerState> TopDownPlayerStateInInteraction;

	UPROPERTY(Category = Interaction, EditAnywhere, BlueprintReadWrite)
	TArray<TSoftObjectPtr<ATopDownNonPlayerCharacter>> InteractableCharacters;

private:

	void InitializeCameraArmComponent();
	void InitializeCameraComponent();

	void InitializeTopDownPlayerStates();

	void InitializeTopDownPlayerState();

protected:

	virtual void PostInitializeComponents() override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void BeginPlay() override;

public:

	UFUNCTION(BlueprintCallable)
	void ChangePlayerState(TSubclassOf<UTopDownPlayerState> NewPlayerState);

	UFUNCTION(BlueprintCallable)
	USpringArmComponent* GetCameraArmComponent() { return CameraArmComponent; }

	UFUNCTION(BlueprintCallable)
	UCameraComponent* GetCameraComponent() { return CameraComponent; }

	UFUNCTION(BlueprintCallable)
	UUserWidget* GetUserInterface() { return UserInterface; }

	UFUNCTION(BlueprintCallable)
	UTopDownPlayerState* GetCurrentPlayerState() { return TopDownPlayerState; }

	UFUNCTION(BlueprintCallable)
	FORCEINLINE ETopDownPlayerDirection GetCurrentDirection() const noexcept { return CurrentDirection; }
	
	FORCEINLINE
	UFUNCTION(BlueprintCallable)
	void SetCurrentDirection(ETopDownPlayerDirection Direction) noexcept { CurrentDirection = Direction; }

	UFUNCTION(BlueprintCallable)
	void ChangeCurrentAnimation(UPaperFlipbook* DesiredAnimation);

	UFUNCTION(BlueprintCallable)
	void MoveVertical(float Value);

	UFUNCTION(BlueprintCallable)
	void MoveHorizontal(float Value);

private:

	ETopDownPlayerDirection CurrentDirection = ETopDownPlayerDirection::DOWN;

};
