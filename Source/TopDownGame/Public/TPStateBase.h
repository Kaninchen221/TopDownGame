// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TPStateBase.generated.h"

/**
 * 
 */
UCLASS(Category = "State", ClassGroup = "States", Blueprintable)
class TOPDOWNGAME_API UTPStateBase : public UObject
{
	GENERATED_BODY()

public:

	UTPStateBase() = default;

	UFUNCTION(Category = "State", BlueprintCallable, BlueprintImplementableEvent, meta = (DisplayName = "OnSetControledObject"))
	void OnSetControledObject(UObject* Object);

	UFUNCTION(Category = "State", BlueprintCallable, BlueprintImplementableEvent, meta = (DisplayName = "OnEnter"))
	void OnEnter();

	UFUNCTION(Category = "State", BlueprintCallable, BlueprintImplementableEvent, meta = (DisplayName = "OnUpdate"))
	void OnUpdate();

	UFUNCTION(Category = "State", BlueprintCallable, BlueprintImplementableEvent, meta = (DisplayName = "OnTick"))
	void OnTick(float DeltaSeconds);

	UFUNCTION(Category = "State", BlueprintCallable, BlueprintImplementableEvent, meta = (DisplayName = "OnExit"))
	void OnExit();

};
