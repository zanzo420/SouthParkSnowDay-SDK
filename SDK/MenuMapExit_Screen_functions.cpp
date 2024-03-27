#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MenuMapExit_Screen.MenuMapExit_Screen_C
// (None)

class UClass* UMenuMapExit_Screen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MenuMapExit_Screen_C");

	return Clss;
}


// MenuMapExit_Screen_C MenuMapExit_Screen.Default__MenuMapExit_Screen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMenuMapExit_Screen_C* UMenuMapExit_Screen_C::GetDefaultObj()
{
	static class UMenuMapExit_Screen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMenuMapExit_Screen_C*>(UMenuMapExit_Screen_C::StaticClass()->DefaultObject);

	return Default;
}

}


