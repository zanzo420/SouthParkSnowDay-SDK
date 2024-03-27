#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MentalStateCombat_Swarmer.MentalStateCombat_Swarmer_C
// (None)

class UClass* UMentalStateCombat_Swarmer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MentalStateCombat_Swarmer_C");

	return Clss;
}


// MentalStateCombat_Swarmer_C MentalStateCombat_Swarmer.Default__MentalStateCombat_Swarmer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMentalStateCombat_Swarmer_C* UMentalStateCombat_Swarmer_C::GetDefaultObj()
{
	static class UMentalStateCombat_Swarmer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMentalStateCombat_Swarmer_C*>(UMentalStateCombat_Swarmer_C::StaticClass()->DefaultObject);

	return Default;
}

}


