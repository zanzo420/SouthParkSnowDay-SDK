#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FlameThrowerHUD_Screen.FlameThrowerHUD_Screen_C
// (None)

class UClass* UFlameThrowerHUD_Screen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FlameThrowerHUD_Screen_C");

	return Clss;
}


// FlameThrowerHUD_Screen_C FlameThrowerHUD_Screen.Default__FlameThrowerHUD_Screen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFlameThrowerHUD_Screen_C* UFlameThrowerHUD_Screen_C::GetDefaultObj()
{
	static class UFlameThrowerHUD_Screen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFlameThrowerHUD_Screen_C*>(UFlameThrowerHUD_Screen_C::StaticClass()->DefaultObject);

	return Default;
}

}


