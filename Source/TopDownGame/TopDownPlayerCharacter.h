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

	UPROPERTY(Category = Interaction, EditAnywhere, BlueprintReadWrite)
	TArray<TSoftObjectPtr<ATopDownNonPlayerCharacter>> InteractableCharacters;

private:

	void InitializeCameraArmComponent();
	void InitializeCameraComponent();

protected:

	virtual void PostInitializeComponents() override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void BeginPlay() override;

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

};
