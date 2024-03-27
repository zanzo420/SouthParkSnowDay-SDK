#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LootTable_StanCannonBomb.LootTable_StanCannonBomb_C
// (None)

class UClass* ULootTable_StanCannonBomb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LootTable_StanCannonBomb_C");

	return Clss;
}


// LootTable_StanCannonBomb_C LootTable_StanCannonBomb.Default__LootTable_StanCannonBomb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULootTable_StanCannonBomb_C* ULootTable_StanCannonBomb_C::GetDefaultObj()
{
	static class ULootTable_StanCannonBomb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULootTable_StanCannonBomb_C*>(ULootTable_StanCannonBomb_C::StaticClass()->DefaultObject);

	return Default;
}

}


