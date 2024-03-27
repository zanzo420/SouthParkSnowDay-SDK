#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TacklePoundCam.TacklePoundCam_C
// (None)

class UClass* UTacklePoundCam_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TacklePoundCam_C");

	return Clss;
}


// TacklePoundCam_C TacklePoundCam.Default__TacklePoundCam_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTacklePoundCam_C* UTacklePoundCam_C::GetDefaultObj()
{
	static class UTacklePoundCam_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTacklePoundCam_C*>(UTacklePoundCam_C::StaticClass()->DefaultObject);

	return Default;
}

}


