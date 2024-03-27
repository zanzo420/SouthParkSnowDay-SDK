#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Attribute_PoofsIncrease.Attribute_PoofsIncrease_C
// (None)

class UClass* UAttribute_PoofsIncrease_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Attribute_PoofsIncrease_C");

	return Clss;
}


// Attribute_PoofsIncrease_C Attribute_PoofsIncrease.Default__Attribute_PoofsIncrease_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttribute_PoofsIncrease_C* UAttribute_PoofsIncrease_C::GetDefaultObj()
{
	static class UAttribute_PoofsIncrease_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttribute_PoofsIncrease_C*>(UAttribute_PoofsIncrease_C::StaticClass()->DefaultObject);

	return Default;
}

}


