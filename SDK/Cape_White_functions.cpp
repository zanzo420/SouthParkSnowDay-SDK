#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Cape_White.Cape_White_C
// (None)

class UClass* UCape_White_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cape_White_C");

	return Clss;
}


// Cape_White_C Cape_White.Default__Cape_White_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCape_White_C* UCape_White_C::GetDefaultObj()
{
	static class UCape_White_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCape_White_C*>(UCape_White_C::StaticClass()->DefaultObject);

	return Default;
}

}


