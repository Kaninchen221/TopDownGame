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
	return DialogNodes.Num() - 1;
}

FDialogNode* UDialogAsset::GetDialogNode(int32 DialogNodeIndex)
{
	if (0 < DialogNodeIndex && DialogNodeIndex < DialogNodes.Num())
	{
		return &(DialogNodes[DialogNodeIndex]);
	}
	else 
	{
		return nullptr;
	}
}
