// Fill out your copyright notice in the Description page of Project Settings.


#include "DialogSystem/TPDialogAsset.h"
#include "DialogSystem/TPDialogOption.h"
#include "DialogSystem/TPDialogNode.h"

void UTPDialogAsset::SetTopic(const FText& Text)
{
	Topic = Text;
}

FText UTPDialogAsset::GetTopic() const
{
	return Topic;
}

int32 UTPDialogAsset::CreateDialogNode()
{
	DialogNodes.Emplace();
	return GetLastIndexOf(DialogNodes);
}

FTPDialogNode* UTPDialogAsset::GetDialogNode(int32 DialogNodeIndex)
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

int32 UTPDialogAsset::CreateDialogOption()
{
	DialogOptions.Emplace();
	return GetLastIndexOf(DialogOptions);
}

FTPDialogOption* UTPDialogAsset::GetDialogOption(int DialogOptionIndex)
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