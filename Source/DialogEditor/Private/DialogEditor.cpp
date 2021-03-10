#include "DialogEditor.h"
#include "Modules/ModuleManager.h"
#include "Modules/ModuleInterface.h"
#include "TPAssetTypeActions_DialogGraph.h"

IMPLEMENT_GAME_MODULE(DialogEditorModule, DialogEditor);

#define LOCTEXT_NAMESPACE "DialogEditor"

DEFINE_LOG_CATEGORY(DialogEditor);

void DialogEditorModule::StartupModule()
{
	UE_LOG(DialogEditor, Log, TEXT("DialogEditor: Log Started"));

	IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();

	RegisterAssetTypeAction(AssetTools, MakeShareable(new FTPAssetTypeActions_DialogGraph()));
	
}

void DialogEditorModule::RegisterAssetTypeAction(IAssetTools& AssetTools, TSharedRef<IAssetTypeActions> Action)
{
	AssetTools.RegisterAssetTypeActions(Action);
	CreatedAssetTypeActions.Add(Action);
}

void DialogEditorModule::ShutdownModule()
{
    UE_LOG(DialogEditor, Log, TEXT("DialogEditor: Log Ended"));
}

#undef LOCTEXT_NAMESPACE