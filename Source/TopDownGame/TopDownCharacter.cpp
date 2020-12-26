// Fill out your copyright notice in the Description page of Project Settings.

#include "TopDownCharacter.h"

#include "PaperFlipbookComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/FloatingPawnMovement.h"

#include "Engine/CollisionProfile.h"

void ATopDownCharacter::Tick(float DeltaSeconds) {
	Super::Tick(DeltaSeconds);

}

ATopDownCharacter::ATopDownCharacter()
{
	ControllerUseOnlyYawRotation();

	InitializeCapsuleComponent();
	InitializeCurrentAnimationComponent();

	InitializeFloatingPawnMovement();

}

void ATopDownCharacter::ControllerUseOnlyYawRotation()
{
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = true;
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

void ATopDownCharacter::PostInitializeComponents() 
{
	Super::PostInitializeComponents();

}

void ATopDownCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}