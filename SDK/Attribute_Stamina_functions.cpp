#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Attribute_Stamina.Attribute_Stamina_C
// (None)

class UClass* UAttribute_Stamina_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Attribute_Stamina_C");

	return Clss;
}


// Attribute_Stamina_C Attribute_Stamina.Default__Attribute_Stamina_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttribute_Stamina_C* UAttribute_Stamina_C::GetDefaultObj()
{
	static class UAttribute_Stamina_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttribute_Stamina_C*>(UAttribute_Stamina_C::StaticClass()->DefaultObject);

	return Default;
}

}


