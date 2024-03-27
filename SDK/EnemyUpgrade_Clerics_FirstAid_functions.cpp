#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EnemyUpgrade_Clerics_FirstAid.EnemyUpgrade_Clerics_FirstAid_C
// (None)

class UClass* UEnemyUpgrade_Clerics_FirstAid_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnemyUpgrade_Clerics_FirstAid_C");

	return Clss;
}


// EnemyUpgrade_Clerics_FirstAid_C EnemyUpgrade_Clerics_FirstAid.Default__EnemyUpgrade_Clerics_FirstAid_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEnemyUpgrade_Clerics_FirstAid_C* UEnemyUpgrade_Clerics_FirstAid_C::GetDefaultObj()
{
	static class UEnemyUpgrade_Clerics_FirstAid_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnemyUpgrade_Clerics_FirstAid_C*>(UEnemyUpgrade_Clerics_FirstAid_C::StaticClass()->DefaultObject);

	return Default;
}

}


