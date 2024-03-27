#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NecroTether_FX.NecroTether_FX_C
// (Actor)

class UClass* ANecroTether_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NecroTether_FX_C");

	return Clss;
}


// NecroTether_FX_C NecroTether_FX.Default__NecroTether_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANecroTether_FX_C* ANecroTether_FX_C::GetDefaultObj()
{
	static class ANecroTether_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANecroTether_FX_C*>(ANecroTether_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


