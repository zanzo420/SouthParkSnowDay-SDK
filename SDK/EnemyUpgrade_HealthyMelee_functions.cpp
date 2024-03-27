#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EnemyUpgrade_HealthyMelee.EnemyUpgrade_HealthyMelee_C
// (None)

class UClass* UEnemyUpgrade_HealthyMelee_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnemyUpgrade_HealthyMelee_C");

	return Clss;
}


// EnemyUpgrade_HealthyMelee_C EnemyUpgrade_HealthyMelee.Default__EnemyUpgrade_HealthyMelee_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEnemyUpgrade_HealthyMelee_C* UEnemyUpgrade_HealthyMelee_C::GetDefaultObj()
{
	static class UEnemyUpgrade_HealthyMelee_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnemyUpgrade_HealthyMelee_C*>(UEnemyUpgrade_HealthyMelee_C::StaticClass()->DefaultObject);

	return Default;
}

}


