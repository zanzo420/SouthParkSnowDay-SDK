#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MentalSubStateRangedTactics_CartmanBoss.MentalSubStateRangedTactics_CartmanBoss_C
// (None)

class UClass* UMentalSubStateRangedTactics_CartmanBoss_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MentalSubStateRangedTactics_CartmanBoss_C");

	return Clss;
}


// MentalSubStateRangedTactics_CartmanBoss_C MentalSubStateRangedTactics_CartmanBoss.Default__MentalSubStateRangedTactics_CartmanBoss_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMentalSubStateRangedTactics_CartmanBoss_C* UMentalSubStateRangedTactics_CartmanBoss_C::GetDefaultObj()
{
	static class UMentalSubStateRangedTactics_CartmanBoss_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMentalSubStateRangedTactics_CartmanBoss_C*>(UMentalSubStateRangedTactics_CartmanBoss_C::StaticClass()->DefaultObject);

	return Default;
}

}


