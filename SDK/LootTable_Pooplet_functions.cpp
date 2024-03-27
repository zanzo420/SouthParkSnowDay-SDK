#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LootTable_Pooplet.LootTable_Pooplet_C
// (None)

class UClass* ULootTable_Pooplet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LootTable_Pooplet_C");

	return Clss;
}


// LootTable_Pooplet_C LootTable_Pooplet.Default__LootTable_Pooplet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULootTable_Pooplet_C* ULootTable_Pooplet_C::GetDefaultObj()
{
	static class ULootTable_Pooplet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULootTable_Pooplet_C*>(ULootTable_Pooplet_C::StaticClass()->DefaultObject);

	return Default;
}

}


