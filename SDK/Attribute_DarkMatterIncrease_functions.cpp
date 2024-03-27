#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Attribute_DarkMatterIncrease.Attribute_DarkMatterIncrease_C
// (None)

class UClass* UAttribute_DarkMatterIncrease_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Attribute_DarkMatterIncrease_C");

	return Clss;
}


// Attribute_DarkMatterIncrease_C Attribute_DarkMatterIncrease.Default__Attribute_DarkMatterIncrease_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttribute_DarkMatterIncrease_C* UAttribute_DarkMatterIncrease_C::GetDefaultObj()
{
	static class UAttribute_DarkMatterIncrease_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttribute_DarkMatterIncrease_C*>(UAttribute_DarkMatterIncrease_C::StaticClass()->DefaultObject);

	return Default;
}

}


