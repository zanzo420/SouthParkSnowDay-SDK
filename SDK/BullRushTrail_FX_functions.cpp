#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BullRushTrail_FX.BullRushTrail_FX_C
// (Actor)

class UClass* ABullRushTrail_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BullRushTrail_FX_C");

	return Clss;
}


// BullRushTrail_FX_C BullRushTrail_FX.Default__BullRushTrail_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABullRushTrail_FX_C* ABullRushTrail_FX_C::GetDefaultObj()
{
	static class ABullRushTrail_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABullRushTrail_FX_C*>(ABullRushTrail_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


