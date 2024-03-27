#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Attribute_BonusElectricDamage.Attribute_BonusElectricDamage_C
// (None)

class UClass* UAttribute_BonusElectricDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Attribute_BonusElectricDamage_C");

	return Clss;
}


// Attribute_BonusElectricDamage_C Attribute_BonusElectricDamage.Default__Attribute_BonusElectricDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttribute_BonusElectricDamage_C* UAttribute_BonusElectricDamage_C::GetDefaultObj()
{
	static class UAttribute_BonusElectricDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttribute_BonusElectricDamage_C*>(UAttribute_BonusElectricDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


