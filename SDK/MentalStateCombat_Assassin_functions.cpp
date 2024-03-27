#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MentalStateCombat_Assassin.MentalStateCombat_Assassin_C
// (None)

class UClass* UMentalStateCombat_Assassin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MentalStateCombat_Assassin_C");

	return Clss;
}


// MentalStateCombat_Assassin_C MentalStateCombat_Assassin.Default__MentalStateCombat_Assassin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMentalStateCombat_Assassin_C* UMentalStateCombat_Assassin_C::GetDefaultObj()
{
	static class UMentalStateCombat_Assassin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMentalStateCombat_Assassin_C*>(UMentalStateCombat_Assassin_C::StaticClass()->DefaultObject);

	return Default;
}

}


