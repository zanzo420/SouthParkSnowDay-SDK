#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AttributeModifierEvent_MoonShoes.AttributeModifierEvent_MoonShoes_C
// (None)

class UClass* UAttributeModifierEvent_MoonShoes_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AttributeModifierEvent_MoonShoes_C");

	return Clss;
}


// AttributeModifierEvent_MoonShoes_C AttributeModifierEvent_MoonShoes.Default__AttributeModifierEvent_MoonShoes_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttributeModifierEvent_MoonShoes_C* UAttributeModifierEvent_MoonShoes_C::GetDefaultObj()
{
	static class UAttributeModifierEvent_MoonShoes_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttributeModifierEvent_MoonShoes_C*>(UAttributeModifierEvent_MoonShoes_C::StaticClass()->DefaultObject);

	return Default;
}

}


