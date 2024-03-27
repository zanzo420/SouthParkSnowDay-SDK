#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Interface_QtnGoal_SP_Day1_FindRandy.Interface_QtnGoal_SP_Day1_FindRandy_C
// (None)

class UClass* IInterface_QtnGoal_SP_Day1_FindRandy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Interface_QtnGoal_SP_Day1_FindRandy_C");

	return Clss;
}


// Interface_QtnGoal_SP_Day1_FindRandy_C Interface_QtnGoal_SP_Day1_FindRandy.Default__Interface_QtnGoal_SP_Day1_FindRandy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IInterface_QtnGoal_SP_Day1_FindRandy_C* IInterface_QtnGoal_SP_Day1_FindRandy_C::GetDefaultObj()
{
	static class IInterface_QtnGoal_SP_Day1_FindRandy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IInterface_QtnGoal_SP_Day1_FindRandy_C*>(IInterface_QtnGoal_SP_Day1_FindRandy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Interface_QtnGoal_SP_Day1_FindRandy.Interface_QtnGoal_SP_Day1_FindRandy_C.GetEntranceGate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATravelVolume_BP_C*          EntranceGate                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInterface_QtnGoal_SP_Day1_FindRandy_C::GetEntranceGate(class ATravelVolume_BP_C** EntranceGate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_QtnGoal_SP_Day1_FindRandy_C", "GetEntranceGate");

	Params::IInterface_QtnGoal_SP_Day1_FindRandy_C_GetEntranceGate_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EntranceGate != nullptr)
		*EntranceGate = Parms.EntranceGate;

}


// Function Interface_QtnGoal_SP_Day1_FindRandy.Interface_QtnGoal_SP_Day1_FindRandy_C.DEBUGONLY_SetSkippedToSiege
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SkippedToSiege                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInterface_QtnGoal_SP_Day1_FindRandy_C::DEBUGONLY_SetSkippedToSiege(bool SkippedToSiege)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_QtnGoal_SP_Day1_FindRandy_C", "DEBUGONLY_SetSkippedToSiege");

	Params::IInterface_QtnGoal_SP_Day1_FindRandy_C_DEBUGONLY_SetSkippedToSiege_Params Parms{};

	Parms.SkippedToSiege = SkippedToSiege;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Interface_QtnGoal_SP_Day1_FindRandy.Interface_QtnGoal_SP_Day1_FindRandy_C.SetIntroGoal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnGoal*                    IntroGoal                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInterface_QtnGoal_SP_Day1_FindRandy_C::SetIntroGoal(class UQtnGoal* IntroGoal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_QtnGoal_SP_Day1_FindRandy_C", "SetIntroGoal");

	Params::IInterface_QtnGoal_SP_Day1_FindRandy_C_SetIntroGoal_Params Parms{};

	Parms.IntroGoal = IntroGoal;

	UObject::ProcessEvent(Func, &Parms);

}

}


