// Fill out your copyright notice in the Description page of Project Settings.

#include "TopDownCharacter.h"

#include "PaperFlipbookComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "../Public/InteractionComponent.h"
#include "../Public/TPStatusValueController.h"

#include "Engine/CollisionProfile.h"

void ATopDownCharacter::Tick(float DeltaSeconds) {
	Super::Tick(DeltaSeconds);

}

ATopDownCharacter::ATopDownCharacter()
{
	ControllerDoNotUseAnyRotation();

	InitializeCapsuleComponent();
	InitializeCurrentAnimationComponent();
	InitializeInteractionComponent();
	InitializeFloatingPawnMovementComponent();
	InitializeHealthStatus();
	InitializeEnergyStatus();
}

void ATopDownCharacter::InitializeCapsuleComponent()
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

void ATopDownCharacter::SetupCapsuleComponentProperties()
{
	CapsuleComponent->InitCapsuleSize(60.0f, 60.0f);
	CapsuleComponent->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	CapsuleComponent->CanCharacterStepUpOn = ECB_No;
	CapsuleComponent->SetShouldUpdatePhysicsVolume(true);
	CapsuleComponent->SetCanEverAffectNavigation(false);
	CapsuleComponent->bDynamicObstacle = true;

	RootComponent = CapsuleComponent;
}

void ATopDownCharacter::InitializeCurrentAnimationComponent()
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

void ATopDownCharacter::SetupCurrentAnimationComponent()
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

void ATopDownCharacter::InitializeInteractionComponent()
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

void ATopDownCharacter::SetupInteractionComponent()
{
	InteractionComponent->SetupAttachment(RootComponent);
}

void ATopDownCharacter::InitializeFloatingPawnMovementComponent()
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

void ATopDownCharacter::SetupFloatingPawnMovementComponent()
{
	FloatingPawnMovementComponent->UpdatedComponent = CapsuleComponent;
	FloatingPawnMovementComponent->MaxSpeed = 200.f;
	FloatingPawnMovementComponent->bConstrainToPlane = true;
	FloatingPawnMovementComponent->SetPlaneConstraintNormal(FVector(0.0f, -1.0f, 0.0f));
}

void ATopDownCharacter::ControllerDoNotUseAnyRotation()
{
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;
}

void ATopDownCharacter::InitializeHealthStatus()
{
	HealthStatus = CreateDefaultSubobject<UTPStatusValueController>(TEXT("HealthStatus"));
	if (HealthStatus)
	{

	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("HealthStatus is null, character name: %s"), *Name.ToString());
	}
}

void ATopDownCharacter::InitializeEnergyStatus()
{
	EnergyStatus = CreateDefaultSubobject<UTPStatusValueController>(TEXT("EnergyStatus"));
	if (EnergyStatus)
	{

	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("EnergyStatus is null, character name: %s"), *Name.ToString());
	}
}

void ATopDownCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void ATopDownCharacter::PostInitializeComponents() 
{
	Super::PostInitializeComponents();

}

void ATopDownCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}