#include "TPItemInfo.h"
#include "SQLiteDatabase.h"

UTPItemInfo::UTPItemInfo() {

}

void UTPItemInfo::GetDataFromDatabase()
{
	FString dbName = TEXT("TopDownGame");

	if (!USQLiteDatabase::IsDatabaseRegistered(dbName))
	{
		USQLiteDatabase::RegisterDatabase(dbName, "Databases/TopDownGame.db", true);
		UE_LOG(LogTemp, Log, TEXT("RegisterDatabase"));
	}

	FString Query = FString("SELECT Name FROM ItemInfo WHERE ID=") + FString::FromInt(ID);
	UE_LOG(LogTemp, Log, TEXT("%s"), *Query);
	bool didPopulate = USQLiteDatabase::GetDataIntoObject(dbName, Query, this);

	if (didPopulate) {
		UE_LOG(LogTemp, Log, TEXT("Populated. ID: %i"), ID);
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("Not Populated"));
	}
}