#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Cape_Yellow.Cape_Yellow_C
// (None)

class UClass* UCape_Yellow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cape_Yellow_C");

	return Clss;
}


// Cape_Yellow_C Cape_Yellow.Default__Cape_Yellow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCape_Yellow_C* UCape_Yellow_C::GetDefaultObj()
{
	static class UCape_Yellow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCape_Yellow_C*>(UCape_Yellow_C::StaticClass()->DefaultObject);

	return Default;
}

}


