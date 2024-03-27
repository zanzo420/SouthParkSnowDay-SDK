#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AdultGrabDamageType.AdultGrabDamageType_C
// (None)

class UClass* UAdultGrabDamageType_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AdultGrabDamageType_C");

	return Clss;
}


// AdultGrabDamageType_C AdultGrabDamageType.Default__AdultGrabDamageType_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAdultGrabDamageType_C* UAdultGrabDamageType_C::GetDefaultObj()
{
	static class UAdultGrabDamageType_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAdultGrabDamageType_C*>(UAdultGrabDamageType_C::StaticClass()->DefaultObject);

	return Default;
}

}


