#pragma once

#include "CoreMinimal.h"
#include "TPItemType.h"
#include "TPItemInfo.generated.h"

UCLASS(BlueprintType)
class TOPDOWNGAME_API UTPItemInfo : public UObject {

	GENERATED_BODY()

public:

	UTPItemInfo() = default;
	~UTPItemInfo() noexcept = default;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "ItemInfo")
	int32 Id;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "ItemInfo")
	FString Name;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "ItemInfo")
	FString SpriteAssetReference;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "ItemInfo")
	int32 DefaultInGameValue;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "ItemInfo")
	ETPItemType InGameType;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "ItemInfo")
	int32 WidthSizeInBackpack;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "ItemInfo")
	int32 HeightSizeInBackpack;

};