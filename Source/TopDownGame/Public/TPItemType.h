// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class ETPItemType : uint8 {
	Default = 0	UMETA(DisplayName = "Default"),
	Helmet = 1	UMETA(DisplayName = "Helmet"),
	Armor = 2	UMETA(DisplayName = "Armor"),
	Weapon = 3	UMETA(DisplayName = "Weapon"),
	Consumable = 3	UMETA(DisplayName = "Consumable")
};
