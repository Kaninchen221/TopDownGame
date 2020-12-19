// Fill out your copyright notice in the Description page of Project Settings.

#include "TopDownCharacter.h"

#include "PaperFlipbookComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

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

	InitializeCharacterMovementProperties();

	//PawnMovementComponent->bConstrainToPlane = true;
	//PawnMovementComponent->SetPlaneConstraintNormal(FVector(0.0f, -1.0f, 0.0f));

	//auto Rotation = FQuat(0.f, 0.f, 0.f, 0.f);
	//
	//CapsuleComponent->SetWorldRotation(Rotation);
	//CapsuleComponent->SetRelativeRotation(Rotation);
	//
	//SideViewCameraComponent->SetWorldRotation(Rotation);
	//SideViewCameraComponent->SetRelativeRotation(Rotation);

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
		MainAnimationComponent->SetRelativeRotation(FRotator(0.0f, 0.0f, -90.0f));
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
		CameraArmComponent->SetRelativeRotation(FRotator(0.0f, 0.0f, -90.0f));
		//CameraArmComponent->SetUsingAbsoluteRotation(true);
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

void ATopDownCharacter::InitializeCharacterMovementProperties()
{
	PawnMovementComponent = CreateDefaultSubobject<UPawnMovementComponent>(TEXT("PawnMovement"));
	if (PawnMovementComponent)
	{
		//PawnMovementComponent->UpdatedComponent = CapsuleComponent;
		//CrouchedEyeHeight = CharacterMovement->CrouchedHalfHeight * 0.80f;
		//PawnMovementComponent->MovementMode = EMovementMode::MOVE_Flying;
		//PawnMovementComponent->GravityScale = 0.0f;
		//PawnMovementComponent->AirControl = 0.30f;
		//PawnMovementComponent->GroundFriction = 8.0f;
		//PawnMovementComponent->MaxFlySpeed = 300.0f;
		//PawnMovementComponent->BrakingDecelerationFlying = 1200.0f;
		//PawnMovementComponent->bOrientRotationToMovement = false;
	}
	else {
		//throw std::exception("PawnMovementComponent is null");
	}
}

void ATopDownCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void ATopDownCharacter::MoveVertical(float Value)
{
	if (GEngine) {
		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Move Vertical"));
	}

	//PawnMovementComponent->AddInputVector(FVector(0.0f, 0.0f, Value), false);
	//AddMovementInput(FVector(0.0f, 0.0f, Value), 1.f, false);
}

void ATopDownCharacter::MoveHorizontal(float Value)
{
	if (GEngine) {
		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Move Horizontal"));
	}

	//PawnMovementComponent->AddInputVector(FVector(Value, 0.0f, 0.0f), false);
	//AddMovementInput(FVector(Value, 0.0f, 0.0f), 1.f, false);
}

void ATopDownCharacter::PostInitializeComponents() 
{
	Super::PostInitializeComponents();

	if (!IsPendingKill())
	{
		PostInitializeMainAnimationComponent();

		//if (CharacterMovementComponent && CapsuleComponent)
		//{
		//	CharacterMovementComponent->UpdateNavAgent(*CapsuleComponent);
		//}
		//else {
		//	throw std::exception("Cant update nav agent");
		//}
		//
		//if (!Controller && GetNetMode() != NM_Client)
		//{
		//	if (CharacterMovementComponent && CharacterMovementComponent->bRunPhysicsWithNoController)
		//	{
		//		CharacterMovementComponent->SetDefaultMovementMode();
		//	}
		//}
	}
}

void ATopDownCharacter::PostInitializeMainAnimationComponent()
{
	if (MainAnimationComponent)
	{
		//if (MainAnimationComponent->PrimaryComponentTick.bCanEverTick && CharacterMovementComponent)
		//{
		//	MainAnimationComponent->PrimaryComponentTick.AddPrerequisite(CharacterMovementComponent, CharacterMovementComponent->PrimaryComponentTick);
		//}
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