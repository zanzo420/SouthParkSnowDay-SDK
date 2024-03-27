#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FrostArrowBurst_FX.FrostArrowBurst_FX_C
// (Actor)

class UClass* AFrostArrowBurst_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FrostArrowBurst_FX_C");

	return Clss;
}


// FrostArrowBurst_FX_C FrostArrowBurst_FX.Default__FrostArrowBurst_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFrostArrowBurst_FX_C* AFrostArrowBurst_FX_C::GetDefaultObj()
{
	static class AFrostArrowBurst_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFrostArrowBurst_FX_C*>(AFrostArrowBurst_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


