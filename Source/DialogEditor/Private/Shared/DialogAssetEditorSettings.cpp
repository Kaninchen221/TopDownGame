#include "DialogEditor/Public/Shared/DialogAssetEditorSettings.h"

#include "Misc/Paths.h"

UDialogAssetEditorSettings::UDialogAssetEditorSettings()
	: BackgroundColor(FLinearColor::White)
	, ForegroundColor(FLinearColor::Black)
	, Font(FSlateFontInfo(FPaths::EngineContentDir() / TEXT("Slate/Fonts/DroidSansMono.ttf"), 10))
	, Margin(4.0f)
{ 

}