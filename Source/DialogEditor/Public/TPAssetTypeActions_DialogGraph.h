#pragma once

#include "CoreMinimal.h"
#include "AssetTypeActions_Base.h"

class FTPAssetTypeActions_DialogGraph : public FAssetTypeActions_Base
{
public:
	FTPAssetTypeActions_DialogGraph();

	virtual FText GetName() const override;
	virtual FColor GetTypeColor() const override;
	virtual UClass* GetSupportedClass() const override;
	virtual void OpenAssetEditor(const TArray<UObject*>& InObjects, TSharedPtr<class IToolkitHost> EditWithinLevelEditor = TSharedPtr<IToolkitHost>()) override;
	virtual uint32 GetCategories() override;

};