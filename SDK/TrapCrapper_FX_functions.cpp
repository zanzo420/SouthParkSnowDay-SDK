#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TrapCrapper_FX.TrapCrapper_FX_C
// (Actor)

class UClass* ATrapCrapper_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TrapCrapper_FX_C");

	return Clss;
}


// TrapCrapper_FX_C TrapCrapper_FX.Default__TrapCrapper_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrapCrapper_FX_C* ATrapCrapper_FX_C::GetDefaultObj()
{
	static class ATrapCrapper_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrapCrapper_FX_C*>(ATrapCrapper_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


