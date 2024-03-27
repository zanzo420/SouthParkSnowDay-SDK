#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LootTable_GeneralCurrencyUnit.LootTable_GeneralCurrencyUnit_C
// (None)

class UClass* ULootTable_GeneralCurrencyUnit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LootTable_GeneralCurrencyUnit_C");

	return Clss;
}


// LootTable_GeneralCurrencyUnit_C LootTable_GeneralCurrencyUnit.Default__LootTable_GeneralCurrencyUnit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULootTable_GeneralCurrencyUnit_C* ULootTable_GeneralCurrencyUnit_C::GetDefaultObj()
{
	static class ULootTable_GeneralCurrencyUnit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULootTable_GeneralCurrencyUnit_C*>(ULootTable_GeneralCurrencyUnit_C::StaticClass()->DefaultObject);

	return Default;
}

}


