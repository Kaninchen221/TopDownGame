// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StateBase.generated.h"

/**
 * 
 */
UCLASS()
class TOPDOWNGAME_API UStateBase : public UObject
{
	GENERATED_BODY()

public:

	UStateBase() = default;

	UFUNCTION(BlueprintCallable)
	virtual void SetControledObject(UObject* Object) {}

	UFUNCTION(BlueprintCallable)
	virtual void Enter() {}

	UFUNCTION(BlueprintCallable)
	virtual void Update() {}

	UFUNCTION(BlueprintCallable)
	virtual void Tick(float DeltaSeconds) {}

	UFUNCTION(BlueprintCallable)
	virtual void Exit() {}

};
