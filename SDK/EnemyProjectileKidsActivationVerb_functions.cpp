#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EnemyProjectileKidsActivationVerb.EnemyProjectileKidsActivationVerb_C
// (None)

class UClass* UEnemyProjectileKidsActivationVerb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnemyProjectileKidsActivationVerb_C");

	return Clss;
}


// EnemyProjectileKidsActivationVerb_C EnemyProjectileKidsActivationVerb.Default__EnemyProjectileKidsActivationVerb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEnemyProjectileKidsActivationVerb_C* UEnemyProjectileKidsActivationVerb_C::GetDefaultObj()
{
	static class UEnemyProjectileKidsActivationVerb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnemyProjectileKidsActivationVerb_C*>(UEnemyProjectileKidsActivationVerb_C::StaticClass()->DefaultObject);

	return Default;
}

}


