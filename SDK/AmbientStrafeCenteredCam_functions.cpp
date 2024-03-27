#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AmbientStrafeCenteredCam.AmbientStrafeCenteredCam_C
// (None)

class UClass* UAmbientStrafeCenteredCam_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AmbientStrafeCenteredCam_C");

	return Clss;
}


// AmbientStrafeCenteredCam_C AmbientStrafeCenteredCam.Default__AmbientStrafeCenteredCam_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAmbientStrafeCenteredCam_C* UAmbientStrafeCenteredCam_C::GetDefaultObj()
{
	static class UAmbientStrafeCenteredCam_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAmbientStrafeCenteredCam_C*>(UAmbientStrafeCenteredCam_C::StaticClass()->DefaultObject);

	return Default;
}

}


