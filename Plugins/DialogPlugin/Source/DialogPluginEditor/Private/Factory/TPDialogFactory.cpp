#include "Factory/TPDialogFactory.h"
#include "TPDialogGraph.h"

UTPDialogFactory::UTPDialogFactory()
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UTPDialogGraph::StaticClass();
}

UObject* UTPDialogFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UObject>(InParent, Class, Name, Flags | RF_Transactional);
}

FText UTPDialogFactory::GetDisplayName() const
{
	return FText::FromString("Dialog Graph");
}

FString UTPDialogFactory::GetDefaultNewAssetName() const
{
	return "Dialogue Graph";
}