#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SpokeManagerBP.SpokeManagerBP_C
// (None)

class UClass* USpokeManagerBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpokeManagerBP_C");

	return Clss;
}


// SpokeManagerBP_C SpokeManagerBP.Default__SpokeManagerBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USpokeManagerBP_C* USpokeManagerBP_C::GetDefaultObj()
{
	static class USpokeManagerBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USpokeManagerBP_C*>(USpokeManagerBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SpokeManagerBP.SpokeManagerBP_C.ScheduleSpokeBS_ServerOnly
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USpokeBP_C*                  Spoke                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SetupChosenBS_ServerOnly_nextIndex                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpokeManagerBP_C::ScheduleSpokeBS_ServerOnly(class USpokeBP_C*& Spoke, int32 CallFunc_SetupChosenBS_ServerOnly_nextIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpokeManagerBP_C", "ScheduleSpokeBS_ServerOnly");

	Params::USpokeManagerBP_C_ScheduleSpokeBS_ServerOnly_Params Parms{};

	Parms.Spoke = Spoke;
	Parms.CallFunc_SetupChosenBS_ServerOnly_nextIndex = CallFunc_SetupChosenBS_ServerOnly_nextIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpokeManagerBP.SpokeManagerBP_C.HandleSpokeVisit
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USpokeBP_C*                  Spoke                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpokeManagerBP_C::HandleSpokeVisit(bool IsServer, class USpokeBP_C*& Spoke)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpokeManagerBP_C", "HandleSpokeVisit");

	Params::USpokeManagerBP_C_HandleSpokeVisit_Params Parms{};

	Parms.IsServer = IsServer;
	Parms.Spoke = Spoke;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpokeManagerBP.SpokeManagerBP_C.Setup BSSchedule_ServerOnly
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>              bsSchedule                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UQtnSpokeComponent*>  CallFunc_GetRegisteredSpokes_ReturnValue                         (ConstParm, ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnSpokeComponent*          CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USpokeBP_C*                  K2Node_DynamicCast_AsSpoke_BP                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void USpokeManagerBP_C::Setup_BSSchedule_ServerOnly(TArray<class UClass*>& bsSchedule, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UQtnSpokeComponent*>& CallFunc_GetRegisteredSpokes_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UQtnSpokeComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class USpokeBP_C* K2Node_DynamicCast_AsSpoke_BP, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpokeManagerBP_C", "Setup BSSchedule_ServerOnly");

	Params::USpokeManagerBP_C_Setup_BSSchedule_ServerOnly_Params Parms{};

	Parms.bsSchedule = bsSchedule;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetRegisteredSpokes_ReturnValue = CallFunc_GetRegisteredSpokes_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsSpoke_BP = K2Node_DynamicCast_AsSpoke_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


