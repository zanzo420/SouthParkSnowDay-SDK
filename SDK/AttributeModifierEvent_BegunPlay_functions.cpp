#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AttributeModifierEvent_BegunPlay.AttributeModifierEvent_BegunPlay_C
// (None)

class UClass* UAttributeModifierEvent_BegunPlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AttributeModifierEvent_BegunPlay_C");

	return Clss;
}


// AttributeModifierEvent_BegunPlay_C AttributeModifierEvent_BegunPlay.Default__AttributeModifierEvent_BegunPlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttributeModifierEvent_BegunPlay_C* UAttributeModifierEvent_BegunPlay_C::GetDefaultObj()
{
	static class UAttributeModifierEvent_BegunPlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttributeModifierEvent_BegunPlay_C*>(UAttributeModifierEvent_BegunPlay_C::StaticClass()->DefaultObject);

	return Default;
}

}


