#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MentalStateCombat_KennyBoss.MentalStateCombat_KennyBoss_C
// (None)

class UClass* UMentalStateCombat_KennyBoss_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MentalStateCombat_KennyBoss_C");

	return Clss;
}


// MentalStateCombat_KennyBoss_C MentalStateCombat_KennyBoss.Default__MentalStateCombat_KennyBoss_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMentalStateCombat_KennyBoss_C* UMentalStateCombat_KennyBoss_C::GetDefaultObj()
{
	static class UMentalStateCombat_KennyBoss_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMentalStateCombat_KennyBoss_C*>(UMentalStateCombat_KennyBoss_C::StaticClass()->DefaultObject);

	return Default;
}

}


