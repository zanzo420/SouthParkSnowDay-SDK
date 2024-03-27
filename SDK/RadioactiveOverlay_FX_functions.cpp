#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RadioactiveOverlay_FX.RadioactiveOverlay_FX_C
// (Actor)

class UClass* ARadioactiveOverlay_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RadioactiveOverlay_FX_C");

	return Clss;
}


// RadioactiveOverlay_FX_C RadioactiveOverlay_FX.Default__RadioactiveOverlay_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARadioactiveOverlay_FX_C* ARadioactiveOverlay_FX_C::GetDefaultObj()
{
	static class ARadioactiveOverlay_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARadioactiveOverlay_FX_C*>(ARadioactiveOverlay_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


