#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BullRushCC_FX.BullRushCC_FX_C
// (Actor)

class UClass* ABullRushCC_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BullRushCC_FX_C");

	return Clss;
}


// BullRushCC_FX_C BullRushCC_FX.Default__BullRushCC_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABullRushCC_FX_C* ABullRushCC_FX_C::GetDefaultObj()
{
	static class ABullRushCC_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABullRushCC_FX_C*>(ABullRushCC_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


