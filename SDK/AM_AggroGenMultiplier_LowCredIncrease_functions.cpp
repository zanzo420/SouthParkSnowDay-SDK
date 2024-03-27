#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AM_AggroGenMultiplier_LowCredIncrease.AM_AggroGenMultiplier_LowCredIncrease_C
// (None)

class UClass* UAM_AggroGenMultiplier_LowCredIncrease_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AM_AggroGenMultiplier_LowCredIncrease_C");

	return Clss;
}


// AM_AggroGenMultiplier_LowCredIncrease_C AM_AggroGenMultiplier_LowCredIncrease.Default__AM_AggroGenMultiplier_LowCredIncrease_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAM_AggroGenMultiplier_LowCredIncrease_C* UAM_AggroGenMultiplier_LowCredIncrease_C::GetDefaultObj()
{
	static class UAM_AggroGenMultiplier_LowCredIncrease_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAM_AggroGenMultiplier_LowCredIncrease_C*>(UAM_AggroGenMultiplier_LowCredIncrease_C::StaticClass()->DefaultObject);

	return Default;
}

}


