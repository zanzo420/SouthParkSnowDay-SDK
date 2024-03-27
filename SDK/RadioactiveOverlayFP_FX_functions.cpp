#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RadioactiveOverlayFP_FX.RadioactiveOverlayFP_FX_C
// (Actor)

class UClass* ARadioactiveOverlayFP_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RadioactiveOverlayFP_FX_C");

	return Clss;
}


// RadioactiveOverlayFP_FX_C RadioactiveOverlayFP_FX.Default__RadioactiveOverlayFP_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARadioactiveOverlayFP_FX_C* ARadioactiveOverlayFP_FX_C::GetDefaultObj()
{
	static class ARadioactiveOverlayFP_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARadioactiveOverlayFP_FX_C*>(ARadioactiveOverlayFP_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


