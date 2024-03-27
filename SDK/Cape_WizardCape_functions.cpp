#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Cape_WizardCape.Cape_WizardCape_C
// (None)

class UClass* UCape_WizardCape_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cape_WizardCape_C");

	return Clss;
}


// Cape_WizardCape_C Cape_WizardCape.Default__Cape_WizardCape_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCape_WizardCape_C* UCape_WizardCape_C::GetDefaultObj()
{
	static class UCape_WizardCape_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCape_WizardCape_C*>(UCape_WizardCape_C::StaticClass()->DefaultObject);

	return Default;
}

}


