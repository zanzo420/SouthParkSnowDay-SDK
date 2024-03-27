#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StanBossWeapon.StanBossWeapon_C
// (Actor)

class UClass* AStanBossWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StanBossWeapon_C");

	return Clss;
}


// StanBossWeapon_C StanBossWeapon.Default__StanBossWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AStanBossWeapon_C* AStanBossWeapon_C::GetDefaultObj()
{
	static class AStanBossWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AStanBossWeapon_C*>(AStanBossWeapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


