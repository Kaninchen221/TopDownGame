#pragma once

#include "TPItemInfo.h"

void FTPItemInfo::OnPostDataImport(const UDataTable* InDataTable, const FName InRowName, TArray<FString>& OutCollectedImportProblems)
{
	UE_LOG(LogTemp, Warning, TEXT("OnPostDataImport, InRowName: %s"), *Name.ToString());
}

void FTPItemInfo::OnDataTableChanged(const UDataTable* InDataTable, const FName InRowName) {

	static FString ContextString = "";
	FTPItemInfo* ItemInfo = InDataTable->FindRow<FTPItemInfo>(InRowName, ContextString, true);

	if (!ItemInfo) {
		UE_LOG(LogTemp, Warning, TEXT("Failed found row FTPItemInfo, InRowName: %s"), *Name.ToString());
	}
	else {
		UE_LOG(LogTemp, Log, TEXT("Successful found row FTPItemInfo, InRowName: %s"), *Name.ToString());
	}

}