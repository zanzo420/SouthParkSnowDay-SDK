#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Attribute_BonusGrossOutDamage.Attribute_BonusGrossOutDamage_C
// (None)

class UClass* UAttribute_BonusGrossOutDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Attribute_BonusGrossOutDamage_C");

	return Clss;
}


// Attribute_BonusGrossOutDamage_C Attribute_BonusGrossOutDamage.Default__Attribute_BonusGrossOutDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttribute_BonusGrossOutDamage_C* UAttribute_BonusGrossOutDamage_C::GetDefaultObj()
{
	static class UAttribute_BonusGrossOutDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttribute_BonusGrossOutDamage_C*>(UAttribute_BonusGrossOutDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


