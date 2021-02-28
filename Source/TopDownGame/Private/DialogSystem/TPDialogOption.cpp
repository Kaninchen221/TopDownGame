// Fill out your copyright notice in the Description page of Project Settings.


#include "DialogSystem/TPDialogOption.h"

void FTPDialogOption::SetText(const FText& InText)
{
	Text = InText;
}

FText FTPDialogOption::GetText() const
{
	return Text;
}

void FTPDialogOption::SetResultNode(int32 InDialogNodeIndex)
{
	ResultNodeIndex = InDialogNodeIndex;
}

int32 FTPDialogOption::GetResultNode() const
{
	return ResultNodeIndex;
}
