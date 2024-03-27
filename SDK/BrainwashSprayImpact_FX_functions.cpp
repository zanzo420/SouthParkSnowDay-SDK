#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BrainwashSprayImpact_FX.BrainwashSprayImpact_FX_C
// (Actor)

class UClass* ABrainwashSprayImpact_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BrainwashSprayImpact_FX_C");

	return Clss;
}


// BrainwashSprayImpact_FX_C BrainwashSprayImpact_FX.Default__BrainwashSprayImpact_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABrainwashSprayImpact_FX_C* ABrainwashSprayImpact_FX_C::GetDefaultObj()
{
	static class ABrainwashSprayImpact_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABrainwashSprayImpact_FX_C*>(ABrainwashSprayImpact_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


