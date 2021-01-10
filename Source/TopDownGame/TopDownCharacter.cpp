// Fill out your copyright notice in the Description page of Project Settings.

#include "TopDownCharacter.h"

#include "PaperFlipbookComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/FloatingPawnMovement.h"

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

}

void ATopDownCharacter::ControllerDoNotUseAnyRotation()
{
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;
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

void ATopDownCharacter::InitializeCurrentAnimationComponent()
{
	CurrentAnimationComponent = CreateOptionalDefaultSubobject<UPaperFlipbookComponent>(TEXT("CharacterCurrentAnimation"));
	if (CurrentAnimationComponent)
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
	else {
		throw std::exception("MainAnimationComponent is null");
	}

}

void ATopDownCharacter::InitializeInteractionComponent()
{
	static FName InteractionSphereComponentName(TEXT("Interaction"));
	InteractionSphereComponent = CreateDefaultSubobject<USphereComponent>(InteractionSphereComponentName);
	if (InteractionSphereComponent) {
		InteractionSphereComponent->InitSphereRadius(48.f);
		InteractionSphereComponent->SetCollisionProfileName("Interaction", true);
		InteractionSphereComponent->CanCharacterStepUpOn = ECB_Yes;
		InteractionSphereComponent->SetShouldUpdatePhysicsVolume(false);
		InteractionSphereComponent->SetCanEverAffectNavigation(false);
		InteractionSphereComponent->bDynamicObstacle = true;
		InteractionSphereComponent->SetupAttachment(RootComponent);
	}
	else {
		throw std::exception("InteractionComponent is null");
	}
}

void ATopDownCharacter::InitializeFloatingPawnMovementComponent()
{
	FloatingPawnMovementComponent = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("PawnMovement"));
	if (FloatingPawnMovementComponent)
	{
		FloatingPawnMovementComponent->UpdatedComponent = CapsuleComponent;
		FloatingPawnMovementComponent->MaxSpeed = 200.f;
		FloatingPawnMovementComponent->bConstrainToPlane = true;
		FloatingPawnMovementComponent->SetPlaneConstraintNormal(FVector(0.0f, -1.0f, 0.0f));
	}
	else {
		throw std::exception("FloatingPawnMovement is null");
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