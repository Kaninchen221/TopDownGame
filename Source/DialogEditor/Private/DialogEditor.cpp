#include "DialogEditor.h"
#include "Modules/ModuleManager.h"
#include "Modules/ModuleInterface.h"

IMPLEMENT_GAME_MODULE(DialogEditorModule, DialogEditor);

#define LOCTEXT_NAMESPACE "DialogEditor"

DEFINE_LOG_CATEGORY(DialogEditor);

void DialogEditorModule::StartupModule()
{
    UE_LOG(DialogEditor, Log, TEXT("DialogEditor: Log Started"));
}

void DialogEditorModule::ShutdownModule()
{
    UE_LOG(DialogEditor, Log, TEXT("DialogEditor: Log Ended"));
}

#undef LOCTEXT_NAMESPACE