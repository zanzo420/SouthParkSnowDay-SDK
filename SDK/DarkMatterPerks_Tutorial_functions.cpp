#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DarkMatterPerks_Tutorial.DarkMatterPerks_Tutorial_C
// (None)

class UClass* UDarkMatterPerks_Tutorial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DarkMatterPerks_Tutorial_C");

	return Clss;
}


// DarkMatterPerks_Tutorial_C DarkMatterPerks_Tutorial.Default__DarkMatterPerks_Tutorial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDarkMatterPerks_Tutorial_C* UDarkMatterPerks_Tutorial_C::GetDefaultObj()
{
	static class UDarkMatterPerks_Tutorial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDarkMatterPerks_Tutorial_C*>(UDarkMatterPerks_Tutorial_C::StaticClass()->DefaultObject);

	return Default;
}

}


