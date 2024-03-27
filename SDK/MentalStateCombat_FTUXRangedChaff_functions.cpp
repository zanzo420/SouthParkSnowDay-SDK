#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MentalStateCombat_FTUXRangedChaff.MentalStateCombat_FTUXRangedChaff_C
// (None)

class UClass* UMentalStateCombat_FTUXRangedChaff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MentalStateCombat_FTUXRangedChaff_C");

	return Clss;
}


// MentalStateCombat_FTUXRangedChaff_C MentalStateCombat_FTUXRangedChaff.Default__MentalStateCombat_FTUXRangedChaff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMentalStateCombat_FTUXRangedChaff_C* UMentalStateCombat_FTUXRangedChaff_C::GetDefaultObj()
{
	static class UMentalStateCombat_FTUXRangedChaff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMentalStateCombat_FTUXRangedChaff_C*>(UMentalStateCombat_FTUXRangedChaff_C::StaticClass()->DefaultObject);

	return Default;
}

}


