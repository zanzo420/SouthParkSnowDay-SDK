#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeaponStrafeCam.WeaponStrafeCam_C
// (None)

class UClass* UWeaponStrafeCam_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponStrafeCam_C");

	return Clss;
}


// WeaponStrafeCam_C WeaponStrafeCam.Default__WeaponStrafeCam_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWeaponStrafeCam_C* UWeaponStrafeCam_C::GetDefaultObj()
{
	static class UWeaponStrafeCam_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponStrafeCam_C*>(UWeaponStrafeCam_C::StaticClass()->DefaultObject);

	return Default;
}

}


