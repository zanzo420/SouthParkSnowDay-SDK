#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LootTable_DarkMatterPoolFrobbable.LootTable_DarkMatterPoolFrobbable_C
// (None)

class UClass* ULootTable_DarkMatterPoolFrobbable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LootTable_DarkMatterPoolFrobbable_C");

	return Clss;
}


// LootTable_DarkMatterPoolFrobbable_C LootTable_DarkMatterPoolFrobbable.Default__LootTable_DarkMatterPoolFrobbable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULootTable_DarkMatterPoolFrobbable_C* ULootTable_DarkMatterPoolFrobbable_C::GetDefaultObj()
{
	static class ULootTable_DarkMatterPoolFrobbable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULootTable_DarkMatterPoolFrobbable_C*>(ULootTable_DarkMatterPoolFrobbable_C::StaticClass()->DefaultObject);

	return Default;
}

}


