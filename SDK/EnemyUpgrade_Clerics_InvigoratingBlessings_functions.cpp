#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EnemyUpgrade_Clerics_InvigoratingBlessings.EnemyUpgrade_Clerics_InvigoratingBlessings_C
// (None)

class UClass* UEnemyUpgrade_Clerics_InvigoratingBlessings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnemyUpgrade_Clerics_InvigoratingBlessings_C");

	return Clss;
}


// EnemyUpgrade_Clerics_InvigoratingBlessings_C EnemyUpgrade_Clerics_InvigoratingBlessings.Default__EnemyUpgrade_Clerics_InvigoratingBlessings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEnemyUpgrade_Clerics_InvigoratingBlessings_C* UEnemyUpgrade_Clerics_InvigoratingBlessings_C::GetDefaultObj()
{
	static class UEnemyUpgrade_Clerics_InvigoratingBlessings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnemyUpgrade_Clerics_InvigoratingBlessings_C*>(UEnemyUpgrade_Clerics_InvigoratingBlessings_C::StaticClass()->DefaultObject);

	return Default;
}

}


