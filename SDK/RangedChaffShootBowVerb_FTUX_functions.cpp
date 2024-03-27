#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RangedChaffShootBowVerb_FTUX.RangedChaffShootBowVerb_FTUX_C
// (None)

class UClass* URangedChaffShootBowVerb_FTUX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RangedChaffShootBowVerb_FTUX_C");

	return Clss;
}


// RangedChaffShootBowVerb_FTUX_C RangedChaffShootBowVerb_FTUX.Default__RangedChaffShootBowVerb_FTUX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URangedChaffShootBowVerb_FTUX_C* URangedChaffShootBowVerb_FTUX_C::GetDefaultObj()
{
	static class URangedChaffShootBowVerb_FTUX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URangedChaffShootBowVerb_FTUX_C*>(URangedChaffShootBowVerb_FTUX_C::StaticClass()->DefaultObject);

	return Default;
}

}


