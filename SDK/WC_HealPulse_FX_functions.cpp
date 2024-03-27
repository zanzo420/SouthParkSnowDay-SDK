#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WC_HealPulse_FX.WC_HealPulse_FX_C
// (Actor)

class UClass* AWC_HealPulse_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WC_HealPulse_FX_C");

	return Clss;
}


// WC_HealPulse_FX_C WC_HealPulse_FX.Default__WC_HealPulse_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWC_HealPulse_FX_C* AWC_HealPulse_FX_C::GetDefaultObj()
{
	static class AWC_HealPulse_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWC_HealPulse_FX_C*>(AWC_HealPulse_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


