#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Weapons_Tutorial.Weapons_Tutorial_C
// (None)

class UClass* UWeapons_Tutorial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Weapons_Tutorial_C");

	return Clss;
}


// Weapons_Tutorial_C Weapons_Tutorial.Default__Weapons_Tutorial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWeapons_Tutorial_C* UWeapons_Tutorial_C::GetDefaultObj()
{
	static class UWeapons_Tutorial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeapons_Tutorial_C*>(UWeapons_Tutorial_C::StaticClass()->DefaultObject);

	return Default;
}

}


