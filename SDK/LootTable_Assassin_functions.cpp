#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LootTable_Assassin.LootTable_Assassin_C
// (None)

class UClass* ULootTable_Assassin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LootTable_Assassin_C");

	return Clss;
}


// LootTable_Assassin_C LootTable_Assassin.Default__LootTable_Assassin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULootTable_Assassin_C* ULootTable_Assassin_C::GetDefaultObj()
{
	static class ULootTable_Assassin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULootTable_Assassin_C*>(ULootTable_Assassin_C::StaticClass()->DefaultObject);

	return Default;
}

}


