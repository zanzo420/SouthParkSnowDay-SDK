#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Projectile_ChillArrow.Projectile_ChillArrow_C
// (Actor)

class UClass* AProjectile_ChillArrow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Projectile_ChillArrow_C");

	return Clss;
}


// Projectile_ChillArrow_C Projectile_ChillArrow.Default__Projectile_ChillArrow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AProjectile_ChillArrow_C* AProjectile_ChillArrow_C::GetDefaultObj()
{
	static class AProjectile_ChillArrow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AProjectile_ChillArrow_C*>(AProjectile_ChillArrow_C::StaticClass()->DefaultObject);

	return Default;
}

}


