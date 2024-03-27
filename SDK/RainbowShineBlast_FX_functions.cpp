#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RainbowShineBlast_FX.RainbowShineBlast_FX_C
// (Actor)

class UClass* ARainbowShineBlast_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RainbowShineBlast_FX_C");

	return Clss;
}


// RainbowShineBlast_FX_C RainbowShineBlast_FX.Default__RainbowShineBlast_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARainbowShineBlast_FX_C* ARainbowShineBlast_FX_C::GetDefaultObj()
{
	static class ARainbowShineBlast_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARainbowShineBlast_FX_C*>(ARainbowShineBlast_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


