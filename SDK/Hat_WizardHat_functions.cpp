#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hat_WizardHat.Hat_WizardHat_C
// (None)

class UClass* UHat_WizardHat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hat_WizardHat_C");

	return Clss;
}


// Hat_WizardHat_C Hat_WizardHat.Default__Hat_WizardHat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHat_WizardHat_C* UHat_WizardHat_C::GetDefaultObj()
{
	static class UHat_WizardHat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHat_WizardHat_C*>(UHat_WizardHat_C::StaticClass()->DefaultObject);

	return Default;
}

}


