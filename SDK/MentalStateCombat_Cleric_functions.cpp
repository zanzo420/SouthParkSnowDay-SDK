#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MentalStateCombat_Cleric.MentalStateCombat_Cleric_C
// (None)

class UClass* UMentalStateCombat_Cleric_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MentalStateCombat_Cleric_C");

	return Clss;
}


// MentalStateCombat_Cleric_C MentalStateCombat_Cleric.Default__MentalStateCombat_Cleric_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMentalStateCombat_Cleric_C* UMentalStateCombat_Cleric_C::GetDefaultObj()
{
	static class UMentalStateCombat_Cleric_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMentalStateCombat_Cleric_C*>(UMentalStateCombat_Cleric_C::StaticClass()->DefaultObject);

	return Default;
}

}


