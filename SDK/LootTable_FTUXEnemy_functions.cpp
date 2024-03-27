#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LootTable_FTUXEnemy.LootTable_FTUXEnemy_C
// (None)

class UClass* ULootTable_FTUXEnemy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LootTable_FTUXEnemy_C");

	return Clss;
}


// LootTable_FTUXEnemy_C LootTable_FTUXEnemy.Default__LootTable_FTUXEnemy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULootTable_FTUXEnemy_C* ULootTable_FTUXEnemy_C::GetDefaultObj()
{
	static class ULootTable_FTUXEnemy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULootTable_FTUXEnemy_C*>(ULootTable_FTUXEnemy_C::StaticClass()->DefaultObject);

	return Default;
}

}


