#pragma once

#include "CoreMinimal.h"

#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"
#include "UnrealEd.h"
#include "AssetTypeCategories.h"
#include "IAssetTypeActions.h"
#include "IAssetTools.h"
#include "Templates/SharedPointer.h"

DECLARE_LOG_CATEGORY_EXTERN(DialogPluginEditor, All, All)

class DialogPluginEditorModule : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;

private:

    void RegisterAssetTypeAction(IAssetTools& AssetTools, TSharedRef<IAssetTypeActions> Action);

	TArray<TSharedPtr<IAssetTypeActions>> CreatedAssetTypeActions;
	TSharedPtr<ISlateStyle> Style;
};