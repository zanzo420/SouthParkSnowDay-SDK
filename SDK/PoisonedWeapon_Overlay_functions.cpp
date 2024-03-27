#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PoisonedWeapon_Overlay.PoisonedWeapon_Overlay_C
// (None)

class UClass* UPoisonedWeapon_Overlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PoisonedWeapon_Overlay_C");

	return Clss;
}


// PoisonedWeapon_Overlay_C PoisonedWeapon_Overlay.Default__PoisonedWeapon_Overlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPoisonedWeapon_Overlay_C* UPoisonedWeapon_Overlay_C::GetDefaultObj()
{
	static class UPoisonedWeapon_Overlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPoisonedWeapon_Overlay_C*>(UPoisonedWeapon_Overlay_C::StaticClass()->DefaultObject);

	return Default;
}

}


