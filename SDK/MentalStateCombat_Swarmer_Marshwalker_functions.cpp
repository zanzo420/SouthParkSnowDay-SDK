#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MentalStateCombat_Swarmer_Marshwalker.MentalStateCombat_Swarmer_Marshwalker_C
// (None)

class UClass* UMentalStateCombat_Swarmer_Marshwalker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MentalStateCombat_Swarmer_Marshwalker_C");

	return Clss;
}


// MentalStateCombat_Swarmer_Marshwalker_C MentalStateCombat_Swarmer_Marshwalker.Default__MentalStateCombat_Swarmer_Marshwalker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMentalStateCombat_Swarmer_Marshwalker_C* UMentalStateCombat_Swarmer_Marshwalker_C::GetDefaultObj()
{
	static class UMentalStateCombat_Swarmer_Marshwalker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMentalStateCombat_Swarmer_Marshwalker_C*>(UMentalStateCombat_Swarmer_Marshwalker_C::StaticClass()->DefaultObject);

	return Default;
}

}


