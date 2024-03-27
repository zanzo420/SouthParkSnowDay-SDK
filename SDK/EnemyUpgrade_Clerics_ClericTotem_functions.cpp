#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EnemyUpgrade_Clerics_ClericTotem.EnemyUpgrade_Clerics_ClericTotem_C
// (None)

class UClass* UEnemyUpgrade_Clerics_ClericTotem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnemyUpgrade_Clerics_ClericTotem_C");

	return Clss;
}


// EnemyUpgrade_Clerics_ClericTotem_C EnemyUpgrade_Clerics_ClericTotem.Default__EnemyUpgrade_Clerics_ClericTotem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEnemyUpgrade_Clerics_ClericTotem_C* UEnemyUpgrade_Clerics_ClericTotem_C::GetDefaultObj()
{
	static class UEnemyUpgrade_Clerics_ClericTotem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnemyUpgrade_Clerics_ClericTotem_C*>(UEnemyUpgrade_Clerics_ClericTotem_C::StaticClass()->DefaultObject);

	return Default;
}

}


