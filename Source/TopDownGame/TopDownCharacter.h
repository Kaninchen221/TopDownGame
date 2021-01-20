// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "CharacterDirection.h"

#include "TopDownCharacter.generated.h"

class UPaperFlipbookComponent;
class UCapsuleComponent;
class USpringArmComponent;
class UCameraComponent;
class UFloatingPawnMovement;
class USphereComponent;
class UInteractionComponent;

UCLASS(config = Character, BlueprintType, Blueprintable)
class TOPDOWNGAME_API ATopDownCharacter : public APawn
{
	GENERATED_BODY()

public:

	ATopDownCharacter();

private:

	void InitializeCapsuleComponent();
	void InitializeCurrentAnimationComponent();
	void InitializeInteractionComponent();
	void InitializeInteractionCollisionComponent();
	void InitializeFloatingPawnMovementComponent();

	void ControllerDoNotUseAnyRotation();

protected:

	UPROPERTY(Category = Collision, EditAnywhere, BlueprintReadWrite)
	UCapsuleComponent* CapsuleComponent;

	UPROPERTY(Category = Animation, EditAnywhere, BlueprintReadWrite)
	UPaperFlipbookComponent* CurrentAnimationComponent;

	UPROPERTY(Category = Interaction, EditAnywhere, BlueprintReadWrite)
	UInteractionComponent* InteractionComponent;

	UPROPERTY(Category = Movement, EditAnywhere, BlueprintReadWrite)
	UFloatingPawnMovement* FloatingPawnMovementComponent;

	UPROPERTY(Category = Character, EditAnywhere, BlueprintReadWrite)
	FText Name;

	UPROPERTY(Category = Character, EditAnywhere, BlueprintReadWrite)
	ECharacterDirection CharacterDirection = ECharacterDirection::DOWN;

protected:

	virtual void Tick(float DeltaSeconds) override;

	virtual void BeginPlay() override;

	virtual void PostInitializeComponents() override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:

	UFUNCTION(BlueprintCallable)
	FText GetName() const { return Name; }

	UFUNCTION(BlueprintCallable)
	void SetName(FText NewName) { Name = NewName; }

	UFUNCTION(BlueprintCallable)
	UCapsuleComponent* GetCapsuleComponent() { return CapsuleComponent; }

	UFUNCTION(BlueprintCallable)
	UPaperFlipbookComponent* GetCurrentAnimationComponent() { return CurrentAnimationComponent; }

	UFUNCTION(BlueprintCallable)
	UInteractionComponent* GetInteractionComponent() { return InteractionComponent; }

	UFUNCTION(BlueprintCallable)
	UFloatingPawnMovement* GetFloatingPawnMovementComponent() { return FloatingPawnMovementComponent; }

	UFUNCTION(BlueprintCallable)
	ECharacterDirection GetCharacterDirection() { return CharacterDirection; }

};
