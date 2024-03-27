#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LowHealth_FX.LowHealth_FX_C
// (Actor)

class UClass* ALowHealth_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LowHealth_FX_C");

	return Clss;
}


// LowHealth_FX_C LowHealth_FX.Default__LowHealth_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALowHealth_FX_C* ALowHealth_FX_C::GetDefaultObj()
{
	static class ALowHealth_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALowHealth_FX_C*>(ALowHealth_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


