#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LootTable_NormalFrobbable.LootTable_NormalFrobbable_C
// (None)

class UClass* ULootTable_NormalFrobbable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LootTable_NormalFrobbable_C");

	return Clss;
}


// LootTable_NormalFrobbable_C LootTable_NormalFrobbable.Default__LootTable_NormalFrobbable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULootTable_NormalFrobbable_C* ULootTable_NormalFrobbable_C::GetDefaultObj()
{
	static class ULootTable_NormalFrobbable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULootTable_NormalFrobbable_C*>(ULootTable_NormalFrobbable_C::StaticClass()->DefaultObject);

	return Default;
}

}


