#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OmniShields_FX.OmniShields_FX_C
// (Actor)

class UClass* AOmniShields_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OmniShields_FX_C");

	return Clss;
}


// OmniShields_FX_C OmniShields_FX.Default__OmniShields_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AOmniShields_FX_C* AOmniShields_FX_C::GetDefaultObj()
{
	static class AOmniShields_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AOmniShields_FX_C*>(AOmniShields_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


