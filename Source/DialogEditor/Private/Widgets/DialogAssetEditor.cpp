#include "DialogEditor/Public/Widgets/DialogAssetEditor.h"

#include "Fonts/SlateFontInfo.h"
#include "Internationalization/Text.h"
#include "DialogAsset.h"
#include "UObject/Class.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/Input/SMultiLineEditableTextBox.h"

#include "DialogEditor/Public/Shared/DialogAssetEditorSettings.h"
#include "DialogEditor/Public/DialogGraphEditor.h"
#include "DialogEditor/Public/DialogGraphSchema.h"
#include "DialogEditor/Public/DialogGraph.h"

#define LOCTEXT_NAMESPACE "SDialogAssetEditor"


/* SDialogAssetEditor interface
 *****************************************************************************/

SDialogAssetEditor::~SDialogAssetEditor()
{
	FCoreUObjectDelegates::OnObjectPropertyChanged.RemoveAll(this);
}


void SDialogAssetEditor::Construct(const FArguments& InArgs, UDialogAsset* InDialogAsset, const TSharedRef<ISlateStyle>& InStyle)
{
	InitializeDialogGraph();

	DialogAsset = InDialogAsset;

	auto Settings = GetDefault<UDialogAssetEditorSettings>();

	FText Text = FText::FromString(FString("Hello World!"));

	ChildSlot
	[
		SNew(SVerticalBox)
		+ SVerticalBox::Slot()
		.HAlign(HAlign_Fill)
		.VAlign(VAlign_Fill)
		[
			SNew(SSplitter)
			.Orientation(Orient_Horizontal)

			/// DialogGraph
			+ SSplitter::Slot()
			[
				SNew(SDialogGraphEditor)

				
			]

			/// Properties
			+ SSplitter::Slot()
			[
				SNew(SBorder)
				.HAlign(HAlign_Right)
				.VAlign(VAlign_Fill)
			]

		]

	];

	FCoreUObjectDelegates::OnObjectPropertyChanged.AddSP(this, &SDialogAssetEditor::HandleDialogAssetPropertyChanged);
}


void SDialogAssetEditor::InitializeDialogGraph()
{
	DialogGraph = NewObject<UDialogGraph>();
	if (DialogGraph) 
	{
		SetupDialogGraph();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("DialogGraph is null"));
	}
}

void SDialogAssetEditor::SetupDialogGraph()
{
	//DialogGraph->Schema = TSubclassOf<UDialogGraphSchema>();
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