#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Projectile_ArrowBase_RangedChaff.Projectile_ArrowBase_RangedChaff_C
// (Actor)

class UClass* AProjectile_ArrowBase_RangedChaff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Projectile_ArrowBase_RangedChaff_C");

	return Clss;
}


// Projectile_ArrowBase_RangedChaff_C Projectile_ArrowBase_RangedChaff.Default__Projectile_ArrowBase_RangedChaff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AProjectile_ArrowBase_RangedChaff_C* AProjectile_ArrowBase_RangedChaff_C::GetDefaultObj()
{
	static class AProjectile_ArrowBase_RangedChaff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AProjectile_ArrowBase_RangedChaff_C*>(AProjectile_ArrowBase_RangedChaff_C::StaticClass()->DefaultObject);

	return Default;
}

}


