#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StanAxeImpactSnow_FX.StanAxeImpactSnow_FX_C
// (Actor)

class UClass* AStanAxeImpactSnow_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StanAxeImpactSnow_FX_C");

	return Clss;
}


// StanAxeImpactSnow_FX_C StanAxeImpactSnow_FX.Default__StanAxeImpactSnow_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AStanAxeImpactSnow_FX_C* AStanAxeImpactSnow_FX_C::GetDefaultObj()
{
	static class AStanAxeImpactSnow_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AStanAxeImpactSnow_FX_C*>(AStanAxeImpactSnow_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


