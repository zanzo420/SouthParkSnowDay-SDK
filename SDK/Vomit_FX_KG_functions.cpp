#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Vomit_FX_KG.Vomit_FX_KG_C
// (Actor)

class UClass* AVomit_FX_KG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Vomit_FX_KG_C");

	return Clss;
}


// Vomit_FX_KG_C Vomit_FX_KG.Default__Vomit_FX_KG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AVomit_FX_KG_C* AVomit_FX_KG_C::GetDefaultObj()
{
	static class AVomit_FX_KG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AVomit_FX_KG_C*>(AVomit_FX_KG_C::StaticClass()->DefaultObject);

	return Default;
}

}


