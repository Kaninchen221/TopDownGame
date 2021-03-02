#pragma once

#include "CoreMinimal.h"
#include "GenericGraphNode.h"
#include "TPDialogGraphNode.generated.h"

UCLASS(Blueprintable)
class TOPDOWNGAME_API UTPDialogGraphNode : public UGenericGraphNode
{
	GENERATED_BODY()
public:
	UTPDialogGraphNode();

#if WITH_EDITOR

	virtual FLinearColor GetBackgroundColor() const override;

#endif
};