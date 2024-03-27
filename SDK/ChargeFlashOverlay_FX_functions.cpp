#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChargeFlashOverlay_FX.ChargeFlashOverlay_FX_C
// (Actor)

class UClass* AChargeFlashOverlay_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChargeFlashOverlay_FX_C");

	return Clss;
}


// ChargeFlashOverlay_FX_C ChargeFlashOverlay_FX.Default__ChargeFlashOverlay_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChargeFlashOverlay_FX_C* AChargeFlashOverlay_FX_C::GetDefaultObj()
{
	static class AChargeFlashOverlay_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChargeFlashOverlay_FX_C*>(AChargeFlashOverlay_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


