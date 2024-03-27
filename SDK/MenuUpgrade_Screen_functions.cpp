#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MenuUpgrade_Screen.MenuUpgrade_Screen_C
// (None)

class UClass* UMenuUpgrade_Screen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MenuUpgrade_Screen_C");

	return Clss;
}


// MenuUpgrade_Screen_C MenuUpgrade_Screen.Default__MenuUpgrade_Screen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMenuUpgrade_Screen_C* UMenuUpgrade_Screen_C::GetDefaultObj()
{
	static class UMenuUpgrade_Screen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMenuUpgrade_Screen_C*>(UMenuUpgrade_Screen_C::StaticClass()->DefaultObject);

	return Default;
}

}


