#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EnemyUpgrade_Encroachers_BlockingShockwave.EnemyUpgrade_Encroachers_BlockingShockwave_C
// (None)

class UClass* UEnemyUpgrade_Encroachers_BlockingShockwave_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnemyUpgrade_Encroachers_BlockingShockwave_C");

	return Clss;
}


// EnemyUpgrade_Encroachers_BlockingShockwave_C EnemyUpgrade_Encroachers_BlockingShockwave.Default__EnemyUpgrade_Encroachers_BlockingShockwave_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEnemyUpgrade_Encroachers_BlockingShockwave_C* UEnemyUpgrade_Encroachers_BlockingShockwave_C::GetDefaultObj()
{
	static class UEnemyUpgrade_Encroachers_BlockingShockwave_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnemyUpgrade_Encroachers_BlockingShockwave_C*>(UEnemyUpgrade_Encroachers_BlockingShockwave_C::StaticClass()->DefaultObject);

	return Default;
}

}


