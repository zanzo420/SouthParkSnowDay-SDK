#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AimableCannonController.AimableCannonController_C
// (Actor)

class UClass* AAimableCannonController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AimableCannonController_C");

	return Clss;
}


// AimableCannonController_C AimableCannonController.Default__AimableCannonController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAimableCannonController_C* AAimableCannonController_C::GetDefaultObj()
{
	static class AAimableCannonController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAimableCannonController_C*>(AAimableCannonController_C::StaticClass()->DefaultObject);

	return Default;
}

}


