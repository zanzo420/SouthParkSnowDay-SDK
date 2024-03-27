#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RangedTowerConcussiveTrail_FX.RangedTowerConcussiveTrail_FX_C
// (Actor)

class UClass* ARangedTowerConcussiveTrail_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RangedTowerConcussiveTrail_FX_C");

	return Clss;
}


// RangedTowerConcussiveTrail_FX_C RangedTowerConcussiveTrail_FX.Default__RangedTowerConcussiveTrail_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARangedTowerConcussiveTrail_FX_C* ARangedTowerConcussiveTrail_FX_C::GetDefaultObj()
{
	static class ARangedTowerConcussiveTrail_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARangedTowerConcussiveTrail_FX_C*>(ARangedTowerConcussiveTrail_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


