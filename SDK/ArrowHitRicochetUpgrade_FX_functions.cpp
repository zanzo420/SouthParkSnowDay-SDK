#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ArrowHitRicochetUpgrade_FX.ArrowHitRicochetUpgrade_FX_C
// (Actor)

class UClass* AArrowHitRicochetUpgrade_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArrowHitRicochetUpgrade_FX_C");

	return Clss;
}


// ArrowHitRicochetUpgrade_FX_C ArrowHitRicochetUpgrade_FX.Default__ArrowHitRicochetUpgrade_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AArrowHitRicochetUpgrade_FX_C* AArrowHitRicochetUpgrade_FX_C::GetDefaultObj()
{
	static class AArrowHitRicochetUpgrade_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AArrowHitRicochetUpgrade_FX_C*>(AArrowHitRicochetUpgrade_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


