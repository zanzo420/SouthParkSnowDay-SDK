#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FTUX_LightingScenario.FTUX_LightingScenario_C
// (Actor)

class UClass* AFTUX_LightingScenario_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FTUX_LightingScenario_C");

	return Clss;
}


// FTUX_LightingScenario_C FTUX_LightingScenario.Default__FTUX_LightingScenario_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFTUX_LightingScenario_C* AFTUX_LightingScenario_C::GetDefaultObj()
{
	static class AFTUX_LightingScenario_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFTUX_LightingScenario_C*>(AFTUX_LightingScenario_C::StaticClass()->DefaultObject);

	return Default;
}

}


