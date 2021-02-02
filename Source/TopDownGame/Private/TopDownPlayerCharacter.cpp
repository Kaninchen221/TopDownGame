// Fill out your copyright notice in the Description page of Project Settings.


#include "TopDownPlayerCharacter.h"

#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Components/SphereComponent.h"
#include "Camera/CameraComponent.h"
#include "PaperFlipbookComponent.h"
#include "PaperFlipbook.h"

#include "TopDownNonPlayerCharacter.h"
#include "StackBasedStateMachine.h"

ATopDownPlayerCharacter::ATopDownPlayerCharacter()
{
	InitializeCameraArmComponent();
	InitializeCameraComponent();
	InitializePlayerStateMachine();
}

void ATopDownPlayerCharacter::InitializeCameraArmComponent()
{
	CameraArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraArm"));
	if (CameraArmComponent) {
		SetupCameraArmComponent();
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("CameraArmComponent is null, character name: %s"), *Name.ToString());
	}
}

void ATopDownPlayerCharacter::SetupCameraArmComponent()
{
	CameraArmComponent->SetupAttachment(RootComponent);
	CameraArmComponent->TargetArmLength = 260.0f;
	CameraArmComponent->SocketOffset = FVector(0.0f, 0.0f, 75.0f);
	CameraArmComponent->bDoCollisionTest = false;
	CameraArmComponent->SetUsingAbsoluteLocation(false);
}

void ATopDownPlayerCharacter::InitializeCameraComponent()
{
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	if (CameraComponent) {
		SetupCameraComponent();
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("CameraArmComponent is null, character name: %s"), *Name.ToString());
	}
}

void ATopDownPlayerCharacter::SetupCameraComponent()
{
	CameraComponent->ProjectionMode = ECameraProjectionMode::Orthographic;
	CameraComponent->OrthoWidth = 2048.0f;
	CameraComponent->SetupAttachment(CameraArmComponent, USpringArmComponent::SocketName);
	CameraComponent->bUsePawnControlRotation = false;
	CameraComponent->bAutoActivate = true;
}

void ATopDownPlayerCharacter::InitializePlayerStateMachine()
{
	PlayerStateMachine = CreateDefaultSubobject<UStackBasedStateMachine>(TEXT("PlayerStateMachine"));
	if (PlayerStateMachine) {
		SetupPlayerStateMachine();
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("PlayerStateMachine is null, character name: %s"), *Name.ToString());
	}
}

void ATopDownPlayerCharacter::SetupPlayerStateMachine()
{
	PlayerStateMachine->SetControledObject(this);
}

void ATopDownPlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	UE_LOG(LogTemp, Log, TEXT("SetupPlayerInputComponent"));

	InputComponent = PlayerInputComponent;

	PlayerInputComponent->BindAxis("MoveVertical", this, &ATopDownPlayerCharacter::MoveVertical);
	PlayerInputComponent->BindAxis("MoveHorizontal", this, &ATopDownPlayerCharacter::MoveHorizontal);
}

void ATopDownPlayerCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();
}

void ATopDownPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void ATopDownPlayerCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	PlayerStateMachine->Tick(DeltaSeconds);
}

void ATopDownPlayerCharacter::ChangeCurrentAnimation(UPaperFlipbook* DesiredFlipbook)
{
	UPaperFlipbook* CurrentFlipbook = CurrentAnimationComponent->GetFlipbook();

	bool bDesiredFlipbookCanNotBeEqualToCurrentFlipbook = CurrentFlipbook != DesiredFlipbook;
	bool bDesiredFlipbookCanNotBeNull = DesiredFlipbook != nullptr;

	if (bDesiredFlipbookCanNotBeEqualToCurrentFlipbook && bDesiredFlipbookCanNotBeNull) {
		CurrentAnimationComponent->SetFlipbook(DesiredFlipbook);
	}
}

void ATopDownPlayerCharacter::MoveVertical(float Value)
{
	MoveVerticalValue = Value;

	PlayerStateMachine->Update();
}

void ATopDownPlayerCharacter::MoveHorizontal(float Value)
{
	MoveHorizontalValue = Value;

	PlayerStateMachine->Update();
}