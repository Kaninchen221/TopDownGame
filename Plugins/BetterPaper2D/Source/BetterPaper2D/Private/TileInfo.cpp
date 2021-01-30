// Fill out your copyright notice in the Description page of Project Settings.


#include "TileInfo.h"

FTileInfo::FTileInfo()
	: TileSet(nullptr),
	IndexInTileSet(INDEX_NONE)
{
}

bool FTileInfo::operator==(const FTileInfo& Other) const
{
	bool bTileSetsAreEqual = this->TileSet == Other.TileSet;
	bool bIndexesAreEqual = this->IndexInTileSet == Other.IndexInTileSet;

	return bTileSetsAreEqual && bIndexesAreEqual;
}

bool FTileInfo::operator!=(const FTileInfo& Other) const
{
	return !(*this == Other);
}

bool FTileInfo::IsValid() const noexcept
{
	bool bIndexIsValid = IndexInTileSet != INDEX_NONE;
	bool bTileSetIsValid = TileSet != nullptr;

	return bIndexIsValid && bTileSetIsValid;
}