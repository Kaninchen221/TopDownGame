// Fill out your copyright notice in the Description page of Project Settings.


#include "../Public/DialogSystem/DialogAsset.h"
#include "../Public/DialogSystem/DialogOption.h"

UDialogAsset::UDialogAsset()
{
	InitializeStartNode();
}

void UDialogAsset::InitializeStartNode()
{
	StartNode = CreateDefaultSubobject<UDialogNode>("DialogNode");
	if (StartNode) {

	}
	else {
		UE_LOG(LogTemp, Error, TEXT("StartNode is null"));
	}
}

void UDialogAsset::StartDialog()
{
	SetCurrentNode(StartNode);
	OnStartDialog.Broadcast();
}

bool UDialogAsset::ChooseOption(int Index)
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

		return true;
	}

	SetCurrentNode(ResultDialogNode);

	return true;
}

void UDialogAsset::EndDialog()
{
	CurrentNode = nullptr;
	OnEndDialog.Broadcast();
}

void UDialogAsset::SetCurrentNode(UDialogNode* NewCurrentNode)
{
	CurrentNode = NewCurrentNode;
	OnNewCurrentDialogNode.Broadcast();
}
