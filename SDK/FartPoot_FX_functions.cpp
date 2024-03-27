#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FartPoot_FX.FartPoot_FX_C
// (Actor)

class UClass* AFartPoot_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FartPoot_FX_C");

	return Clss;
}


// FartPoot_FX_C FartPoot_FX.Default__FartPoot_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFartPoot_FX_C* AFartPoot_FX_C::GetDefaultObj()
{
	static class AFartPoot_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFartPoot_FX_C*>(AFartPoot_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


