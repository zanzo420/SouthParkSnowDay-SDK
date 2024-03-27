#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LootTable_CartmanDecoy.LootTable_CartmanDecoy_C
// (None)

class UClass* ULootTable_CartmanDecoy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LootTable_CartmanDecoy_C");

	return Clss;
}


// LootTable_CartmanDecoy_C LootTable_CartmanDecoy.Default__LootTable_CartmanDecoy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULootTable_CartmanDecoy_C* ULootTable_CartmanDecoy_C::GetDefaultObj()
{
	static class ULootTable_CartmanDecoy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULootTable_CartmanDecoy_C*>(ULootTable_CartmanDecoy_C::StaticClass()->DefaultObject);

	return Default;
}

}


