#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SocialHub_Geo1.SocialHub_Geo1_C
// (Actor)

class UClass* ASocialHub_Geo1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialHub_Geo1_C");

	return Clss;
}


// SocialHub_Geo1_C SocialHub_Geo1.Default__SocialHub_Geo1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASocialHub_Geo1_C* ASocialHub_Geo1_C::GetDefaultObj()
{
	static class ASocialHub_Geo1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASocialHub_Geo1_C*>(ASocialHub_Geo1_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SocialHub_Geo1.SocialHub_Geo1_C.ModalDialogFinished
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Accepted                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASocialHub_Geo1_C::ModalDialogFinished(bool Accepted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialHub_Geo1_C", "ModalDialogFinished");

	Params::ASocialHub_Geo1_C_ModalDialogFinished_Params Parms{};

	Parms.Accepted = Accepted;

	UObject::ProcessEvent(Func, &Parms);

}

}


