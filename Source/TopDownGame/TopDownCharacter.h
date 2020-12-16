// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "TopDownCharacter.generated.h"

class UPaperFlipbookComponent;
class UCapsuleComponent;

UCLASS()
class TOPDOWNGAME_API ATopDownCharacter : public APawn
{
	GENERATED_BODY()

	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UCapsuleComponent* CapsuleComponent;

	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UPaperFlipbookComponent* MainAnimationComponent;


public:

	ATopDownCharacter();

protected:

	void InitializeCapsuleComponent();

	void InitializeMainAnimationComponent();
	void PostInitializeMainAnimationComponent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
	class UPaperFlipbook* RunningAnimation;

	virtual void BeginPlay() override;

public:

	virtual void PostInitializeComponents() override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:

	void TurnOffTick();

};
