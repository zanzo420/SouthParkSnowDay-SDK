#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LootTable_OneToiletPaper.LootTable_OneToiletPaper_C
// (None)

class UClass* ULootTable_OneToiletPaper_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LootTable_OneToiletPaper_C");

	return Clss;
}


// LootTable_OneToiletPaper_C LootTable_OneToiletPaper.Default__LootTable_OneToiletPaper_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULootTable_OneToiletPaper_C* ULootTable_OneToiletPaper_C::GetDefaultObj()
{
	static class ULootTable_OneToiletPaper_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULootTable_OneToiletPaper_C*>(ULootTable_OneToiletPaper_C::StaticClass()->DefaultObject);

	return Default;
}

}


