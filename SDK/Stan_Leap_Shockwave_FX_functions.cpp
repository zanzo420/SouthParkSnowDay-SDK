#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Stan_Leap_Shockwave_FX.Stan_Leap_Shockwave_FX_C
// (Actor)

class UClass* AStan_Leap_Shockwave_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Stan_Leap_Shockwave_FX_C");

	return Clss;
}


// Stan_Leap_Shockwave_FX_C Stan_Leap_Shockwave_FX.Default__Stan_Leap_Shockwave_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AStan_Leap_Shockwave_FX_C* AStan_Leap_Shockwave_FX_C::GetDefaultObj()
{
	static class AStan_Leap_Shockwave_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AStan_Leap_Shockwave_FX_C*>(AStan_Leap_Shockwave_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


