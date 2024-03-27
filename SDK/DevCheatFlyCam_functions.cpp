#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DevCheatFlyCam.DevCheatFlyCam_C
// (None)

class UClass* UDevCheatFlyCam_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DevCheatFlyCam_C");

	return Clss;
}


// DevCheatFlyCam_C DevCheatFlyCam.Default__DevCheatFlyCam_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevCheatFlyCam_C* UDevCheatFlyCam_C::GetDefaultObj()
{
	static class UDevCheatFlyCam_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevCheatFlyCam_C*>(UDevCheatFlyCam_C::StaticClass()->DefaultObject);

	return Default;
}

}


