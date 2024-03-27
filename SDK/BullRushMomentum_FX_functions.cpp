#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BullRushMomentum_FX.BullRushMomentum_FX_C
// (Actor)

class UClass* ABullRushMomentum_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BullRushMomentum_FX_C");

	return Clss;
}


// BullRushMomentum_FX_C BullRushMomentum_FX.Default__BullRushMomentum_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABullRushMomentum_FX_C* ABullRushMomentum_FX_C::GetDefaultObj()
{
	static class ABullRushMomentum_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABullRushMomentum_FX_C*>(ABullRushMomentum_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


