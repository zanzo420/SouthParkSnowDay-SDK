#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WC_DamagePulse_FX.WC_DamagePulse_FX_C
// (Actor)

class UClass* AWC_DamagePulse_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WC_DamagePulse_FX_C");

	return Clss;
}


// WC_DamagePulse_FX_C WC_DamagePulse_FX.Default__WC_DamagePulse_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWC_DamagePulse_FX_C* AWC_DamagePulse_FX_C::GetDefaultObj()
{
	static class AWC_DamagePulse_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWC_DamagePulse_FX_C*>(AWC_DamagePulse_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


