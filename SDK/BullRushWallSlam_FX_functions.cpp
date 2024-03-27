#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BullRushWallSlam_FX.BullRushWallSlam_FX_C
// (Actor)

class UClass* ABullRushWallSlam_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BullRushWallSlam_FX_C");

	return Clss;
}


// BullRushWallSlam_FX_C BullRushWallSlam_FX.Default__BullRushWallSlam_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABullRushWallSlam_FX_C* ABullRushWallSlam_FX_C::GetDefaultObj()
{
	static class ABullRushWallSlam_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABullRushWallSlam_FX_C*>(ABullRushWallSlam_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


