#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AmbientTetherCam_StatusEffect.AmbientTetherCam_StatusEffect_C
// (None)

class UClass* UAmbientTetherCam_StatusEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AmbientTetherCam_StatusEffect_C");

	return Clss;
}


// AmbientTetherCam_StatusEffect_C AmbientTetherCam_StatusEffect.Default__AmbientTetherCam_StatusEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAmbientTetherCam_StatusEffect_C* UAmbientTetherCam_StatusEffect_C::GetDefaultObj()
{
	static class UAmbientTetherCam_StatusEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAmbientTetherCam_StatusEffect_C*>(UAmbientTetherCam_StatusEffect_C::StaticClass()->DefaultObject);

	return Default;
}

}


