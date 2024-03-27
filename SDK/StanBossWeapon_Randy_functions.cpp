#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StanBossWeapon_Randy.StanBossWeapon_Randy_C
// (Actor)

class UClass* AStanBossWeapon_Randy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StanBossWeapon_Randy_C");

	return Clss;
}


// StanBossWeapon_Randy_C StanBossWeapon_Randy.Default__StanBossWeapon_Randy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AStanBossWeapon_Randy_C* AStanBossWeapon_Randy_C::GetDefaultObj()
{
	static class AStanBossWeapon_Randy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AStanBossWeapon_Randy_C*>(AStanBossWeapon_Randy_C::StaticClass()->DefaultObject);

	return Default;
}

}


