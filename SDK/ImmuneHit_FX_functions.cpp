#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ImmuneHit_FX.ImmuneHit_FX_C
// (Actor)

class UClass* AImmuneHit_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ImmuneHit_FX_C");

	return Clss;
}


// ImmuneHit_FX_C ImmuneHit_FX.Default__ImmuneHit_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AImmuneHit_FX_C* AImmuneHit_FX_C::GetDefaultObj()
{
	static class AImmuneHit_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AImmuneHit_FX_C*>(AImmuneHit_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


