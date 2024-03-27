#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PoisonedWeapon_FX.PoisonedWeapon_FX_C
// (Actor)

class UClass* APoisonedWeapon_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PoisonedWeapon_FX_C");

	return Clss;
}


// PoisonedWeapon_FX_C PoisonedWeapon_FX.Default__PoisonedWeapon_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APoisonedWeapon_FX_C* APoisonedWeapon_FX_C::GetDefaultObj()
{
	static class APoisonedWeapon_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APoisonedWeapon_FX_C*>(APoisonedWeapon_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


