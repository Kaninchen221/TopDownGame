// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "AssetTypeActions_Base.h"
#include "DialogAsset.h"

class IToolkitHost;

/**
 * 
 */
class DIALOGEDITOR_API FDialogAssetActions : public FAssetTypeActions_Base
{
public:

	FDialogAssetActions(const TSharedRef<ISlateStyle>& InStyle);

	virtual FText GetName() const override;
	virtual FColor GetTypeColor() const override;
	virtual UClass* GetSupportedClass() const override;
	virtual uint32 GetCategories() override;
	virtual void OpenAssetEditor(const TArray<UObject*>& InObjects, TSharedPtr<IToolkitHost> EditWithinLevelEditor = TSharedPtr<IToolkitHost>()) override;

private:

	TSharedRef<ISlateStyle> Style;

};