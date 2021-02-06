#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TPItemInfo.generated.h"


USTRUCT(BlueprintType)
struct TOPDOWNGAME_API FTPItemInfo : public FTableRowBase {
	
	GENERATED_BODY()
	
public:

	FTPItemInfo() = default;
	~FTPItemInfo() noexcept = default;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ItemInfo")
	FText Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ItemInfo")
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ItemInfo")
	FString SpriteReference;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ItemInfo")
	int32 BaseInGameValue;

	virtual void OnPostDataImport(const UDataTable* InDataTable, const FName InRowName, TArray<FString>& OutCollectedImportProblems) override;

	virtual void OnDataTableChanged(const UDataTable* InDataTable, const FName InRowName) override;
};