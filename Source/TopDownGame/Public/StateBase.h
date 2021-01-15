// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StateBase.generated.h"

/**
 * 
 */
UCLASS(Category = "State", ClassGroup = "States", Blueprintable)
class TOPDOWNGAME_API UStateBase : public UObject
{
	GENERATED_BODY()

public:

	UStateBase() = default;

	UFUNCTION(Category = "State", BlueprintCallable)
	virtual void SetControledObject(UObject* Object) {}

	UFUNCTION(Category = "State", BlueprintCallable)
	virtual void Enter() {}

	UFUNCTION(Category = "State", BlueprintCallable)
	virtual void Update() {}

	UFUNCTION(Category = "State", BlueprintCallable)
	virtual void Tick(float DeltaSeconds) {}

	UFUNCTION(Category = "State", BlueprintCallable)
	virtual void Exit() {}

};
