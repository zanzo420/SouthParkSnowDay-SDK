#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DarkMatterGooArm_FX.DarkMatterGooArm_FX_C
// (Actor)

class UClass* ADarkMatterGooArm_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DarkMatterGooArm_FX_C");

	return Clss;
}


// DarkMatterGooArm_FX_C DarkMatterGooArm_FX.Default__DarkMatterGooArm_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADarkMatterGooArm_FX_C* ADarkMatterGooArm_FX_C::GetDefaultObj()
{
	static class ADarkMatterGooArm_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADarkMatterGooArm_FX_C*>(ADarkMatterGooArm_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


