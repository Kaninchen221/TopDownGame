#include "DialogPluginEditor.h"
#include "Modules/ModuleManager.h"
#include "Modules/ModuleInterface.h"
#include "TPAssetTypeActions_DialogGraph.h"

IMPLEMENT_GAME_MODULE(DialogPluginEditorModule, DialogPluginEditor);

#define LOCTEXT_NAMESPACE "DialogEditor"

DEFINE_LOG_CATEGORY(DialogPluginEditor);

void DialogPluginEditorModule::StartupModule()
{
	UE_LOG(DialogPluginEditor, Log, TEXT("DialogEditor: Log Started"));

	IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();

	RegisterAssetTypeAction(AssetTools, MakeShareable(new FTPAssetTypeActions_DialogGraph()));
	
}

void DialogPluginEditorModule::RegisterAssetTypeAction(IAssetTools& AssetTools, TSharedRef<IAssetTypeActions> Action)
{
	AssetTools.RegisterAssetTypeActions(Action);
	CreatedAssetTypeActions.Add(Action);
}

void DialogPluginEditorModule::ShutdownModule()
{
    UE_LOG(DialogPluginEditor, Log, TEXT("DialogEditor: Log Ended"));
}

#undef LOCTEXT_NAMESPACE