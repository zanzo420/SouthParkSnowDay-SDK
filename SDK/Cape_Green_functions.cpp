#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Cape_Green.Cape_Green_C
// (None)

class UClass* UCape_Green_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cape_Green_C");

	return Clss;
}


// Cape_Green_C Cape_Green.Default__Cape_Green_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCape_Green_C* UCape_Green_C::GetDefaultObj()
{
	static class UCape_Green_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCape_Green_C*>(UCape_Green_C::StaticClass()->DefaultObject);

	return Default;
}

}


