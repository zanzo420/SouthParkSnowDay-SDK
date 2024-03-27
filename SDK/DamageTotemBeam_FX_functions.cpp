#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageTotemBeam_FX.DamageTotemBeam_FX_C
// (Actor)

class UClass* ADamageTotemBeam_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageTotemBeam_FX_C");

	return Clss;
}


// DamageTotemBeam_FX_C DamageTotemBeam_FX.Default__DamageTotemBeam_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADamageTotemBeam_FX_C* ADamageTotemBeam_FX_C::GetDefaultObj()
{
	static class ADamageTotemBeam_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADamageTotemBeam_FX_C*>(ADamageTotemBeam_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


