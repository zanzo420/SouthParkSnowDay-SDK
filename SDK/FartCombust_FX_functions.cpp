#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FartCombust_FX.FartCombust_FX_C
// (Actor)

class UClass* AFartCombust_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FartCombust_FX_C");

	return Clss;
}


// FartCombust_FX_C FartCombust_FX.Default__FartCombust_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFartCombust_FX_C* AFartCombust_FX_C::GetDefaultObj()
{
	static class AFartCombust_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFartCombust_FX_C*>(AFartCombust_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


