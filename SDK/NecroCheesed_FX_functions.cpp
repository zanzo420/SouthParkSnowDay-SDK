#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NecroCheesed_FX.NecroCheesed_FX_C
// (Actor)

class UClass* ANecroCheesed_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NecroCheesed_FX_C");

	return Clss;
}


// NecroCheesed_FX_C NecroCheesed_FX.Default__NecroCheesed_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANecroCheesed_FX_C* ANecroCheesed_FX_C::GetDefaultObj()
{
	static class ANecroCheesed_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANecroCheesed_FX_C*>(ANecroCheesed_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


