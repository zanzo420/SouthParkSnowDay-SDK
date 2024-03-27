#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HealingBomb_FX.HealingBomb_FX_C
// (Actor)

class UClass* AHealingBomb_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HealingBomb_FX_C");

	return Clss;
}


// HealingBomb_FX_C HealingBomb_FX.Default__HealingBomb_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHealingBomb_FX_C* AHealingBomb_FX_C::GetDefaultObj()
{
	static class AHealingBomb_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHealingBomb_FX_C*>(AHealingBomb_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


