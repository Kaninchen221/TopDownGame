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
	ControllerUseOnlyYawRotation();

	InitializeCapsuleComponent();
	InitializeCurrentAnimationComponent();
	InitializeInteractionComponent();

	InitializeFloatingPawnMovement();

}

void ATopDownCharacter::ControllerUseOnlyYawRotation()
{
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = true;
	bUseControllerRotationRoll = false;
}

void ATopDownCharacter::NewInteractableInBoundsOfInteractionComponent()
{
	FString OverlapInfoMessage = "Overlaped actors: ";
	auto OverlapInfos = InteractionSphereComponent->GetOverlapInfos();
	for (const auto& Info : OverlapInfos) {
		auto HitResult = Info.OverlapInfo;
		auto ActorName = HitResult.Actor->GetName();
		OverlapInfoMessage += ActorName + " ";
	}

	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, OverlapInfoMessage);
	}
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

		/// Bind interaction sphere with NewInteractable function
		//InteractionSphereComponent->SetGenerateOverlapEvents(true);
		//FScriptDelegate overlapDelegate;
		//overlapDelegate.BindUFunction(this, "NewInteractableInBoundsOfInteractionComponent");
		//InteractionSphereComponent->OnComponentBeginOverlap.Add(overlapDelegate);
	}
	else {
		throw std::exception("InteractionComponent is null");
	}
}

void ATopDownCharacter::InitializeFloatingPawnMovement()
{
	FloatingPawnMovement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("PawnMovement"));
	if (FloatingPawnMovement)
	{
		FloatingPawnMovement->UpdatedComponent = CapsuleComponent;
		FloatingPawnMovement->MaxSpeed = 200.f;
		FloatingPawnMovement->bConstrainToPlane = true;
		FloatingPawnMovement->SetPlaneConstraintNormal(FVector(0.0f, -1.0f, 0.0f));
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