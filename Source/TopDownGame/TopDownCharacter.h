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

UCLASS(config = Character, BlueprintType, Blueprintable)
class TOPDOWNGAME_API ATopDownCharacter : public APawn
{
	GENERATED_BODY()

public:

	ATopDownCharacter();

protected:

	UPROPERTY(Category = Capsule, EditAnywhere, BlueprintReadWrite)
	UCapsuleComponent* CapsuleComponent;

	UPROPERTY(Category = Animation, EditAnywhere, BlueprintReadWrite)
	UPaperFlipbookComponent* CurrentAnimationComponent;

	UPROPERTY(Category = Interaction, EditAnywhere, BlueprintReadWrite)
	USphereComponent* InteractionSphereComponent;

	UPROPERTY(Category = Movement, EditAnywhere, BlueprintReadWrite)
	UFloatingPawnMovement* FloatingPawnMovementComponent;

private:

	void ControllerDoNotUseAnyRotation();

protected:

	virtual void Tick(float DeltaSeconds) override;

	void InitializeCapsuleComponent();
	void InitializeCurrentAnimationComponent();
	void InitializeInteractionComponent();
	void InitializeFloatingPawnMovementComponent();

	virtual void BeginPlay() override;

	virtual void PostInitializeComponents() override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(Category = Character, EditAnywhere, BlueprintReadWrite)
	FText Name;

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
	USphereComponent* GetInteractionSphereComponent() { return InteractionSphereComponent; }

	UFUNCTION(BlueprintCallable)
	UFloatingPawnMovement* GetFloatingPawnMovementComponent() { return FloatingPawnMovementComponent; }

};
