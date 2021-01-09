// Fill out your copyright notice in the Description page of Project Settings.


#include "DialogOption.h"

#include "DialogNode.h"

UDialogNode* UDialogOption::Choose()
{
	if (CanBeChoosen) {
		ActionOfThisOption.ExecuteIfBound();

		if (ResultNode) {
			return ResultNode;
		}
	}

	return nullptr;
}

UDialogNode* UDialogOption::CreateResultNode(FText DialogNodeText)
{
	static FName DialogNodeName(TEXT("DialogNode"));
	ResultNode = NewObject<UDialogNode>();
	ResultNode->SetText(DialogNodeText);
	return ResultNode;
}

UDialogOption* UDialogOption::SetActionOfThisOption(FActionOfThisOption NewActionOfThisOption)
{
	ActionOfThisOption = NewActionOfThisOption;
	return this;
}
