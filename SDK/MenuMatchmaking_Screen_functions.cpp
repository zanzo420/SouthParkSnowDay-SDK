#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MenuMatchmaking_Screen.MenuMatchmaking_Screen_C
// (None)

class UClass* UMenuMatchmaking_Screen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MenuMatchmaking_Screen_C");

	return Clss;
}


// MenuMatchmaking_Screen_C MenuMatchmaking_Screen.Default__MenuMatchmaking_Screen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMenuMatchmaking_Screen_C* UMenuMatchmaking_Screen_C::GetDefaultObj()
{
	static class UMenuMatchmaking_Screen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMenuMatchmaking_Screen_C*>(UMenuMatchmaking_Screen_C::StaticClass()->DefaultObject);

	return Default;
}

}


