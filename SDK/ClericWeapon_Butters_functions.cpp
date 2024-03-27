#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ClericWeapon_Butters.ClericWeapon_Butters_C
// (Actor)

class UClass* AClericWeapon_Butters_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClericWeapon_Butters_C");

	return Clss;
}


// ClericWeapon_Butters_C ClericWeapon_Butters.Default__ClericWeapon_Butters_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AClericWeapon_Butters_C* AClericWeapon_Butters_C::GetDefaultObj()
{
	static class AClericWeapon_Butters_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AClericWeapon_Butters_C*>(AClericWeapon_Butters_C::StaticClass()->DefaultObject);

	return Default;
}

}


