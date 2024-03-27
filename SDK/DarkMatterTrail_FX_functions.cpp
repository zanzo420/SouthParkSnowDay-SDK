#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DarkMatterTrail_FX.DarkMatterTrail_FX_C
// (Actor)

class UClass* ADarkMatterTrail_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DarkMatterTrail_FX_C");

	return Clss;
}


// DarkMatterTrail_FX_C DarkMatterTrail_FX.Default__DarkMatterTrail_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADarkMatterTrail_FX_C* ADarkMatterTrail_FX_C::GetDefaultObj()
{
	static class ADarkMatterTrail_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADarkMatterTrail_FX_C*>(ADarkMatterTrail_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


