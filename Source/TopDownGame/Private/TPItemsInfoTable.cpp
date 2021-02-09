#include "TPItemsInfoTable.h"
#include "TPDatabaseInfo.h"
#include "TPItemInfo.h"
#include "SQLiteDatabase.h"

//void UTPItemsInfoTable::GetDataFromDatabase()
//{
	//FString dbName = TEXT("TopDownGame");
	//
	//if (!USQLiteDatabase::IsDatabaseRegistered(dbName))
	//{
	//	USQLiteDatabase::RegisterDatabase(dbName, "Databases/TopDownGame.db", true);
	//	UE_LOG(LogTemp, Log, TEXT("RegisterDatabase"));
	//}
	//
	//FString Query = FString("SELECT Name FROM ItemInfo WHERE ID=") + FString::FromInt(ID);
	//UE_LOG(LogTemp, Log, TEXT("%s"), *Query);
	//bool didPopulate = USQLiteDatabase::GetDataIntoObject(dbName, Query, this);
	//
	//if (didPopulate) {
	//	UE_LOG(LogTemp, Log, TEXT("Populated. ID: %i"), ID);
	//}
	//else {
	//	UE_LOG(LogTemp, Warning, TEXT("Not Populated"));
	//}
//}

void UTPItemsInfoTable::LoadItemsInfoFromDatabase()
{
	//USQLiteDatabase::GetDataIntoObject(dbName, Query, this);
	//SELECT COUNT(ItemsInfo) FROM table_name;

	if (FTPDatabaseInfo::IsGameDatabaseRegistered()) {

		FString DatabaseName = FTPDatabaseInfo::GetGameDatabaseName();
		int32 Id = 0;
		bool bPopulated = true;

		while (bPopulated) 
		{
			FString Query = FString("SELECT * FROM ItemsInfo WHERE Id=") + FString::FromInt(Id) + FString(";");
			UE_LOG(LogTemp, Log, TEXT("Query: %s"), *Query);
			Id++;

			UTPItemInfo* ItemInfo = NewObject<UTPItemInfo>();
			bPopulated = USQLiteDatabase::GetDataIntoObject(DatabaseName, Query, ItemInfo);
			if (bPopulated) {
				ItemsInfo.Add(ItemInfo);
			}
		}
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("Game Database is not registered"));
	}

}

const TArray<UTPItemInfo*> UTPItemsInfoTable::GetItemsInfo() const
{
	return ItemsInfo;
}
