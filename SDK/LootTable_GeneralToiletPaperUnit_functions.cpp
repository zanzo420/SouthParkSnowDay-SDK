#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LootTable_GeneralToiletPaperUnit.LootTable_GeneralToiletPaperUnit_C
// (None)

class UClass* ULootTable_GeneralToiletPaperUnit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LootTable_GeneralToiletPaperUnit_C");

	return Clss;
}


// LootTable_GeneralToiletPaperUnit_C LootTable_GeneralToiletPaperUnit.Default__LootTable_GeneralToiletPaperUnit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULootTable_GeneralToiletPaperUnit_C* ULootTable_GeneralToiletPaperUnit_C::GetDefaultObj()
{
	static class ULootTable_GeneralToiletPaperUnit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULootTable_GeneralToiletPaperUnit_C*>(ULootTable_GeneralToiletPaperUnit_C::StaticClass()->DefaultObject);

	return Default;
}

}


