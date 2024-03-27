#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Attribute_FlameThrowerFuelRegenScalar.Attribute_FlameThrowerFuelRegenScalar_C
// (None)

class UClass* UAttribute_FlameThrowerFuelRegenScalar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Attribute_FlameThrowerFuelRegenScalar_C");

	return Clss;
}


// Attribute_FlameThrowerFuelRegenScalar_C Attribute_FlameThrowerFuelRegenScalar.Default__Attribute_FlameThrowerFuelRegenScalar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttribute_FlameThrowerFuelRegenScalar_C* UAttribute_FlameThrowerFuelRegenScalar_C::GetDefaultObj()
{
	static class UAttribute_FlameThrowerFuelRegenScalar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttribute_FlameThrowerFuelRegenScalar_C*>(UAttribute_FlameThrowerFuelRegenScalar_C::StaticClass()->DefaultObject);

	return Default;
}

}


