#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Cape_Special.Cape_Special_C
// (None)

class UClass* UCape_Special_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cape_Special_C");

	return Clss;
}


// Cape_Special_C Cape_Special.Default__Cape_Special_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCape_Special_C* UCape_Special_C::GetDefaultObj()
{
	static class UCape_Special_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCape_Special_C*>(UCape_Special_C::StaticClass()->DefaultObject);

	return Default;
}

}


