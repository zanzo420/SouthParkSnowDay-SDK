#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LootTable_HealthOnlySmashableSource.LootTable_HealthOnlySmashableSource_C
// (None)

class UClass* ULootTable_HealthOnlySmashableSource_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LootTable_HealthOnlySmashableSource_C");

	return Clss;
}


// LootTable_HealthOnlySmashableSource_C LootTable_HealthOnlySmashableSource.Default__LootTable_HealthOnlySmashableSource_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULootTable_HealthOnlySmashableSource_C* ULootTable_HealthOnlySmashableSource_C::GetDefaultObj()
{
	static class ULootTable_HealthOnlySmashableSource_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULootTable_HealthOnlySmashableSource_C*>(ULootTable_HealthOnlySmashableSource_C::StaticClass()->DefaultObject);

	return Default;
}

}


