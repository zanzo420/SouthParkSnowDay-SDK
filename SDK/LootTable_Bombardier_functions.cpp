#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LootTable_Bombardier.LootTable_Bombardier_C
// (None)

class UClass* ULootTable_Bombardier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LootTable_Bombardier_C");

	return Clss;
}


// LootTable_Bombardier_C LootTable_Bombardier.Default__LootTable_Bombardier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULootTable_Bombardier_C* ULootTable_Bombardier_C::GetDefaultObj()
{
	static class ULootTable_Bombardier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULootTable_Bombardier_C*>(ULootTable_Bombardier_C::StaticClass()->DefaultObject);

	return Default;
}

}


