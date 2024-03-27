#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LootTable_Chaff.LootTable_Chaff_C
// (None)

class UClass* ULootTable_Chaff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LootTable_Chaff_C");

	return Clss;
}


// LootTable_Chaff_C LootTable_Chaff.Default__LootTable_Chaff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULootTable_Chaff_C* ULootTable_Chaff_C::GetDefaultObj()
{
	static class ULootTable_Chaff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULootTable_Chaff_C*>(ULootTable_Chaff_C::StaticClass()->DefaultObject);

	return Default;
}

}


