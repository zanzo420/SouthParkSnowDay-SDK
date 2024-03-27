#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FartEscapeRise_FX.FartEscapeRise_FX_C
// (Actor)

class UClass* AFartEscapeRise_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FartEscapeRise_FX_C");

	return Clss;
}


// FartEscapeRise_FX_C FartEscapeRise_FX.Default__FartEscapeRise_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFartEscapeRise_FX_C* AFartEscapeRise_FX_C::GetDefaultObj()
{
	static class AFartEscapeRise_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFartEscapeRise_FX_C*>(AFartEscapeRise_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


