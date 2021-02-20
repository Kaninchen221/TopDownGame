#include "DialogEditor.h"
#include "Modules/ModuleManager.h"
#include "Modules/ModuleInterface.h"
#include "AssetTools/DialogAssetActions.h"
#include "Styles/DialogAssetEditorStyle.h"

IMPLEMENT_GAME_MODULE(DialogEditorModule, DialogEditor);

#define LOCTEXT_NAMESPACE "DialogEditor"

DEFINE_LOG_CATEGORY(DialogEditor);

void DialogEditorModule::StartupModule()
{
    UE_LOG(DialogEditor, Log, TEXT("DialogEditor: Log Started"));

	Style = MakeShareable(new FDialogAssetEditorStyle());

	IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
	{
		TSharedRef<IAssetTypeActions> Action = MakeShareable(new FDialogAssetActions(Style.ToSharedRef()));
		AssetTools.RegisterAssetTypeActions(Action);
	}
}

void DialogEditorModule::ShutdownModule()
{
    UE_LOG(DialogEditor, Log, TEXT("DialogEditor: Log Ended"));
}

#undef LOCTEXT_NAMESPACE