#pragma once

#include "CoreMinimal.h"
#include "TPDialogGraphNodeBase.h"
#include "TPDialogGraphOption.generated.h"

UCLASS(Blueprintable)
class DIALOGPLUGINRUNTIME_API UTPDialogGraphOption : public UTPDialogGraphNodeBase
{
	GENERATED_BODY()
public:
	UTPDialogGraphOption();

#if WITH_EDITOR

	virtual bool CanCreateConnection(UGenericGraphNode* Other, FText& ErrorMessage) override;

	bool IsHaveEnoughNodes(UGenericGraphNode* Other) const;

	bool IsAcceptableNodeType(UGenericGraphNode* Node);

#endif
};