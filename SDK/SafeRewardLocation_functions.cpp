#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SafeRewardLocation.SafeRewardLocation_C
// (Actor)

class UClass* ASafeRewardLocation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SafeRewardLocation_C");

	return Clss;
}


// SafeRewardLocation_C SafeRewardLocation.Default__SafeRewardLocation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASafeRewardLocation_C* ASafeRewardLocation_C::GetDefaultObj()
{
	static class ASafeRewardLocation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASafeRewardLocation_C*>(ASafeRewardLocation_C::StaticClass()->DefaultObject);

	return Default;
}

}


