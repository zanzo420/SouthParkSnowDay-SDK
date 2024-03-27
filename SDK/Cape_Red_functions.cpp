#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Cape_Red.Cape_Red_C
// (None)

class UClass* UCape_Red_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cape_Red_C");

	return Clss;
}


// Cape_Red_C Cape_Red.Default__Cape_Red_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCape_Red_C* UCape_Red_C::GetDefaultObj()
{
	static class UCape_Red_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCape_Red_C*>(UCape_Red_C::StaticClass()->DefaultObject);

	return Default;
}

}


