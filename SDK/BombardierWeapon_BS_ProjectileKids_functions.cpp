#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BombardierWeapon_BS_ProjectileKids.BombardierWeapon_BS_ProjectileKids_C
// (Actor)

class UClass* ABombardierWeapon_BS_ProjectileKids_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BombardierWeapon_BS_ProjectileKids_C");

	return Clss;
}


// BombardierWeapon_BS_ProjectileKids_C BombardierWeapon_BS_ProjectileKids.Default__BombardierWeapon_BS_ProjectileKids_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABombardierWeapon_BS_ProjectileKids_C* ABombardierWeapon_BS_ProjectileKids_C::GetDefaultObj()
{
	static class ABombardierWeapon_BS_ProjectileKids_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABombardierWeapon_BS_ProjectileKids_C*>(ABombardierWeapon_BS_ProjectileKids_C::StaticClass()->DefaultObject);

	return Default;
}

}


