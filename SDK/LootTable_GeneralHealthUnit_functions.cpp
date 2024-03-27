#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LootTable_GeneralHealthUnit.LootTable_GeneralHealthUnit_C
// (None)

class UClass* ULootTable_GeneralHealthUnit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LootTable_GeneralHealthUnit_C");

	return Clss;
}


// LootTable_GeneralHealthUnit_C LootTable_GeneralHealthUnit.Default__LootTable_GeneralHealthUnit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULootTable_GeneralHealthUnit_C* ULootTable_GeneralHealthUnit_C::GetDefaultObj()
{
	static class ULootTable_GeneralHealthUnit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULootTable_GeneralHealthUnit_C*>(ULootTable_GeneralHealthUnit_C::StaticClass()->DefaultObject);

	return Default;
}

}


