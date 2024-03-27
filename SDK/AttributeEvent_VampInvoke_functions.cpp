#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AttributeEvent_VampInvoke.AttributeEvent_VampInvoke_C
// (None)

class UClass* UAttributeEvent_VampInvoke_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AttributeEvent_VampInvoke_C");

	return Clss;
}


// AttributeEvent_VampInvoke_C AttributeEvent_VampInvoke.Default__AttributeEvent_VampInvoke_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttributeEvent_VampInvoke_C* UAttributeEvent_VampInvoke_C::GetDefaultObj()
{
	static class UAttributeEvent_VampInvoke_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttributeEvent_VampInvoke_C*>(UAttributeEvent_VampInvoke_C::StaticClass()->DefaultObject);

	return Default;
}

}


