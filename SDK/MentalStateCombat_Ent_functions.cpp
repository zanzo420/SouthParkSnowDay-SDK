#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MentalStateCombat_Ent.MentalStateCombat_Ent_C
// (None)

class UClass* UMentalStateCombat_Ent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MentalStateCombat_Ent_C");

	return Clss;
}


// MentalStateCombat_Ent_C MentalStateCombat_Ent.Default__MentalStateCombat_Ent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMentalStateCombat_Ent_C* UMentalStateCombat_Ent_C::GetDefaultObj()
{
	static class UMentalStateCombat_Ent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMentalStateCombat_Ent_C*>(UMentalStateCombat_Ent_C::StaticClass()->DefaultObject);

	return Default;
}

}


