#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RangedTower_TimerExplode_FX.RangedTower_TimerExplode_FX_C
// (Actor)

class UClass* ARangedTower_TimerExplode_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RangedTower_TimerExplode_FX_C");

	return Clss;
}


// RangedTower_TimerExplode_FX_C RangedTower_TimerExplode_FX.Default__RangedTower_TimerExplode_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARangedTower_TimerExplode_FX_C* ARangedTower_TimerExplode_FX_C::GetDefaultObj()
{
	static class ARangedTower_TimerExplode_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARangedTower_TimerExplode_FX_C*>(ARangedTower_TimerExplode_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


