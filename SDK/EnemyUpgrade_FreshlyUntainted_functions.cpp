#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EnemyUpgrade_FreshlyUntainted.EnemyUpgrade_FreshlyUntainted_C
// (None)

class UClass* UEnemyUpgrade_FreshlyUntainted_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnemyUpgrade_FreshlyUntainted_C");

	return Clss;
}


// EnemyUpgrade_FreshlyUntainted_C EnemyUpgrade_FreshlyUntainted.Default__EnemyUpgrade_FreshlyUntainted_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEnemyUpgrade_FreshlyUntainted_C* UEnemyUpgrade_FreshlyUntainted_C::GetDefaultObj()
{
	static class UEnemyUpgrade_FreshlyUntainted_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnemyUpgrade_FreshlyUntainted_C*>(UEnemyUpgrade_FreshlyUntainted_C::StaticClass()->DefaultObject);

	return Default;
}

}


