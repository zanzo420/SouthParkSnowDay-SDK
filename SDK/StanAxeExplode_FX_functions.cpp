#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StanAxeExplode_FX.StanAxeExplode_FX_C
// (Actor)

class UClass* AStanAxeExplode_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StanAxeExplode_FX_C");

	return Clss;
}


// StanAxeExplode_FX_C StanAxeExplode_FX.Default__StanAxeExplode_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AStanAxeExplode_FX_C* AStanAxeExplode_FX_C::GetDefaultObj()
{
	static class AStanAxeExplode_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AStanAxeExplode_FX_C*>(AStanAxeExplode_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


