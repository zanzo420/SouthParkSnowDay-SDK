#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PissedOff_Tutorial.PissedOff_Tutorial_C
// (None)

class UClass* UPissedOff_Tutorial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PissedOff_Tutorial_C");

	return Clss;
}


// PissedOff_Tutorial_C PissedOff_Tutorial.Default__PissedOff_Tutorial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPissedOff_Tutorial_C* UPissedOff_Tutorial_C::GetDefaultObj()
{
	static class UPissedOff_Tutorial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPissedOff_Tutorial_C*>(UPissedOff_Tutorial_C::StaticClass()->DefaultObject);

	return Default;
}

}


