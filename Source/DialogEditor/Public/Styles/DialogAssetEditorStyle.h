#pragma once

#include "Interfaces/IPluginManager.h"
#include "Brushes/SlateImageBrush.h"
#include "Styling/SlateStyle.h"
#include "Styling/SlateStyleRegistry.h"

//#define IMAGE_BRUSH(RelativePath, ...) FSlateImageBrush(RootToContentDir(RelativePath, TEXT(".png")), __VA_ARGS__)
//#define BOX_BRUSH(RelativePath, ...) FSlateBoxBrush(RootToContentDir(RelativePath, TEXT(".png")), __VA_ARGS__)
//#define BORDER_BRUSH(RelativePath, ...) FSlateBorderBrush(RootToContentDir(RelativePath, TEXT(".png")), __VA_ARGS__)
//#define TTF_FONT(RelativePath, ...) FSlateFontInfo(RootToContentDir(RelativePath, TEXT(".ttf")), __VA_ARGS__)
//#define OTF_FONT(RelativePath, ...) FSlateFontInfo(RootToContentDir(RelativePath, TEXT(".otf")), __VA_ARGS__)


/**
 * Implements the visual style of the text asset editor UI.
 */
class FDialogAssetEditorStyle : public FSlateStyleSet
{
public:

	FDialogAssetEditorStyle() : FSlateStyleSet("TextAssetEditorStyle")
	{
		const FVector2D Icon16x16(16.0f, 16.0f);
		const FVector2D Icon20x20(20.0f, 20.0f);
		const FVector2D Icon40x40(40.0f, 40.0f);

		IPluginManager& PluginManager = IPluginManager::Get(); //.FindPlugin("TextAsset")->GetBaseDir();
		const FString ThisPluginName = "DialogEditor";
		TSharedPtr<IPlugin> ThisPlugin = PluginManager.FindPlugin(ThisPluginName);
		if (ThisPlugin.IsValid()) 
		{
			const FString PluginBaseDir = ThisPlugin->GetBaseDir();
			SetContentRoot(PluginBaseDir / TEXT("Content"));
		}
		else 
		{
			UE_LOG(DialogEditor, Log, TEXT("Can't find plugin with name: %s"), *ThisPluginName);
		}

		//Set("TextAssetEditor.FancyButton", new IMAGE_BRUSH("icon_forward_40x", Icon40x40));

		FSlateStyleRegistry::RegisterSlateStyle(*this);
	}

	~FDialogAssetEditorStyle()
	{
		FSlateStyleRegistry::UnRegisterSlateStyle(*this);
	}
};


//#undef IMAGE_BRUSH
//#undef BOX_BRUSH
//#undef BORDER_BRUSH
//#undef TTF_FONT
//#undef OTF_FONT