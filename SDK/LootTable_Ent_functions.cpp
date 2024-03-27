#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LootTable_Ent.LootTable_Ent_C
// (None)

class UClass* ULootTable_Ent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LootTable_Ent_C");

	return Clss;
}


// LootTable_Ent_C LootTable_Ent.Default__LootTable_Ent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULootTable_Ent_C* ULootTable_Ent_C::GetDefaultObj()
{
	static class ULootTable_Ent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULootTable_Ent_C*>(ULootTable_Ent_C::StaticClass()->DefaultObject);

	return Default;
}

}


