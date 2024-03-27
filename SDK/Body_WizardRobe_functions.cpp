#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Body_WizardRobe.Body_WizardRobe_C
// (None)

class UClass* UBody_WizardRobe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Body_WizardRobe_C");

	return Clss;
}


// Body_WizardRobe_C Body_WizardRobe.Default__Body_WizardRobe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBody_WizardRobe_C* UBody_WizardRobe_C::GetDefaultObj()
{
	static class UBody_WizardRobe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBody_WizardRobe_C*>(UBody_WizardRobe_C::StaticClass()->DefaultObject);

	return Default;
}

}


