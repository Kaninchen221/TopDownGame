// Fill out your copyright notice in the Description page of Project Settings.


#include "DialogOption.h"

#include "DialogNode.h"

UDialogNode* UDialogOption::Choose()
{
	if (CanBeChoosen && ResultNode) {
		return ResultNode;
	}
	else {
		return nullptr;
	}
}

UDialogNode* UDialogOption::CreateResultNode(FText DialogNodeText)
{
	static FName DialogNodeName(TEXT("DialogNode"));
	ResultNode = NewObject<UDialogNode>();
	ResultNode->SetText(DialogNodeText);
	return ResultNode;
}
