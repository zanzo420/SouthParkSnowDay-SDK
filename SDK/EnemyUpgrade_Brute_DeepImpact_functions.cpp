#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EnemyUpgrade_Brute_DeepImpact.EnemyUpgrade_Brute_DeepImpact_C
// (None)

class UClass* UEnemyUpgrade_Brute_DeepImpact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnemyUpgrade_Brute_DeepImpact_C");

	return Clss;
}


// EnemyUpgrade_Brute_DeepImpact_C EnemyUpgrade_Brute_DeepImpact.Default__EnemyUpgrade_Brute_DeepImpact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEnemyUpgrade_Brute_DeepImpact_C* UEnemyUpgrade_Brute_DeepImpact_C::GetDefaultObj()
{
	static class UEnemyUpgrade_Brute_DeepImpact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnemyUpgrade_Brute_DeepImpact_C*>(UEnemyUpgrade_Brute_DeepImpact_C::StaticClass()->DefaultObject);

	return Default;
}

}


