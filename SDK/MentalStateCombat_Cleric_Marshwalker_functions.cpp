#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MentalStateCombat_Cleric_Marshwalker.MentalStateCombat_Cleric_Marshwalker_C
// (None)

class UClass* UMentalStateCombat_Cleric_Marshwalker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MentalStateCombat_Cleric_Marshwalker_C");

	return Clss;
}


// MentalStateCombat_Cleric_Marshwalker_C MentalStateCombat_Cleric_Marshwalker.Default__MentalStateCombat_Cleric_Marshwalker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMentalStateCombat_Cleric_Marshwalker_C* UMentalStateCombat_Cleric_Marshwalker_C::GetDefaultObj()
{
	static class UMentalStateCombat_Cleric_Marshwalker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMentalStateCombat_Cleric_Marshwalker_C*>(UMentalStateCombat_Cleric_Marshwalker_C::StaticClass()->DefaultObject);

	return Default;
}

}


