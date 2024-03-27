#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Attribute_BonusDamageScalar.Attribute_BonusDamageScalar_C
// (None)

class UClass* UAttribute_BonusDamageScalar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Attribute_BonusDamageScalar_C");

	return Clss;
}


// Attribute_BonusDamageScalar_C Attribute_BonusDamageScalar.Default__Attribute_BonusDamageScalar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttribute_BonusDamageScalar_C* UAttribute_BonusDamageScalar_C::GetDefaultObj()
{
	static class UAttribute_BonusDamageScalar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttribute_BonusDamageScalar_C*>(UAttribute_BonusDamageScalar_C::StaticClass()->DefaultObject);

	return Default;
}

}


