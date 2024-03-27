#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Cape_Black.Cape_Black_C
// (None)

class UClass* UCape_Black_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cape_Black_C");

	return Clss;
}


// Cape_Black_C Cape_Black.Default__Cape_Black_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCape_Black_C* UCape_Black_C::GetDefaultObj()
{
	static class UCape_Black_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCape_Black_C*>(UCape_Black_C::StaticClass()->DefaultObject);

	return Default;
}

}


