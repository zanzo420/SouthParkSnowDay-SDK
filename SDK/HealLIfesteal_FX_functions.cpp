#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HealLIfesteal_FX.HealLIfesteal_FX_C
// (Actor)

class UClass* AHealLIfesteal_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HealLIfesteal_FX_C");

	return Clss;
}


// HealLIfesteal_FX_C HealLIfesteal_FX.Default__HealLIfesteal_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHealLIfesteal_FX_C* AHealLIfesteal_FX_C::GetDefaultObj()
{
	static class AHealLIfesteal_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHealLIfesteal_FX_C*>(AHealLIfesteal_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


