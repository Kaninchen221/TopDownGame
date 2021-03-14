// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Containers/Array.h"

#include "TPDialogNode.h"
#include "TPDialogOption.h"

#include "TPDialogAsset.generated.h"

UCLASS(Category = "DialogEditor")
class DIALOGPLUGINRUNTIME_API UTPDialogAsset : public UObject
{
	GENERATED_BODY()

protected:

	UPROPERTY(Category = "DialogEditor", EditDefaultsOnly)
	FText Topic;

	UPROPERTY(Category = "DialogEditor", VisibleAnywhere)
	TArray<FTPDialogNode> DialogNodes;

	UPROPERTY(Category = "DialogEditor", VisibleAnywhere)
	TArray<FTPDialogOption> DialogOptions;

public:

	void SetTopic(const FText& Text);

	FText GetTopic() const;

	int32 CreateDialogNode();

	FTPDialogNode* GetDialogNode(int32 DialogNodeIndex);

	int32 CreateDialogOption();

	FTPDialogOption* GetDialogOption(int DialogOptionIndex);

	template<typename InArray>
	static int32 GetLastIndexOf(const InArray& Array);
};

template<typename InArray>
int32 UTPDialogAsset::GetLastIndexOf(const InArray& Array)
{
	return Array.Num() - 1;
}
