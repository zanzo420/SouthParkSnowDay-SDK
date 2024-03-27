#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AmbientStrafeCamNear.AmbientStrafeCamNear_C
// (None)

class UClass* UAmbientStrafeCamNear_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AmbientStrafeCamNear_C");

	return Clss;
}


// AmbientStrafeCamNear_C AmbientStrafeCamNear.Default__AmbientStrafeCamNear_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAmbientStrafeCamNear_C* UAmbientStrafeCamNear_C::GetDefaultObj()
{
	static class UAmbientStrafeCamNear_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAmbientStrafeCamNear_C*>(UAmbientStrafeCamNear_C::StaticClass()->DefaultObject);

	return Default;
}

}


