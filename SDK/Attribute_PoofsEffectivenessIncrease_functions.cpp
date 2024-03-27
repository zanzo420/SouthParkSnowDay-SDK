#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Attribute_PoofsEffectivenessIncrease.Attribute_PoofsEffectivenessIncrease_C
// (None)

class UClass* UAttribute_PoofsEffectivenessIncrease_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Attribute_PoofsEffectivenessIncrease_C");

	return Clss;
}


// Attribute_PoofsEffectivenessIncrease_C Attribute_PoofsEffectivenessIncrease.Default__Attribute_PoofsEffectivenessIncrease_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttribute_PoofsEffectivenessIncrease_C* UAttribute_PoofsEffectivenessIncrease_C::GetDefaultObj()
{
	static class UAttribute_PoofsEffectivenessIncrease_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttribute_PoofsEffectivenessIncrease_C*>(UAttribute_PoofsEffectivenessIncrease_C::StaticClass()->DefaultObject);

	return Default;
}

}


