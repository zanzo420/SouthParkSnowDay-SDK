#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Projectile_TowerOrb_Secondary.Projectile_TowerOrb_Secondary_C
// (Actor)

class UClass* AProjectile_TowerOrb_Secondary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Projectile_TowerOrb_Secondary_C");

	return Clss;
}


// Projectile_TowerOrb_Secondary_C Projectile_TowerOrb_Secondary.Default__Projectile_TowerOrb_Secondary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AProjectile_TowerOrb_Secondary_C* AProjectile_TowerOrb_Secondary_C::GetDefaultObj()
{
	static class AProjectile_TowerOrb_Secondary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AProjectile_TowerOrb_Secondary_C*>(AProjectile_TowerOrb_Secondary_C::StaticClass()->DefaultObject);

	return Default;
}

}


