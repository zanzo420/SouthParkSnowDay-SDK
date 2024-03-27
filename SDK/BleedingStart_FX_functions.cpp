#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BleedingStart_FX.BleedingStart_FX_C
// (Actor)

class UClass* ABleedingStart_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BleedingStart_FX_C");

	return Clss;
}


// BleedingStart_FX_C BleedingStart_FX.Default__BleedingStart_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABleedingStart_FX_C* ABleedingStart_FX_C::GetDefaultObj()
{
	static class ABleedingStart_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABleedingStart_FX_C*>(ABleedingStart_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


