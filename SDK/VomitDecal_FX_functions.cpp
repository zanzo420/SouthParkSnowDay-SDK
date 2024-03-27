#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VomitDecal_FX.VomitDecal_FX_C
// (Actor)

class UClass* AVomitDecal_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VomitDecal_FX_C");

	return Clss;
}


// VomitDecal_FX_C VomitDecal_FX.Default__VomitDecal_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AVomitDecal_FX_C* AVomitDecal_FX_C::GetDefaultObj()
{
	static class AVomitDecal_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AVomitDecal_FX_C*>(AVomitDecal_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


