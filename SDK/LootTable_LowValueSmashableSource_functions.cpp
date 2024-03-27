#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LootTable_LowValueSmashableSource.LootTable_LowValueSmashableSource_C
// (None)

class UClass* ULootTable_LowValueSmashableSource_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LootTable_LowValueSmashableSource_C");

	return Clss;
}


// LootTable_LowValueSmashableSource_C LootTable_LowValueSmashableSource.Default__LootTable_LowValueSmashableSource_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULootTable_LowValueSmashableSource_C* ULootTable_LowValueSmashableSource_C::GetDefaultObj()
{
	static class ULootTable_LowValueSmashableSource_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULootTable_LowValueSmashableSource_C*>(ULootTable_LowValueSmashableSource_C::StaticClass()->DefaultObject);

	return Default;
}

}


