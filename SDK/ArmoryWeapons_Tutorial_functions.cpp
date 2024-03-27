#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ArmoryWeapons_Tutorial.ArmoryWeapons_Tutorial_C
// (None)

class UClass* UArmoryWeapons_Tutorial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArmoryWeapons_Tutorial_C");

	return Clss;
}


// ArmoryWeapons_Tutorial_C ArmoryWeapons_Tutorial.Default__ArmoryWeapons_Tutorial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UArmoryWeapons_Tutorial_C* UArmoryWeapons_Tutorial_C::GetDefaultObj()
{
	static class UArmoryWeapons_Tutorial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UArmoryWeapons_Tutorial_C*>(UArmoryWeapons_Tutorial_C::StaticClass()->DefaultObject);

	return Default;
}

}


