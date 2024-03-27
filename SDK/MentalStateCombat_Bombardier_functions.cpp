#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MentalStateCombat_Bombardier.MentalStateCombat_Bombardier_C
// (None)

class UClass* UMentalStateCombat_Bombardier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MentalStateCombat_Bombardier_C");

	return Clss;
}


// MentalStateCombat_Bombardier_C MentalStateCombat_Bombardier.Default__MentalStateCombat_Bombardier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMentalStateCombat_Bombardier_C* UMentalStateCombat_Bombardier_C::GetDefaultObj()
{
	static class UMentalStateCombat_Bombardier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMentalStateCombat_Bombardier_C*>(UMentalStateCombat_Bombardier_C::StaticClass()->DefaultObject);

	return Default;
}

}


