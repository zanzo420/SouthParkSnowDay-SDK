#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Loot_Container_DarkMatterChest.Loot_Container_DarkMatterChest_C
// (Actor)

class UClass* ALoot_Container_DarkMatterChest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Loot_Container_DarkMatterChest_C");

	return Clss;
}


// Loot_Container_DarkMatterChest_C Loot_Container_DarkMatterChest.Default__Loot_Container_DarkMatterChest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALoot_Container_DarkMatterChest_C* ALoot_Container_DarkMatterChest_C::GetDefaultObj()
{
	static class ALoot_Container_DarkMatterChest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALoot_Container_DarkMatterChest_C*>(ALoot_Container_DarkMatterChest_C::StaticClass()->DefaultObject);

	return Default;
}

}


