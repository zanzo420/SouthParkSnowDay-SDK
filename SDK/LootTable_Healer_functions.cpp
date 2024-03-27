#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LootTable_Healer.LootTable_Healer_C
// (None)

class UClass* ULootTable_Healer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LootTable_Healer_C");

	return Clss;
}


// LootTable_Healer_C LootTable_Healer.Default__LootTable_Healer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULootTable_Healer_C* ULootTable_Healer_C::GetDefaultObj()
{
	static class ULootTable_Healer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULootTable_Healer_C*>(ULootTable_Healer_C::StaticClass()->DefaultObject);

	return Default;
}

}


