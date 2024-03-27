#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HarpoonWeapon.HarpoonWeapon_C
// (Actor)

class UClass* AHarpoonWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HarpoonWeapon_C");

	return Clss;
}


// HarpoonWeapon_C HarpoonWeapon.Default__HarpoonWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHarpoonWeapon_C* AHarpoonWeapon_C::GetDefaultObj()
{
	static class AHarpoonWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHarpoonWeapon_C*>(AHarpoonWeapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


