#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Attribute_PoofsReduction.Attribute_PoofsReduction_C
// (None)

class UClass* UAttribute_PoofsReduction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Attribute_PoofsReduction_C");

	return Clss;
}


// Attribute_PoofsReduction_C Attribute_PoofsReduction.Default__Attribute_PoofsReduction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttribute_PoofsReduction_C* UAttribute_PoofsReduction_C::GetDefaultObj()
{
	static class UAttribute_PoofsReduction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttribute_PoofsReduction_C*>(UAttribute_PoofsReduction_C::StaticClass()->DefaultObject);

	return Default;
}

}


