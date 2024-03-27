#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Vomit_Fourth_FX.Vomit_Fourth_FX_C
// (Actor)

class UClass* AVomit_Fourth_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Vomit_Fourth_FX_C");

	return Clss;
}


// Vomit_Fourth_FX_C Vomit_Fourth_FX.Default__Vomit_Fourth_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AVomit_Fourth_FX_C* AVomit_Fourth_FX_C::GetDefaultObj()
{
	static class AVomit_Fourth_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AVomit_Fourth_FX_C*>(AVomit_Fourth_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


