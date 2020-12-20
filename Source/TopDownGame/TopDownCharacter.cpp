// Fill out your copyright notice in the Description page of Project Settings.

#include "TopDownCharacter.h"

#include "PaperFlipbookComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"	
#include "GameFramework/FloatingPawnMovement.h"

#include "Engine/CollisionProfile.h"

void ATopDownCharacter::Tick(float DeltaSeconds) {
	Super::Tick(DeltaSeconds);

}

ATopDownCharacter::ATopDownCharacter()
{
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = true;
	bUseControllerRotationRoll = false;

	InitializeCapsuleComponent();
	InitializeMainAnimationComponent();
	InitializeCameraArmComponent();
	InitializeCameraComponent();

	InitializeFloatingPawnMovement();

}

void ATopDownCharacter::InitializeCapsuleComponent()
{
	static FName CapsuleComponentName(TEXT("Capsule"));
	CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(CapsuleComponentName);
	if (CapsuleComponent) {
		CapsuleComponent->InitCapsuleSize(60.0f, 60.0f);
		CapsuleComponent->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
		CapsuleComponent->CanCharacterStepUpOn = ECB_No;
		CapsuleComponent->SetShouldUpdatePhysicsVolume(true);
		CapsuleComponent->SetCanEverAffectNavigation(false);
		CapsuleComponent->bDynamicObstacle = true;
		RootComponent = CapsuleComponent;
	}
	else {
		throw std::exception("CapsuleComponent is null");
	}
}

void ATopDownCharacter::InitializeMainAnimationComponent() 
{
	static FName MainAnimationComponentName(TEXT("CharacterMesh"));
	MainAnimationComponent = CreateOptionalDefaultSubobject<UPaperFlipbookComponent>(MainAnimationComponentName);
	if (MainAnimationComponent)
	{
		MainAnimationComponent->AlwaysLoadOnClient = true;
		MainAnimationComponent->AlwaysLoadOnServer = true;
		MainAnimationComponent->bOwnerNoSee = false;
		MainAnimationComponent->bAffectDynamicIndirectLighting = true;
		MainAnimationComponent->PrimaryComponentTick.TickGroup = TG_PrePhysics;
		MainAnimationComponent->SetupAttachment(CapsuleComponent);
		static FName CollisionProfileName(TEXT("CharacterMesh"));
		MainAnimationComponent->SetCollisionProfileName(CollisionProfileName);
		MainAnimationComponent->SetGenerateOverlapEvents(false);
		MainAnimationComponent->SetUsingAbsoluteLocation(false);
	}
	else {
		throw std::exception("MainAnimationComponent is null");
	}

}

void ATopDownCharacter::InitializeCameraArmComponent() 
{
	CameraArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
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

void ATopDownCharacter::InitializeCameraComponent()
{
	SideViewCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("SideViewCamera"));
	if (SideViewCameraComponent) {
		SideViewCameraComponent->ProjectionMode = ECameraProjectionMode::Orthographic;
		SideViewCameraComponent->OrthoWidth = 2048.0f;
		SideViewCameraComponent->SetupAttachment(CameraArmComponent, USpringArmComponent::SocketName);
		SideViewCameraComponent->bUsePawnControlRotation = false;
		SideViewCameraComponent->bAutoActivate = true;
	}
	else {
		throw std::exception("SideViewCameraComponent is null");
	}
}

void ATopDownCharacter::InitializeFloatingPawnMovement()
{
	FloatingPawnMovement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("PawnMovement"));
	if (FloatingPawnMovement)
	{
		FloatingPawnMovement->UpdatedComponent = CapsuleComponent;
		FloatingPawnMovement->MaxSpeed = 200.f;
	}
	else {
		throw std::exception("FloatingPawnMovement is null");
	}
}

void ATopDownCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void ATopDownCharacter::MoveVertical(float Value)
{
	FloatingPawnMovement->AddInputVector(FVector(0.0f, 0.0f, Value), false);
}

void ATopDownCharacter::MoveHorizontal(float Value)
{
	FloatingPawnMovement->AddInputVector(FVector(Value, 0.0f, 0.0f), false);
}

void ATopDownCharacter::PostInitializeComponents() 
{
	Super::PostInitializeComponents();

	if (!IsPendingKill())
	{
		PostInitializeMainAnimationComponent();
	}
}

void ATopDownCharacter::PostInitializeMainAnimationComponent()
{
	if (MainAnimationComponent)
	{
	}
}

void ATopDownCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	//Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveVertical", this, &ATopDownCharacter::MoveVertical);
	PlayerInputComponent->BindAxis("MoveHorizontal", this, &ATopDownCharacter::MoveHorizontal);
}

void ATopDownCharacter::TurnOffTick() {
	PrimaryActorTick.bCanEverTick = false;
}