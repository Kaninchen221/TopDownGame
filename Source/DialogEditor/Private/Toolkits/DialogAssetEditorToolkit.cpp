#include "DialogEditor/Public/Toolkits/DialogAssetEditorToolkit.h"

#include "Editor.h"
#include "EditorReimportHandler.h"
#include "EditorStyleSet.h"
#include "DialogAsset.h"
#include "UObject/NameTypes.h"
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/Images/SThrobber.h"

#include "DialogEditor/Public/Widgets/DialogAssetEditor.h"

#define LOCTEXT_NAMESPACE "FDialogAssetEditorToolkit"

/* Local constants
 *****************************************************************************/

namespace DialogAssetEditor
{
	static const FName AppIdentifier("DialogAssetEditorApp");
	static const FName TabId("TextEditor");
}


/* FDialogAssetEditorToolkit structors
 *****************************************************************************/

FDialogAssetEditorToolkit::FDialogAssetEditorToolkit(const TSharedRef<ISlateStyle>& InStyle)
	: DialogAsset(nullptr)
	, Style(InStyle)
{ }


FDialogAssetEditorToolkit::~FDialogAssetEditorToolkit()
{
	FReimportManager::Instance()->OnPreReimport().RemoveAll(this);
	FReimportManager::Instance()->OnPostReimport().RemoveAll(this);

	GEditor->UnregisterForUndo(this);
}


/* FDialogAssetEditorToolkit interface
 *****************************************************************************/

void FDialogAssetEditorToolkit::Initialize(UDialogAsset* InDialogAsset, const EToolkitMode::Type InMode, const TSharedPtr<class IToolkitHost>& InToolkitHost)
{
	DialogAsset = InDialogAsset;

	// Support undo/redo
	DialogAsset->SetFlags(RF_Transactional);
	GEditor->RegisterForUndo(this);

	// create tab layout
	const TSharedRef<FTabManager::FLayout> Layout = FTabManager::NewLayout("Standalone_DialogAssetEditor")
		->AddArea
		(
			FTabManager::NewPrimaryArea()
				->SetOrientation(Orient_Horizontal)
				->Split
				(
					FTabManager::NewSplitter()
						->SetOrientation(Orient_Vertical)
						->SetSizeCoefficient(0.66f)
						->Split
						(
							FTabManager::NewStack()
								->AddTab(GetToolbarTabId(), ETabState::OpenedTab)
								->SetHideTabWell(true)
								->SetSizeCoefficient(0.1f)
								
						)
						->Split
						(
							FTabManager::NewStack()
								->AddTab(DialogAssetEditor::TabId, ETabState::OpenedTab)
								->SetHideTabWell(true)
								->SetSizeCoefficient(0.9f)
						)
				)
		);

	FAssetEditorToolkit::InitAssetEditor(
		InMode,
		InToolkitHost,
		DialogAssetEditor::AppIdentifier,
		Layout,
		true /*bCreateDefaultStandaloneMenu*/,
		true /*bCreateDefaultToolbar*/,
		InDialogAsset
	);

	RegenerateMenusAndToolbars();
}


/* FAssetEditorToolkit interface
 *****************************************************************************/

FString FDialogAssetEditorToolkit::GetDocumentationLink() const
{
	return FString(TEXT("https://github.com/ue4plugins/DialogAsset"));
}


void FDialogAssetEditorToolkit::RegisterTabSpawners(const TSharedRef<FTabManager>& InTabManager)
{
	WorkspaceMenuCategory = InTabManager->AddLocalWorkspaceMenuCategory(LOCTEXT("WorkspaceMenu_DialogAssetEditor", "Text Asset Editor"));
	auto WorkspaceMenuCategoryRef = WorkspaceMenuCategory.ToSharedRef();

	FAssetEditorToolkit::RegisterTabSpawners(InTabManager);

	InTabManager->RegisterTabSpawner(DialogAssetEditor::TabId, FOnSpawnTab::CreateSP(this, &FDialogAssetEditorToolkit::HandleTabManagerSpawnTab, DialogAssetEditor::TabId))
		.SetDisplayName(LOCTEXT("TextEditorTabName", "Text Editor"))
		.SetGroup(WorkspaceMenuCategoryRef)
		.SetIcon(FSlateIcon(FEditorStyle::GetStyleSetName(), "LevelEditor.Tabs.Viewports"));
}


void FDialogAssetEditorToolkit::UnregisterTabSpawners(const TSharedRef<FTabManager>& InTabManager)
{
	FAssetEditorToolkit::UnregisterTabSpawners(InTabManager);

	InTabManager->UnregisterTabSpawner(DialogAssetEditor::TabId);
}


/* IToolkit interface
 *****************************************************************************/

FText FDialogAssetEditorToolkit::GetBaseToolkitName() const
{
	return LOCTEXT("AppLabel", "Text Asset Editor");
}


FName FDialogAssetEditorToolkit::GetToolkitFName() const
{
	return FName("DialogAssetEditor");
}


FLinearColor FDialogAssetEditorToolkit::GetWorldCentricTabColorScale() const
{
	return FLinearColor(0.3f, 0.2f, 0.5f, 0.5f);
}


FString FDialogAssetEditorToolkit::GetWorldCentricTabPrefix() const
{
	return LOCTEXT("WorldCentricTabPrefix", "DialogAsset ").ToString();
}


/* FGCObject interface
 *****************************************************************************/

void FDialogAssetEditorToolkit::AddReferencedObjects(FReferenceCollector& Collector)
{
	Collector.AddReferencedObject(DialogAsset);
}


/* FEditorUndoClient interface
*****************************************************************************/

void FDialogAssetEditorToolkit::PostUndo(bool bSuccess)
{ }


void FDialogAssetEditorToolkit::PostRedo(bool bSuccess)
{
	PostUndo(bSuccess);
}


/* FDialogAssetEditorToolkit callbacks
 *****************************************************************************/

TSharedRef<SDockTab> FDialogAssetEditorToolkit::HandleTabManagerSpawnTab(const FSpawnTabArgs& Args, FName TabIdentifier)
{
	TSharedPtr<SWidget> TabWidget = SNullWidget::NullWidget;

	if (TabIdentifier == DialogAssetEditor::TabId)
	{
		TabWidget = SNew(SDialogAssetEditor, DialogAsset, Style);
	}

	return SNew(SDockTab)
		.TabRole(ETabRole::PanelTab)
		[
			TabWidget.ToSharedRef()
		];
}


#undef LOCTEXT_NAMESPACE