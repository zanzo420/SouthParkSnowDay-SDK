#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FixedVolumeCam_FastInOut.FixedVolumeCam_FastInOut_C
// (None)

class UClass* UFixedVolumeCam_FastInOut_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FixedVolumeCam_FastInOut_C");

	return Clss;
}


// FixedVolumeCam_FastInOut_C FixedVolumeCam_FastInOut.Default__FixedVolumeCam_FastInOut_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFixedVolumeCam_FastInOut_C* UFixedVolumeCam_FastInOut_C::GetDefaultObj()
{
	static class UFixedVolumeCam_FastInOut_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFixedVolumeCam_FastInOut_C*>(UFixedVolumeCam_FastInOut_C::StaticClass()->DefaultObject);

	return Default;
}

}


