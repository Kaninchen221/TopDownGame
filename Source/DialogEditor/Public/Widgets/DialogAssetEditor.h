#pragma once

#include "Templates/SharedPointer.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "Widgets/SCompoundWidget.h"
#include "Widgets/Input/SMultiLineEditableTextBox.h"

class FText;
class ISlateStyle;
class UDialogAsset;


/**
 * Implements the UDialogAsset asset editor widget.
 */
class SDialogAssetEditor : public SCompoundWidget
{
public:

	SLATE_BEGIN_ARGS(SDialogAssetEditor) { }
	SLATE_END_ARGS()

public:

	/** Virtual destructor. */
	virtual ~SDialogAssetEditor();

	/**
	 * Construct this widget
	 *
	 * @param InArgs The declaration data for this widget.
	 * @param InDialogAsset The UDialogAsset asset to edit.
	 * @param InStyleSet The style set to use.
	 */
	void Construct(const FArguments& InArgs, UDialogAsset* InDialogAsset, const TSharedRef<ISlateStyle>& InStyle);

private:

	/** Callback for text changes in the editable text box. */
	void HandleEditableTextBoxTextChanged(const FText& NewText);

	/** Callback for committed text in the editable text box. */
	void HandleEditableTextBoxTextCommitted(const FText& Comment, ETextCommit::Type CommitType);

	/** Callback for property changes in the text asset. */
	void HandleDialogAssetPropertyChanged(UObject* Object, FPropertyChangedEvent& PropertyChangedEvent);

private:

	/** Holds the editable text box widget. */
	TSharedPtr<SMultiLineEditableTextBox> EditableTextBox;

	/** Pointer to the text asset that is being edited. */
	UDialogAsset* DialogAsset;
};