#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChargeFlash_Overlay.ChargeFlash_Overlay_C
// (None)

class UClass* UChargeFlash_Overlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChargeFlash_Overlay_C");

	return Clss;
}


// ChargeFlash_Overlay_C ChargeFlash_Overlay.Default__ChargeFlash_Overlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChargeFlash_Overlay_C* UChargeFlash_Overlay_C::GetDefaultObj()
{
	static class UChargeFlash_Overlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChargeFlash_Overlay_C*>(UChargeFlash_Overlay_C::StaticClass()->DefaultObject);

	return Default;
}

}


