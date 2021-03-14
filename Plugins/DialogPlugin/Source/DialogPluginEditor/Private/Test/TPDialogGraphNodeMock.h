#pragma once

#include "TPDialogGraphNode.h"
#include "TPDialogGraphNodeMock.generated.h"

UCLASS()
class UTPDialogGraphNodeMock : public UTPDialogGraphNode
{
	GENERATED_BODY()

public:

#if WITH_EDITOR

	inline virtual bool CanCreateConnection(UGenericGraphNode* Other, FText& ErrorMessage) override;

#endif WITH_EDITOR

	inline int32 GetCanCreateConnectionCallCount() const;

private:

	int32 CanCreateConnectionCallCount = 0;

};

#if WITH_EDITOR

bool UTPDialogGraphNodeMock::CanCreateConnection(UGenericGraphNode* Other, FText& ErrorMessage)
{
	CanCreateConnectionCallCount++;

	return UTPDialogGraphNode::CanCreateConnection(Other, ErrorMessage);
}

#endif WITH_EDITOR

int32 UTPDialogGraphNodeMock::GetCanCreateConnectionCallCount() const
{
	return CanCreateConnectionCallCount;
}