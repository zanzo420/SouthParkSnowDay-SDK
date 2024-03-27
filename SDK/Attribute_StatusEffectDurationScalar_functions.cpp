#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Attribute_StatusEffectDurationScalar.Attribute_StatusEffectDurationScalar_C
// (None)

class UClass* UAttribute_StatusEffectDurationScalar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Attribute_StatusEffectDurationScalar_C");

	return Clss;
}


// Attribute_StatusEffectDurationScalar_C Attribute_StatusEffectDurationScalar.Default__Attribute_StatusEffectDurationScalar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttribute_StatusEffectDurationScalar_C* UAttribute_StatusEffectDurationScalar_C::GetDefaultObj()
{
	static class UAttribute_StatusEffectDurationScalar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttribute_StatusEffectDurationScalar_C*>(UAttribute_StatusEffectDurationScalar_C::StaticClass()->DefaultObject);

	return Default;
}

}


