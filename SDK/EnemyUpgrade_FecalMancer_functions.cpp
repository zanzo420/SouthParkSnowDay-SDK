#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EnemyUpgrade_FecalMancer.EnemyUpgrade_FecalMancer_C
// (None)

class UClass* UEnemyUpgrade_FecalMancer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnemyUpgrade_FecalMancer_C");

	return Clss;
}


// EnemyUpgrade_FecalMancer_C EnemyUpgrade_FecalMancer.Default__EnemyUpgrade_FecalMancer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEnemyUpgrade_FecalMancer_C* UEnemyUpgrade_FecalMancer_C::GetDefaultObj()
{
	static class UEnemyUpgrade_FecalMancer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnemyUpgrade_FecalMancer_C*>(UEnemyUpgrade_FecalMancer_C::StaticClass()->DefaultObject);

	return Default;
}

}


