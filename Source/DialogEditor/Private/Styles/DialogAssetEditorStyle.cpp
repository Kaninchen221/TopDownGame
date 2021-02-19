#include "DialogEditor/Public/Styles/DialogAssetEditorStyle.h"

#include "Misc/Paths.h"

//FDialogAssetEditorStyle::FDialogAssetEditorStyle() : FSlateStyleSet("TextAssetEditorStyle")
//{
//	const FVector2D Icon16x16(16.0f, 16.0f);
//	const FVector2D Icon20x20(20.0f, 20.0f);
//	const FVector2D Icon40x40(40.0f, 40.0f);
//	
//	const FString BaseDir = IPluginManager::Get().FindPlugin("TextAsset")->GetBaseDir();
//	SetContentRoot(BaseDir / TEXT("Content"));
//	
//	//Set("TextAssetEditor.FancyButton", new IMAGE_BRUSH("icon_forward_40x", Icon40x40));
//	
//	FSlateStyleRegistry::RegisterSlateStyle(*this);
//}
//
//FDialogAssetEditorStyle::~FDialogAssetEditorStyle()
//{
//	FSlateStyleRegistry::UnRegisterSlateStyle(*this);
//}