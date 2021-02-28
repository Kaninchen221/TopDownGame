// Fill out your copyright notice in the Description page of Project Settings.


#include "DialogSystem/TPDialogNode.h"

void FTPDialogNode::SetText(const FText& InText)
{
	Text = InText;
}

FText FTPDialogNode::GetText() const
{
	return Text;
}

void FTPDialogNode::AddDialogOption(int32 DialogOptionIndex)
{
	DialogOptions.Add(DialogOptionIndex);
}

const TArray<int32>& FTPDialogNode::GetDialogOptions() const
{
	return DialogOptions;
}
