#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FixedVolumeCam_InstantLerpIn.FixedVolumeCam_InstantLerpIn_C
// (None)

class UClass* UFixedVolumeCam_InstantLerpIn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FixedVolumeCam_InstantLerpIn_C");

	return Clss;
}


// FixedVolumeCam_InstantLerpIn_C FixedVolumeCam_InstantLerpIn.Default__FixedVolumeCam_InstantLerpIn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFixedVolumeCam_InstantLerpIn_C* UFixedVolumeCam_InstantLerpIn_C::GetDefaultObj()
{
	static class UFixedVolumeCam_InstantLerpIn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFixedVolumeCam_InstantLerpIn_C*>(UFixedVolumeCam_InstantLerpIn_C::StaticClass()->DefaultObject);

	return Default;
}

}


