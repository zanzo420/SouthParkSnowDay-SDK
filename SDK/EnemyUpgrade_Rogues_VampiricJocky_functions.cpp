#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EnemyUpgrade_Rogues_VampiricJocky.EnemyUpgrade_Rogues_VampiricJocky_C
// (None)

class UClass* UEnemyUpgrade_Rogues_VampiricJocky_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnemyUpgrade_Rogues_VampiricJocky_C");

	return Clss;
}


// EnemyUpgrade_Rogues_VampiricJocky_C EnemyUpgrade_Rogues_VampiricJocky.Default__EnemyUpgrade_Rogues_VampiricJocky_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEnemyUpgrade_Rogues_VampiricJocky_C* UEnemyUpgrade_Rogues_VampiricJocky_C::GetDefaultObj()
{
	static class UEnemyUpgrade_Rogues_VampiricJocky_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnemyUpgrade_Rogues_VampiricJocky_C*>(UEnemyUpgrade_Rogues_VampiricJocky_C::StaticClass()->DefaultObject);

	return Default;
}

}


