#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TrialActor_RangedChaff_Marsh.TrialActor_RangedChaff_Marsh_C
// (Actor)

class UClass* ATrialActor_RangedChaff_Marsh_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TrialActor_RangedChaff_Marsh_C");

	return Clss;
}


// TrialActor_RangedChaff_Marsh_C TrialActor_RangedChaff_Marsh.Default__TrialActor_RangedChaff_Marsh_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrialActor_RangedChaff_Marsh_C* ATrialActor_RangedChaff_Marsh_C::GetDefaultObj()
{
	static class ATrialActor_RangedChaff_Marsh_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrialActor_RangedChaff_Marsh_C*>(ATrialActor_RangedChaff_Marsh_C::StaticClass()->DefaultObject);

	return Default;
}

}


