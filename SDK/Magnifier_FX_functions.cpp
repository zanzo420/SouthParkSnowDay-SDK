#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Magnifier_FX.Magnifier_FX_C
// (Actor)

class UClass* AMagnifier_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Magnifier_FX_C");

	return Clss;
}


// Magnifier_FX_C Magnifier_FX.Default__Magnifier_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMagnifier_FX_C* AMagnifier_FX_C::GetDefaultObj()
{
	static class AMagnifier_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMagnifier_FX_C*>(AMagnifier_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


