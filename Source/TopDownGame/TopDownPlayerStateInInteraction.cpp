// Fill out your copyright notice in the Description page of Project Settings.


#include "TopDownPlayerStateInInteraction.h"
#include "TopDownPlayerCharacter.h"

void UTopDownPlayerStateInInteraction::Enter(ATopDownPlayerCharacter* TopDownPlayerCharacter)
{
	UTopDownPlayerState::Enter(TopDownPlayerCharacter);

	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Enter InInteraction State"));
	}
}

void UTopDownPlayerStateInInteraction::Tick(float DeltaSeconds)
{
	UTopDownPlayerState::Tick(DeltaSeconds);

}

void UTopDownPlayerStateInInteraction::MoveVertical(float Value)
{

}

void UTopDownPlayerStateInInteraction::MoveHorizontal(float Value)
{

}

void UTopDownPlayerStateInInteraction::Exit()
{
	UTopDownPlayerState::Exit();

	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Exit InInteraction State"));
	}
}

void UTopDownPlayerStateInInteraction::ChangePlayerStateToIdle()
{
	ChangeTopDownPlayerState(PlayerCharacter->TopDownPlayerStateIdle);
}
