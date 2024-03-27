#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Loot_Container_Backpack.Loot_Container_Backpack_C
// (Actor)

class UClass* ALoot_Container_Backpack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Loot_Container_Backpack_C");

	return Clss;
}


// Loot_Container_Backpack_C Loot_Container_Backpack.Default__Loot_Container_Backpack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALoot_Container_Backpack_C* ALoot_Container_Backpack_C::GetDefaultObj()
{
	static class ALoot_Container_Backpack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALoot_Container_Backpack_C*>(ALoot_Container_Backpack_C::StaticClass()->DefaultObject);

	return Default;
}

}


