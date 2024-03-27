#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EnemyUpgrade_Encroachers.EnemyUpgrade_Encroachers_C
// (None)

class UClass* UEnemyUpgrade_Encroachers_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnemyUpgrade_Encroachers_C");

	return Clss;
}


// EnemyUpgrade_Encroachers_C EnemyUpgrade_Encroachers.Default__EnemyUpgrade_Encroachers_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEnemyUpgrade_Encroachers_C* UEnemyUpgrade_Encroachers_C::GetDefaultObj()
{
	static class UEnemyUpgrade_Encroachers_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnemyUpgrade_Encroachers_C*>(UEnemyUpgrade_Encroachers_C::StaticClass()->DefaultObject);

	return Default;
}

}


