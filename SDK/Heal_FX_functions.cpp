#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Heal_FX.Heal_FX_C
// (Actor)

class UClass* AHeal_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Heal_FX_C");

	return Clss;
}


// Heal_FX_C Heal_FX.Default__Heal_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHeal_FX_C* AHeal_FX_C::GetDefaultObj()
{
	static class AHeal_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHeal_FX_C*>(AHeal_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


