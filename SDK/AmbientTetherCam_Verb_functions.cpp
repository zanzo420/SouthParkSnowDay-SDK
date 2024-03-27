#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AmbientTetherCam_Verb.AmbientTetherCam_Verb_C
// (None)

class UClass* UAmbientTetherCam_Verb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AmbientTetherCam_Verb_C");

	return Clss;
}


// AmbientTetherCam_Verb_C AmbientTetherCam_Verb.Default__AmbientTetherCam_Verb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAmbientTetherCam_Verb_C* UAmbientTetherCam_Verb_C::GetDefaultObj()
{
	static class UAmbientTetherCam_Verb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAmbientTetherCam_Verb_C*>(UAmbientTetherCam_Verb_C::StaticClass()->DefaultObject);

	return Default;
}

}


