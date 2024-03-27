#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AttributeModifier_ZeroOutCanCheat.AttributeModifier_ZeroOutCanCheat_C
// (None)

class UClass* UAttributeModifier_ZeroOutCanCheat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AttributeModifier_ZeroOutCanCheat_C");

	return Clss;
}


// AttributeModifier_ZeroOutCanCheat_C AttributeModifier_ZeroOutCanCheat.Default__AttributeModifier_ZeroOutCanCheat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttributeModifier_ZeroOutCanCheat_C* UAttributeModifier_ZeroOutCanCheat_C::GetDefaultObj()
{
	static class UAttributeModifier_ZeroOutCanCheat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttributeModifier_ZeroOutCanCheat_C*>(UAttributeModifier_ZeroOutCanCheat_C::StaticClass()->DefaultObject);

	return Default;
}

}


