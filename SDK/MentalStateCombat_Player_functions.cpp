#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MentalStateCombat_Player.MentalStateCombat_Player_C
// (None)

class UClass* UMentalStateCombat_Player_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MentalStateCombat_Player_C");

	return Clss;
}


// MentalStateCombat_Player_C MentalStateCombat_Player.Default__MentalStateCombat_Player_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMentalStateCombat_Player_C* UMentalStateCombat_Player_C::GetDefaultObj()
{
	static class UMentalStateCombat_Player_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMentalStateCombat_Player_C*>(UMentalStateCombat_Player_C::StaticClass()->DefaultObject);

	return Default;
}

}


