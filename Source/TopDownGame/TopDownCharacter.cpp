// Fill out your copyright notice in the Description page of Project Settings.

#include "TopDownCharacter.h"

#include "PaperFlipbookComponent.h"
#include "Components/CapsuleComponent.h"

#include "Engine/CollisionProfile.h"

ATopDownCharacter::ATopDownCharacter()
{
	TurnOffTick();

	InitializeCapsuleComponent();
	InitializeMainAnimationComponent();
}

void ATopDownCharacter::InitializeCapsuleComponent()
{
	static FName CapsuleComponentName(TEXT("Capsule"));
	CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(CapsuleComponentName);
	CapsuleComponent->InitCapsuleSize(60.0f, 60.0f);
	CapsuleComponent->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);

	CapsuleComponent->CanCharacterStepUpOn = ECB_No;
	CapsuleComponent->SetShouldUpdatePhysicsVolume(true);
	CapsuleComponent->SetCanEverAffectNavigation(false);
	CapsuleComponent->bDynamicObstacle = true;
	RootComponent = CapsuleComponent;
}

void ATopDownCharacter::InitializeMainAnimationComponent() {

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
	}

}

void ATopDownCharacter::PostInitializeMainAnimationComponent() {
	if (MainAnimationComponent)
	{
		if (MainAnimationComponent->PrimaryComponentTick.bCanEverTick/* && GetCharacterMovement()*/)
		{
			//MainAnimationComponent->PrimaryComponentTick.AddPrerequisite(GetCharacterMovement(), GetCharacterMovement()->PrimaryComponentTick);
		}
	}
}

void ATopDownCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void ATopDownCharacter::PostInitializeComponents() {
	Super::PostInitializeComponents();

	if (!IsPendingKill())
	{
		PostInitializeMainAnimationComponent();
	}
}

void ATopDownCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ATopDownCharacter::TurnOffTick() {
	PrimaryActorTick.bCanEverTick = false;
}