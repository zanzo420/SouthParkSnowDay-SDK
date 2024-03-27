#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FlameThrower_FX.FlameThrower_FX_C
// (Actor)

class UClass* AFlameThrower_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FlameThrower_FX_C");

	return Clss;
}


// FlameThrower_FX_C FlameThrower_FX.Default__FlameThrower_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFlameThrower_FX_C* AFlameThrower_FX_C::GetDefaultObj()
{
	static class AFlameThrower_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFlameThrower_FX_C*>(AFlameThrower_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


