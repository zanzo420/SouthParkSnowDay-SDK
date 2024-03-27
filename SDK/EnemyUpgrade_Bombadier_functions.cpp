#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EnemyUpgrade_Bombadier.EnemyUpgrade_Bombadier_C
// (None)

class UClass* UEnemyUpgrade_Bombadier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnemyUpgrade_Bombadier_C");

	return Clss;
}


// EnemyUpgrade_Bombadier_C EnemyUpgrade_Bombadier.Default__EnemyUpgrade_Bombadier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEnemyUpgrade_Bombadier_C* UEnemyUpgrade_Bombadier_C::GetDefaultObj()
{
	static class UEnemyUpgrade_Bombadier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnemyUpgrade_Bombadier_C*>(UEnemyUpgrade_Bombadier_C::StaticClass()->DefaultObject);

	return Default;
}

}


