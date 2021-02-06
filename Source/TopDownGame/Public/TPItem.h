#pragma once

#include "CoreMinimal.h"
#include "TPItem.generated.h"


USTRUCT(BlueprintType)
struct TOPDOWNGAME_API FTPItem {
	
	GENERATED_BODY()
	
public:

	FTPItem() = default;
	~FTPItem() noexcept = default;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	int32 Id;

};