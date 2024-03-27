#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Attribute_ToiletPaperIncrease.Attribute_ToiletPaperIncrease_C
// (None)

class UClass* UAttribute_ToiletPaperIncrease_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Attribute_ToiletPaperIncrease_C");

	return Clss;
}


// Attribute_ToiletPaperIncrease_C Attribute_ToiletPaperIncrease.Default__Attribute_ToiletPaperIncrease_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttribute_ToiletPaperIncrease_C* UAttribute_ToiletPaperIncrease_C::GetDefaultObj()
{
	static class UAttribute_ToiletPaperIncrease_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttribute_ToiletPaperIncrease_C*>(UAttribute_ToiletPaperIncrease_C::StaticClass()->DefaultObject);

	return Default;
}

}


