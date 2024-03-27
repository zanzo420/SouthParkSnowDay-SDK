#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Projectile_ChillArrowSecondaryProjectile.Projectile_ChillArrowSecondaryProjectile_C
// (Actor)

class UClass* AProjectile_ChillArrowSecondaryProjectile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Projectile_ChillArrowSecondaryProjectile_C");

	return Clss;
}


// Projectile_ChillArrowSecondaryProjectile_C Projectile_ChillArrowSecondaryProjectile.Default__Projectile_ChillArrowSecondaryProjectile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AProjectile_ChillArrowSecondaryProjectile_C* AProjectile_ChillArrowSecondaryProjectile_C::GetDefaultObj()
{
	static class AProjectile_ChillArrowSecondaryProjectile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AProjectile_ChillArrowSecondaryProjectile_C*>(AProjectile_ChillArrowSecondaryProjectile_C::StaticClass()->DefaultObject);

	return Default;
}

}


