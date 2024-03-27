#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Body_WizardRobeBlue.Body_WizardRobeBlue_C
// (None)

class UClass* UBody_WizardRobeBlue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Body_WizardRobeBlue_C");

	return Clss;
}


// Body_WizardRobeBlue_C Body_WizardRobeBlue.Default__Body_WizardRobeBlue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBody_WizardRobeBlue_C* UBody_WizardRobeBlue_C::GetDefaultObj()
{
	static class UBody_WizardRobeBlue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBody_WizardRobeBlue_C*>(UBody_WizardRobeBlue_C::StaticClass()->DefaultObject);

	return Default;
}

}


