#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Attribute_ToiletPaperReduction.Attribute_ToiletPaperReduction_C
// (None)

class UClass* UAttribute_ToiletPaperReduction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Attribute_ToiletPaperReduction_C");

	return Clss;
}


// Attribute_ToiletPaperReduction_C Attribute_ToiletPaperReduction.Default__Attribute_ToiletPaperReduction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttribute_ToiletPaperReduction_C* UAttribute_ToiletPaperReduction_C::GetDefaultObj()
{
	static class UAttribute_ToiletPaperReduction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttribute_ToiletPaperReduction_C*>(UAttribute_ToiletPaperReduction_C::StaticClass()->DefaultObject);

	return Default;
}

}


