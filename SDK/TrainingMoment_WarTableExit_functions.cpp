#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TrainingMoment_WarTableExit.TrainingMoment_WarTableExit_C
// (None)

class UClass* UTrainingMoment_WarTableExit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TrainingMoment_WarTableExit_C");

	return Clss;
}


// TrainingMoment_WarTableExit_C TrainingMoment_WarTableExit.Default__TrainingMoment_WarTableExit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTrainingMoment_WarTableExit_C* UTrainingMoment_WarTableExit_C::GetDefaultObj()
{
	static class UTrainingMoment_WarTableExit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTrainingMoment_WarTableExit_C*>(UTrainingMoment_WarTableExit_C::StaticClass()->DefaultObject);

	return Default;
}

}


