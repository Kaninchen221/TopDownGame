// Fill out your copyright notice in the Description page of Project Settings.


#include "TopDownPlayerCharacter.h"

#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Components/SphereComponent.h"
#include "Camera/CameraComponent.h"
#include "PaperFlipbookComponent.h"
#include "PaperFlipbook.h"

#include "TopDownPlayerStateIdle.h"
#include "TopDownPlayerStateWalk.h"
#include "TopDownNonPlayerCharacter.h"

void ATopDownPlayerCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	TopDownPlayerState->Tick(DeltaSeconds);
}

ATopDownPlayerCharacter::ATopDownPlayerCharacter()
{
	InitializeCameraArmComponent();
	InitializeCameraComponent();
}

void ATopDownPlayerCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();

}

void ATopDownPlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	InputComponent = PlayerInputComponent;

	PlayerInputComponent->BindAxis("MoveVertical", this, &ATopDownPlayerCharacter::MoveVertical);
	PlayerInputComponent->BindAxis("MoveHorizontal", this, &ATopDownPlayerCharacter::MoveHorizontal);
}

void ATopDownPlayerCharacter::ChangeCurrentAnimation(UPaperFlipbook* DesiredAnimation) 
{
	auto CurrentFlipbook = CurrentAnimationComponent->GetFlipbook();
	if (CurrentFlipbook != DesiredAnimation) {
		CurrentAnimationComponent->SetFlipbook(DesiredAnimation);
	}
}

void ATopDownPlayerCharacter::ChangePlayerState(TSubclassOf<UTopDownPlayerState> NewPlayerState)
{
	if (TopDownPlayerState != NewPlayerState.GetDefaultObject()) {
		if (TopDownPlayerState) {
			TopDownPlayerState->Exit();
		}

		TopDownPlayerState = NewPlayerState.GetDefaultObject();

		if (TopDownPlayerState) {
			TopDownPlayerState->Enter(this);
		}
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
	InitializeTopDownPlayerState();
}

void ATopDownPlayerCharacter::InitializeTopDownPlayerState()
{
	TopDownPlayerState = TopDownPlayerStateIdle.GetDefaultObject();
}

void ATopDownPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	InitializeTopDownPlayerStates();
	TopDownPlayerState->Enter(this);
}

void ATopDownPlayerCharacter::MoveVertical(float Value)
{
	TopDownPlayerState->MoveVertical(Value);
}

void ATopDownPlayerCharacter::MoveHorizontal(float Value)
{
	TopDownPlayerState->MoveHorizontal(Value);
}