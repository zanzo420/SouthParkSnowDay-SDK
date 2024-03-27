#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Cape_Blue.Cape_Blue_C
// (None)

class UClass* UCape_Blue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cape_Blue_C");

	return Clss;
}


// Cape_Blue_C Cape_Blue.Default__Cape_Blue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCape_Blue_C* UCape_Blue_C::GetDefaultObj()
{
	static class UCape_Blue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCape_Blue_C*>(UCape_Blue_C::StaticClass()->DefaultObject);

	return Default;
}

}


