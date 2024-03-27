#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SuperchargedRibbon_FX.SuperchargedRibbon_FX_C
// (Actor)

class UClass* ASuperchargedRibbon_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SuperchargedRibbon_FX_C");

	return Clss;
}


// SuperchargedRibbon_FX_C SuperchargedRibbon_FX.Default__SuperchargedRibbon_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASuperchargedRibbon_FX_C* ASuperchargedRibbon_FX_C::GetDefaultObj()
{
	static class ASuperchargedRibbon_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASuperchargedRibbon_FX_C*>(ASuperchargedRibbon_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


