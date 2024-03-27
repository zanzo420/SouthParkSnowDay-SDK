#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MentalStateCombat_Butters.MentalStateCombat_Butters_C
// (None)

class UClass* UMentalStateCombat_Butters_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MentalStateCombat_Butters_C");

	return Clss;
}


// MentalStateCombat_Butters_C MentalStateCombat_Butters.Default__MentalStateCombat_Butters_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMentalStateCombat_Butters_C* UMentalStateCombat_Butters_C::GetDefaultObj()
{
	static class UMentalStateCombat_Butters_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMentalStateCombat_Butters_C*>(UMentalStateCombat_Butters_C::StaticClass()->DefaultObject);

	return Default;
}

}


