// Fill out your copyright notice in the Description page of Project Settings.


#include "TopDownPlayerStateIdle.h"

#include "TopDownPlayerStateWalk.h"

#include "PaperFlipbookComponent.h"

void UTopDownPlayerStateIdle::Enter(ATopDownPlayerCharacter* TopDownPlayerCharacter) {

	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Enter Idle State"));
	}

	UTopDownPlayerState::Enter(TopDownPlayerCharacter);

	UpdateCurrentAnimationBasingAtDirection(PlayerCharacter->GetCurrentDirection());

}

void UTopDownPlayerStateIdle::Tick(float DeltaSeconds) {

}

void UTopDownPlayerStateIdle::MoveVertical(float Value)
{
	if (Value != 0.0f) {
		ChangeTopDownPlayerState(PlayerCharacter->TopDownPlayerStateWalk);

		auto PlayerStateWalk = PlayerCharacter->TopDownPlayerStateWalk.GetDefaultObject();
		PlayerStateWalk->MoveVertical(Value);
	}
}

void UTopDownPlayerStateIdle::MoveHorizontal(float Value)
{
	if (Value != 0.0f) {
		ChangeTopDownPlayerState(PlayerCharacter->TopDownPlayerStateWalk);

		auto PlayerStateWalk = PlayerCharacter->TopDownPlayerStateWalk.GetDefaultObject();
		PlayerStateWalk->MoveHorizontal(Value);
	}
}

void UTopDownPlayerStateIdle::UpdateCurrentAnimationBasingAtDirection(ETopDownPlayerDirection Direction)
{
	switch (PlayerCharacter->GetCurrentDirection())
	{
		case ETopDownPlayerDirection::UP:
			PlayerCharacter->CurrentAnimationComponent->SetFlipbook(IdleBackAnimation);
			if (GEngine) {
				GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("Set IdleBackAnimation"));
			}
			break;

		case ETopDownPlayerDirection::DOWN:
			PlayerCharacter->CurrentAnimationComponent->SetFlipbook(IdleFrontAnimation);
			if (GEngine) {
				GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("Set IdleFrontAnimation"));
			}
			break;

		case ETopDownPlayerDirection::LEFT:
			PlayerCharacter->CurrentAnimationComponent->SetFlipbook(IdleLeftSideAnimation);
			if (GEngine) {
				GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("Set IdleLeftSideAnimation"));
			}
			break;

		case ETopDownPlayerDirection::RIGHT:
			PlayerCharacter->CurrentAnimationComponent->SetFlipbook(IdleRightSideAnimation);
			if (GEngine) {
				GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("Set IdleRightSideAnimation"));
			}
			break;

		default:
			if (GEngine) {
				GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Invalid ETopDownPlayerDirection"));
			}
	}
}
