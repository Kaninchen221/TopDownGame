// Fill out your copyright notice in the Description page of Project Settings.


#include "TopDownPlayerStateWalk.h"
#include "TopDownPlayerStateIdle.h"
#include "TopDownPlayerCharacter.h"

#include "GameFramework/FloatingPawnMovement.h"
#include "PaperFlipbookComponent.h"

void UTopDownPlayerStateWalk::Enter(ATopDownPlayerCharacter* TopDownPlayerCharacter) {

	UTopDownPlayerState::Enter(TopDownPlayerCharacter);

	UpdateMaxWalkSpeed();

	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Enter Walk State"));
	}
}

void UTopDownPlayerStateWalk::Tick(float DeltaSeconds) {

	if (IsWalkingVertical()) {

		if (IsWalkingUp()) {
			PlayerCharacter->ChangeCurrentAnimation(RunBackAnimation);
			PlayerCharacter->SetCurrentDirection(ETopDownPlayerDirection::UP);
		}
		else if (IsWalkingDown()) {
			PlayerCharacter->ChangeCurrentAnimation(RunFrontAnimation);
			PlayerCharacter->SetCurrentDirection(ETopDownPlayerDirection::DOWN);
		}

	}
	else if(IsWalkingHorizontal()) {

		if (IsWalkingRight()) {
			PlayerCharacter->ChangeCurrentAnimation(RunRightSideAnimation);
			PlayerCharacter->SetCurrentDirection(ETopDownPlayerDirection::RIGHT);
		}
		else if(IsWalkingLeft()) {
			PlayerCharacter->ChangeCurrentAnimation(RunLeftSideAnimation);
			PlayerCharacter->SetCurrentDirection(ETopDownPlayerDirection::LEFT);
		}

	}
}

void UTopDownPlayerStateWalk::MoveVertical(float Value)
{

	if (!IsWalkingHorizontal()) {
		MoveVerticalValue = Value;

		auto PawnMovementComponent = PlayerCharacter->FloatingPawnMovementComponent;
		PawnMovementComponent->AddInputVector(FVector(0.0f, 0.0f, Value), false);

		if (ShouldChangeStateToIdle()) {
			ChangeTopDownPlayerState(PlayerCharacter->TopDownPlayerStateIdle);
		}
	}
}

void UTopDownPlayerStateWalk::MoveHorizontal(float Value)
{
	if (!IsWalkingVertical()) {
		MoveHorizontalValue = Value;

		auto PawnMovementComponent = PlayerCharacter->FloatingPawnMovementComponent;
		PawnMovementComponent->AddInputVector(FVector(Value, 0.0f, 0.0f), false);

		if (ShouldChangeStateToIdle()) {
			ChangeTopDownPlayerState(PlayerCharacter->TopDownPlayerStateIdle);
		}
	}
}

bool UTopDownPlayerStateWalk::ShouldChangeStateToIdle()
{
	return !IsWalkingVertical() && !IsWalkingHorizontal();
}

bool UTopDownPlayerStateWalk::IsWalkingVertical()
{
	return MoveVerticalValue != 0.f;
}

bool UTopDownPlayerStateWalk::IsWalkingHorizontal()
{
	return MoveHorizontalValue != 0.f;
}

bool UTopDownPlayerStateWalk::IsWalkingUp()
{
	return MoveVerticalValue > 0.f;
}

bool UTopDownPlayerStateWalk::IsWalkingDown()
{
	return MoveVerticalValue < 0.f;
}

bool UTopDownPlayerStateWalk::IsWalkingRight()
{
	return MoveHorizontalValue < 0.f;
}

bool UTopDownPlayerStateWalk::IsWalkingLeft()
{
	return MoveHorizontalValue > 0.f;
}

void UTopDownPlayerStateWalk::SetMaxWalkSpeed(float Value) noexcept
{
	MaxWalkSpeed = Value;
	UpdateMaxWalkSpeed();
}

void UTopDownPlayerStateWalk::UpdateMaxWalkSpeed() noexcept
{
	PlayerCharacter->FloatingPawnMovementComponent->MaxSpeed = MaxWalkSpeed;
}
