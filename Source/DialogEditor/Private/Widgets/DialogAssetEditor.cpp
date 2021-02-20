#include "DialogEditor/Public/Widgets/DialogAssetEditor.h"

#include "Fonts/SlateFontInfo.h"
#include "Internationalization/Text.h"
#include "DialogAsset.h"
#include "UObject/Class.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/Input/SMultiLineEditableTextBox.h"

#include "DialogEditor/Public/Shared/DialogAssetEditorSettings.h"


#define LOCTEXT_NAMESPACE "SDialogAssetEditor"


/* SDialogAssetEditor interface
 *****************************************************************************/

SDialogAssetEditor::~SDialogAssetEditor()
{
	FCoreUObjectDelegates::OnObjectPropertyChanged.RemoveAll(this);
}


void SDialogAssetEditor::Construct(const FArguments& InArgs, UDialogAsset* InDialogAsset, const TSharedRef<ISlateStyle>& InStyle)
{
	DialogAsset = InDialogAsset;

	auto Settings = GetDefault<UDialogAssetEditorSettings>();

	FText Text = FText::FromString(FString("Hello World!"));

	ChildSlot
		[
			SNew(STextBlock)
			.Text(Text)

		//+ SetText(TEXT("Hello World!"));

		//SNew(SVerticalBox)
		//
		//+ SVerticalBox::Slot()
		//	.FillHeight(1.0f)
		//	[
		//		SAssignNew(EditableTextBox, SMultiLineEditableTextBox)
		//			.BackgroundColor((Settings != nullptr) ? Settings->BackgroundColor : FLinearColor::White)
		//			.Font((Settings != nullptr) ? Settings->Font : FSlateFontInfo())
		//			.ForegroundColor((Settings != nullptr) ? Settings->ForegroundColor : FLinearColor::Black)
		//			.Margin((Settings != nullptr) ? Settings->Margin : 4.0f)
		//			.OnTextChanged(this, &SDialogAssetEditor::HandleEditableTextBoxTextChanged)
		//			.OnTextCommitted(this, &SDialogAssetEditor::HandleEditableTextBoxTextCommitted)
		//			//.Text(DialogAsset->Text)
		//	]
	];

	FCoreUObjectDelegates::OnObjectPropertyChanged.AddSP(this, &SDialogAssetEditor::HandleDialogAssetPropertyChanged);
}


/* SDialogAssetEditor callbacks
 *****************************************************************************/

void SDialogAssetEditor::HandleEditableTextBoxTextChanged(const FText& NewText)
{
	DialogAsset->MarkPackageDirty();
}


void SDialogAssetEditor::HandleEditableTextBoxTextCommitted(const FText& Comment, ETextCommit::Type CommitType)
{
	//DialogAsset->Text = EditableTextBox->GetText();
}


void SDialogAssetEditor::HandleDialogAssetPropertyChanged(UObject* Object, FPropertyChangedEvent& PropertyChangedEvent)
{
	if (Object == DialogAsset)
	{
		//EditableTextBox->SetText(DialogAsset->Text);
	}
}


#undef LOCTEXT_NAMESPACE