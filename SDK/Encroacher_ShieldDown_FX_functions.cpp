#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Encroacher_ShieldDown_FX.Encroacher_ShieldDown_FX_C
// (Actor)

class UClass* AEncroacher_ShieldDown_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Encroacher_ShieldDown_FX_C");

	return Clss;
}


// Encroacher_ShieldDown_FX_C Encroacher_ShieldDown_FX.Default__Encroacher_ShieldDown_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEncroacher_ShieldDown_FX_C* AEncroacher_ShieldDown_FX_C::GetDefaultObj()
{
	static class AEncroacher_ShieldDown_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEncroacher_ShieldDown_FX_C*>(AEncroacher_ShieldDown_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


