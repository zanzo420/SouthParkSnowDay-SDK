#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LootTable_Brute.LootTable_Brute_C
// (None)

class UClass* ULootTable_Brute_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LootTable_Brute_C");

	return Clss;
}


// LootTable_Brute_C LootTable_Brute.Default__LootTable_Brute_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULootTable_Brute_C* ULootTable_Brute_C::GetDefaultObj()
{
	static class ULootTable_Brute_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULootTable_Brute_C*>(ULootTable_Brute_C::StaticClass()->DefaultObject);

	return Default;
}

}


