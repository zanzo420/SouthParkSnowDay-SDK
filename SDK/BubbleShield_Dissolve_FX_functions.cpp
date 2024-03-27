#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BubbleShield_Dissolve_FX.BubbleShield_Dissolve_FX_C
// (Actor)

class UClass* ABubbleShield_Dissolve_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BubbleShield_Dissolve_FX_C");

	return Clss;
}


// BubbleShield_Dissolve_FX_C BubbleShield_Dissolve_FX.Default__BubbleShield_Dissolve_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABubbleShield_Dissolve_FX_C* ABubbleShield_Dissolve_FX_C::GetDefaultObj()
{
	static class ABubbleShield_Dissolve_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABubbleShield_Dissolve_FX_C*>(ABubbleShield_Dissolve_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


