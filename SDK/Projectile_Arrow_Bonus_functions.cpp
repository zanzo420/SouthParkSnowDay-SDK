#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Projectile_Arrow_Bonus.Projectile_Arrow_Bonus_C
// (Actor)

class UClass* AProjectile_Arrow_Bonus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Projectile_Arrow_Bonus_C");

	return Clss;
}


// Projectile_Arrow_Bonus_C Projectile_Arrow_Bonus.Default__Projectile_Arrow_Bonus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AProjectile_Arrow_Bonus_C* AProjectile_Arrow_Bonus_C::GetDefaultObj()
{
	static class AProjectile_Arrow_Bonus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AProjectile_Arrow_Bonus_C*>(AProjectile_Arrow_Bonus_C::StaticClass()->DefaultObject);

	return Default;
}

}


