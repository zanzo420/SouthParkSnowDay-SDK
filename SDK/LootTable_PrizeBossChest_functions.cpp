#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LootTable_PrizeBossChest.LootTable_PrizeBossChest_C
// (None)

class UClass* ULootTable_PrizeBossChest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LootTable_PrizeBossChest_C");

	return Clss;
}


// LootTable_PrizeBossChest_C LootTable_PrizeBossChest.Default__LootTable_PrizeBossChest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULootTable_PrizeBossChest_C* ULootTable_PrizeBossChest_C::GetDefaultObj()
{
	static class ULootTable_PrizeBossChest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULootTable_PrizeBossChest_C*>(ULootTable_PrizeBossChest_C::StaticClass()->DefaultObject);

	return Default;
}

}


