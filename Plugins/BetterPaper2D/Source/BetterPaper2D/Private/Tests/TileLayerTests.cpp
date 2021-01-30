// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreTypes.h"
#include "Misc/AutomationTest.h"

#include "TileLayer.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FTileLayerTest, "BetterPaper2D.UnitTests.UTileLayer", EAutomationTestFlags::EditorContext | EAutomationTestFlags::SmokeFilter)

bool FTileLayerTest::RunTest(const FString& Parameters)
{

	auto CreateTileLayer = [&]() -> UTileLayer* {
		UTileLayer* TileLayer = NewObject<UTileLayer>();
		TestNotNull("TileLayer can't be null", TileLayer);
		return TileLayer;
	};

	{
		UTileLayer* TileLayer = CreateTileLayer();
	}

	return true;
}

#endif /// WITH_DEV_AUTOMATION_TESTS