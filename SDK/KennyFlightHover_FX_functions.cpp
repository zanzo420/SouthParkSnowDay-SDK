#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KennyFlightHover_FX.KennyFlightHover_FX_C
// (Actor)

class UClass* AKennyFlightHover_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KennyFlightHover_FX_C");

	return Clss;
}


// KennyFlightHover_FX_C KennyFlightHover_FX.Default__KennyFlightHover_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKennyFlightHover_FX_C* AKennyFlightHover_FX_C::GetDefaultObj()
{
	static class AKennyFlightHover_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKennyFlightHover_FX_C*>(AKennyFlightHover_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


