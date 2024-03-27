#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LootTable_Swarmer.LootTable_Swarmer_C
// (None)

class UClass* ULootTable_Swarmer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LootTable_Swarmer_C");

	return Clss;
}


// LootTable_Swarmer_C LootTable_Swarmer.Default__LootTable_Swarmer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULootTable_Swarmer_C* ULootTable_Swarmer_C::GetDefaultObj()
{
	static class ULootTable_Swarmer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULootTable_Swarmer_C*>(ULootTable_Swarmer_C::StaticClass()->DefaultObject);

	return Default;
}

}


