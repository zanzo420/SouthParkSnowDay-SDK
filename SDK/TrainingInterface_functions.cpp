#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TrainingInterface.TrainingInterface_C
// (None)

class UClass* ITrainingInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TrainingInterface_C");

	return Clss;
}


// TrainingInterface_C TrainingInterface.Default__TrainingInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ITrainingInterface_C* ITrainingInterface_C::GetDefaultObj()
{
	static class ITrainingInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ITrainingInterface_C*>(ITrainingInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TrainingInterface.TrainingInterface_C.TrainingSatisfied?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      QtnTutorial                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Prompt                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               IsFound                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsSatisfied                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ITrainingInterface_C::TrainingSatisfied_(class UClass* QtnTutorial, const class FString& Prompt, bool* IsFound, bool* IsSatisfied)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrainingInterface_C", "TrainingSatisfied?");

	Params::ITrainingInterface_C_TrainingSatisfied__Params Parms{};

	Parms.QtnTutorial = QtnTutorial;
	Parms.Prompt = Prompt;

	UObject::ProcessEvent(Func, &Parms);

	if (IsFound != nullptr)
		*IsFound = Parms.IsFound;

	if (IsSatisfied != nullptr)
		*IsSatisfied = Parms.IsSatisfied;

}

}


