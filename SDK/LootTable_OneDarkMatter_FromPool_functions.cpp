#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LootTable_OneDarkMatter_FromPool.LootTable_OneDarkMatter_FromPool_C
// (None)

class UClass* ULootTable_OneDarkMatter_FromPool_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LootTable_OneDarkMatter_FromPool_C");

	return Clss;
}


// LootTable_OneDarkMatter_FromPool_C LootTable_OneDarkMatter_FromPool.Default__LootTable_OneDarkMatter_FromPool_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULootTable_OneDarkMatter_FromPool_C* ULootTable_OneDarkMatter_FromPool_C::GetDefaultObj()
{
	static class ULootTable_OneDarkMatter_FromPool_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULootTable_OneDarkMatter_FromPool_C*>(ULootTable_OneDarkMatter_FromPool_C::StaticClass()->DefaultObject);

	return Default;
}

}


