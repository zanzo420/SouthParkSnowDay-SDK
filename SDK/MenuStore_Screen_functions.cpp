#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MenuStore_Screen.MenuStore_Screen_C
// (None)

class UClass* UMenuStore_Screen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MenuStore_Screen_C");

	return Clss;
}


// MenuStore_Screen_C MenuStore_Screen.Default__MenuStore_Screen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMenuStore_Screen_C* UMenuStore_Screen_C::GetDefaultObj()
{
	static class UMenuStore_Screen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMenuStore_Screen_C*>(UMenuStore_Screen_C::StaticClass()->DefaultObject);

	return Default;
}

}


