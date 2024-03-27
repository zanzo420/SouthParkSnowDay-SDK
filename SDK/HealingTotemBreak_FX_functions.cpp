#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HealingTotemBreak_FX.HealingTotemBreak_FX_C
// (Actor)

class UClass* AHealingTotemBreak_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HealingTotemBreak_FX_C");

	return Clss;
}


// HealingTotemBreak_FX_C HealingTotemBreak_FX.Default__HealingTotemBreak_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHealingTotemBreak_FX_C* AHealingTotemBreak_FX_C::GetDefaultObj()
{
	static class AHealingTotemBreak_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHealingTotemBreak_FX_C*>(AHealingTotemBreak_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


