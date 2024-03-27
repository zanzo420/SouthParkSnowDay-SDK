#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BullRushMomentumSonicBoom_FX1.BullRushMomentumSonicBoom_FX1_C
// (Actor)

class UClass* ABullRushMomentumSonicBoom_FX1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BullRushMomentumSonicBoom_FX1_C");

	return Clss;
}


// BullRushMomentumSonicBoom_FX1_C BullRushMomentumSonicBoom_FX1.Default__BullRushMomentumSonicBoom_FX1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABullRushMomentumSonicBoom_FX1_C* ABullRushMomentumSonicBoom_FX1_C::GetDefaultObj()
{
	static class ABullRushMomentumSonicBoom_FX1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABullRushMomentumSonicBoom_FX1_C*>(ABullRushMomentumSonicBoom_FX1_C::StaticClass()->DefaultObject);

	return Default;
}

}


