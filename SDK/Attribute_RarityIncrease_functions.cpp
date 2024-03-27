#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Attribute_RarityIncrease.Attribute_RarityIncrease_C
// (None)

class UClass* UAttribute_RarityIncrease_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Attribute_RarityIncrease_C");

	return Clss;
}


// Attribute_RarityIncrease_C Attribute_RarityIncrease.Default__Attribute_RarityIncrease_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttribute_RarityIncrease_C* UAttribute_RarityIncrease_C::GetDefaultObj()
{
	static class UAttribute_RarityIncrease_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttribute_RarityIncrease_C*>(UAttribute_RarityIncrease_C::StaticClass()->DefaultObject);

	return Default;
}

}


