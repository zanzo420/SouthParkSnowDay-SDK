#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hat_WizardHat_Orange.Hat_WizardHat_Orange_C
// (None)

class UClass* UHat_WizardHat_Orange_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hat_WizardHat_Orange_C");

	return Clss;
}


// Hat_WizardHat_Orange_C Hat_WizardHat_Orange.Default__Hat_WizardHat_Orange_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHat_WizardHat_Orange_C* UHat_WizardHat_Orange_C::GetDefaultObj()
{
	static class UHat_WizardHat_Orange_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHat_WizardHat_Orange_C*>(UHat_WizardHat_Orange_C::StaticClass()->DefaultObject);

	return Default;
}

}


