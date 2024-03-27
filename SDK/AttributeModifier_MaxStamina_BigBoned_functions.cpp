#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AttributeModifier_MaxStamina_BigBoned.AttributeModifier_MaxStamina_BigBoned_C
// (None)

class UClass* UAttributeModifier_MaxStamina_BigBoned_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AttributeModifier_MaxStamina_BigBoned_C");

	return Clss;
}


// AttributeModifier_MaxStamina_BigBoned_C AttributeModifier_MaxStamina_BigBoned.Default__AttributeModifier_MaxStamina_BigBoned_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttributeModifier_MaxStamina_BigBoned_C* UAttributeModifier_MaxStamina_BigBoned_C::GetDefaultObj()
{
	static class UAttributeModifier_MaxStamina_BigBoned_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttributeModifier_MaxStamina_BigBoned_C*>(UAttributeModifier_MaxStamina_BigBoned_C::StaticClass()->DefaultObject);

	return Default;
}

}


