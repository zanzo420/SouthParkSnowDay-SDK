#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CheesingBrainsplosion_FX.CheesingBrainsplosion_FX_C
// (Actor)

class UClass* ACheesingBrainsplosion_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CheesingBrainsplosion_FX_C");

	return Clss;
}


// CheesingBrainsplosion_FX_C CheesingBrainsplosion_FX.Default__CheesingBrainsplosion_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACheesingBrainsplosion_FX_C* ACheesingBrainsplosion_FX_C::GetDefaultObj()
{
	static class ACheesingBrainsplosion_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACheesingBrainsplosion_FX_C*>(ACheesingBrainsplosion_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


