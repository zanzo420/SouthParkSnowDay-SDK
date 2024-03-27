#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AmbientNonBodyStrafeCam.AmbientNonBodyStrafeCam_C
// (None)

class UClass* UAmbientNonBodyStrafeCam_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AmbientNonBodyStrafeCam_C");

	return Clss;
}


// AmbientNonBodyStrafeCam_C AmbientNonBodyStrafeCam.Default__AmbientNonBodyStrafeCam_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAmbientNonBodyStrafeCam_C* UAmbientNonBodyStrafeCam_C::GetDefaultObj()
{
	static class UAmbientNonBodyStrafeCam_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAmbientNonBodyStrafeCam_C*>(UAmbientNonBodyStrafeCam_C::StaticClass()->DefaultObject);

	return Default;
}

}


