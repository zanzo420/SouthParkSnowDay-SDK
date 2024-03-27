#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RainbowBlast_FX.RainbowBlast_FX_C
// (Actor)

class UClass* ARainbowBlast_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RainbowBlast_FX_C");

	return Clss;
}


// RainbowBlast_FX_C RainbowBlast_FX.Default__RainbowBlast_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARainbowBlast_FX_C* ARainbowBlast_FX_C::GetDefaultObj()
{
	static class ARainbowBlast_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARainbowBlast_FX_C*>(ARainbowBlast_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


