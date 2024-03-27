#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EnemyUpgrade_Rogues_InvisibleAllies.EnemyUpgrade_Rogues_InvisibleAllies_C
// (None)

class UClass* UEnemyUpgrade_Rogues_InvisibleAllies_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnemyUpgrade_Rogues_InvisibleAllies_C");

	return Clss;
}


// EnemyUpgrade_Rogues_InvisibleAllies_C EnemyUpgrade_Rogues_InvisibleAllies.Default__EnemyUpgrade_Rogues_InvisibleAllies_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEnemyUpgrade_Rogues_InvisibleAllies_C* UEnemyUpgrade_Rogues_InvisibleAllies_C::GetDefaultObj()
{
	static class UEnemyUpgrade_Rogues_InvisibleAllies_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnemyUpgrade_Rogues_InvisibleAllies_C*>(UEnemyUpgrade_Rogues_InvisibleAllies_C::StaticClass()->DefaultObject);

	return Default;
}

}


