#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HeatVisionCam.HeatVisionCam_C
// (None)

class UClass* UHeatVisionCam_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HeatVisionCam_C");

	return Clss;
}


// HeatVisionCam_C HeatVisionCam.Default__HeatVisionCam_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHeatVisionCam_C* UHeatVisionCam_C::GetDefaultObj()
{
	static class UHeatVisionCam_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHeatVisionCam_C*>(UHeatVisionCam_C::StaticClass()->DefaultObject);

	return Default;
}

}


