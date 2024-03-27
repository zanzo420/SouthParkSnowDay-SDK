#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LootTableGlobals.LootTableGlobals_C
// (None)

class UClass* ULootTableGlobals_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LootTableGlobals_C");

	return Clss;
}


// LootTableGlobals_C LootTableGlobals.Default__LootTableGlobals_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULootTableGlobals_C* ULootTableGlobals_C::GetDefaultObj()
{
	static class ULootTableGlobals_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULootTableGlobals_C*>(ULootTableGlobals_C::StaticClass()->DefaultObject);

	return Default;
}

}


