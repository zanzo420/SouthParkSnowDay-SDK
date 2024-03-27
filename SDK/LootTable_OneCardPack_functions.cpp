#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LootTable_OneCardPack.LootTable_OneCardPack_C
// (None)

class UClass* ULootTable_OneCardPack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LootTable_OneCardPack_C");

	return Clss;
}


// LootTable_OneCardPack_C LootTable_OneCardPack.Default__LootTable_OneCardPack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULootTable_OneCardPack_C* ULootTable_OneCardPack_C::GetDefaultObj()
{
	static class ULootTable_OneCardPack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULootTable_OneCardPack_C*>(ULootTable_OneCardPack_C::StaticClass()->DefaultObject);

	return Default;
}

}


