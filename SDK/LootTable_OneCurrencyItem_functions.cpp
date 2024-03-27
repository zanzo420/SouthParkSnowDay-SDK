#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LootTable_OneCurrencyItem.LootTable_OneCurrencyItem_C
// (None)

class UClass* ULootTable_OneCurrencyItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LootTable_OneCurrencyItem_C");

	return Clss;
}


// LootTable_OneCurrencyItem_C LootTable_OneCurrencyItem.Default__LootTable_OneCurrencyItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULootTable_OneCurrencyItem_C* ULootTable_OneCurrencyItem_C::GetDefaultObj()
{
	static class ULootTable_OneCurrencyItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULootTable_OneCurrencyItem_C*>(ULootTable_OneCurrencyItem_C::StaticClass()->DefaultObject);

	return Default;
}

}


