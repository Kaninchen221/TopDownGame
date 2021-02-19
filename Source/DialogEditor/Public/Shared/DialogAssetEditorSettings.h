#pragma once

#include "Fonts/SlateFontInfo.h"
#include "Styling/SlateColor.h"
#include "UObject/ObjectMacros.h"

#include "DialogAssetEditorSettings.generated.h"


UCLASS(config=Editor)
class DIALOGEDITOR_API UDialogAssetEditorSettings : public UObject
{
	GENERATED_BODY()

public:

	UDialogAssetEditorSettings();

};