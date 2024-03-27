#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AttributeModifier_MoonShoes.AttributeModifier_MoonShoes_C
// (None)

class UClass* UAttributeModifier_MoonShoes_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AttributeModifier_MoonShoes_C");

	return Clss;
}


// AttributeModifier_MoonShoes_C AttributeModifier_MoonShoes.Default__AttributeModifier_MoonShoes_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttributeModifier_MoonShoes_C* UAttributeModifier_MoonShoes_C::GetDefaultObj()
{
	static class UAttributeModifier_MoonShoes_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttributeModifier_MoonShoes_C*>(UAttributeModifier_MoonShoes_C::StaticClass()->DefaultObject);

	return Default;
}

}


