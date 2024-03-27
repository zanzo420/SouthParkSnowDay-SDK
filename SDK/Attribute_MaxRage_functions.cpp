#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Attribute_MaxRage.Attribute_MaxRage_C
// (None)

class UClass* UAttribute_MaxRage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Attribute_MaxRage_C");

	return Clss;
}


// Attribute_MaxRage_C Attribute_MaxRage.Default__Attribute_MaxRage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttribute_MaxRage_C* UAttribute_MaxRage_C::GetDefaultObj()
{
	static class UAttribute_MaxRage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttribute_MaxRage_C*>(UAttribute_MaxRage_C::StaticClass()->DefaultObject);

	return Default;
}

}


