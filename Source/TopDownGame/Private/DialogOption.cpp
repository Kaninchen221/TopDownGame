// Fill out your copyright notice in the Description page of Project Settings.


#include "../Public/DialogSystem/DialogOption.h"

#include "../Public/DialogSystem/DialogNode.h"

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

UDialogNode* UDialogOption::SetResultNode(UDialogNode* DialogNode)
{
	ResultNode = DialogNode;
	return ResultNode;
}

UDialogOption* UDialogOption::SetActionOfThisOption(FActionOfThisOption NewActionOfThisOption)
{
	ActionOfThisOption = NewActionOfThisOption;
	return this;
}
