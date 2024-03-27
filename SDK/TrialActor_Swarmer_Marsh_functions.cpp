#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TrialActor_Swarmer_Marsh.TrialActor_Swarmer_Marsh_C
// (Actor)

class UClass* ATrialActor_Swarmer_Marsh_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TrialActor_Swarmer_Marsh_C");

	return Clss;
}


// TrialActor_Swarmer_Marsh_C TrialActor_Swarmer_Marsh.Default__TrialActor_Swarmer_Marsh_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrialActor_Swarmer_Marsh_C* ATrialActor_Swarmer_Marsh_C::GetDefaultObj()
{
	static class ATrialActor_Swarmer_Marsh_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrialActor_Swarmer_Marsh_C*>(ATrialActor_Swarmer_Marsh_C::StaticClass()->DefaultObject);

	return Default;
}

}


