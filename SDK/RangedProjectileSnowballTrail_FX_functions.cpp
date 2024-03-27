#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RangedProjectileSnowballTrail_FX.RangedProjectileSnowballTrail_FX_C
// (Actor)

class UClass* ARangedProjectileSnowballTrail_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RangedProjectileSnowballTrail_FX_C");

	return Clss;
}


// RangedProjectileSnowballTrail_FX_C RangedProjectileSnowballTrail_FX.Default__RangedProjectileSnowballTrail_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARangedProjectileSnowballTrail_FX_C* ARangedProjectileSnowballTrail_FX_C::GetDefaultObj()
{
	static class ARangedProjectileSnowballTrail_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARangedProjectileSnowballTrail_FX_C*>(ARangedProjectileSnowballTrail_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


