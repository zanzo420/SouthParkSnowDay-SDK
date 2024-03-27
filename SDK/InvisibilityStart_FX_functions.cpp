#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass InvisibilityStart_FX.InvisibilityStart_FX_C
// (Actor)

class UClass* AInvisibilityStart_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InvisibilityStart_FX_C");

	return Clss;
}


// InvisibilityStart_FX_C InvisibilityStart_FX.Default__InvisibilityStart_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AInvisibilityStart_FX_C* AInvisibilityStart_FX_C::GetDefaultObj()
{
	static class AInvisibilityStart_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AInvisibilityStart_FX_C*>(AInvisibilityStart_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


