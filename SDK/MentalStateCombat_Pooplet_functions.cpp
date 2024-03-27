#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MentalStateCombat_Pooplet.MentalStateCombat_Pooplet_C
// (None)

class UClass* UMentalStateCombat_Pooplet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MentalStateCombat_Pooplet_C");

	return Clss;
}


// MentalStateCombat_Pooplet_C MentalStateCombat_Pooplet.Default__MentalStateCombat_Pooplet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMentalStateCombat_Pooplet_C* UMentalStateCombat_Pooplet_C::GetDefaultObj()
{
	static class UMentalStateCombat_Pooplet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMentalStateCombat_Pooplet_C*>(UMentalStateCombat_Pooplet_C::StaticClass()->DefaultObject);

	return Default;
}

}


