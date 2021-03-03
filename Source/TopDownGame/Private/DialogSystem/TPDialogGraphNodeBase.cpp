#include "DialogSystem/TPDialogGraphNodeBase.h"
#include "DialogSystem/TPDialogGraph.h"

UTPDialogGraphNodeBase::UTPDialogGraphNodeBase()
{

	#if WITH_EDITORONLY_DATA

		CompatibleGraphType = UTPDialogGraph::StaticClass();

		ContextMenuName = FText::FromString("Dialog Node");

	#endif

}

#if WITH_EDITOR

FLinearColor UTPDialogGraphNodeBase::GetBackgroundColor() const
{
	return FLinearColor::Black;
}

#endif