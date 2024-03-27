#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AttributeModifier_VampSpeed.AttributeModifier_VampSpeed_C
// (None)

class UClass* UAttributeModifier_VampSpeed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AttributeModifier_VampSpeed_C");

	return Clss;
}


// AttributeModifier_VampSpeed_C AttributeModifier_VampSpeed.Default__AttributeModifier_VampSpeed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttributeModifier_VampSpeed_C* UAttributeModifier_VampSpeed_C::GetDefaultObj()
{
	static class UAttributeModifier_VampSpeed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttributeModifier_VampSpeed_C*>(UAttributeModifier_VampSpeed_C::StaticClass()->DefaultObject);

	return Default;
}

}


