#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PinkEye_FX.PinkEye_FX_C
// (Actor)

class UClass* APinkEye_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PinkEye_FX_C");

	return Clss;
}


// PinkEye_FX_C PinkEye_FX.Default__PinkEye_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APinkEye_FX_C* APinkEye_FX_C::GetDefaultObj()
{
	static class APinkEye_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APinkEye_FX_C*>(APinkEye_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


