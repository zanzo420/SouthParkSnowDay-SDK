#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Dodge_Pooplet.Dodge_Pooplet_C
// (None)

class UClass* UDodge_Pooplet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Dodge_Pooplet_C");

	return Clss;
}


// Dodge_Pooplet_C Dodge_Pooplet.Default__Dodge_Pooplet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDodge_Pooplet_C* UDodge_Pooplet_C::GetDefaultObj()
{
	static class UDodge_Pooplet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDodge_Pooplet_C*>(UDodge_Pooplet_C::StaticClass()->DefaultObject);

	return Default;
}

}


