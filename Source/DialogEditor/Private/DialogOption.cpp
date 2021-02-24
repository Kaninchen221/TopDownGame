// Fill out your copyright notice in the Description page of Project Settings.


#include "DialogEditor/Public/DialogOption.h"

void FDialogOption::SetText(const FText& InText)
{
	Text = InText;
}

FText FDialogOption::GetText() const
{
	return Text;
}

void FDialogOption::SetResultNode(int32 InDialogNodeIndex)
{
	ResultNodeIndex = InDialogNodeIndex;
}

int32 FDialogOption::GetResultNode() const
{
	return ResultNodeIndex;
}
