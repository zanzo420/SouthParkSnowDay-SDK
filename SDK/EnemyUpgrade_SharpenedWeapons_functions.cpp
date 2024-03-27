#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EnemyUpgrade_SharpenedWeapons.EnemyUpgrade_SharpenedWeapons_C
// (None)

class UClass* UEnemyUpgrade_SharpenedWeapons_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnemyUpgrade_SharpenedWeapons_C");

	return Clss;
}


// EnemyUpgrade_SharpenedWeapons_C EnemyUpgrade_SharpenedWeapons.Default__EnemyUpgrade_SharpenedWeapons_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEnemyUpgrade_SharpenedWeapons_C* UEnemyUpgrade_SharpenedWeapons_C::GetDefaultObj()
{
	static class UEnemyUpgrade_SharpenedWeapons_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnemyUpgrade_SharpenedWeapons_C*>(UEnemyUpgrade_SharpenedWeapons_C::StaticClass()->DefaultObject);

	return Default;
}

}


