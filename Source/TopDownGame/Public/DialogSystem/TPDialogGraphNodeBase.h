#pragma once

#include "CoreMinimal.h"
#include "GenericGraphNode.h"
#include "TPDialogGraphNodeBase.generated.h"

UCLASS(NotBlueprintable, Abstract)
class TOPDOWNGAME_API UTPDialogGraphNodeBase : public UGenericGraphNode
{
	GENERATED_BODY()
public:
	UTPDialogGraphNodeBase();

#if WITH_EDITOR

	virtual FLinearColor GetBackgroundColor() const override;

#endif
};