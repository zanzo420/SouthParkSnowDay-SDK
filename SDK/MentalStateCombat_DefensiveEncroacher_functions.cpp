#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MentalStateCombat_DefensiveEncroacher.MentalStateCombat_DefensiveEncroacher_C
// (None)

class UClass* UMentalStateCombat_DefensiveEncroacher_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MentalStateCombat_DefensiveEncroacher_C");

	return Clss;
}


// MentalStateCombat_DefensiveEncroacher_C MentalStateCombat_DefensiveEncroacher.Default__MentalStateCombat_DefensiveEncroacher_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMentalStateCombat_DefensiveEncroacher_C* UMentalStateCombat_DefensiveEncroacher_C::GetDefaultObj()
{
	static class UMentalStateCombat_DefensiveEncroacher_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMentalStateCombat_DefensiveEncroacher_C*>(UMentalStateCombat_DefensiveEncroacher_C::StaticClass()->DefaultObject);

	return Default;
}

}


