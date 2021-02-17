// Fill out your copyright notice in the Description page of Project Settings.

#include "TPCharacter.h"

#include "PaperFlipbookComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "../Public/InteractionComponent.h"
#include "../Public/TPStatusValueController.h"

#include "Engine/CollisionProfile.h"

void ATPCharacter::Tick(float DeltaSeconds) {
	Super::Tick(DeltaSeconds);

}

ATPCharacter::ATPCharacter()
{
	ControllerDoNotUseAnyRotation();

	InitializeCapsuleComponent();
	InitializeCurrentAnimationComponent();
	InitializeInteractionComponent();
	InitializeFloatingPawnMovementComponent();
	InitializeHealthStatus();
	InitializeEnergyStatus();
}

void ATPCharacter::InitializeCapsuleComponent()
{
	static FName CapsuleComponentName(TEXT("Capsule"));
	CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(CapsuleComponentName);
	if (CapsuleComponent) {
		SetupCapsuleComponentProperties();
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("CapsuleComponent is null, character name: %s"), *Name.ToString());
	}
}

void ATPCharacter::SetupCapsuleComponentProperties()
{
	CapsuleComponent->InitCapsuleSize(60.0f, 60.0f);
	CapsuleComponent->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	CapsuleComponent->CanCharacterStepUpOn = ECB_No;
	CapsuleComponent->SetShouldUpdatePhysicsVolume(true);
	CapsuleComponent->SetCanEverAffectNavigation(false);
	CapsuleComponent->bDynamicObstacle = true;

	RootComponent = CapsuleComponent;
}

void ATPCharacter::InitializeCurrentAnimationComponent()
{
	CurrentAnimationComponent = CreateOptionalDefaultSubobject<UPaperFlipbookComponent>(TEXT("CharacterCurrentAnimation"));
	if (CurrentAnimationComponent)
	{
		SetupCurrentAnimationComponent();
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("CurrentAnimationComponent is null, character name: %s"), *Name.ToString());
	}

}

void ATPCharacter::SetupCurrentAnimationComponent()
{
	CurrentAnimationComponent->AlwaysLoadOnClient = true;
	CurrentAnimationComponent->AlwaysLoadOnServer = true;
	CurrentAnimationComponent->bOwnerNoSee = false;
	CurrentAnimationComponent->bAffectDynamicIndirectLighting = true;
	CurrentAnimationComponent->PrimaryComponentTick.TickGroup = TG_PrePhysics;
	CurrentAnimationComponent->SetupAttachment(CapsuleComponent);
	CurrentAnimationComponent->AddRelativeRotation(FRotator(0.0f, 0.0f, -90.0f));

	static FName CollisionProfileName(TEXT("CharacterCollisionProfile"));
	CurrentAnimationComponent->SetCollisionProfileName(CollisionProfileName);
	CurrentAnimationComponent->SetGenerateOverlapEvents(false);
	CurrentAnimationComponent->SetUsingAbsoluteLocation(false);
}

void ATPCharacter::InitializeInteractionComponent()
{
	static FName InteractionComponentName(TEXT("InteractionComponent"));
	InteractionComponent = CreateDefaultSubobject<UInteractionComponent>(InteractionComponentName);
	if (InteractionComponent) {
		SetupInteractionComponent();
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("InteractionComponent is null, character name: %s"), *Name.ToString());
	}
}

void ATPCharacter::SetupInteractionComponent()
{
	InteractionComponent->SetupAttachment(RootComponent);
}

void ATPCharacter::InitializeFloatingPawnMovementComponent()
{
	FloatingPawnMovementComponent = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("PawnMovement"));
	if (FloatingPawnMovementComponent)
	{
		SetupFloatingPawnMovementComponent();
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("FloatingPawnMovementComponent is null, character name: %s"), *Name.ToString());
	}
}

void ATPCharacter::SetupFloatingPawnMovementComponent()
{
	FloatingPawnMovementComponent->UpdatedComponent = CapsuleComponent;
	FloatingPawnMovementComponent->MaxSpeed = 200.f;
	FloatingPawnMovementComponent->bConstrainToPlane = true;
	FloatingPawnMovementComponent->SetPlaneConstraintNormal(FVector(0.0f, -1.0f, 0.0f));
}

void ATPCharacter::ControllerDoNotUseAnyRotation()
{
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;
}

void ATPCharacter::InitializeHealthStatus()
{
	HealthStatus = CreateDefaultSubobject<UTPStatusValueController>(TEXT("HealthStatus"));
	if (HealthStatus)
	{

	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("HealthStatus is null, character name: %s"), *Name.ToString());
	}
}

void ATPCharacter::InitializeEnergyStatus()
{
	EnergyStatus = CreateDefaultSubobject<UTPStatusValueController>(TEXT("EnergyStatus"));
	if (EnergyStatus)
	{

	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("EnergyStatus is null, character name: %s"), *Name.ToString());
	}
}

void ATPCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void ATPCharacter::PostInitializeComponents() 
{
	Super::PostInitializeComponents();

}

void ATPCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}