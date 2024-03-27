#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FrostGrenadeBurst_FX.FrostGrenadeBurst_FX_C
// (Actor)

class UClass* AFrostGrenadeBurst_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FrostGrenadeBurst_FX_C");

	return Clss;
}


// FrostGrenadeBurst_FX_C FrostGrenadeBurst_FX.Default__FrostGrenadeBurst_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFrostGrenadeBurst_FX_C* AFrostGrenadeBurst_FX_C::GetDefaultObj()
{
	static class AFrostGrenadeBurst_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFrostGrenadeBurst_FX_C*>(AFrostGrenadeBurst_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


