#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EnemyHailStormActivationVerb.EnemyHailStormActivationVerb_C
// (None)

class UClass* UEnemyHailStormActivationVerb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnemyHailStormActivationVerb_C");

	return Clss;
}


// EnemyHailStormActivationVerb_C EnemyHailStormActivationVerb.Default__EnemyHailStormActivationVerb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEnemyHailStormActivationVerb_C* UEnemyHailStormActivationVerb_C::GetDefaultObj()
{
	static class UEnemyHailStormActivationVerb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnemyHailStormActivationVerb_C*>(UEnemyHailStormActivationVerb_C::StaticClass()->DefaultObject);

	return Default;
}

}


