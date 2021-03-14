#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "TPDialogFactory.generated.h"

UCLASS()
class UTPDialogFactory : public UFactory
{
	GENERATED_BODY()

public:
	UTPDialogFactory();

	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	virtual FText GetDisplayName() const override;
	virtual FString GetDefaultNewAssetName() const override;
};