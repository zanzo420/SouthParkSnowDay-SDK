#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MenuMapEntry_Screen.MenuMapEntry_Screen_C
// (None)

class UClass* UMenuMapEntry_Screen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MenuMapEntry_Screen_C");

	return Clss;
}


// MenuMapEntry_Screen_C MenuMapEntry_Screen.Default__MenuMapEntry_Screen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMenuMapEntry_Screen_C* UMenuMapEntry_Screen_C::GetDefaultObj()
{
	static class UMenuMapEntry_Screen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMenuMapEntry_Screen_C*>(UMenuMapEntry_Screen_C::StaticClass()->DefaultObject);

	return Default;
}

}


