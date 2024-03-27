#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Body_WizardRobeGreen.Body_WizardRobeGreen_C
// (None)

class UClass* UBody_WizardRobeGreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Body_WizardRobeGreen_C");

	return Clss;
}


// Body_WizardRobeGreen_C Body_WizardRobeGreen.Default__Body_WizardRobeGreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBody_WizardRobeGreen_C* UBody_WizardRobeGreen_C::GetDefaultObj()
{
	static class UBody_WizardRobeGreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBody_WizardRobeGreen_C*>(UBody_WizardRobeGreen_C::StaticClass()->DefaultObject);

	return Default;
}

}


