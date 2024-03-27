#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Attribute_BonusDamageModifierNextStrike.Attribute_BonusDamageModifierNextStrike_C
// (None)

class UClass* UAttribute_BonusDamageModifierNextStrike_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Attribute_BonusDamageModifierNextStrike_C");

	return Clss;
}


// Attribute_BonusDamageModifierNextStrike_C Attribute_BonusDamageModifierNextStrike.Default__Attribute_BonusDamageModifierNextStrike_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttribute_BonusDamageModifierNextStrike_C* UAttribute_BonusDamageModifierNextStrike_C::GetDefaultObj()
{
	static class UAttribute_BonusDamageModifierNextStrike_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttribute_BonusDamageModifierNextStrike_C*>(UAttribute_BonusDamageModifierNextStrike_C::StaticClass()->DefaultObject);

	return Default;
}

}


