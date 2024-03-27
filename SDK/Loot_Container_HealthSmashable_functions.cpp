#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Loot_Container_HealthSmashable.Loot_Container_HealthSmashable_C
// (Actor)

class UClass* ALoot_Container_HealthSmashable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Loot_Container_HealthSmashable_C");

	return Clss;
}


// Loot_Container_HealthSmashable_C Loot_Container_HealthSmashable.Default__Loot_Container_HealthSmashable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALoot_Container_HealthSmashable_C* ALoot_Container_HealthSmashable_C::GetDefaultObj()
{
	static class ALoot_Container_HealthSmashable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALoot_Container_HealthSmashable_C*>(ALoot_Container_HealthSmashable_C::StaticClass()->DefaultObject);

	return Default;
}

}


