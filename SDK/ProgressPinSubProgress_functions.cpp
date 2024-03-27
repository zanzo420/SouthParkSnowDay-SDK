#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ProgressPinSubProgress.ProgressPinSubProgress_C
// (None)

class UClass* UProgressPinSubProgress_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProgressPinSubProgress_C");

	return Clss;
}


// ProgressPinSubProgress_C ProgressPinSubProgress.Default__ProgressPinSubProgress_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UProgressPinSubProgress_C* UProgressPinSubProgress_C::GetDefaultObj()
{
	static class UProgressPinSubProgress_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UProgressPinSubProgress_C*>(UProgressPinSubProgress_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ProgressPinSubProgress.ProgressPinSubProgress_C.Get Icons
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnStruct_ProgressPin      Pin                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           Complete_Icon                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           Loss_Icon                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsGoal_Base                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UProgressPinSubProgress_C::Get_Icons(const struct FQtnStruct_ProgressPin& Pin, class UMaterialInstance** Complete_Icon, class UMaterialInstance** Loss_Icon, class UClass* K2Node_ClassDynamicCast_AsGoal_Base, bool K2Node_ClassDynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressPinSubProgress_C", "Get Icons");

	Params::UProgressPinSubProgress_C_Get_Icons_Params Parms{};

	Parms.Pin = Pin;
	Parms.K2Node_ClassDynamicCast_AsGoal_Base = K2Node_ClassDynamicCast_AsGoal_Base;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Complete_Icon != nullptr)
		*Complete_Icon = Parms.Complete_Icon;

	if (Loss_Icon != nullptr)
		*Loss_Icon = Parms.Loss_Icon;

}


// Function ProgressPinSubProgress.ProgressPinSubProgress_C.GetMapScreenInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Starting_Map_Name                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Ending_Map_Name                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FQtnStruct_ProgressPin>Potential_Pins_This_Run                                          (Parm, OutParm)
// TArray<struct FQtnStruct_ProgressPin>Completed_Pins_This_Run                                          (Parm, OutParm)
// bool                               Found_Error                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UProgressPinSubProgress_C::GetMapScreenInfo(class FString* Starting_Map_Name, class FString* Ending_Map_Name, TArray<struct FQtnStruct_ProgressPin>* Potential_Pins_This_Run, TArray<struct FQtnStruct_ProgressPin>* Completed_Pins_This_Run, bool* Found_Error, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressPinSubProgress_C", "GetMapScreenInfo");

	Params::UProgressPinSubProgress_C_GetMapScreenInfo_Params Parms{};

	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Starting_Map_Name != nullptr)
		*Starting_Map_Name = std::move(Parms.Starting_Map_Name);

	if (Ending_Map_Name != nullptr)
		*Ending_Map_Name = std::move(Parms.Ending_Map_Name);

	if (Potential_Pins_This_Run != nullptr)
		*Potential_Pins_This_Run = std::move(Parms.Potential_Pins_This_Run);

	if (Completed_Pins_This_Run != nullptr)
		*Completed_Pins_This_Run = std::move(Parms.Completed_Pins_This_Run);

	if (Found_Error != nullptr)
		*Found_Error = Parms.Found_Error;

}


// Function ProgressPinSubProgress.ProgressPinSubProgress_C.Get Terminal Map Names
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Day                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      StartMap                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      EndMap                                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UProgressPinSubProgress_C::Get_Terminal_Map_Names(int32 Day, class FString* StartMap, class FString* EndMap, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressPinSubProgress_C", "Get Terminal Map Names");

	Params::UProgressPinSubProgress_C_Get_Terminal_Map_Names_Params Parms{};

	Parms.Day = Day;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (StartMap != nullptr)
		*StartMap = std::move(Parms.StartMap);

	if (EndMap != nullptr)
		*EndMap = std::move(Parms.EndMap);

}


// Function ProgressPinSubProgress.ProgressPinSubProgress_C.OnMapBeginPlay_ServerOnly
// (Event, Public, BlueprintEvent)
// Parameters:

void UProgressPinSubProgress_C::OnMapBeginPlay_ServerOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressPinSubProgress_C", "OnMapBeginPlay_ServerOnly");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ProgressPinSubProgress.ProgressPinSubProgress_C.OnRunProgressCheckpoint_ServerOnly
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               FlushMissionProgress                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UProgressPinSubProgress_C::OnRunProgressCheckpoint_ServerOnly(bool FlushMissionProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressPinSubProgress_C", "OnRunProgressCheckpoint_ServerOnly");

	Params::UProgressPinSubProgress_C_OnRunProgressCheckpoint_ServerOnly_Params Parms{};

	Parms.FlushMissionProgress = FlushMissionProgress;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressPinSubProgress.ProgressPinSubProgress_C.OnRunProgressReset_ServerOnly
// (Event, Public, BlueprintEvent)
// Parameters:

void UProgressPinSubProgress_C::OnRunProgressReset_ServerOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressPinSubProgress_C", "OnRunProgressReset_ServerOnly");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ProgressPinSubProgress.ProgressPinSubProgress_C.Server_UpdatePotentialPins
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FQtnStruct_ProgressPin>NewList                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UProgressPinSubProgress_C::Server_UpdatePotentialPins(TArray<struct FQtnStruct_ProgressPin>& NewList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressPinSubProgress_C", "Server_UpdatePotentialPins");

	Params::UProgressPinSubProgress_C_Server_UpdatePotentialPins_Params Parms{};

	Parms.NewList = NewList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressPinSubProgress.ProgressPinSubProgress_C.ExecuteUbergraph_ProgressPinSubProgress
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManagerBase_C*       K2Node_DynamicCast_AsQtn_Goal_Manager_Base                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FQtnStruct_ProgressPin>CallFunc_Get_Completed_Progress_Pins_Completed_Progress_Pins_This_Map(ReferenceParm)
// bool                               K2Node_Event_flushMissionProgress                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue_1                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManagerBase_C*       K2Node_DynamicCast_AsQtn_Goal_Manager_Base_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentArc_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FQtnStruct_ProgressPin>CallFunc_GetPotentialProgressPins_PotentialProgressPinsThisRun   (ReferenceParm)
// class FString                      CallFunc_Get_Terminal_Map_Names_StartMap                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Get_Terminal_Map_Names_EndMap                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnStruct_ProgressPin      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue_2                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype_2                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FQtnStruct_ProgressPin>K2Node_CustomEvent_newList                                       (ConstParm, ReferenceParm)

void UProgressPinSubProgress_C::ExecuteUbergraph_ProgressPinSubProgress(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UQtnGoalManagerBase_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Base, bool K2Node_DynamicCast_bSuccess, TArray<struct FQtnStruct_ProgressPin>& CallFunc_Get_Completed_Progress_Pins_Completed_Progress_Pins_This_Map, bool K2Node_Event_flushMissionProgress, int32 CallFunc_Array_Length_ReturnValue, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UQtnGoalManagerBase_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Base_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_GetCurrentArc_ReturnValue, TArray<struct FQtnStruct_ProgressPin>& CallFunc_GetPotentialProgressPins_PotentialProgressPinsThisRun, const class FString& CallFunc_Get_Terminal_Map_Names_StartMap, const class FString& CallFunc_Get_Terminal_Map_Names_EndMap, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FQtnStruct_ProgressPin& CallFunc_Array_Get_Item, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess_2, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_1, bool K2Node_DynamicCast_bSuccess_3, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_2, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_2, bool K2Node_DynamicCast_bSuccess_4, TArray<struct FQtnStruct_ProgressPin>& K2Node_CustomEvent_newList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressPinSubProgress_C", "ExecuteUbergraph_ProgressPinSubProgress");

	Params::UProgressPinSubProgress_C_ExecuteUbergraph_ProgressPinSubProgress_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Base = K2Node_DynamicCast_AsQtn_Goal_Manager_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Get_Completed_Progress_Pins_Completed_Progress_Pins_This_Map = CallFunc_Get_Completed_Progress_Pins_Completed_Progress_Pins_This_Map;
	Parms.K2Node_Event_flushMissionProgress = K2Node_Event_flushMissionProgress;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetGoalManager_ReturnValue_1 = CallFunc_GetGoalManager_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Base_1 = K2Node_DynamicCast_AsQtn_Goal_Manager_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetCurrentArc_ReturnValue = CallFunc_GetCurrentArc_ReturnValue;
	Parms.CallFunc_GetPotentialProgressPins_PotentialProgressPinsThisRun = CallFunc_GetPotentialProgressPins_PotentialProgressPinsThisRun;
	Parms.CallFunc_Get_Terminal_Map_Names_StartMap = CallFunc_Get_Terminal_Map_Names_StartMap;
	Parms.CallFunc_Get_Terminal_Map_Names_EndMap = CallFunc_Get_Terminal_Map_Names_EndMap;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype = K2Node_DynamicCast_AsQtn_Game_State_Archetype;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetQtnGameState_ReturnValue_1 = CallFunc_GetQtnGameState_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype_1 = K2Node_DynamicCast_AsQtn_Game_State_Archetype_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetQtnGameState_ReturnValue_2 = CallFunc_GetQtnGameState_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype_2 = K2Node_DynamicCast_AsQtn_Game_State_Archetype_2;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_CustomEvent_newList = K2Node_CustomEvent_newList;

	UObject::ProcessEvent(Func, &Parms);

}

}


