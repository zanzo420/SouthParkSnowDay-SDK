#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Wytchfire_FX.Wytchfire_FX_C
// (Actor)

class UClass* AWytchfire_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Wytchfire_FX_C");

	return Clss;
}


// Wytchfire_FX_C Wytchfire_FX.Default__Wytchfire_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWytchfire_FX_C* AWytchfire_FX_C::GetDefaultObj()
{
	static class AWytchfire_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWytchfire_FX_C*>(AWytchfire_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


