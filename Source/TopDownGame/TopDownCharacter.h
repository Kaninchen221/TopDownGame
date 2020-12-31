// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"

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

	UPROPERTY(Category = Capsule, EditAnywhere, BlueprintReadWrite)
	UCapsuleComponent* CapsuleComponent;

	UPROPERTY(Category = Animation, EditAnywhere, BlueprintReadWrite)
	UPaperFlipbookComponent* CurrentAnimationComponent;

	UPROPERTY(Category = Interaction, EditAnywhere, BlueprintReadWrite)
	USphereComponent* InteractionSphereComponent;

	UPROPERTY(Category = Movement, EditAnywhere, BlueprintReadWrite)
	UFloatingPawnMovement* FloatingPawnMovement;

private:

	void ControllerUseOnlyYawRotation();

protected:

	virtual void Tick(float DeltaSeconds) override;

	void InitializeCapsuleComponent();
	void InitializeCurrentAnimationComponent();
	void InitializeInteractionComponent();

	void InitializeFloatingPawnMovement();

	virtual void BeginPlay() override;

	UPROPERTY(Category = Character, EditAnywhere, BlueprintReadWrite)
	FName Name;

public:

	virtual void PostInitializeComponents() override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
	FORCEINLINE FName GetName() const { return Name; }

private:

};
