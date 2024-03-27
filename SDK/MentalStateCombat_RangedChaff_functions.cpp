#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MentalStateCombat_RangedChaff.MentalStateCombat_RangedChaff_C
// (None)

class UClass* UMentalStateCombat_RangedChaff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MentalStateCombat_RangedChaff_C");

	return Clss;
}


// MentalStateCombat_RangedChaff_C MentalStateCombat_RangedChaff.Default__MentalStateCombat_RangedChaff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMentalStateCombat_RangedChaff_C* UMentalStateCombat_RangedChaff_C::GetDefaultObj()
{
	static class UMentalStateCombat_RangedChaff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMentalStateCombat_RangedChaff_C*>(UMentalStateCombat_RangedChaff_C::StaticClass()->DefaultObject);

	return Default;
}

}


