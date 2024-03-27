#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LootTable_OneHealthItem.LootTable_OneHealthItem_C
// (None)

class UClass* ULootTable_OneHealthItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LootTable_OneHealthItem_C");

	return Clss;
}


// LootTable_OneHealthItem_C LootTable_OneHealthItem.Default__LootTable_OneHealthItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULootTable_OneHealthItem_C* ULootTable_OneHealthItem_C::GetDefaultObj()
{
	static class ULootTable_OneHealthItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULootTable_OneHealthItem_C*>(ULootTable_OneHealthItem_C::StaticClass()->DefaultObject);

	return Default;
}

}


