// Fill out your copyright notice in the Description page of Project Settings.


#include "TopDownPlayerState.h"

#include "TopDownPlayerCharacter.h"

void UTopDownPlayerState::ChangeTopDownPlayerState(TSubclassOf<UTopDownPlayerState> PlayerState)
{
	PlayerCharacter->ChangePlayerState(PlayerState);
}

void UTopDownPlayerState::Enter(ATopDownPlayerCharacter* TopDownPlayerCharacter)
{
	this->PlayerCharacter = TopDownPlayerCharacter;
}

void UTopDownPlayerState::Tick(float DeltaSeconds)
{

}

void UTopDownPlayerState::MoveVertical(float Value)
{

}

void UTopDownPlayerState::MoveHorizontal(float Value)
{

}

void UTopDownPlayerState::Exit()
{
	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Exit State"));
	}
}