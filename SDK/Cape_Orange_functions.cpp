#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Cape_Orange.Cape_Orange_C
// (None)

class UClass* UCape_Orange_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cape_Orange_C");

	return Clss;
}


// Cape_Orange_C Cape_Orange.Default__Cape_Orange_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCape_Orange_C* UCape_Orange_C::GetDefaultObj()
{
	static class UCape_Orange_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCape_Orange_C*>(UCape_Orange_C::StaticClass()->DefaultObject);

	return Default;
}

}


