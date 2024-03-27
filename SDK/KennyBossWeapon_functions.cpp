#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KennyBossWeapon.KennyBossWeapon_C
// (Actor)

class UClass* AKennyBossWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KennyBossWeapon_C");

	return Clss;
}


// KennyBossWeapon_C KennyBossWeapon.Default__KennyBossWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKennyBossWeapon_C* AKennyBossWeapon_C::GetDefaultObj()
{
	static class AKennyBossWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKennyBossWeapon_C*>(AKennyBossWeapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


