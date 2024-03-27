#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GrenadierRangedProjectileSnowballImpact_FX.GrenadierRangedProjectileSnowballImpact_FX_C
// (Actor)

class UClass* AGrenadierRangedProjectileSnowballImpact_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GrenadierRangedProjectileSnowballImpact_FX_C");

	return Clss;
}


// GrenadierRangedProjectileSnowballImpact_FX_C GrenadierRangedProjectileSnowballImpact_FX.Default__GrenadierRangedProjectileSnowballImpact_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGrenadierRangedProjectileSnowballImpact_FX_C* AGrenadierRangedProjectileSnowballImpact_FX_C::GetDefaultObj()
{
	static class AGrenadierRangedProjectileSnowballImpact_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGrenadierRangedProjectileSnowballImpact_FX_C*>(AGrenadierRangedProjectileSnowballImpact_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


