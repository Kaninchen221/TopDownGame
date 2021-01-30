// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreTypes.h"
#include "Misc/AutomationTest.h"

#include "TileInfo.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FTileInfoTest, "BetterPaper2D.UnitTests.FTileInfo", EAutomationTestFlags::EditorContext | EAutomationTestFlags::SmokeFilter)

bool FTileInfoTest::RunTest(const FString& Parameters)
{

	{
		FTileInfo TileInfo;
	}

	{
		FTileInfo FirstTileInfo;
		FTileInfo SecondTileInfo;

		bool bCompareResult = FirstTileInfo == SecondTileInfo;
		TestTrue("First and Second TileInfo must be equal", bCompareResult);

		FirstTileInfo.IndexInTileSet = 212;
		bCompareResult = FirstTileInfo == SecondTileInfo;
		TestFalse("First and Second TileInfo must be not equal", bCompareResult);

		FirstTileInfo.IndexInTileSet = SecondTileInfo.IndexInTileSet;
		SecondTileInfo.TileSet = (UPaperTileSet*)0x32;
		bCompareResult = FirstTileInfo == SecondTileInfo;
		TestFalse("First and Second TileInfo must be not equal", bCompareResult);
	}

	{
		FTileInfo FirstTileInfo;
		FTileInfo SecondTileInfo;

		bool bNotEqualResult = FirstTileInfo != SecondTileInfo;
		TestFalse("First and Second must be equal", bNotEqualResult);

		FirstTileInfo.IndexInTileSet = 212;
		bNotEqualResult = FirstTileInfo != SecondTileInfo;
		TestTrue("First and Second TileInfo must be not equal", bNotEqualResult);

		FirstTileInfo.IndexInTileSet = SecondTileInfo.IndexInTileSet;
		SecondTileInfo.TileSet = (UPaperTileSet*)0x32;
		bNotEqualResult = FirstTileInfo != SecondTileInfo;
		TestTrue("First and Second TileInfo must be not equal", bNotEqualResult);
	}

	{
		FTileInfo TileInfo;

		bool bIsValid = TileInfo.IsValid();
		TestFalse("IsValid must return false", bIsValid);
	}

	return true;
}

#endif /// WITH_DEV_AUTOMATION_TESTS