#pragma once

#include "CoreMinimal.h"
#include "TPDialogGraphNodeBase.h"
#include "TPDialogGraphNode.generated.h"

UCLASS(Blueprintable)
class DIALOGPLUGINRUNTIME_API UTPDialogGraphNode : public UTPDialogGraphNodeBase
{
	GENERATED_BODY()
public:
	UTPDialogGraphNode();

#if WITH_EDITOR

	virtual bool CanCreateConnection(UGenericGraphNode* Other, FText& ErrorMessage) override;

#endif
};