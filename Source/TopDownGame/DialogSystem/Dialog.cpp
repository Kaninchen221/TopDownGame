// Fill out your copyright notice in the Description page of Project Settings.


#include "Dialog.h"

#include "DialogOption.h"

UDialog::UDialog()
{
	PrimaryComponentTick.bCanEverTick = false;
	
}

void UDialog::BeginPlay()
{
	Super::BeginPlay();

	StartNode = NewObject<UDialogNode>();
	if (StartNode) {

	}
	else {
		throw std::exception("DialogNode is null");
	}
	
}

void UDialog::StartDialog()
{
	SetCurrentNode(StartNode);
}

bool UDialog::ChooseOption(int Index)
{
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

void UDialog::EndDialog()
{
	CurrentNode = nullptr;
}

void UDialog::SetCurrentNode(UDialogNode* NewCurrentNode)
{
	CurrentNode = NewCurrentNode; 
	OnNewCurrentDialogNode.Broadcast();
}
