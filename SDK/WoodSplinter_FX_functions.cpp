#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WoodSplinter_FX.WoodSplinter_FX_C
// (Actor)

class UClass* AWoodSplinter_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WoodSplinter_FX_C");

	return Clss;
}


// WoodSplinter_FX_C WoodSplinter_FX.Default__WoodSplinter_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWoodSplinter_FX_C* AWoodSplinter_FX_C::GetDefaultObj()
{
	static class AWoodSplinter_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWoodSplinter_FX_C*>(AWoodSplinter_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


