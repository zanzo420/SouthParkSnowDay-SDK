#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RainbowWhirlwindBlast_FX.RainbowWhirlwindBlast_FX_C
// (Actor)

class UClass* ARainbowWhirlwindBlast_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RainbowWhirlwindBlast_FX_C");

	return Clss;
}


// RainbowWhirlwindBlast_FX_C RainbowWhirlwindBlast_FX.Default__RainbowWhirlwindBlast_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARainbowWhirlwindBlast_FX_C* ARainbowWhirlwindBlast_FX_C::GetDefaultObj()
{
	static class ARainbowWhirlwindBlast_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARainbowWhirlwindBlast_FX_C*>(ARainbowWhirlwindBlast_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


