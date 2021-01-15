// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class ECharacterDirection : uint8 {
	UP = 0		UMETA(DisplayName = "UP"),
	DOWN = 1	UMETA(DisplayName = "DOWN"),
	LEFT = 2	UMETA(DisplayName = "LEFT"),
	RIGHT = 3	UMETA(DisplayName = "RIGHT"),
};
