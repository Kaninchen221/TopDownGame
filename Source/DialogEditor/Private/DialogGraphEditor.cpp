#include "DialogEditor/Public/DialogGraphEditor.h"
#include "DialogEditor/Public/DialogGraph.h"
#include "DialogEditor/Public/DialogAsset.h"

#include "Widgets/Layout/SBox.h"

void SDialogGraphEditor::Construct(const FArguments& InArgs)
{
	EdGraphObj = NewObject<UDialogGraph>();

	this->ChildSlot
	[
		SNew(SBox)
		.AddMetaData<FTagMetaData>(FTagMetaData(TEXT("GraphEditorPanel")))
		

	];

	//EdGraphObj = InArgs._GraphToEdit;
	//OnGraphModuleReloadedCallback = InArgs._OnGraphModuleReloaded;
	//AssetEditorToolkit = InArgs._AssetEditorToolkit;
	//
	//// Register this widget with the module so that we can gracefully handle the module being unloaded.
	//// See OnModuleUnloading()
	//RegisterGraphEditor(SharedThis(this));
	//
	//// Register a graph modified handler
	//if (EdGraphObj != NULL)
	//{
	//	EdGraphObj->AddOnGraphChangedHandler(FOnGraphChanged::FDelegate::CreateSP(this, &SGraphEditor::OnGraphChanged));
	//}
	//
	//// Make the actual GraphEditor instance
	//ConstructImplementation(InArgs);
}
