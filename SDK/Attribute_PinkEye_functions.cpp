#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Attribute_PinkEye.Attribute_PinkEye_C
// (None)

class UClass* UAttribute_PinkEye_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Attribute_PinkEye_C");

	return Clss;
}


// Attribute_PinkEye_C Attribute_PinkEye.Default__Attribute_PinkEye_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttribute_PinkEye_C* UAttribute_PinkEye_C::GetDefaultObj()
{
	static class UAttribute_PinkEye_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttribute_PinkEye_C*>(UAttribute_PinkEye_C::StaticClass()->DefaultObject);

	return Default;
}

}


