#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EnemyUpgrade_RangedChaff_RapidFire.EnemyUpgrade_RangedChaff_RapidFire_C
// (None)

class UClass* UEnemyUpgrade_RangedChaff_RapidFire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnemyUpgrade_RangedChaff_RapidFire_C");

	return Clss;
}


// EnemyUpgrade_RangedChaff_RapidFire_C EnemyUpgrade_RangedChaff_RapidFire.Default__EnemyUpgrade_RangedChaff_RapidFire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEnemyUpgrade_RangedChaff_RapidFire_C* UEnemyUpgrade_RangedChaff_RapidFire_C::GetDefaultObj()
{
	static class UEnemyUpgrade_RangedChaff_RapidFire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnemyUpgrade_RangedChaff_RapidFire_C*>(UEnemyUpgrade_RangedChaff_RapidFire_C::StaticClass()->DefaultObject);

	return Default;
}

}


