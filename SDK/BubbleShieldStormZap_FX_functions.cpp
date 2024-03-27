#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BubbleShieldStormZap_FX.BubbleShieldStormZap_FX_C
// (Actor)

class UClass* ABubbleShieldStormZap_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BubbleShieldStormZap_FX_C");

	return Clss;
}


// BubbleShieldStormZap_FX_C BubbleShieldStormZap_FX.Default__BubbleShieldStormZap_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABubbleShieldStormZap_FX_C* ABubbleShieldStormZap_FX_C::GetDefaultObj()
{
	static class ABubbleShieldStormZap_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABubbleShieldStormZap_FX_C*>(ABubbleShieldStormZap_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


