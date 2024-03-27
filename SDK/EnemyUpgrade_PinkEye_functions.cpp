#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EnemyUpgrade_PinkEye.EnemyUpgrade_PinkEye_C
// (None)

class UClass* UEnemyUpgrade_PinkEye_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnemyUpgrade_PinkEye_C");

	return Clss;
}


// EnemyUpgrade_PinkEye_C EnemyUpgrade_PinkEye.Default__EnemyUpgrade_PinkEye_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEnemyUpgrade_PinkEye_C* UEnemyUpgrade_PinkEye_C::GetDefaultObj()
{
	static class UEnemyUpgrade_PinkEye_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnemyUpgrade_PinkEye_C*>(UEnemyUpgrade_PinkEye_C::StaticClass()->DefaultObject);

	return Default;
}

}


