#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnGoal_MS_Act2_MapEntry.QtnGoal_MS_Act2_MapEntry_C
// (None)

class UClass* UQtnGoal_MS_Act2_MapEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnGoal_MS_Act2_MapEntry_C");

	return Clss;
}


// QtnGoal_MS_Act2_MapEntry_C QtnGoal_MS_Act2_MapEntry.Default__QtnGoal_MS_Act2_MapEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnGoal_MS_Act2_MapEntry_C* UQtnGoal_MS_Act2_MapEntry_C::GetDefaultObj()
{
	static class UQtnGoal_MS_Act2_MapEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnGoal_MS_Act2_MapEntry_C*>(UQtnGoal_MS_Act2_MapEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QtnGoal_MS_Act2_MapEntry.QtnGoal_MS_Act2_MapEntry_C.StartChildGoals
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager_MainStreet_C*K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UQtnGoal*>            CallFunc_GetChildGoals_ReturnValue                               (ConstParm, ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_MS_Act2_MapEntry_C::StartChildGoals(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, bool CallFunc_IsServer_ReturnValue, class UQtnGoalManager_MainStreet_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street, bool K2Node_DynamicCast_bSuccess, TArray<class UQtnGoal*>& CallFunc_GetChildGoals_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UQtnGoal* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_MapEntry_C", "StartChildGoals");

	Params::UQtnGoal_MS_Act2_MapEntry_C_StartChildGoals_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street = K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetChildGoals_ReturnValue = CallFunc_GetChildGoals_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Act2_MapEntry.QtnGoal_MS_Act2_MapEntry_C.Get Gate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_MainStreet_C*K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_Find_Marked_Actors_Server_Only_foundActors              (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATravelVolume_BP_C*          K2Node_DynamicCast_AsTravel_Volume_BP                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_MS_Act2_MapEntry_C::Get_Gate(class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManager_MainStreet_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street, bool K2Node_DynamicCast_bSuccess, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class ATravelVolume_BP_C* K2Node_DynamicCast_AsTravel_Volume_BP, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_MapEntry_C", "Get Gate");

	Params::UQtnGoal_MS_Act2_MapEntry_C_Get_Gate_Params Parms{};

	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street = K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Find_Marked_Actors_Server_Only_foundActors = CallFunc_Find_Marked_Actors_Server_Only_foundActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_DynamicCast_AsTravel_Volume_BP = K2Node_DynamicCast_AsTravel_Volume_BP;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Act2_MapEntry.QtnGoal_MS_Act2_MapEntry_C.OnGoalSpawned_ServerOnly
// (Event, Public, BlueprintEvent)
// Parameters:

void UQtnGoal_MS_Act2_MapEntry_C::OnGoalSpawned_ServerOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_MapEntry_C", "OnGoalSpawned_ServerOnly");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_MS_Act2_MapEntry.QtnGoal_MS_Act2_MapEntry_C.bindGateTravelStartAmbush
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_MS_Act2_MapEntry_C::bindGateTravelStartAmbush()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_MapEntry_C", "bindGateTravelStartAmbush");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_MS_Act2_MapEntry.QtnGoal_MS_Act2_MapEntry_C.ResolveAmbushConflict
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATravelVolume_BP_C*          From_this_volume                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoal_MS_Act2_MapEntry_C::ResolveAmbushConflict(class ATravelVolume_BP_C* From_this_volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_MapEntry_C", "ResolveAmbushConflict");

	Params::UQtnGoal_MS_Act2_MapEntry_C_ResolveAmbushConflict_Params Parms{};

	Parms.From_this_volume = From_this_volume;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Act2_MapEntry.QtnGoal_MS_Act2_MapEntry_C.OnGoalEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               JustStartedFromLateJoin                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_MS_Act2_MapEntry_C::OnGoalEnd(bool JustStartedFromLateJoin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_MapEntry_C", "OnGoalEnd");

	Params::UQtnGoal_MS_Act2_MapEntry_C_OnGoalEnd_Params Parms{};

	Parms.JustStartedFromLateJoin = JustStartedFromLateJoin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Act2_MapEntry.QtnGoal_MS_Act2_MapEntry_C.ExecuteUbergraph_QtnGoal_MS_Act2_MapEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayingInEditor_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATravelVolume_BP_C*          K2Node_CustomEvent_from_this_volume                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_MainStreet_C*K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_justStartedFromLateJoin                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue_1                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_MainStreet_C*K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street_1              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldPlayCutscenes_play_cutscenes                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_MS_Act2_MapEntry_C::ExecuteUbergraph_QtnGoal_MS_Act2_MapEntry(int32 EntryPoint, bool CallFunc_IsPlayingInEditor_ReturnValue, bool CallFunc_IsServer_ReturnValue, class ATravelVolume_BP_C* K2Node_CustomEvent_from_this_volume, bool CallFunc_IsServer_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManager_MainStreet_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_justStartedFromLateJoin, bool CallFunc_IsServer_ReturnValue_2, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue_1, class UQtnGoalManager_MainStreet_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_ShouldPlayCutscenes_play_cutscenes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_MapEntry_C", "ExecuteUbergraph_QtnGoal_MS_Act2_MapEntry");

	Params::UQtnGoal_MS_Act2_MapEntry_C_ExecuteUbergraph_QtnGoal_MS_Act2_MapEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsPlayingInEditor_ReturnValue = CallFunc_IsPlayingInEditor_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_CustomEvent_from_this_volume = K2Node_CustomEvent_from_this_volume;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street = K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_justStartedFromLateJoin = K2Node_Event_justStartedFromLateJoin;
	Parms.CallFunc_IsServer_ReturnValue_2 = CallFunc_IsServer_ReturnValue_2;
	Parms.CallFunc_GetGoalManager_ReturnValue_1 = CallFunc_GetGoalManager_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street_1 = K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_ShouldPlayCutscenes_play_cutscenes = CallFunc_ShouldPlayCutscenes_play_cutscenes;

	UObject::ProcessEvent(Func, &Parms);

}

}


