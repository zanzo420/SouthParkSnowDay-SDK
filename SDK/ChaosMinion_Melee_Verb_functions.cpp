#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaosMinion_Melee_Verb.ChaosMinion_Melee_Verb_C
// (None)

class UClass* UChaosMinion_Melee_Verb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaosMinion_Melee_Verb_C");

	return Clss;
}


// ChaosMinion_Melee_Verb_C ChaosMinion_Melee_Verb.Default__ChaosMinion_Melee_Verb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChaosMinion_Melee_Verb_C* UChaosMinion_Melee_Verb_C::GetDefaultObj()
{
	static class UChaosMinion_Melee_Verb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChaosMinion_Melee_Verb_C*>(UChaosMinion_Melee_Verb_C::StaticClass()->DefaultObject);

	return Default;
}

}


