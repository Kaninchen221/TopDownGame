#pragma once

#include "EditorUndoClient.h"
#include "Templates/SharedPointer.h"
#include "Toolkits/AssetEditorToolkit.h"
#include "UObject/GCObject.h"

class FSpawnTabArgs;
class ISlateStyle;
class IToolkitHost;
class SDockTab;
class UDialogAsset;


/**
 * Implements an Editor toolkit for textures.
 */
class FDialogAssetEditorToolkit
	: public FAssetEditorToolkit
	, public FEditorUndoClient
	, public FGCObject
{
public:

	FDialogAssetEditorToolkit(const TSharedRef<ISlateStyle>& InStyle);

	virtual ~FDialogAssetEditorToolkit();

public:

	void Initialize(UDialogAsset* InDialogAsset, const EToolkitMode::Type InMode, const TSharedPtr<IToolkitHost>& InToolkitHost);

public:

	virtual FString GetDocumentationLink() const override;
	virtual void RegisterTabSpawners(const TSharedRef<FTabManager>& InTabManager) override;
	virtual void UnregisterTabSpawners(const TSharedRef<FTabManager>& InTabManager) override;

public:

	virtual FText GetBaseToolkitName() const override;
	virtual FName GetToolkitFName() const override;
	virtual FLinearColor GetWorldCentricTabColorScale() const override;
	virtual FString GetWorldCentricTabPrefix() const override;

public:

	virtual void AddReferencedObjects(FReferenceCollector& Collector) override;
	
protected:

	virtual void PostUndo(bool bSuccess) override;
	virtual void PostRedo(bool bSuccess) override;

private:

	TSharedRef<SDockTab> HandleTabManagerSpawnTab(const FSpawnTabArgs& Args, FName TabIdentifier);

private:

	UDialogAsset* DialogAsset;

	TSharedRef<ISlateStyle> Style;
};