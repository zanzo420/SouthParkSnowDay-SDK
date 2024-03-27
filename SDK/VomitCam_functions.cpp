#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VomitCam.VomitCam_C
// (None)

class UClass* UVomitCam_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VomitCam_C");

	return Clss;
}


// VomitCam_C VomitCam.Default__VomitCam_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVomitCam_C* UVomitCam_C::GetDefaultObj()
{
	static class UVomitCam_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVomitCam_C*>(UVomitCam_C::StaticClass()->DefaultObject);

	return Default;
}

}


