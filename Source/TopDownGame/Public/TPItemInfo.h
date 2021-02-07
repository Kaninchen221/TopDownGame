#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TPItemInfo.generated.h"


UCLASS(BlueprintType)
class TOPDOWNGAME_API UTPItemInfo : public UObject {
	
	GENERATED_BODY()
	
public:

	UTPItemInfo();
	~UTPItemInfo() noexcept = default;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ItemInfo")
	int32 ID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ItemInfo")
	FString Name;

	UFUNCTION(BlueprintCallable)
	void GetDataFromDatabase();

};