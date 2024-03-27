#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FecalTransplant_FX.FecalTransplant_FX_C
// (Actor)

class UClass* AFecalTransplant_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FecalTransplant_FX_C");

	return Clss;
}


// FecalTransplant_FX_C FecalTransplant_FX.Default__FecalTransplant_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFecalTransplant_FX_C* AFecalTransplant_FX_C::GetDefaultObj()
{
	static class AFecalTransplant_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFecalTransplant_FX_C*>(AFecalTransplant_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


