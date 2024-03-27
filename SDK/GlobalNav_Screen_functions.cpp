#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GlobalNav_Screen.GlobalNav_Screen_C
// (None)

class UClass* UGlobalNav_Screen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GlobalNav_Screen_C");

	return Clss;
}


// GlobalNav_Screen_C GlobalNav_Screen.Default__GlobalNav_Screen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGlobalNav_Screen_C* UGlobalNav_Screen_C::GetDefaultObj()
{
	static class UGlobalNav_Screen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGlobalNav_Screen_C*>(UGlobalNav_Screen_C::StaticClass()->DefaultObject);

	return Default;
}

}


