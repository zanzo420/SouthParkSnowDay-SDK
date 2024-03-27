#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LootTable_GeneralDarkMatterUnit.LootTable_GeneralDarkMatterUnit_C
// (None)

class UClass* ULootTable_GeneralDarkMatterUnit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LootTable_GeneralDarkMatterUnit_C");

	return Clss;
}


// LootTable_GeneralDarkMatterUnit_C LootTable_GeneralDarkMatterUnit.Default__LootTable_GeneralDarkMatterUnit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULootTable_GeneralDarkMatterUnit_C* ULootTable_GeneralDarkMatterUnit_C::GetDefaultObj()
{
	static class ULootTable_GeneralDarkMatterUnit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULootTable_GeneralDarkMatterUnit_C*>(ULootTable_GeneralDarkMatterUnit_C::StaticClass()->DefaultObject);

	return Default;
}

}


