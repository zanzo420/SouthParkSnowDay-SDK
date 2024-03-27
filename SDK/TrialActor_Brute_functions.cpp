#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TrialActor_Brute.TrialActor_Brute_C
// (Actor)

class UClass* ATrialActor_Brute_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TrialActor_Brute_C");

	return Clss;
}


// TrialActor_Brute_C TrialActor_Brute.Default__TrialActor_Brute_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrialActor_Brute_C* ATrialActor_Brute_C::GetDefaultObj()
{
	static class ATrialActor_Brute_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrialActor_Brute_C*>(ATrialActor_Brute_C::StaticClass()->DefaultObject);

	return Default;
}

}


