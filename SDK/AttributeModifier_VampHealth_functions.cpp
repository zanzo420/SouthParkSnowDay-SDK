#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AttributeModifier_VampHealth.AttributeModifier_VampHealth_C
// (None)

class UClass* UAttributeModifier_VampHealth_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AttributeModifier_VampHealth_C");

	return Clss;
}


// AttributeModifier_VampHealth_C AttributeModifier_VampHealth.Default__AttributeModifier_VampHealth_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttributeModifier_VampHealth_C* UAttributeModifier_VampHealth_C::GetDefaultObj()
{
	static class UAttributeModifier_VampHealth_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttributeModifier_VampHealth_C*>(UAttributeModifier_VampHealth_C::StaticClass()->DefaultObject);

	return Default;
}

}


