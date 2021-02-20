#include "Factories/DialogAssetFactory.h"

#include "Containers/UnrealString.h"
#include "Misc/FileHelper.h"

#include "DialogAsset.h"


UDialogAssetFactory::UDialogAssetFactory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	Formats.Add(FString(TEXT("dialog;")) + NSLOCTEXT("UDialogAssetFactory", "FormatDialog", "Dialog File").ToString());
	SupportedClass = UDialogAsset::StaticClass();
	bCreateNew = false;
	bEditorImport = true;
}

UObject* UDialogAssetFactory::FactoryCreateFile(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, const FString& Filename, const TCHAR* Parms, FFeedbackContext* Warn, bool& bOutOperationCanceled)
{
	UDialogAsset* DialogAsset = nullptr;
	FString TextString;

	if (FFileHelper::LoadFileToString(TextString, *Filename))
	{
		DialogAsset = NewObject<UDialogAsset>(InParent, InClass, InName, Flags);
		//DialogAsset->Text = FText::FromString(TextString);
	}

	bOutOperationCanceled = false;

	return DialogAsset;
}