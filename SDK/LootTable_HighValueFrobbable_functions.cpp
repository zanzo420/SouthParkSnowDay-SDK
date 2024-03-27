#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LootTable_HighValueFrobbable.LootTable_HighValueFrobbable_C
// (None)

class UClass* ULootTable_HighValueFrobbable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LootTable_HighValueFrobbable_C");

	return Clss;
}


// LootTable_HighValueFrobbable_C LootTable_HighValueFrobbable.Default__LootTable_HighValueFrobbable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULootTable_HighValueFrobbable_C* ULootTable_HighValueFrobbable_C::GetDefaultObj()
{
	static class ULootTable_HighValueFrobbable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULootTable_HighValueFrobbable_C*>(ULootTable_HighValueFrobbable_C::StaticClass()->DefaultObject);

	return Default;
}

}


