// Fill out your copyright notice in the Description page of Project Settings.


#include "DialogEditor/Public/DialogAsset.h"
#include "DialogEditor/Public/DialogOption.h"
#include "DialogEditor/Public/DialogNode.h"

void UDialogAsset::SetTopic(const FText& Text)
{
	Topic = Text;
}

FText UDialogAsset::GetTopic() const
{
	return Topic;
}

int32 UDialogAsset::CreateDialogNode()
{
	DialogNodes.Emplace();
	return GetLastIndexOf(DialogNodes);
}

FDialogNode* UDialogAsset::GetDialogNode(int32 DialogNodeIndex)
{
	if (DialogNodes.IsValidIndex(DialogNodeIndex))
	{
		return &(DialogNodes[DialogNodeIndex]);
	}
	else 
	{
		return nullptr;
	}
}

int32 UDialogAsset::CreateDialogOption()
{
	DialogOptions.Emplace();
	return GetLastIndexOf(DialogOptions);
}

FDialogOption* UDialogAsset::GetDialogOption(int DialogOptionIndex)
{
	if (DialogOptions.IsValidIndex(DialogOptionIndex))
	{
		return &(DialogOptions[DialogOptionIndex]);
	}
	else
	{
		return nullptr;
	}
}