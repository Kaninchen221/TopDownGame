#pragma once

#include "CoreMinimal.h"
#include "TPItemsInfoTable.generated.h"

class UTPItemInfo;

UCLASS(BlueprintType)
class TOPDOWNGAME_API UTPItemsInfoTable : public UObject {
	
	GENERATED_BODY()
	
protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="ItemsInfoTable")
	TArray<UTPItemInfo*> ItemsInfo;

public:

	UTPItemsInfoTable() = default;
	~UTPItemsInfoTable() noexcept = default;

	void LoadItemsInfoFromDatabase();

	const TArray<UTPItemInfo*> GetItemsInfo() const;

};