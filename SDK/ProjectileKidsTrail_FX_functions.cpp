#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ProjectileKidsTrail_FX.ProjectileKidsTrail_FX_C
// (Actor)

class UClass* AProjectileKidsTrail_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProjectileKidsTrail_FX_C");

	return Clss;
}


// ProjectileKidsTrail_FX_C ProjectileKidsTrail_FX.Default__ProjectileKidsTrail_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AProjectileKidsTrail_FX_C* AProjectileKidsTrail_FX_C::GetDefaultObj()
{
	static class AProjectileKidsTrail_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AProjectileKidsTrail_FX_C*>(AProjectileKidsTrail_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


