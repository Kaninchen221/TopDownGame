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
	Nodes.Emplace();
	return Nodes.Num() - 1;
}
