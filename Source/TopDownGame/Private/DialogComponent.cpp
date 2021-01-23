// Fill out your copyright notice in the Description page of Project Settings.


#include "../Public/DialogSystem/DialogComponent.h"
#include "../Public/DialogSystem/DialogOption.h"

UDialogComponent::UDialogComponent()
{
	PrimaryComponentTick.bCanEverTick = false;

}

void UDialogComponent::InitializeStartNode()
{
	StartNode = NewObject<UDialogNode>();
	if (StartNode) {

	}
	else {
		if (GEngine) {
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Failed to create StartNode in Dialog"));
		}
	}
}

void UDialogComponent::BeginPlay()
{
	Super::BeginPlay();

	InitializeStartNode();
}

void UDialogComponent::StartDialog()
{
	SetCurrentNode(StartNode);
	OnStartDialog.Broadcast();
}

bool UDialogComponent::ChooseOption(int Index)
{
	if (!CurrentNode) {

		if (GEngine) {
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Current node is invalid"));
		}

		return false;
	}

	auto DialogOptions = CurrentNode->GetDialogOptions();
	auto DialogOptionsCount = DialogOptions.Num();

	Index--;
	if (Index >= DialogOptionsCount || Index < 0) {
		
		if (GEngine) {
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Index is invalid"));
		}

		return false;
	}
	
	auto Choosed = DialogOptions[Index];
	if (!Choosed->IsCanBeChoosen()) {
		
		if (GEngine) {
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Dialog option Can't be Choosen"));
		}

		return false;
	}

	auto ResultDialogNode = Choosed->Choose();
	if (!ResultDialogNode) {

		if (GEngine) {
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Result Dialog Node is invalid"));
		}

		return false;
	}

	SetCurrentNode(ResultDialogNode);

	return true;
}

void UDialogComponent::EndDialog()
{
	CurrentNode = nullptr;
	OnEndDialog.Broadcast();
}

void UDialogComponent::SetCurrentNode(UDialogNode* NewCurrentNode)
{
	CurrentNode = NewCurrentNode; 
	OnNewCurrentDialogNode.Broadcast();
}
