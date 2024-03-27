#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HealingTotemPulse_FX.HealingTotemPulse_FX_C
// (Actor)

class UClass* AHealingTotemPulse_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HealingTotemPulse_FX_C");

	return Clss;
}


// HealingTotemPulse_FX_C HealingTotemPulse_FX.Default__HealingTotemPulse_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHealingTotemPulse_FX_C* AHealingTotemPulse_FX_C::GetDefaultObj()
{
	static class AHealingTotemPulse_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHealingTotemPulse_FX_C*>(AHealingTotemPulse_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


