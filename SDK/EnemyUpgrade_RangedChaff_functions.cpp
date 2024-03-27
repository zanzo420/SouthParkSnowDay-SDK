#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EnemyUpgrade_RangedChaff.EnemyUpgrade_RangedChaff_C
// (None)

class UClass* UEnemyUpgrade_RangedChaff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnemyUpgrade_RangedChaff_C");

	return Clss;
}


// EnemyUpgrade_RangedChaff_C EnemyUpgrade_RangedChaff.Default__EnemyUpgrade_RangedChaff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEnemyUpgrade_RangedChaff_C* UEnemyUpgrade_RangedChaff_C::GetDefaultObj()
{
	static class UEnemyUpgrade_RangedChaff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnemyUpgrade_RangedChaff_C*>(UEnemyUpgrade_RangedChaff_C::StaticClass()->DefaultObject);

	return Default;
}

}


