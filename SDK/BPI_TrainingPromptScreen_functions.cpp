#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_TrainingPromptScreen.BPI_TrainingPromptScreen_C
// (None)

class UClass* IBPI_TrainingPromptScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_TrainingPromptScreen_C");

	return Clss;
}


// BPI_TrainingPromptScreen_C BPI_TrainingPromptScreen.Default__BPI_TrainingPromptScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_TrainingPromptScreen_C* IBPI_TrainingPromptScreen_C::GetDefaultObj()
{
	static class IBPI_TrainingPromptScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_TrainingPromptScreen_C*>(IBPI_TrainingPromptScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_TrainingPromptScreen.BPI_TrainingPromptScreen_C.AddTrainingPrompt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Prompt                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Heading                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FName                        Identity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_TrainingPromptScreen_C::AddTrainingPrompt(const class FString& Prompt, const class FString& Heading, class FName Identity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_TrainingPromptScreen_C", "AddTrainingPrompt");

	Params::IBPI_TrainingPromptScreen_C_AddTrainingPrompt_Params Parms{};

	Parms.Prompt = Prompt;
	Parms.Heading = Heading;
	Parms.Identity = Identity;

	UObject::ProcessEvent(Func, &Parms);

}

}


