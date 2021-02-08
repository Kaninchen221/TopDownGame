#pragma once


class TOPDOWNGAME_API FTPDatabaseInfo {

public:

	static FString GetGameDatabaseRelativePath() { return TEXT("Databases/TopDownGame.db"); }

	static FString GetGameDatabaseName() { return TEXT("TopDownGame"); }

	static bool IsGameDatabaseRegistered();

	static void RegisterGameDatabase();

};