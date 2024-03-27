#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AttributeEvent_CredBelowZero.AttributeEvent_CredBelowZero_C
// (None)

class UClass* UAttributeEvent_CredBelowZero_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AttributeEvent_CredBelowZero_C");

	return Clss;
}


// AttributeEvent_CredBelowZero_C AttributeEvent_CredBelowZero.Default__AttributeEvent_CredBelowZero_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttributeEvent_CredBelowZero_C* UAttributeEvent_CredBelowZero_C::GetDefaultObj()
{
	static class UAttributeEvent_CredBelowZero_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttributeEvent_CredBelowZero_C*>(UAttributeEvent_CredBelowZero_C::StaticClass()->DefaultObject);

	return Default;
}

}


