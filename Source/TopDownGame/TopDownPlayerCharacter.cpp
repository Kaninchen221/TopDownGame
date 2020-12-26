// Fill out your copyright notice in the Description page of Project Settings.


#include "TopDownPlayerCharacter.h"

#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Camera/CameraComponent.h"
#include "PaperFlipbookComponent.h"
#include "PaperFlipbook.h"

#include "TopDownPlayerStateIdle.h"
#include "TopDownPlayerStateWalk.h"

void ATopDownPlayerCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	TopDownPlayerState.GetDefaultObject()->Tick(DeltaSeconds);
}

ATopDownPlayerCharacter::ATopDownPlayerCharacter()
{
	InitializeCameraArmComponent();
	InitializeCameraComponent();

	InitializeTopDownPlayerStates();
}

void ATopDownPlayerCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();

}

void ATopDownPlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	InputComponent = PlayerInputComponent;
}

void ATopDownPlayerCharacter::ChangeCurrentAnimation(UPaperFlipbook* DesiredAnimation) 
{
	auto CurrentFlipbook = CurrentAnimationComponent->GetFlipbook();
	if (CurrentFlipbook != DesiredAnimation) {
		CurrentAnimationComponent->SetFlipbook(DesiredAnimation);
	}
}

void ATopDownPlayerCharacter::InitializeCameraArmComponent()
{
	CameraArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraArm"));
	if (CameraArmComponent) {
		CameraArmComponent->SetupAttachment(RootComponent);
		CameraArmComponent->TargetArmLength = 260.0f;
		CameraArmComponent->SocketOffset = FVector(0.0f, 0.0f, 75.0f);
		CameraArmComponent->bDoCollisionTest = false;
		CameraArmComponent->SetUsingAbsoluteLocation(false);
	}
	else {
		throw std::exception("CameraArmComponent is null");
	}
}

void ATopDownPlayerCharacter::InitializeCameraComponent()
{
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	if (CameraComponent) {
		CameraComponent->ProjectionMode = ECameraProjectionMode::Orthographic;
		CameraComponent->OrthoWidth = 2048.0f;
		CameraComponent->SetupAttachment(CameraArmComponent, USpringArmComponent::SocketName);
		CameraComponent->bUsePawnControlRotation = false;
		CameraComponent->bAutoActivate = true;
	}
	else {
		throw std::exception("CameraComponent is null");
	}
}

void ATopDownPlayerCharacter::InitializeTopDownPlayerStates()
{
	InitializeTopDownPlayerStateIdle();
	InitializeTopDownPlayerStateWalk();


	InitializeTopDownPlayerState();
}

void ATopDownPlayerCharacter::InitializeTopDownPlayerState()
{
	//TopDownPlayerState = TopDownPlayerStateIdle;
}

void ATopDownPlayerCharacter::InitializeTopDownPlayerStateIdle() {
	//TopDownPlayerStateIdle = CreateDefaultSubobject<UTopDownPlayerStateIdle>(TEXT("TopDownPlayerStateIdle"));
	//if (TopDownPlayerStateIdle) {
	//
	//}
	//else {
	//	throw std::exception("TopDownPlayerStateIdle is null");
	//}
}

void ATopDownPlayerCharacter::InitializeTopDownPlayerStateWalk()
{
	//TopDownPlayerStateWalk = CreateDefaultSubobject<UTopDownPlayerStateWalk>(TEXT("TopDownPlayerStateWalk"));
	//if (TopDownPlayerStateWalk) {
	//
	//}
	//else {
	//	throw std::exception("TopDownPlayerStateWalk is null");
	//}
}

void ATopDownPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	TopDownPlayerState.GetDefaultObject()->Enter(this);
}

void ATopDownPlayerCharacter::MoveVertical(float Value)
{
	//FloatingPawnMovement->AddInputVector(FVector(0.0f, 0.0f, Value), false);
	TopDownPlayerState.GetDefaultObject()->MoveVertical(Value);
}

void ATopDownPlayerCharacter::MoveHorizontal(float Value)
{
	//FloatingPawnMovement->AddInputVector(FVector(Value, 0.0f, 0.0f), false);
	TopDownPlayerState.GetDefaultObject()->MoveHorizontal(Value);
}
