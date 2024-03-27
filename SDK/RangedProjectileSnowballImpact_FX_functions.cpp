#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RangedProjectileSnowballImpact_FX.RangedProjectileSnowballImpact_FX_C
// (Actor)

class UClass* ARangedProjectileSnowballImpact_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RangedProjectileSnowballImpact_FX_C");

	return Clss;
}


// RangedProjectileSnowballImpact_FX_C RangedProjectileSnowballImpact_FX.Default__RangedProjectileSnowballImpact_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARangedProjectileSnowballImpact_FX_C* ARangedProjectileSnowballImpact_FX_C::GetDefaultObj()
{
	static class ARangedProjectileSnowballImpact_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARangedProjectileSnowballImpact_FX_C*>(ARangedProjectileSnowballImpact_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


