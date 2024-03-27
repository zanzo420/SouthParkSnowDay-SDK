#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnGoalManager_HordeMode.QtnGoalManager_HordeMode_C
// (None)

class UClass* UQtnGoalManager_HordeMode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnGoalManager_HordeMode_C");

	return Clss;
}


// QtnGoalManager_HordeMode_C QtnGoalManager_HordeMode.Default__QtnGoalManager_HordeMode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnGoalManager_HordeMode_C* UQtnGoalManager_HordeMode_C::GetDefaultObj()
{
	static class UQtnGoalManager_HordeMode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnGoalManager_HordeMode_C*>(UQtnGoalManager_HordeMode_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QtnGoalManager_HordeMode.QtnGoalManager_HordeMode_C.GetPotentialProgressPins
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FQtnStruct_ProgressPin>PotentialProgressPinsThisRun                                     (Parm, OutParm)
// TArray<TSoftClassPtr<class UGoalBase_C>>LOCAL_TodaysEstimatedGoals_Soft                                  (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftClassPtr<class UGoalBase_C>   CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_LoadClassAsset_Blocking_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsGoal_Base                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnStruct_ProgressPin      K2Node_MakeStruct_QtnStruct_ProgressPin                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoalManager_HordeMode_C::GetPotentialProgressPins(TArray<struct FQtnStruct_ProgressPin>* PotentialProgressPinsThisRun, const TArray<TSoftClassPtr<class UGoalBase_C>>& LOCAL_TodaysEstimatedGoals_Soft, int32 Temp_int_Array_Index_Variable, TSoftClassPtr<class UGoalBase_C> CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsGoal_Base, bool K2Node_ClassDynamicCast_bSuccess, const struct FQtnStruct_ProgressPin& K2Node_MakeStruct_QtnStruct_ProgressPin, bool CallFunc_IsServer_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_HordeMode_C", "GetPotentialProgressPins");

	Params::UQtnGoalManager_HordeMode_C_GetPotentialProgressPins_Params Parms{};

	Parms.LOCAL_TodaysEstimatedGoals_Soft = LOCAL_TodaysEstimatedGoals_Soft;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_LoadClassAsset_Blocking_ReturnValue = CallFunc_LoadClassAsset_Blocking_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsGoal_Base = K2Node_ClassDynamicCast_AsGoal_Base;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_QtnStruct_ProgressPin = K2Node_MakeStruct_QtnStruct_ProgressPin;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PotentialProgressPinsThisRun != nullptr)
		*PotentialProgressPinsThisRun = std::move(Parms.PotentialProgressPinsThisRun);

}


// Function QtnGoalManager_HordeMode.QtnGoalManager_HordeMode_C.SetupSeedGoals_ServerOnly
// (Event, Public, BlueprintEvent)
// Parameters:

void UQtnGoalManager_HordeMode_C::SetupSeedGoals_ServerOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_HordeMode_C", "SetupSeedGoals_ServerOnly");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoalManager_HordeMode.QtnGoalManager_HordeMode_C.ExecuteUbergraph_QtnGoalManager_HordeMode
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_1                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_2                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_3                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_4                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_5                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_6                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoalManager_HordeMode_C::ExecuteUbergraph_QtnGoalManager_HordeMode(int32 EntryPoint, class UQtnGoal* CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_1, bool K2Node_SwitchString_CmpSuccess, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_2, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_3, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_4, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_5, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_HordeMode_C", "ExecuteUbergraph_QtnGoalManager_HordeMode");

	Params::UQtnGoalManager_HordeMode_C_ExecuteUbergraph_QtnGoalManager_HordeMode_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue = CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_1 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_1;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_2 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_2;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_3 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_3;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_4 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_4;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_5 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_5;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_6 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_6;

	UObject::ProcessEvent(Func, &Parms);

}

}


