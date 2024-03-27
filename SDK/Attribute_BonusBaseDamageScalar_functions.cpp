#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Attribute_BonusBaseDamageScalar.Attribute_BonusBaseDamageScalar_C
// (None)

class UClass* UAttribute_BonusBaseDamageScalar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Attribute_BonusBaseDamageScalar_C");

	return Clss;
}


// Attribute_BonusBaseDamageScalar_C Attribute_BonusBaseDamageScalar.Default__Attribute_BonusBaseDamageScalar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttribute_BonusBaseDamageScalar_C* UAttribute_BonusBaseDamageScalar_C::GetDefaultObj()
{
	static class UAttribute_BonusBaseDamageScalar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttribute_BonusBaseDamageScalar_C*>(UAttribute_BonusBaseDamageScalar_C::StaticClass()->DefaultObject);

	return Default;
}

}


