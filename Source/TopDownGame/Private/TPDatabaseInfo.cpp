#pragma once

#include "TPDatabaseInfo.h"
#include "SQLiteDatabase.h"

bool FTPDatabaseInfo::IsGameDatabaseRegistered()
{
	return USQLiteDatabase::IsDatabaseRegistered(GetGameDatabaseName());
}

void FTPDatabaseInfo::RegisterGameDatabase()
{
	if (!IsGameDatabaseRegistered())
	{
		USQLiteDatabase::RegisterDatabase(GetGameDatabaseName(), GetGameDatabaseRelativePath(), true);
		UE_LOG(LogTemp, Log, TEXT("Register GameDatabase"));
	}
}
