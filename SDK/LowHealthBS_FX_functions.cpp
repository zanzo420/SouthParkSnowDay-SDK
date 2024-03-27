#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LowHealthBS_FX.LowHealthBS_FX_C
// (Actor)

class UClass* ALowHealthBS_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LowHealthBS_FX_C");

	return Clss;
}


// LowHealthBS_FX_C LowHealthBS_FX.Default__LowHealthBS_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALowHealthBS_FX_C* ALowHealthBS_FX_C::GetDefaultObj()
{
	static class ALowHealthBS_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALowHealthBS_FX_C*>(ALowHealthBS_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


