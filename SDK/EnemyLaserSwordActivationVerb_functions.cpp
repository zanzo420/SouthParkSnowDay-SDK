#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EnemyLaserSwordActivationVerb.EnemyLaserSwordActivationVerb_C
// (None)

class UClass* UEnemyLaserSwordActivationVerb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnemyLaserSwordActivationVerb_C");

	return Clss;
}


// EnemyLaserSwordActivationVerb_C EnemyLaserSwordActivationVerb.Default__EnemyLaserSwordActivationVerb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEnemyLaserSwordActivationVerb_C* UEnemyLaserSwordActivationVerb_C::GetDefaultObj()
{
	static class UEnemyLaserSwordActivationVerb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnemyLaserSwordActivationVerb_C*>(UEnemyLaserSwordActivationVerb_C::StaticClass()->DefaultObject);

	return Default;
}

}


