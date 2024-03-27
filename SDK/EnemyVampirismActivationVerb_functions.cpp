#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EnemyVampirismActivationVerb.EnemyVampirismActivationVerb_C
// (None)

class UClass* UEnemyVampirismActivationVerb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnemyVampirismActivationVerb_C");

	return Clss;
}


// EnemyVampirismActivationVerb_C EnemyVampirismActivationVerb.Default__EnemyVampirismActivationVerb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEnemyVampirismActivationVerb_C* UEnemyVampirismActivationVerb_C::GetDefaultObj()
{
	static class UEnemyVampirismActivationVerb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnemyVampirismActivationVerb_C*>(UEnemyVampirismActivationVerb_C::StaticClass()->DefaultObject);

	return Default;
}

}


