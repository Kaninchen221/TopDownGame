// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "TileFlags.h"

#include "TileInfo.generated.h"

class UPaperTileSet;

/**
 * 
 */
//USTRUCT(BlueprintType, meta = (HasNativeBreak = "Paper2D.TileMapBlueprintLibrary.BreakTile", HasNativeMake = "Paper2D.TileMapBlueprintLibrary.MakeTile"))
USTRUCT(BlueprintType)
struct BETTERPAPER2D_API FTileInfo
{
	GENERATED_USTRUCT_BODY()

	FTileInfo();

	UPROPERTY(EditAnywhere, Category = Sprite)
	UPaperTileSet* TileSet;

	UPROPERTY(EditAnywhere, Category = Sprite)
	int32 IndexInTileSet;

	bool operator == (const FTileInfo& Other) const noexcept;

	bool operator != (const FTileInfo& Other) const noexcept;

	bool IsValid() const noexcept;
};
