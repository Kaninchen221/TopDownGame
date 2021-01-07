// Fill out your copyright notice in the Description page of Project Settings.


#include "DialogNode.h"

#include "DialogOption.h"

UDialogOption* UDialogNode::AddDialogOption(FText DialogOptionText, bool CanBeChoosen)
{
	auto DialogOption = NewObject<UDialogOption>();
	Options.Add(DialogOption);
	
	auto AddedOption = Options.Last();
	AddedOption->SetText(DialogOptionText);
	AddedOption->SetCanBeChoosen(CanBeChoosen);

	return AddedOption;
}
