#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LootTable_GrenadeHealthItem.LootTable_GrenadeHealthItem_C
// (None)

class UClass* ULootTable_GrenadeHealthItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LootTable_GrenadeHealthItem_C");

	return Clss;
}


// LootTable_GrenadeHealthItem_C LootTable_GrenadeHealthItem.Default__LootTable_GrenadeHealthItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULootTable_GrenadeHealthItem_C* ULootTable_GrenadeHealthItem_C::GetDefaultObj()
{
	static class ULootTable_GrenadeHealthItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULootTable_GrenadeHealthItem_C*>(ULootTable_GrenadeHealthItem_C::StaticClass()->DefaultObject);

	return Default;
}

}


