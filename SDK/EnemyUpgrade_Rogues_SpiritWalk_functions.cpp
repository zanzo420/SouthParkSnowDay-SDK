#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EnemyUpgrade_Rogues_SpiritWalk.EnemyUpgrade_Rogues_SpiritWalk_C
// (None)

class UClass* UEnemyUpgrade_Rogues_SpiritWalk_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnemyUpgrade_Rogues_SpiritWalk_C");

	return Clss;
}


// EnemyUpgrade_Rogues_SpiritWalk_C EnemyUpgrade_Rogues_SpiritWalk.Default__EnemyUpgrade_Rogues_SpiritWalk_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEnemyUpgrade_Rogues_SpiritWalk_C* UEnemyUpgrade_Rogues_SpiritWalk_C::GetDefaultObj()
{
	static class UEnemyUpgrade_Rogues_SpiritWalk_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnemyUpgrade_Rogues_SpiritWalk_C*>(UEnemyUpgrade_Rogues_SpiritWalk_C::StaticClass()->DefaultObject);

	return Default;
}

}


