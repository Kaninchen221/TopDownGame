// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Containers/Array.h"

#include "DialogEditor/Public/DialogNode.h"

#include "DialogAsset.generated.h"

UCLASS(Category = "DialogEditor")
class DIALOGEDITOR_API UDialogAsset : public UObject
{
	GENERATED_BODY()

protected:

	UPROPERTY(Category = "DialogEditor", EditDefaultsOnly)
	FText Topic;

	UPROPERTY(Category = "DialogEditor", VisibleAnywhere)
	TArray<FDialogNode> DialogNodes;

public:

	void SetTopic(const FText& Text);

	FText GetTopic() const;

	int32 CreateDialogNode();

	FDialogNode* GetDialogNode(int32 DialogNodeIndex);

};
