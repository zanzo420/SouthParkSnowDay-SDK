#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MentalStateCombat_Adult_Brute.MentalStateCombat_Adult_Brute_C
// (None)

class UClass* UMentalStateCombat_Adult_Brute_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MentalStateCombat_Adult_Brute_C");

	return Clss;
}


// MentalStateCombat_Adult_Brute_C MentalStateCombat_Adult_Brute.Default__MentalStateCombat_Adult_Brute_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMentalStateCombat_Adult_Brute_C* UMentalStateCombat_Adult_Brute_C::GetDefaultObj()
{
	static class UMentalStateCombat_Adult_Brute_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMentalStateCombat_Adult_Brute_C*>(UMentalStateCombat_Adult_Brute_C::StaticClass()->DefaultObject);

	return Default;
}

}


