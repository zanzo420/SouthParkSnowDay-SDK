#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LootTable_TPonly.LootTable_TPOnly_C
// (None)

class UClass* ULootTable_TPOnly_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LootTable_TPOnly_C");

	return Clss;
}


// LootTable_TPOnly_C LootTable_TPonly.Default__LootTable_TPOnly_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULootTable_TPOnly_C* ULootTable_TPOnly_C::GetDefaultObj()
{
	static class ULootTable_TPOnly_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULootTable_TPOnly_C*>(ULootTable_TPOnly_C::StaticClass()->DefaultObject);

	return Default;
}

}


