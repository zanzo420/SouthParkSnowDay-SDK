#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShitBubbleBurst_FX.ShitBubbleBurst_FX_C
// (Actor)

class UClass* AShitBubbleBurst_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShitBubbleBurst_FX_C");

	return Clss;
}


// ShitBubbleBurst_FX_C ShitBubbleBurst_FX.Default__ShitBubbleBurst_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AShitBubbleBurst_FX_C* AShitBubbleBurst_FX_C::GetDefaultObj()
{
	static class AShitBubbleBurst_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AShitBubbleBurst_FX_C*>(AShitBubbleBurst_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


