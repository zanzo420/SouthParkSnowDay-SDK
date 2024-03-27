#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EncroacherBlastWave_FX.EncroacherBlastWave_FX_C
// (Actor)

class UClass* AEncroacherBlastWave_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EncroacherBlastWave_FX_C");

	return Clss;
}


// EncroacherBlastWave_FX_C EncroacherBlastWave_FX.Default__EncroacherBlastWave_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEncroacherBlastWave_FX_C* AEncroacherBlastWave_FX_C::GetDefaultObj()
{
	static class AEncroacherBlastWave_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEncroacherBlastWave_FX_C*>(AEncroacherBlastWave_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


