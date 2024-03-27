#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LootTable_DarkMatterFrobbable.LootTable_DarkMatterFrobbable_C
// (None)

class UClass* ULootTable_DarkMatterFrobbable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LootTable_DarkMatterFrobbable_C");

	return Clss;
}


// LootTable_DarkMatterFrobbable_C LootTable_DarkMatterFrobbable.Default__LootTable_DarkMatterFrobbable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULootTable_DarkMatterFrobbable_C* ULootTable_DarkMatterFrobbable_C::GetDefaultObj()
{
	static class ULootTable_DarkMatterFrobbable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULootTable_DarkMatterFrobbable_C*>(ULootTable_DarkMatterFrobbable_C::StaticClass()->DefaultObject);

	return Default;
}

}


