#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Cape_Brown.Cape_Brown_C
// (None)

class UClass* UCape_Brown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cape_Brown_C");

	return Clss;
}


// Cape_Brown_C Cape_Brown.Default__Cape_Brown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCape_Brown_C* UCape_Brown_C::GetDefaultObj()
{
	static class UCape_Brown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCape_Brown_C*>(UCape_Brown_C::StaticClass()->DefaultObject);

	return Default;
}

}


