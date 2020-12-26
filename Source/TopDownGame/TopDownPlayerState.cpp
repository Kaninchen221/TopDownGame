// Fill out your copyright notice in the Description page of Project Settings.


#include "TopDownPlayerState.h"

#include "TopDownPlayerCharacter.h"

void UTopDownPlayerState::ChangeTopDownPlayerState(TSubclassOf<UTopDownPlayerState> PlayerState)
{
	auto& CurrentPlayerState = this->PlayerCharacter->TopDownPlayerState;

	if (CurrentPlayerState != PlayerState) {
		Exit();
		CurrentPlayerState = PlayerState;
		CurrentPlayerState.GetDefaultObject()->Enter(PlayerCharacter);
	}
}

void UTopDownPlayerState::Enter(ATopDownPlayerCharacter* TopDownPlayerCharacter)
{
	this->PlayerCharacter = TopDownPlayerCharacter;
}

void UTopDownPlayerState::Tick(float DeltaSeconds)
{

}

void UTopDownPlayerState::BindAxis() {

}

void UTopDownPlayerState::MoveVertical(float Value)
{
	if (Value != 0.0f) {
		ChangeTopDownPlayerState(PlayerCharacter->TopDownPlayerStateWalk);
	}
}

void UTopDownPlayerState::MoveHorizontal(float Value)
{
	if (Value != 0.0f) {
		ChangeTopDownPlayerState(PlayerCharacter->TopDownPlayerStateWalk);
	}
}

void UTopDownPlayerState::Exit()
{
	auto PlayerInputComponent = PlayerCharacter->InputComponent;

	PlayerInputComponent->ClearActionBindings();
	PlayerInputComponent->AxisBindings.Empty();

	#if WITH_EDITOR
		if (GEngine) {
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Exit State"));
		}
	#endif
}