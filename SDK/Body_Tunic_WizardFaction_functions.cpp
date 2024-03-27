#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Body_Tunic_WizardFaction.Body_Tunic_WizardFaction_C
// (None)

class UClass* UBody_Tunic_WizardFaction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Body_Tunic_WizardFaction_C");

	return Clss;
}


// Body_Tunic_WizardFaction_C Body_Tunic_WizardFaction.Default__Body_Tunic_WizardFaction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBody_Tunic_WizardFaction_C* UBody_Tunic_WizardFaction_C::GetDefaultObj()
{
	static class UBody_Tunic_WizardFaction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBody_Tunic_WizardFaction_C*>(UBody_Tunic_WizardFaction_C::StaticClass()->DefaultObject);

	return Default;
}

}


