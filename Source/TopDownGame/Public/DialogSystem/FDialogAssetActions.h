// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "AssetTypeActions_Base.h"
#include "DialogAsset.h"

/**
 * 
 */
class TOPDOWNGAME_API FDialogAssetActions : FAssetTypeActions_Base
{
public:
	FDialogAssetActions();
	~FDialogAssetActions();

	virtual FText GetName() const override { return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_DialogAsset", "Dialog Asset"); }
	virtual FColor GetTypeColor() const override { return FColor(175, 0, 128); }
	virtual UClass* GetSupportedClass() const override { return UDialogAsset::StaticClass(); }
	virtual uint32 GetCategories() override { return EAssetTypeCategories::Gameplay; }
};