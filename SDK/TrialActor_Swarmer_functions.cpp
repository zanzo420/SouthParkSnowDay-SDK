#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TrialActor_Swarmer.TrialActor_Swarmer_C
// (Actor)

class UClass* ATrialActor_Swarmer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TrialActor_Swarmer_C");

	return Clss;
}


// TrialActor_Swarmer_C TrialActor_Swarmer.Default__TrialActor_Swarmer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrialActor_Swarmer_C* ATrialActor_Swarmer_C::GetDefaultObj()
{
	static class ATrialActor_Swarmer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrialActor_Swarmer_C*>(ATrialActor_Swarmer_C::StaticClass()->DefaultObject);

	return Default;
}

}


