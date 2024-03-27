#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Burning_FX.Burning_FX_C
// (Actor)

class UClass* ABurning_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Burning_FX_C");

	return Clss;
}


// Burning_FX_C Burning_FX.Default__Burning_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABurning_FX_C* ABurning_FX_C::GetDefaultObj()
{
	static class ABurning_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABurning_FX_C*>(ABurning_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


