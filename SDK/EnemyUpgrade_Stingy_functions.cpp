#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EnemyUpgrade_Stingy.EnemyUpgrade_Stingy_C
// (None)

class UClass* UEnemyUpgrade_Stingy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnemyUpgrade_Stingy_C");

	return Clss;
}


// EnemyUpgrade_Stingy_C EnemyUpgrade_Stingy.Default__EnemyUpgrade_Stingy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEnemyUpgrade_Stingy_C* UEnemyUpgrade_Stingy_C::GetDefaultObj()
{
	static class UEnemyUpgrade_Stingy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnemyUpgrade_Stingy_C*>(UEnemyUpgrade_Stingy_C::StaticClass()->DefaultObject);

	return Default;
}

}


