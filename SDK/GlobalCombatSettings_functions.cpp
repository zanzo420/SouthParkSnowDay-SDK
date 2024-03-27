#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GlobalCombatSettings.GlobalCombatSettings_C
// (None)

class UClass* UGlobalCombatSettings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GlobalCombatSettings_C");

	return Clss;
}


// GlobalCombatSettings_C GlobalCombatSettings.Default__GlobalCombatSettings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGlobalCombatSettings_C* UGlobalCombatSettings_C::GetDefaultObj()
{
	static class UGlobalCombatSettings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGlobalCombatSettings_C*>(UGlobalCombatSettings_C::StaticClass()->DefaultObject);

	return Default;
}

}


