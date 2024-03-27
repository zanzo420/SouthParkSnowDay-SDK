#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StatusEffect_SuperStrength_Enemy.StatusEffect_SuperStrength_Enemy_C
// (None)

class UClass* UStatusEffect_SuperStrength_Enemy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StatusEffect_SuperStrength_Enemy_C");

	return Clss;
}


// StatusEffect_SuperStrength_Enemy_C StatusEffect_SuperStrength_Enemy.Default__StatusEffect_SuperStrength_Enemy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStatusEffect_SuperStrength_Enemy_C* UStatusEffect_SuperStrength_Enemy_C::GetDefaultObj()
{
	static class UStatusEffect_SuperStrength_Enemy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStatusEffect_SuperStrength_Enemy_C*>(UStatusEffect_SuperStrength_Enemy_C::StaticClass()->DefaultObject);

	return Default;
}

}


