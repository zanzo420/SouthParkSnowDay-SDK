#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BombardierWeapon.BombardierWeapon_C
// (Actor)

class UClass* ABombardierWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BombardierWeapon_C");

	return Clss;
}


// BombardierWeapon_C BombardierWeapon.Default__BombardierWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABombardierWeapon_C* ABombardierWeapon_C::GetDefaultObj()
{
	static class ABombardierWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABombardierWeapon_C*>(ABombardierWeapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


