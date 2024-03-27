#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EnemyUpgrade_AmbienBlooded.EnemyUpgrade_AmbienBlooded_C
// (None)

class UClass* UEnemyUpgrade_AmbienBlooded_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnemyUpgrade_AmbienBlooded_C");

	return Clss;
}


// EnemyUpgrade_AmbienBlooded_C EnemyUpgrade_AmbienBlooded.Default__EnemyUpgrade_AmbienBlooded_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEnemyUpgrade_AmbienBlooded_C* UEnemyUpgrade_AmbienBlooded_C::GetDefaultObj()
{
	static class UEnemyUpgrade_AmbienBlooded_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnemyUpgrade_AmbienBlooded_C*>(UEnemyUpgrade_AmbienBlooded_C::StaticClass()->DefaultObject);

	return Default;
}

}


