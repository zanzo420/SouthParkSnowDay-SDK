#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CombatHUDScreen.CombatHUDScreen_C
// (None)

class UClass* UCombatHUDScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CombatHUDScreen_C");

	return Clss;
}


// CombatHUDScreen_C CombatHUDScreen.Default__CombatHUDScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCombatHUDScreen_C* UCombatHUDScreen_C::GetDefaultObj()
{
	static class UCombatHUDScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCombatHUDScreen_C*>(UCombatHUDScreen_C::StaticClass()->DefaultObject);

	return Default;
}

}


