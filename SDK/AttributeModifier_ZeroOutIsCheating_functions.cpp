#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AttributeModifier_ZeroOutIsCheating.AttributeModifier_ZeroOutIsCheating_C
// (None)

class UClass* UAttributeModifier_ZeroOutIsCheating_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AttributeModifier_ZeroOutIsCheating_C");

	return Clss;
}


// AttributeModifier_ZeroOutIsCheating_C AttributeModifier_ZeroOutIsCheating.Default__AttributeModifier_ZeroOutIsCheating_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttributeModifier_ZeroOutIsCheating_C* UAttributeModifier_ZeroOutIsCheating_C::GetDefaultObj()
{
	static class UAttributeModifier_ZeroOutIsCheating_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttributeModifier_ZeroOutIsCheating_C*>(UAttributeModifier_ZeroOutIsCheating_C::StaticClass()->DefaultObject);

	return Default;
}

}


