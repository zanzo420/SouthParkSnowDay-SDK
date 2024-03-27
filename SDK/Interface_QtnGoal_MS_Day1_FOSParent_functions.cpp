#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Interface_QtnGoal_MS_Day1_FOSParent.Interface_QtnGoal_MS_Day1_FOSParent_C
// (None)

class UClass* IInterface_QtnGoal_MS_Day1_FOSParent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Interface_QtnGoal_MS_Day1_FOSParent_C");

	return Clss;
}


// Interface_QtnGoal_MS_Day1_FOSParent_C Interface_QtnGoal_MS_Day1_FOSParent.Default__Interface_QtnGoal_MS_Day1_FOSParent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IInterface_QtnGoal_MS_Day1_FOSParent_C* IInterface_QtnGoal_MS_Day1_FOSParent_C::GetDefaultObj()
{
	static class IInterface_QtnGoal_MS_Day1_FOSParent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IInterface_QtnGoal_MS_Day1_FOSParent_C*>(IInterface_QtnGoal_MS_Day1_FOSParent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Interface_QtnGoal_MS_Day1_FOSParent.Interface_QtnGoal_MS_Day1_FOSParent_C.DoGetExitGate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATravelVolume_BP_C*          ExitGate                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInterface_QtnGoal_MS_Day1_FOSParent_C::DoGetExitGate(class ATravelVolume_BP_C** ExitGate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_QtnGoal_MS_Day1_FOSParent_C", "DoGetExitGate");

	Params::IInterface_QtnGoal_MS_Day1_FOSParent_C_DoGetExitGate_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ExitGate != nullptr)
		*ExitGate = Parms.ExitGate;

}


// Function Interface_QtnGoal_MS_Day1_FOSParent.Interface_QtnGoal_MS_Day1_FOSParent_C.SetEntranceGate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATravelVolume_BP_C*          EntranceGate                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInterface_QtnGoal_MS_Day1_FOSParent_C::SetEntranceGate(class ATravelVolume_BP_C* EntranceGate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_QtnGoal_MS_Day1_FOSParent_C", "SetEntranceGate");

	Params::IInterface_QtnGoal_MS_Day1_FOSParent_C_SetEntranceGate_Params Parms{};

	Parms.EntranceGate = EntranceGate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Interface_QtnGoal_MS_Day1_FOSParent.Interface_QtnGoal_MS_Day1_FOSParent_C.SetIsFirstFeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFirstFeat                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInterface_QtnGoal_MS_Day1_FOSParent_C::SetIsFirstFeat(bool IsFirstFeat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_QtnGoal_MS_Day1_FOSParent_C", "SetIsFirstFeat");

	Params::IInterface_QtnGoal_MS_Day1_FOSParent_C_SetIsFirstFeat_Params Parms{};

	Parms.IsFirstFeat = IsFirstFeat;

	UObject::ProcessEvent(Func, &Parms);

}

}


