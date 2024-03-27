#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LegalDataBag.LegalDataBag_C
// (None)

class UClass* ULegalDataBag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LegalDataBag_C");

	return Clss;
}


// LegalDataBag_C LegalDataBag.Default__LegalDataBag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULegalDataBag_C* ULegalDataBag_C::GetDefaultObj()
{
	static class ULegalDataBag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULegalDataBag_C*>(ULegalDataBag_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LegalDataBag.LegalDataBag_C.SetVoiceRecordingDenied
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULegalDataBag_C::SetVoiceRecordingDenied()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LegalDataBag_C", "SetVoiceRecordingDenied");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LegalDataBag.LegalDataBag_C.ResetVoiceApproval
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DoesApprove                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULegalDataBag_C::ResetVoiceApproval(bool* DoesApprove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LegalDataBag_C", "ResetVoiceApproval");

	Params::ULegalDataBag_C_ResetVoiceApproval_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DoesApprove != nullptr)
		*DoesApprove = Parms.DoesApprove;

}


// Function LegalDataBag.LegalDataBag_C.SetVoiceRecordingApproved
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULegalDataBag_C::SetVoiceRecordingApproved()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LegalDataBag_C", "SetVoiceRecordingApproved");



	UObject::ProcessEvent(Func, nullptr);

}

}


