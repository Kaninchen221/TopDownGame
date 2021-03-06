#pragma once

#include "CoreMinimal.h"
#include "DialogSystem/TPDialogGraphNodeBase.h"
#include "TPDialogGraphNode.generated.h"

UCLASS(Blueprintable)
class TOPDOWNGAME_API UTPDialogGraphNode : public UTPDialogGraphNodeBase
{
	GENERATED_BODY()
public:
	UTPDialogGraphNode();

#if WITH_EDITOR

	virtual bool CanCreateConnection(UGenericGraphNode* Other, FText& ErrorMessage) override;

#endif
};