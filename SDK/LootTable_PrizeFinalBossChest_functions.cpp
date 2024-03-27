#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LootTable_PrizeFinalBossChest.LootTable_PrizeFinalBossChest_C
// (None)

class UClass* ULootTable_PrizeFinalBossChest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LootTable_PrizeFinalBossChest_C");

	return Clss;
}


// LootTable_PrizeFinalBossChest_C LootTable_PrizeFinalBossChest.Default__LootTable_PrizeFinalBossChest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULootTable_PrizeFinalBossChest_C* ULootTable_PrizeFinalBossChest_C::GetDefaultObj()
{
	static class ULootTable_PrizeFinalBossChest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULootTable_PrizeFinalBossChest_C*>(ULootTable_PrizeFinalBossChest_C::StaticClass()->DefaultObject);

	return Default;
}

}


