#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MenuBuild_Screen.MenuBuild_Screen_C
// (None)

class UClass* UMenuBuild_Screen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MenuBuild_Screen_C");

	return Clss;
}


// MenuBuild_Screen_C MenuBuild_Screen.Default__MenuBuild_Screen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMenuBuild_Screen_C* UMenuBuild_Screen_C::GetDefaultObj()
{
	static class UMenuBuild_Screen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMenuBuild_Screen_C*>(UMenuBuild_Screen_C::StaticClass()->DefaultObject);

	return Default;
}

}


