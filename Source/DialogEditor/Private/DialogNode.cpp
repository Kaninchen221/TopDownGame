// Fill out your copyright notice in the Description page of Project Settings.


#include "DialogEditor/Public/DialogNode.h"

void FDialogNode::SetText(const FText& InText)
{
	Text = InText;
}

FText FDialogNode::GetText() const
{
	return Text;
}

void FDialogNode::AddDialogOption(int32 DialogOptionIndex)
{
	DialogOptions.Add(DialogOptionIndex);
}

const TArray<int32>& FDialogNode::GetDialogOptions() const
{
	return DialogOptions;
}
