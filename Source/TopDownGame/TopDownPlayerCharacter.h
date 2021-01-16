// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TopDownCharacter.h"
#include "UObject/SoftObjectPtr.h"
#include "Containers/Array.h"
#include "Templates/SharedPointer.h"

#include "TopDownPlayerCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UPlayerStateIdle;
class UPaperFlipbook;
class ATopDownNonPlayerCharacter;
class UUserWidget;
class UStackBasedStateMachine;

/**
 * 
 */
UCLASS(config = PlayerCharacter, BlueprintType, Blueprintable)
class TOPDOWNGAME_API ATopDownPlayerCharacter : public ATopDownCharacter
{
	GENERATED_BODY()

public:

	ATopDownPlayerCharacter();

private:

	void InitializeCameraArmComponent();
	void InitializeCameraComponent();
	void InitializePlayerStateMachine();

protected:

	UPROPERTY(Category = Camera, EditAnywhere, BlueprintReadWrite)
	USpringArmComponent* CameraArmComponent;

	UPROPERTY(Category = Camera, EditAnywhere, BlueprintReadWrite)
	UCameraComponent* CameraComponent;

	UPROPERTY(Category = UI, EditAnywhere, BlueprintReadWrite)
	UUserWidget* UserInterface;

	UPROPERTY(Category = Interaction, EditAnywhere, BlueprintReadWrite)
	TArray<TSoftObjectPtr<ATopDownNonPlayerCharacter>> InteractableCharacters;

	UPROPERTY(Category = Interaction, EditAnywhere, BlueprintReadWrite)
	UStackBasedStateMachine* PlayerStateMachine;

protected:

	virtual void PostInitializeComponents() override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaSeconds) override;

public:

	UFUNCTION(BlueprintCallable)
	USpringArmComponent* GetCameraArmComponent() { return CameraArmComponent; }

	UFUNCTION(BlueprintCallable)
	UCameraComponent* GetCameraComponent() { return CameraComponent; }

	UFUNCTION(BlueprintCallable)
	UUserWidget* GetUserInterface() { return UserInterface; }

	UFUNCTION(BlueprintCallable)
	void ChangeCurrentAnimation(UPaperFlipbook* DesiredAnimation);

	UFUNCTION(BlueprintCallable)
	void MoveVertical(float Value);

	UFUNCTION(BlueprintCallable)
	void MoveHorizontal(float Value);

	UFUNCTION(BlueprintCallable)
	float GetMoveVerticalValue() const { return MoveVerticalValue; }

	UFUNCTION(BlueprintCallable)
	float GetMoveHorizontalValue() const { return MoveHorizontalValue; }

	UFUNCTION(BlueprintCallable)
	UStackBasedStateMachine* GetPlayerStateMachine() { return PlayerStateMachine; }

private:

	float MoveVerticalValue = 0.0f;
	float MoveHorizontalValue = 0.0f;

};
