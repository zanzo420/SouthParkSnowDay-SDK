#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TrainingMoment_PowersSelect_Tutorial.TrainingMoment_PowersSelect_Tutorial_C
// (None)

class UClass* UTrainingMoment_PowersSelect_Tutorial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TrainingMoment_PowersSelect_Tutorial_C");

	return Clss;
}


// TrainingMoment_PowersSelect_Tutorial_C TrainingMoment_PowersSelect_Tutorial.Default__TrainingMoment_PowersSelect_Tutorial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTrainingMoment_PowersSelect_Tutorial_C* UTrainingMoment_PowersSelect_Tutorial_C::GetDefaultObj()
{
	static class UTrainingMoment_PowersSelect_Tutorial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTrainingMoment_PowersSelect_Tutorial_C*>(UTrainingMoment_PowersSelect_Tutorial_C::StaticClass()->DefaultObject);

	return Default;
}

}


