#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TrialActor_RangedChaff.TrialActor_RangedChaff_C
// (Actor)

class UClass* ATrialActor_RangedChaff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TrialActor_RangedChaff_C");

	return Clss;
}


// TrialActor_RangedChaff_C TrialActor_RangedChaff.Default__TrialActor_RangedChaff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrialActor_RangedChaff_C* ATrialActor_RangedChaff_C::GetDefaultObj()
{
	static class ATrialActor_RangedChaff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrialActor_RangedChaff_C*>(ATrialActor_RangedChaff_C::StaticClass()->DefaultObject);

	return Default;
}

}


