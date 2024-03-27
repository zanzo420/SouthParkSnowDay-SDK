#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StatusEffect_PoisonPoop.StatusEffect_PoisonPoop_C
// (None)

class UClass* UStatusEffect_PoisonPoop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StatusEffect_PoisonPoop_C");

	return Clss;
}


// StatusEffect_PoisonPoop_C StatusEffect_PoisonPoop.Default__StatusEffect_PoisonPoop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStatusEffect_PoisonPoop_C* UStatusEffect_PoisonPoop_C::GetDefaultObj()
{
	static class UStatusEffect_PoisonPoop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStatusEffect_PoisonPoop_C*>(UStatusEffect_PoisonPoop_C::StaticClass()->DefaultObject);

	return Default;
}

}


