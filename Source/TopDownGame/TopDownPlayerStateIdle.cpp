// Fill out your copyright notice in the Description page of Project Settings.


#include "TopDownPlayerStateIdle.h"

#include "TopDownPlayerStateWalk.h"

#include "PaperFlipbookComponent.h"

void UTopDownPlayerStateIdle::Enter(ATopDownPlayerCharacter* TopDownPlayerCharacter) {
	
	UTopDownPlayerState::Enter(TopDownPlayerCharacter);

	BindAxis();

	UpdateCurrentAnimationBasingAtDirection(PlayerCharacter->GetCurrentDirection());

	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Enter Idle State"));
	}
}

void UTopDownPlayerStateIdle::Tick(float DeltaSeconds) {

}

void UTopDownPlayerStateIdle::BindAxis() {
	auto PlayerInputComponent = PlayerCharacter->InputComponent;

	PlayerInputComponent->BindAxis("MoveVertical", this, &UTopDownPlayerStateIdle::MoveVertical);
	PlayerInputComponent->BindAxis("MoveHorizontal", this, &UTopDownPlayerStateIdle::MoveHorizontal);
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
			break;

		case ETopDownPlayerDirection::DOWN:
		PlayerCharacter->CurrentAnimationComponent->SetFlipbook(IdleFrontAnimation);
			break;

		case ETopDownPlayerDirection::LEFT:
			PlayerCharacter->CurrentAnimationComponent->SetFlipbook(IdleLeftSideAnimation);
			break;

		case ETopDownPlayerDirection::RIGHT:
			PlayerCharacter->CurrentAnimationComponent->SetFlipbook(IdleRightSideAnimation);
			break;

		default:
			throw std::exception("Not supported ETopDownPlayerDirection");
	}
}
