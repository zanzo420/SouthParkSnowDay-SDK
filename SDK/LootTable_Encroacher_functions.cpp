#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LootTable_Encroacher.LootTable_Encroacher_C
// (None)

class UClass* ULootTable_Encroacher_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LootTable_Encroacher_C");

	return Clss;
}


// LootTable_Encroacher_C LootTable_Encroacher.Default__LootTable_Encroacher_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULootTable_Encroacher_C* ULootTable_Encroacher_C::GetDefaultObj()
{
	static class ULootTable_Encroacher_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULootTable_Encroacher_C*>(ULootTable_Encroacher_C::StaticClass()->DefaultObject);

	return Default;
}

}


