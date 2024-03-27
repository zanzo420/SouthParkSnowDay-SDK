#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AmbientTetherCam.AmbientTetherCam_C
// (None)

class UClass* UAmbientTetherCam_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AmbientTetherCam_C");

	return Clss;
}


// AmbientTetherCam_C AmbientTetherCam.Default__AmbientTetherCam_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAmbientTetherCam_C* UAmbientTetherCam_C::GetDefaultObj()
{
	static class UAmbientTetherCam_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAmbientTetherCam_C*>(UAmbientTetherCam_C::StaticClass()->DefaultObject);

	return Default;
}

}


