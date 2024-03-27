#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Attribute_HitReactionThreshold.Attribute_HitReactionThreshold_C
// (None)

class UClass* UAttribute_HitReactionThreshold_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Attribute_HitReactionThreshold_C");

	return Clss;
}


// Attribute_HitReactionThreshold_C Attribute_HitReactionThreshold.Default__Attribute_HitReactionThreshold_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttribute_HitReactionThreshold_C* UAttribute_HitReactionThreshold_C::GetDefaultObj()
{
	static class UAttribute_HitReactionThreshold_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttribute_HitReactionThreshold_C*>(UAttribute_HitReactionThreshold_C::StaticClass()->DefaultObject);

	return Default;
}

}


