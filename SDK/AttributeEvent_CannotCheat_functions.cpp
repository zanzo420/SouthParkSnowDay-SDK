#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AttributeEvent_CannotCheat.AttributeEvent_CannotCheat_C
// (None)

class UClass* UAttributeEvent_CannotCheat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AttributeEvent_CannotCheat_C");

	return Clss;
}


// AttributeEvent_CannotCheat_C AttributeEvent_CannotCheat.Default__AttributeEvent_CannotCheat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttributeEvent_CannotCheat_C* UAttributeEvent_CannotCheat_C::GetDefaultObj()
{
	static class UAttributeEvent_CannotCheat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttributeEvent_CannotCheat_C*>(UAttributeEvent_CannotCheat_C::StaticClass()->DefaultObject);

	return Default;
}

}


