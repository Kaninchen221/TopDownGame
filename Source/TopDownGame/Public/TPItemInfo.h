#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TPItemInfo.generated.h"


USTRUCT(BlueprintType)
struct TOPDOWNGAME_API FTPItemInfo : public FTableRowBase {
	
	GENERATED_BODY()
	
public:

	FTPItemInfo();
	~FTPItemInfo() noexcept = default;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ItemInfo")
	int32 ID;

};