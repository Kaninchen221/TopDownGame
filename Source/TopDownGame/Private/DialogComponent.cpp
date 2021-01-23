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
		UE_LOG(LogTemp, Error, TEXT("StartNode is null"));
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

		UE_LOG(LogTemp, Warning, TEXT("CurrentNode is null"));

		return false;
	}

	TArray<UDialogOption*> DialogOptions = CurrentNode->GetDialogOptions();
	int32 DialogOptionsCount = DialogOptions.Num();
	if (Index >= DialogOptionsCount || Index < 0) {

		UE_LOG(LogTemp, Warning, TEXT("Index is invalid"));

		return false;
	}
	
	UDialogOption* Choosed = DialogOptions[Index];
	if (!Choosed->IsCanBeChoosen()) {

		UE_LOG(LogTemp, Warning, TEXT("DialogOption with index %i can't be choosen"), Index);

		return false;
	}

	UDialogNode* ResultDialogNode = Choosed->Choose();
	if (!ResultDialogNode) {

		SetCurrentNode(ResultDialogNode);

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
