#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TrainingMoment_MatchMaking.TrainingMoment_MatchMaking_C
// (None)

class UClass* UTrainingMoment_MatchMaking_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TrainingMoment_MatchMaking_C");

	return Clss;
}


// TrainingMoment_MatchMaking_C TrainingMoment_MatchMaking.Default__TrainingMoment_MatchMaking_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTrainingMoment_MatchMaking_C* UTrainingMoment_MatchMaking_C::GetDefaultObj()
{
	static class UTrainingMoment_MatchMaking_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTrainingMoment_MatchMaking_C*>(UTrainingMoment_MatchMaking_C::StaticClass()->DefaultObject);

	return Default;
}

}


