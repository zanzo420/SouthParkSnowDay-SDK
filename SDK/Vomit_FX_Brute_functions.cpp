#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Vomit_FX_Brute.Vomit_FX_Brute_C
// (Actor)

class UClass* AVomit_FX_Brute_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Vomit_FX_Brute_C");

	return Clss;
}


// Vomit_FX_Brute_C Vomit_FX_Brute.Default__Vomit_FX_Brute_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AVomit_FX_Brute_C* AVomit_FX_Brute_C::GetDefaultObj()
{
	static class AVomit_FX_Brute_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AVomit_FX_Brute_C*>(AVomit_FX_Brute_C::StaticClass()->DefaultObject);

	return Default;
}

}


