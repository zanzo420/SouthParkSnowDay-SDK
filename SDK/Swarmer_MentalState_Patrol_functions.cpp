#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Swarmer_MentalState_Patrol.Swarmer_MentalState_Patrol_C
// (None)

class UClass* USwarmer_MentalState_Patrol_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Swarmer_MentalState_Patrol_C");

	return Clss;
}


// Swarmer_MentalState_Patrol_C Swarmer_MentalState_Patrol.Default__Swarmer_MentalState_Patrol_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USwarmer_MentalState_Patrol_C* USwarmer_MentalState_Patrol_C::GetDefaultObj()
{
	static class USwarmer_MentalState_Patrol_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USwarmer_MentalState_Patrol_C*>(USwarmer_MentalState_Patrol_C::StaticClass()->DefaultObject);

	return Default;
}

}


