#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Attribute_RageGenerationScalar.Attribute_RageGenerationScalar_C
// (None)

class UClass* UAttribute_RageGenerationScalar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Attribute_RageGenerationScalar_C");

	return Clss;
}


// Attribute_RageGenerationScalar_C Attribute_RageGenerationScalar.Default__Attribute_RageGenerationScalar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttribute_RageGenerationScalar_C* UAttribute_RageGenerationScalar_C::GetDefaultObj()
{
	static class UAttribute_RageGenerationScalar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttribute_RageGenerationScalar_C*>(UAttribute_RageGenerationScalar_C::StaticClass()->DefaultObject);

	return Default;
}

}


