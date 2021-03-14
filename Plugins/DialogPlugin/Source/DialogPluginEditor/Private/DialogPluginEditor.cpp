#include "DialogPluginEditor.h"
#include "Modules/ModuleManager.h"
#include "Modules/ModuleInterface.h"
#include "TPAssetTypeActions_DialogGraph.h"

IMPLEMENT_GAME_MODULE(FDialogPluginEditorModule, DialogPluginEditor);

#define LOCTEXT_NAMESPACE "DialogEditor"

DEFINE_LOG_CATEGORY(DialogPluginEditor);

void FDialogPluginEditorModule::StartupModule()
{
	UE_LOG(DialogPluginEditor, Log, TEXT("DialogEditor: Log Started"));

	IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();

	RegisterAssetTypeAction(AssetTools, MakeShareable(new FTPAssetTypeActions_DialogGraph()));
	
}

void FDialogPluginEditorModule::RegisterAssetTypeAction(IAssetTools& AssetTools, TSharedRef<IAssetTypeActions> Action)
{
	AssetTools.RegisterAssetTypeActions(Action);
	CreatedAssetTypeActions.Add(Action);
}

void FDialogPluginEditorModule::ShutdownModule()
{
    UE_LOG(DialogPluginEditor, Log, TEXT("DialogEditor: Log Ended"));
}

#undef LOCTEXT_NAMESPACE