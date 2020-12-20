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

UCLASS()
class TOPDOWNGAME_API ATopDownCharacter : public APawn
{
	GENERATED_BODY()

	UPROPERTY(Category = Capsule, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UCapsuleComponent* CapsuleComponent;

	UPROPERTY(Category = Animation, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UPaperFlipbookComponent* MainAnimationComponent;

	UPROPERTY(Category = Camera, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraArmComponent;

	UPROPERTY(Category = Camera, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* SideViewCameraComponent;

	UPROPERTY(Category = Movement, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UFloatingPawnMovement* FloatingPawnMovement;

	virtual void Tick(float DeltaSeconds) override;

public:

	ATopDownCharacter();

protected:

	void InitializeCapsuleComponent();

	void InitializeMainAnimationComponent();
	void PostInitializeMainAnimationComponent();

	void InitializeCameraArmComponent();

	void InitializeCameraComponent();

	void InitializeFloatingPawnMovement();


	virtual void BeginPlay() override;

	void MoveVertical(float Value);
	void MoveHorizontal(float Value);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
	class UPaperFlipbook* RunningAnimation;

public:

	virtual void PostInitializeComponents() override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	FORCEINLINE class UCameraComponent* GetSideViewCameraComponent() const { return SideViewCameraComponent; }

	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraArmComponent; }

private:

	void TurnOffTick();

};
