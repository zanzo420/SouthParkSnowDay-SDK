#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LootTable_NormalSmashableSource.LootTable_NormalSmashableSource_C
// (None)

class UClass* ULootTable_NormalSmashableSource_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LootTable_NormalSmashableSource_C");

	return Clss;
}


// LootTable_NormalSmashableSource_C LootTable_NormalSmashableSource.Default__LootTable_NormalSmashableSource_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULootTable_NormalSmashableSource_C* ULootTable_NormalSmashableSource_C::GetDefaultObj()
{
	static class ULootTable_NormalSmashableSource_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULootTable_NormalSmashableSource_C*>(ULootTable_NormalSmashableSource_C::StaticClass()->DefaultObject);

	return Default;
}

}


