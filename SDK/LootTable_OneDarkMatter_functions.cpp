#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LootTable_OneDarkMatter.LootTable_OneDarkMatter_C
// (None)

class UClass* ULootTable_OneDarkMatter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LootTable_OneDarkMatter_C");

	return Clss;
}


// LootTable_OneDarkMatter_C LootTable_OneDarkMatter.Default__LootTable_OneDarkMatter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULootTable_OneDarkMatter_C* ULootTable_OneDarkMatter_C::GetDefaultObj()
{
	static class ULootTable_OneDarkMatter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULootTable_OneDarkMatter_C*>(ULootTable_OneDarkMatter_C::StaticClass()->DefaultObject);

	return Default;
}

}


