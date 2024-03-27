#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KennyRainbowSplashAura_FX.KennyRainbowSplashAura_FX_C
// (Actor)

class UClass* AKennyRainbowSplashAura_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KennyRainbowSplashAura_FX_C");

	return Clss;
}


// KennyRainbowSplashAura_FX_C KennyRainbowSplashAura_FX.Default__KennyRainbowSplashAura_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKennyRainbowSplashAura_FX_C* AKennyRainbowSplashAura_FX_C::GetDefaultObj()
{
	static class AKennyRainbowSplashAura_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKennyRainbowSplashAura_FX_C*>(AKennyRainbowSplashAura_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


