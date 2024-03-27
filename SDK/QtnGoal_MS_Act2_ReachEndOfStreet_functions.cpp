#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C
// (None)

class UClass* UQtnGoal_MS_Act2_ReachEndOfStreet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnGoal_MS_Act2_ReachEndOfStreet_C");

	return Clss;
}


// QtnGoal_MS_Act2_ReachEndOfStreet_C QtnGoal_MS_Act2_ReachEndOfStreet.Default__QtnGoal_MS_Act2_ReachEndOfStreet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnGoal_MS_Act2_ReachEndOfStreet_C* UQtnGoal_MS_Act2_ReachEndOfStreet_C::GetDefaultObj()
{
	static class UQtnGoal_MS_Act2_ReachEndOfStreet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnGoal_MS_Act2_ReachEndOfStreet_C*>(UQtnGoal_MS_Act2_ReachEndOfStreet_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.VO On Death Server Only
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EQtnGoalStatus          CallFunc_GetGoalStatus_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::VO_On_Death_Server_Only(enum class EQtnGoalStatus CallFunc_GetGoalStatus_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "VO On Death Server Only");

	Params::UQtnGoal_MS_Act2_ReachEndOfStreet_C_VO_On_Death_Server_Only_Params Parms{};

	Parms.CallFunc_GetGoalStatus_ReturnValue = CallFunc_GetGoalStatus_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.All Players Reached Final Zone Server Only
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               All_players_in_zone                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               LOCAL_FoundOutlier                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AQtnBodyPawn*>        CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies                 (ReferenceParm, ContainsInstancedReference)
// class AQtnBodyPawn*                CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::All_Players_Reached_Final_Zone_Server_Only(bool* All_players_in_zone, bool LOCAL_FoundOutlier, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TArray<class AQtnBodyPawn*>& CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies, class AQtnBodyPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "All Players Reached Final Zone Server Only");

	Params::UQtnGoal_MS_Act2_ReachEndOfStreet_C_All_Players_Reached_Final_Zone_Server_Only_Params Parms{};

	Parms.LOCAL_FoundOutlier = LOCAL_FoundOutlier;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies = CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (All_players_in_zone != nullptr)
		*All_players_in_zone = Parms.All_players_in_zone;

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.AllPlayersReachedRepairZone_ServerOnly
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               All_players_in_zone                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               LOCAL_FoundOutlier                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AQtnBodyPawn*>        CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies                 (ReferenceParm, ContainsInstancedReference)
// class AQtnBodyPawn*                CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::AllPlayersReachedRepairZone_ServerOnly(bool* All_players_in_zone, bool LOCAL_FoundOutlier, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TArray<class AQtnBodyPawn*>& CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies, class AQtnBodyPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "AllPlayersReachedRepairZone_ServerOnly");

	Params::UQtnGoal_MS_Act2_ReachEndOfStreet_C_AllPlayersReachedRepairZone_ServerOnly_Params Parms{};

	Parms.LOCAL_FoundOutlier = LOCAL_FoundOutlier;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies = CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (All_players_in_zone != nullptr)
		*All_players_in_zone = Parms.All_players_in_zone;

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.getGateLock_ServerOnly
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              CallFunc_Find_Marked_Actors_Server_Only_foundActors              (ReferenceParm)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGateLock_BP_C*              K2Node_DynamicCast_AsGate_Lock_BP                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::GetGateLock_ServerOnly(TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_Array_Get_Item, class AGateLock_BP_C* K2Node_DynamicCast_AsGate_Lock_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "getGateLock_ServerOnly");

	Params::UQtnGoal_MS_Act2_ReachEndOfStreet_C_GetGateLock_ServerOnly_Params Parms{};

	Parms.CallFunc_Find_Marked_Actors_Server_Only_foundActors = CallFunc_Find_Marked_Actors_Server_Only_foundActors;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsGate_Lock_BP = K2Node_DynamicCast_AsGate_Lock_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.Post VOConversation Server Only
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::Post_VOConversation_Server_Only(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "Post VOConversation Server Only");

	Params::UQtnGoal_MS_Act2_ReachEndOfStreet_C_Post_VOConversation_Server_Only_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.VO_SortJudgeIdles
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::VO_SortJudgeIdles(int32 Index, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "VO_SortJudgeIdles");

	Params::UQtnGoal_MS_Act2_ReachEndOfStreet_C_VO_SortJudgeIdles_Params Parms{};

	Parms.Index = Index;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.VO Judge Idle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      LOCAL_Options                                                    (Edit, BlueprintVisible)
// int32                              LOCAL_ChosenIndex                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_wildcard_Variable                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<int32>                      K2Node_MakeArray_Array                                           (ReferenceParm)
// int32                              Temp_int_Variable                                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnGoalStatus          CallFunc_GetGoalStatus_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_2                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_3                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_MainStreet_C*K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal_MS_Act2_RepairCatapult_C*K2Node_DynamicCast_AsQtn_Goal_MS_Act_2_Repair_Catapult           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<int32>                      K2Node_MakeArray_Array_1                                         (ReferenceParm)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_4                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnGoalStatus          CallFunc_GetGoalStatus_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::VO_Judge_Idle(const TArray<int32>& LOCAL_Options, int32 LOCAL_ChosenIndex, int32 Temp_wildcard_Variable, bool Temp_bool_Variable, TArray<int32>& K2Node_MakeArray_Array, int32 Temp_int_Variable, int32 Temp_int_Variable_1, enum class EQtnGoalStatus CallFunc_GetGoalStatus_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Variable_2, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Variable_3, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManager_MainStreet_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street, bool K2Node_DynamicCast_bSuccess, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, class UQtnGoal_MS_Act2_RepairCatapult_C* K2Node_DynamicCast_AsQtn_Goal_MS_Act_2_Repair_Catapult, bool K2Node_DynamicCast_bSuccess_1, TArray<int32>& K2Node_MakeArray_Array_1, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 Temp_int_Variable_4, int32 CallFunc_Array_Get_Item, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue_2, int32 CallFunc_Array_AddUnique_ReturnValue_3, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, int32 CallFunc_Array_AddUnique_ReturnValue_4, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class EQtnGoalStatus CallFunc_GetGoalStatus_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "VO Judge Idle");

	Params::UQtnGoal_MS_Act2_ReachEndOfStreet_C_VO_Judge_Idle_Params Parms{};

	Parms.LOCAL_Options = LOCAL_Options;
	Parms.LOCAL_ChosenIndex = LOCAL_ChosenIndex;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_GetGoalStatus_ReturnValue = CallFunc_GetGoalStatus_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street = K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue = CallFunc_K2_IsValidTimerHandle_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_MS_Act_2_Repair_Catapult = K2Node_DynamicCast_AsQtn_Goal_MS_Act_2_Repair_Catapult;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;
	Parms.CallFunc_Array_AddUnique_ReturnValue_2 = CallFunc_Array_AddUnique_ReturnValue_2;
	Parms.CallFunc_Array_AddUnique_ReturnValue_3 = CallFunc_Array_AddUnique_ReturnValue_3;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_AddUnique_ReturnValue_4 = CallFunc_Array_AddUnique_ReturnValue_4;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetGoalStatus_ReturnValue_1 = CallFunc_GetGoalStatus_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.VO Delayed Cartman React
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::VO_Delayed_Cartman_React(bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "VO Delayed Cartman React");

	Params::UQtnGoal_MS_Act2_ReachEndOfStreet_C_VO_Delayed_Cartman_React_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.getQuestMarker
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_Find_Marked_Actors_Server_Only_foundActors              (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALocationMarker_BP_C*        K2Node_DynamicCast_AsLocation_Marker_BP                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ALocationMarker_BP_C*        K2Node_DynamicCast_AsLocation_Marker_BP_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::GetQuestMarker(class FName Temp_name_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FName Temp_name_Variable_1, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ALocationMarker_BP_C* K2Node_DynamicCast_AsLocation_Marker_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, class ALocationMarker_BP_C* K2Node_DynamicCast_AsLocation_Marker_BP_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "getQuestMarker");

	Params::UQtnGoal_MS_Act2_ReachEndOfStreet_C_GetQuestMarker_Params Parms{};

	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.CallFunc_Find_Marked_Actors_Server_Only_foundActors = CallFunc_Find_Marked_Actors_Server_Only_foundActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsLocation_Marker_BP = K2Node_DynamicCast_AsLocation_Marker_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsLocation_Marker_BP_1 = K2Node_DynamicCast_AsLocation_Marker_BP_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.collectLeftBehindPlayers
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AQtnPlayerPawn*>      Dead_players_in_catapult_zone                                    (Parm, OutParm, ContainsInstancedReference)
// TArray<class AQtnPlayerPawn*>      LOCAL_Players                                                    (Edit, BlueprintVisible, DisableEditOnTemplate, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AQtnPlayerPawn*>      CallFunc_GetAllPlayerPawns_foundPlayerPawns                      (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerPawn*              CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOccupiedBodyPawn_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnBodyAliveness       CallFunc_GetBodyAliveness_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::CollectLeftBehindPlayers(TArray<class AQtnPlayerPawn*>* Dead_players_in_catapult_zone, const TArray<class AQtnPlayerPawn*>& LOCAL_Players, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AQtnPlayerPawn*>& CallFunc_GetAllPlayerPawns_foundPlayerPawns, bool CallFunc_IsServer_ReturnValue, class AQtnPlayerPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, enum class EQtnBodyAliveness CallFunc_GetBodyAliveness_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "collectLeftBehindPlayers");

	Params::UQtnGoal_MS_Act2_ReachEndOfStreet_C_CollectLeftBehindPlayers_Params Parms{};

	Parms.LOCAL_Players = LOCAL_Players;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllPlayerPawns_foundPlayerPawns = CallFunc_GetAllPlayerPawns_foundPlayerPawns;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_GetOccupiedBodyPawn_ReturnValue = CallFunc_GetOccupiedBodyPawn_ReturnValue;
	Parms.CallFunc_GetBodyAliveness_ReturnValue = CallFunc_GetBodyAliveness_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Dead_players_in_catapult_zone != nullptr)
		*Dead_players_in_catapult_zone = std::move(Parms.Dead_players_in_catapult_zone);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.Get Final Roof Teleport Points
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_Find_Marked_Actors_Server_Only_foundActors              (ReferenceParm)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ALocationMarker_BP_C*        K2Node_DynamicCast_AsLocation_Marker_BP                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::Get_Final_Roof_Teleport_Points(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class FName Temp_name_Variable, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, class ALocationMarker_BP_C* K2Node_DynamicCast_AsLocation_Marker_BP, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "Get Final Roof Teleport Points");

	Params::UQtnGoal_MS_Act2_ReachEndOfStreet_C_Get_Final_Roof_Teleport_Points_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_Find_Marked_Actors_Server_Only_foundActors = CallFunc_Find_Marked_Actors_Server_Only_foundActors;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsLocation_Marker_BP = K2Node_DynamicCast_AsLocation_Marker_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.Teleport Players
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               LOCAL_FoundStraggler                                             (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
// TArray<class ALocationMarker_BP_C*>LOCAL_PointsToUse                                                (Edit, BlueprintVisible, DisableEditOnTemplate)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AQtnPlayerPawn*>      CallFunc_GetAllPlayerPawns_foundPlayerPawns                      (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerPawn*              CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ALocationMarker_BP_C*        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AQtnPlayerPawn*>      CallFunc_GetAllPlayerPawns_foundPlayerPawns_1                    (ReferenceParm, ContainsInstancedReference)
// class AQtnPlayerPawn*              CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOccupiedBodyPawn_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnBodyAliveness       CallFunc_GetBodyAliveness_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ALocationMarker_BP_C*        CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::Teleport_Players(bool LOCAL_FoundStraggler, const TArray<class ALocationMarker_BP_C*>& LOCAL_PointsToUse, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class AQtnPlayerPawn*>& CallFunc_GetAllPlayerPawns_foundPlayerPawns, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_1, class AQtnPlayerPawn* CallFunc_Array_Get_Item, bool CallFunc_Array_Contains_ReturnValue, class ALocationMarker_BP_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class AQtnPlayerPawn*>& CallFunc_GetAllPlayerPawns_foundPlayerPawns_1, class AQtnPlayerPawn* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_AddUnique_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, enum class EQtnBodyAliveness CallFunc_GetBodyAliveness_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class ALocationMarker_BP_C* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, int32 CallFunc_Array_AddUnique_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_Array_Contains_ReturnValue_2, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "Teleport Players");

	Params::UQtnGoal_MS_Act2_ReachEndOfStreet_C_Teleport_Players_Params Parms{};

	Parms.LOCAL_FoundStraggler = LOCAL_FoundStraggler;
	Parms.LOCAL_PointsToUse = LOCAL_PointsToUse;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetAllPlayerPawns_foundPlayerPawns = CallFunc_GetAllPlayerPawns_foundPlayerPawns;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAllPlayerPawns_foundPlayerPawns_1 = CallFunc_GetAllPlayerPawns_foundPlayerPawns_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;
	Parms.CallFunc_GetOccupiedBodyPawn_ReturnValue = CallFunc_GetOccupiedBodyPawn_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBodyAliveness_ReturnValue = CallFunc_GetBodyAliveness_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Array_AddUnique_ReturnValue_2 = CallFunc_Array_AddUnique_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Array_Contains_ReturnValue_2 = CallFunc_Array_Contains_ReturnValue_2;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.ToggleScriptyBits
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::ToggleScriptyBits()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "ToggleScriptyBits");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.OnRep_listOfUpgradedPlayers
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::OnRep_listOfUpgradedPlayers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "OnRep_listOfUpgradedPlayers");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.OnRep_spokeDone
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::OnRep_spokeDone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "OnRep_spokeDone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.OnRep_upgradeDone
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::OnRep_upgradeDone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "OnRep_upgradeDone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.OnRep_PlayerLanded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::OnRep_PlayerLanded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "OnRep_PlayerLanded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.getCatapults
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_Find_Marked_Actors_Server_Only_foundActors              (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABrokenCatapult_BP_C*        K2Node_DynamicCast_AsBroken_Catapult_BP                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_Find_Marked_Actors_Server_Only_foundActors_1            (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Catapult_C*              K2Node_DynamicCast_AsBP_Catapult                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::GetCatapults(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class ABrokenCatapult_BP_C* K2Node_DynamicCast_AsBroken_Catapult_BP, bool K2Node_DynamicCast_bSuccess, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors_1, class AActor* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, class ABP_Catapult_C* K2Node_DynamicCast_AsBP_Catapult, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "getCatapults");

	Params::UQtnGoal_MS_Act2_ReachEndOfStreet_C_GetCatapults_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Find_Marked_Actors_Server_Only_foundActors = CallFunc_Find_Marked_Actors_Server_Only_foundActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_DynamicCast_AsBroken_Catapult_BP = K2Node_DynamicCast_AsBroken_Catapult_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Find_Marked_Actors_Server_Only_foundActors_1 = CallFunc_Find_Marked_Actors_Server_Only_foundActors_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Catapult = K2Node_DynamicCast_AsBP_Catapult;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.VO_PlayStanTaunt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::VO_PlayStanTaunt()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "VO_PlayStanTaunt");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.getMurderVolume
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_Find_Marked_Actors_Server_Only_foundActors              (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AMainStreetDamageVolume_BP_C*K2Node_DynamicCast_AsMain_Street_Damage_Volume_BP                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOnServer_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::GetMurderVolume(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class AMainStreetDamageVolume_BP_C* K2Node_DynamicCast_AsMain_Street_Damage_Volume_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsOnServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "getMurderVolume");

	Params::UQtnGoal_MS_Act2_ReachEndOfStreet_C_GetMurderVolume_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Find_Marked_Actors_Server_Only_foundActors = CallFunc_Find_Marked_Actors_Server_Only_foundActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_DynamicCast_AsMain_Street_Damage_Volume_BP = K2Node_DynamicCast_AsMain_Street_Damage_Volume_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsOnServer_ReturnValue = CallFunc_IsOnServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.OnRep_cutsceneComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::OnRep_cutsceneComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "OnRep_cutsceneComplete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.GetCinematicActor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              CallFunc_Find_Marked_Actors_Server_Only_foundActors              (ReferenceParm)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACinematicSceneArchetype_BP_C*K2Node_DynamicCast_AsCinematic_Scene_Archetype_BP                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::GetCinematicActor(TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_Array_Get_Item, class ACinematicSceneArchetype_BP_C* K2Node_DynamicCast_AsCinematic_Scene_Archetype_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "GetCinematicActor");

	Params::UQtnGoal_MS_Act2_ReachEndOfStreet_C_GetCinematicActor_Params Parms{};

	Parms.CallFunc_Find_Marked_Actors_Server_Only_foundActors = CallFunc_Find_Marked_Actors_Server_Only_foundActors;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsCinematic_Scene_Archetype_BP = K2Node_DynamicCast_AsCinematic_Scene_Archetype_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.Get Target Location Volume
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_Find_Marked_Actors_Server_Only_foundActors              (ReferenceParm)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATargetLocationVolume_C*     K2Node_DynamicCast_AsTarget_Location_Volume                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::Get_Target_Location_Volume(class FName Temp_name_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class FName Temp_name_Variable_1, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, class ATargetLocationVolume_C* K2Node_DynamicCast_AsTarget_Location_Volume, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "Get Target Location Volume");

	Params::UQtnGoal_MS_Act2_ReachEndOfStreet_C_Get_Target_Location_Volume_Params Parms{};

	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.CallFunc_Find_Marked_Actors_Server_Only_foundActors = CallFunc_Find_Marked_Actors_Server_Only_foundActors;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsTarget_Location_Volume = K2Node_DynamicCast_AsTarget_Location_Volume;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.getStanCartmanButtersDougie
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              CallFunc_Find_Marked_Actors_Server_Only_foundActors              (ReferenceParm)
// TArray<class AActor*>              CallFunc_Find_Marked_Actors_Server_Only_foundActors_1            (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AButters_Actor_BP_C*         K2Node_DynamicCast_AsButters_Actor_BP                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ADougie_Actor_BP_C*          K2Node_DynamicCast_AsDougie_Actor_BP                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_Find_Marked_Actors_Server_Only_foundActors_2            (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACartman_Actor_BP_Rep_C*     K2Node_DynamicCast_AsCartman_Actor_BP_Rep                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_Find_Marked_Actors_Server_Only_foundActors_3            (ReferenceParm)
// bool                               CallFunc_IsOnServer_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AStan_MainStreetActor_BP_C*  K2Node_DynamicCast_AsStan_Main_Street_Actor_BP                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::GetStanCartmanButtersDougie(TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors_1, class AActor* CallFunc_Array_Get_Item, class AActor* CallFunc_Array_Get_Item_1, class AButters_Actor_BP_C* K2Node_DynamicCast_AsButters_Actor_BP, bool K2Node_DynamicCast_bSuccess, class ADougie_Actor_BP_C* K2Node_DynamicCast_AsDougie_Actor_BP, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue_1, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors_2, class AActor* CallFunc_Array_Get_Item_2, bool CallFunc_Array_IsValidIndex_ReturnValue_2, class ACartman_Actor_BP_Rep_C* K2Node_DynamicCast_AsCartman_Actor_BP_Rep, bool K2Node_DynamicCast_bSuccess_2, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors_3, bool CallFunc_IsOnServer_ReturnValue, class AActor* CallFunc_Array_Get_Item_3, class AStan_MainStreetActor_BP_C* K2Node_DynamicCast_AsStan_Main_Street_Actor_BP, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_Array_IsValidIndex_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "getStanCartmanButtersDougie");

	Params::UQtnGoal_MS_Act2_ReachEndOfStreet_C_GetStanCartmanButtersDougie_Params Parms{};

	Parms.CallFunc_Find_Marked_Actors_Server_Only_foundActors = CallFunc_Find_Marked_Actors_Server_Only_foundActors;
	Parms.CallFunc_Find_Marked_Actors_Server_Only_foundActors_1 = CallFunc_Find_Marked_Actors_Server_Only_foundActors_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_DynamicCast_AsButters_Actor_BP = K2Node_DynamicCast_AsButters_Actor_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsDougie_Actor_BP = K2Node_DynamicCast_AsDougie_Actor_BP;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_1 = CallFunc_Array_IsValidIndex_ReturnValue_1;
	Parms.CallFunc_Find_Marked_Actors_Server_Only_foundActors_2 = CallFunc_Find_Marked_Actors_Server_Only_foundActors_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_2 = CallFunc_Array_IsValidIndex_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsCartman_Actor_BP_Rep = K2Node_DynamicCast_AsCartman_Actor_BP_Rep;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Find_Marked_Actors_Server_Only_foundActors_3 = CallFunc_Find_Marked_Actors_Server_Only_foundActors_3;
	Parms.CallFunc_IsOnServer_ReturnValue = CallFunc_IsOnServer_ReturnValue;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.K2Node_DynamicCast_AsStan_Main_Street_Actor_BP = K2Node_DynamicCast_AsStan_Main_Street_Actor_BP;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_3 = CallFunc_Array_IsValidIndex_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.getSkirmish
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_Find_Marked_Actors_Server_Only_foundActors              (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASkirmishBase_C*             K2Node_DynamicCast_AsSkirmish_Base                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOnServer_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::GetSkirmish(int32 Temp_int_Array_Index_Variable, class FName Temp_name_Variable, int32 Temp_int_Loop_Counter_Variable, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ASkirmishBase_C* K2Node_DynamicCast_AsSkirmish_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_IsOnServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "getSkirmish");

	Params::UQtnGoal_MS_Act2_ReachEndOfStreet_C_GetSkirmish_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Find_Marked_Actors_Server_Only_foundActors = CallFunc_Find_Marked_Actors_Server_Only_foundActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsSkirmish_Base = K2Node_DynamicCast_AsSkirmish_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_IsOnServer_ReturnValue = CallFunc_IsOnServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.LOCAL_UITextUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerInformation_occupiedBodyPawn              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              CallFunc_GetLocalPlayerInformation_playerPawn                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerInformation_playerController              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerInformation_playerUI                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerState*             CallFunc_GetLocalPlayerInformation_qtnPlayerState                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLocalPlayerInformation_isHosting                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerInformation_outputPin                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::LOCAL_UITextUpdate(class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "LOCAL_UITextUpdate");

	Params::UQtnGoal_MS_Act2_ReachEndOfStreet_C_LOCAL_UITextUpdate_Params Parms{};

	Parms.CallFunc_GetLocalPlayerInformation_occupiedBodyPawn = CallFunc_GetLocalPlayerInformation_occupiedBodyPawn;
	Parms.CallFunc_GetLocalPlayerInformation_playerPawn = CallFunc_GetLocalPlayerInformation_playerPawn;
	Parms.CallFunc_GetLocalPlayerInformation_playerController = CallFunc_GetLocalPlayerInformation_playerController;
	Parms.CallFunc_GetLocalPlayerInformation_playerUI = CallFunc_GetLocalPlayerInformation_playerUI;
	Parms.CallFunc_GetLocalPlayerInformation_qtnPlayerState = CallFunc_GetLocalPlayerInformation_qtnPlayerState;
	Parms.CallFunc_GetLocalPlayerInformation_isHosting = CallFunc_GetLocalPlayerInformation_isHosting;
	Parms.CallFunc_GetLocalPlayerInformation_outputPin = CallFunc_GetLocalPlayerInformation_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.OnRep_inbattle
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::OnRep_inbattle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "OnRep_inbattle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.Receive Skirmish Notify
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnSkirmish*                Skirmish_Sending_Event                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Final_skirmish_action                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Action_Tag                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOnServer_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::Receive_Skirmish_Notify(class AQtnSkirmish* Skirmish_Sending_Event, bool Final_skirmish_action, class FName Action_Tag, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_2, bool CallFunc_EqualEqual_NameName_ReturnValue_3, bool CallFunc_EqualEqual_NameName_ReturnValue_4, bool CallFunc_EqualEqual_NameName_ReturnValue_5, bool CallFunc_EqualEqual_NameName_ReturnValue_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsOnServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "Receive Skirmish Notify");

	Params::UQtnGoal_MS_Act2_ReachEndOfStreet_C_Receive_Skirmish_Notify_Params Parms{};

	Parms.Skirmish_Sending_Event = Skirmish_Sending_Event;
	Parms.Final_skirmish_action = Final_skirmish_action;
	Parms.Action_Tag = Action_Tag;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_2 = CallFunc_EqualEqual_NameName_ReturnValue_2;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_3 = CallFunc_EqualEqual_NameName_ReturnValue_3;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_4 = CallFunc_EqualEqual_NameName_ReturnValue_4;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_5 = CallFunc_EqualEqual_NameName_ReturnValue_5;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_6 = CallFunc_EqualEqual_NameName_ReturnValue_6;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_IsOnServer_ReturnValue = CallFunc_IsOnServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.DEBUGONLY_EndGoal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::DEBUGONLY_EndGoal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "DEBUGONLY_EndGoal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.getExitGate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              CallFunc_Find_Marked_Actors_Server_Only_foundActors              (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATravelVolume_BP_C*          K2Node_DynamicCast_AsTravel_Volume_BP                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOnServer_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::GetExitGate(TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class ATravelVolume_BP_C* K2Node_DynamicCast_AsTravel_Volume_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsOnServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "getExitGate");

	Params::UQtnGoal_MS_Act2_ReachEndOfStreet_C_GetExitGate_Params Parms{};

	Parms.CallFunc_Find_Marked_Actors_Server_Only_foundActors = CallFunc_Find_Marked_Actors_Server_Only_foundActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_DynamicCast_AsTravel_Volume_BP = K2Node_DynamicCast_AsTravel_Volume_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsOnServer_ReturnValue = CallFunc_IsOnServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.OnGoalStart
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               WillEndImmediatelyFromLateJoin                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::OnGoalStart(bool WillEndImmediatelyFromLateJoin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "OnGoalStart");

	Params::UQtnGoal_MS_Act2_ReachEndOfStreet_C_OnGoalStart_Params Parms{};

	Parms.WillEndImmediatelyFromLateJoin = WillEndImmediatelyFromLateJoin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.OnGoalSpawned_ServerOnly
// (Event, Public, BlueprintEvent)
// Parameters:

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::OnGoalSpawned_ServerOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "OnGoalSpawned_ServerOnly");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.endGoalSequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::EndGoalSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "endGoalSequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.hideExitGateIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::HideExitGateIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "hideExitGateIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.unhideExitGateIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::UnhideExitGateIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "unhideExitGateIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.server_ForceFixCatapultEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::Server_ForceFixCatapultEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "server_ForceFixCatapultEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.OnTickActiveGoal
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::OnTickActiveGoal(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "OnTickActiveGoal");

	Params::UQtnGoal_MS_Act2_ReachEndOfStreet_C_OnTickActiveGoal_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.StartCutscene
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerPawn*              PlayerWhoEntered                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               OnExit                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::StartCutscene(class AQtnPlayerPawn* PlayerWhoEntered, bool OnExit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "StartCutscene");

	Params::UQtnGoal_MS_Act2_ReachEndOfStreet_C_StartCutscene_Params Parms{};

	Parms.PlayerWhoEntered = PlayerWhoEntered;
	Parms.OnExit = OnExit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.CutsceneEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Goal_class                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Cutscene_ID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::CutsceneEnd(class UClass* Goal_class, int32 Cutscene_ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "CutsceneEnd");

	Params::UQtnGoal_MS_Act2_ReachEndOfStreet_C_CutsceneEnd_Params Parms{};

	Parms.Goal_class = Goal_class;
	Parms.Cutscene_ID = Cutscene_ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.DelayedStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::DelayedStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "DelayedStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.UnbindCutsceneEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::UnbindCutsceneEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "UnbindCutsceneEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.bindCatapultVOEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::bindCatapultVOEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "bindCatapultVOEvents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.firstFling
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::FirstFling()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "firstFling");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.unbindCatapultVOEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::UnbindCatapultVOEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "unbindCatapultVOEvents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.PlayerEnteredWorld
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerPawn*              PlayerPawnSoul                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                OccupiedBodyPawn                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLocalPlayer                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::PlayerEnteredWorld(class AQtnPlayerPawn* PlayerPawnSoul, class AQtnBodyPawn* OccupiedBodyPawn, bool IsLocalPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "PlayerEnteredWorld");

	Params::UQtnGoal_MS_Act2_ReachEndOfStreet_C_PlayerEnteredWorld_Params Parms{};

	Parms.PlayerPawnSoul = PlayerPawnSoul;
	Parms.OccupiedBodyPawn = OccupiedBodyPawn;
	Parms.IsLocalPlayer = IsLocalPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.PlayerExitWorld
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerPawn*              PlayerPawnSoul                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                OccupiedBodyPawn                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::PlayerExitWorld(class AQtnPlayerPawn* PlayerPawnSoul, class AQtnBodyPawn* OccupiedBodyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "PlayerExitWorld");

	Params::UQtnGoal_MS_Act2_ReachEndOfStreet_C_PlayerExitWorld_Params Parms{};

	Parms.PlayerPawnSoul = PlayerPawnSoul;
	Parms.OccupiedBodyPawn = OccupiedBodyPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.unbindPlayerEntryExitEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::UnbindPlayerEntryExitEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "unbindPlayerEntryExitEvents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.bindExitGateEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::bindExitGateEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "bindExitGateEvents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.PlayerUpgraded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnPlayer_C*           Player_who_upgraded                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::PlayerUpgraded(class ABodyPawnPlayer_C* Player_who_upgraded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "PlayerUpgraded");

	Params::UQtnGoal_MS_Act2_ReachEndOfStreet_C_PlayerUpgraded_Params Parms{};

	Parms.Player_who_upgraded = Player_who_upgraded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.playersLanded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::PlayersLanded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "playersLanded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.bindFinalBattleProxTrigger
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::bindFinalBattleProxTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "bindFinalBattleProxTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.FirstPlayerEnteredFinalBattle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerPawn*              PlayerWhoEntered                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               OnExit                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::FirstPlayerEnteredFinalBattle(class AQtnPlayerPawn* PlayerWhoEntered, bool OnExit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "FirstPlayerEnteredFinalBattle");

	Params::UQtnGoal_MS_Act2_ReachEndOfStreet_C_FirstPlayerEnteredFinalBattle_Params Parms{};

	Parms.PlayerWhoEntered = PlayerWhoEntered;
	Parms.OnExit = OnExit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.unbindFinalBattleProxTrigger
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::UnbindFinalBattleProxTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "unbindFinalBattleProxTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.multicast_TeleportPresentation
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::Multicast_TeleportPresentation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "multicast_TeleportPresentation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.bindDeathWatchEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::bindDeathWatchEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "bindDeathWatchEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.WatchedDeathOccurred
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::WatchedDeathOccurred()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "WatchedDeathOccurred");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.unbindDeathWatchEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::UnbindDeathWatchEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "unbindDeathWatchEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.lateJoinBindDeathWatch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerPawn*              For_this_player                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::LateJoinBindDeathWatch(class AQtnPlayerPawn* For_this_player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "lateJoinBindDeathWatch");

	Params::UQtnGoal_MS_Act2_ReachEndOfStreet_C_LateJoinBindDeathWatch_Params Parms{};

	Parms.For_this_player = For_this_player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.LateJoin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerPawn*              PlayerPawnSoul                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                OccupiedBodyPawn                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLocalPlayer                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::LateJoin(class AQtnPlayerPawn* PlayerPawnSoul, class AQtnBodyPawn* OccupiedBodyPawn, bool IsLocalPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "LateJoin");

	Params::UQtnGoal_MS_Act2_ReachEndOfStreet_C_LateJoin_Params Parms{};

	Parms.PlayerPawnSoul = PlayerPawnSoul;
	Parms.OccupiedBodyPawn = OccupiedBodyPawn;
	Parms.IsLocalPlayer = IsLocalPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.SetCatapultGoal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnGoal*                    CatapultGoal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::SetCatapultGoal(class UQtnGoal* CatapultGoal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "SetCatapultGoal");

	Params::UQtnGoal_MS_Act2_ReachEndOfStreet_C_SetCatapultGoal_Params Parms{};

	Parms.CatapultGoal = CatapultGoal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.bindGateLockHUDInstructionEvents_ServerOnly
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::bindGateLockHUDInstructionEvents_ServerOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "bindGateLockHUDInstructionEvents_ServerOnly");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.GateLockOpen_ServerOnly
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGateLock_BP_C*              Lock                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::GateLockOpen_ServerOnly(class AGateLock_BP_C* Lock)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "GateLockOpen_ServerOnly");

	Params::UQtnGoal_MS_Act2_ReachEndOfStreet_C_GateLockOpen_ServerOnly_Params Parms{};

	Parms.Lock = Lock;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.bindNicholeIconCheckEvents_ServerOnly
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::bindNicholeIconCheckEvents_ServerOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "bindNicholeIconCheckEvents_ServerOnly");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.PlayerArrivedInRepairCatapultZone_ServerOnly
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerPawn*              PlayerWhoEntered                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               OnExit                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::PlayerArrivedInRepairCatapultZone_ServerOnly(class AQtnPlayerPawn* PlayerWhoEntered, bool OnExit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "PlayerArrivedInRepairCatapultZone_ServerOnly");

	Params::UQtnGoal_MS_Act2_ReachEndOfStreet_C_PlayerArrivedInRepairCatapultZone_ServerOnly_Params Parms{};

	Parms.PlayerWhoEntered = PlayerWhoEntered;
	Parms.OnExit = OnExit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.unbindNicholeIconEventsRepairZone_ServerOnly
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::UnbindNicholeIconEventsRepairZone_ServerOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "unbindNicholeIconEventsRepairZone_ServerOnly");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.bindOnDeathVO_ServerOnly
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::bindOnDeathVO_ServerOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "bindOnDeathVO_ServerOnly");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.PlayerDied
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::PlayerDied()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "PlayerDied");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.BindThisPlayersDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerPawn*              Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::BindThisPlayersDeath(class AQtnPlayerPawn* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "BindThisPlayersDeath");

	Params::UQtnGoal_MS_Act2_ReachEndOfStreet_C_BindThisPlayersDeath_Params Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.bindOnDeathVO
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerPawn*              PlayerPawnSoul                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                OccupiedBodyPawn                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLocalPlayer                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::bindOnDeathVO(class AQtnPlayerPawn* PlayerPawnSoul, class AQtnBodyPawn* OccupiedBodyPawn, bool IsLocalPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "bindOnDeathVO");

	Params::UQtnGoal_MS_Act2_ReachEndOfStreet_C_bindOnDeathVO_Params Parms{};

	Parms.PlayerPawnSoul = PlayerPawnSoul;
	Parms.OccupiedBodyPawn = OccupiedBodyPawn;
	Parms.IsLocalPlayer = IsLocalPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.unbindOnDeathVO_ServerOnly
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::UnbindOnDeathVO_ServerOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "unbindOnDeathVO_ServerOnly");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_MS_Act2_ReachEndOfStreet.QtnGoal_MS_Act2_ReachEndOfStreet_C.ExecuteUbergraph_QtnGoal_MS_Act2_ReachEndOfStreet
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnGoalStatus          CallFunc_GetGoalStatus_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnAttribute*               Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAttribute_Health_C*         K2Node_DynamicCast_AsAttribute_Health                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnAttribute*               Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAttribute_Health_C*         K2Node_DynamicCast_AsAttribute_Health_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_willEndImmediatelyFromLateJoin                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOnServer_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UQtnGoal*>            CallFunc_GetChildGoals_ReturnValue                               (ConstParm, ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOnServer_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOnServer_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOnServer_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnAttribute*               Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_MainStreet_C*K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal*                    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal_MS_Act2_RepairCatapult_C*K2Node_DynamicCast_AsQtn_Goal_MS_Act_2_Repair_Catapult           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAttribute_Health_C*         K2Node_DynamicCast_AsAttribute_Health_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOnServer_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerPawn*              K2Node_CustomEvent_playerWhoEntered_2                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_onExit_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_CustomEvent_goal_class                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Cutscene_ID                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerPawn*              K2Node_CustomEvent_playerPawnSoul_3                              (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_CustomEvent_occupiedBodyPawn_3                            (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_isLocalPlayer_2                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Temp_class_Variable                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HaveExpectedPlayersUpgraded____HaveAllUpgraded          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerPawn*              K2Node_CustomEvent_playerPawnSoul_2                              (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_CustomEvent_occupiedBodyPawn_2                            (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Catapult_C*              CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_10                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue_2                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype_2                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HaveExpectedPlayersUpgraded____HaveAllUpgraded_1        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_11                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_CustomEvent_player_who_upgraded                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_12                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnAttribute*               Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AQtnPlayerPawn*>      CallFunc_GetAllPlayerPawns_foundPlayerPawns                      (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAttribute_Health_C*         K2Node_DynamicCast_AsAttribute_Health_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_13                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_14                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerPawn*              K2Node_CustomEvent_playerWhoEntered_1                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_onExit_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_15                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_16                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_14                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerInformation_occupiedBodyPawn              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              CallFunc_GetLocalPlayerInformation_playerPawn                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerInformation_playerController              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerInformation_playerUI                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerState*             CallFunc_GetLocalPlayerInformation_qtnPlayerState                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLocalPlayerInformation_isHosting                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerInformation_outputPin                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnBodyAliveness       CallFunc_GetBodyAliveness_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnFXActor*                 CallFunc_BP_BeginEffect_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_17                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AQtnPlayerPawn*>      CallFunc_GetAllPlayerPawns_foundPlayerPawns_1                    (ReferenceParm, ContainsInstancedReference)
// class AQtnPlayerPawn*              CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_15                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOccupiedBodyPawn_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// TScriptInterface<class IQtnAttributeContainerInterface>K2Node_DynamicCast_AsQtn_Attribute_Container_Interface           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_16                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnAttribute*               CallFunc_GetAttribute_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_18                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AQtnPlayerPawn*>      CallFunc_collectLeftBehindPlayers_dead_players_in_catapult_zone  (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_19                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AQtnPlayerPawn*>      CallFunc_GetAllPlayerPawns_foundPlayerPawns_2                    (ReferenceParm, ContainsInstancedReference)
// class AQtnPlayerPawn*              CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_8                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_17                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOccupiedBodyPawn_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor)
// TScriptInterface<class IQtnAttributeContainerInterface>K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_18                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnAttribute*               CallFunc_GetAttribute_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_Array_Get_Item_4                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnGoalStatus          CallFunc_GetGoalStatus_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue_3                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype_3                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              K2Node_CustomEvent_for_this_player                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_20                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOccupiedBodyPawn_ReturnValue_2                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player_2                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_14                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor)
// TScriptInterface<class IQtnAttributeContainerInterface>K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_2         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_15                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnAttribute*               CallFunc_GetAttribute_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_19                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerPawn*              K2Node_CustomEvent_playerPawnSoul_1                              (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_CustomEvent_occupiedBodyPawn_1                            (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_isLocalPlayer_1                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnGoalStatus          CallFunc_GetGoalStatus_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal*                    K2Node_Event_catapultGoal                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal_MS_Act2_RepairCatapult_C*K2Node_DynamicCast_AsQtn_Goal_MS_Act_2_Repair_Catapult_1         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_16                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue_1                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_MainStreet_C*K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street_1              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_17                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_21                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_20                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGateLock_BP_C*              K2Node_CustomEvent_Lock                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_22                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnAttribute*               Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_21                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAttribute_Health_C*         K2Node_DynamicCast_AsAttribute_Health_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_18                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_23                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_22                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerPawn*              K2Node_CustomEvent_playerWhoEntered                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_onExit                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_24                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AllPlayersReachedRepairZone_ServerOnly_all_players_in_zone(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_25                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_26                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AQtnPlayerPawn*>      CallFunc_GetAllPlayerPawns_foundPlayerPawns_3                    (ReferenceParm, ContainsInstancedReference)
// class AQtnPlayerPawn*              CallFunc_Array_Get_Item_5                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_9                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_27                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerPawn*              K2Node_CustomEvent_player                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_23                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOccupiedBodyPawn_ReturnValue_3                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player_3                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_19                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue_4                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnAttributeContainerInterface>K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_3         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_20                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype_4                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_21                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnAttribute*               CallFunc_GetAttribute_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_24                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_28                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerPawn*              K2Node_CustomEvent_playerPawnSoul                                (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_CustomEvent_occupiedBodyPawn                              (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_isLocalPlayer                                 (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_29                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AQtnPlayerPawn*>      CallFunc_GetAllPlayerPawns_foundPlayerPawns_4                    (ReferenceParm, ContainsInstancedReference)
// class AQtnPlayerPawn*              CallFunc_Array_Get_Item_6                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_10                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_25                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOccupiedBodyPawn_ReturnValue_4                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player_4                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_22                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Catapult_C*              CallFunc_Array_Get_Item_7                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_26                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IQtnAttributeContainerInterface>K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_4         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_23                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnAttribute*               CallFunc_GetAttribute_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_27                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_MS_Act2_ReachEndOfStreet_C::ExecuteUbergraph_QtnGoal_MS_Act2_ReachEndOfStreet(int32 EntryPoint, enum class EQtnGoalStatus CallFunc_GetGoalStatus_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UQtnAttribute* Temp_object_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class UAttribute_Health_C* K2Node_DynamicCast_AsAttribute_Health, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, class UQtnAttribute* Temp_object_Variable_1, bool CallFunc_IsValid_ReturnValue_1, class UAttribute_Health_C* K2Node_DynamicCast_AsAttribute_Health_1, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Array_Index_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, int32 Temp_int_Array_Index_Variable_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool K2Node_Event_willEndImmediatelyFromLateJoin, bool CallFunc_IsOnServer_ReturnValue, TArray<class UQtnGoal*>& CallFunc_GetChildGoals_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsOnServer_ReturnValue_1, bool CallFunc_IsOnServer_ReturnValue_2, bool CallFunc_IsOnServer_ReturnValue_3, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnAttribute* Temp_object_Variable_2, class UQtnGoalManager_MainStreet_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street, bool K2Node_DynamicCast_bSuccess_2, class UQtnGoal* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, class UQtnGoal_MS_Act2_RepairCatapult_C* K2Node_DynamicCast_AsQtn_Goal_MS_Act_2_Repair_Catapult, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue_3, class UAttribute_Health_C* K2Node_DynamicCast_AsAttribute_Health_2, bool K2Node_DynamicCast_bSuccess_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, float K2Node_Event_DeltaSeconds, bool CallFunc_IsOnServer_ReturnValue_4, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue, class AQtnPlayerPawn* K2Node_CustomEvent_playerWhoEntered_2, bool K2Node_CustomEvent_onExit_2, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, class UClass* K2Node_CustomEvent_goal_class, int32 K2Node_CustomEvent_Cutscene_ID, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, bool CallFunc_IsServer_ReturnValue_3, bool CallFunc_IsServer_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue_5, bool CallFunc_IsServer_ReturnValue_6, int32 CallFunc_Array_Length_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable_5, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsServer_ReturnValue_7, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess_5, class AQtnPlayerPawn* K2Node_CustomEvent_playerPawnSoul_3, class AQtnBodyPawn* K2Node_CustomEvent_occupiedBodyPawn_3, bool K2Node_CustomEvent_isLocalPlayer_2, bool CallFunc_IsServer_ReturnValue_8, class UClass* Temp_class_Variable, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_IsValid_ReturnValue_8, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, bool CallFunc_HaveExpectedPlayersUpgraded____HaveAllUpgraded, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_1, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_IsServer_ReturnValue_9, class AQtnPlayerPawn* K2Node_CustomEvent_playerPawnSoul_2, class AQtnBodyPawn* K2Node_CustomEvent_occupiedBodyPawn_2, int32 Temp_int_Array_Index_Variable_5, class ABP_Catapult_C* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_IsServer_ReturnValue_10, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_2, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_2, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_IsValid_ReturnValue_10, bool CallFunc_HaveExpectedPlayersUpgraded____HaveAllUpgraded_1, bool CallFunc_IsServer_ReturnValue_11, class ABodyPawnPlayer_C* K2Node_CustomEvent_player_who_upgraded, bool CallFunc_IsServer_ReturnValue_12, int32 CallFunc_Array_AddUnique_ReturnValue, class UQtnAttribute* Temp_object_Variable_3, TArray<class AQtnPlayerPawn*>& CallFunc_GetAllPlayerPawns_foundPlayerPawns, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_11, class UAttribute_Health_C* K2Node_DynamicCast_AsAttribute_Health_3, bool K2Node_DynamicCast_bSuccess_8, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, bool CallFunc_IsServer_ReturnValue_13, bool CallFunc_IsServer_ReturnValue_14, bool CallFunc_IsValid_ReturnValue_13, class AQtnPlayerPawn* K2Node_CustomEvent_playerWhoEntered_1, bool K2Node_CustomEvent_onExit_1, bool CallFunc_IsServer_ReturnValue_15, bool CallFunc_IsServer_ReturnValue_16, bool CallFunc_IsValid_ReturnValue_14, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, enum class EQtnBodyAliveness CallFunc_GetBodyAliveness_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_17, TArray<class AQtnPlayerPawn*>& CallFunc_GetAllPlayerPawns_foundPlayerPawns_1, class AQtnPlayerPawn* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_15, bool CallFunc_Less_IntInt_ReturnValue_2, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess_10, bool CallFunc_IsValid_ReturnValue_16, class UQtnAttribute* CallFunc_GetAttribute_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, bool CallFunc_IsServer_ReturnValue_18, TArray<class AQtnPlayerPawn*>& CallFunc_collectLeftBehindPlayers_dead_players_in_catapult_zone, int32 CallFunc_Array_Length_ReturnValue_7, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue_19, TArray<class AQtnPlayerPawn*>& CallFunc_GetAllPlayerPawns_foundPlayerPawns_2, class AQtnPlayerPawn* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_17, bool CallFunc_Less_IntInt_ReturnValue_3, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue_1, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_1, bool K2Node_DynamicCast_bSuccess_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1, bool K2Node_DynamicCast_bSuccess_12, bool CallFunc_IsValid_ReturnValue_18, class UQtnAttribute* CallFunc_GetAttribute_ReturnValue_1, int32 Temp_int_Array_Index_Variable_6, class UQtnGoal* CallFunc_Array_Get_Item_4, enum class EQtnGoalStatus CallFunc_GetGoalStatus_ReturnValue_1, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_3, bool K2Node_SwitchEnum_CmpSuccess_3, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_3, bool K2Node_DynamicCast_bSuccess_13, int32 Temp_int_Loop_Counter_Variable_6, bool CallFunc_Less_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_6, class AQtnPlayerPawn* K2Node_CustomEvent_for_this_player, bool CallFunc_IsServer_ReturnValue_20, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue_2, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_2, bool K2Node_DynamicCast_bSuccess_14, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_2, bool K2Node_DynamicCast_bSuccess_15, class UQtnAttribute* CallFunc_GetAttribute_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_19, class AQtnPlayerPawn* K2Node_CustomEvent_playerPawnSoul_1, class AQtnBodyPawn* K2Node_CustomEvent_occupiedBodyPawn_1, bool K2Node_CustomEvent_isLocalPlayer_1, enum class EQtnGoalStatus CallFunc_GetGoalStatus_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_4, class UQtnGoal* K2Node_Event_catapultGoal, class UQtnGoal_MS_Act2_RepairCatapult_C* K2Node_DynamicCast_AsQtn_Goal_MS_Act_2_Repair_Catapult_1, bool K2Node_DynamicCast_bSuccess_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue_1, class UQtnGoalManager_MainStreet_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street_1, bool K2Node_DynamicCast_bSuccess_17, bool CallFunc_IsServer_ReturnValue_21, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_20, class AGateLock_BP_C* K2Node_CustomEvent_Lock, bool CallFunc_IsServer_ReturnValue_22, class UQtnAttribute* Temp_object_Variable_4, bool CallFunc_IsValid_ReturnValue_21, class UAttribute_Health_C* K2Node_DynamicCast_AsAttribute_Health_4, bool K2Node_DynamicCast_bSuccess_18, bool CallFunc_IsServer_ReturnValue_23, bool CallFunc_IsValid_ReturnValue_22, class AQtnPlayerPawn* K2Node_CustomEvent_playerWhoEntered, bool K2Node_CustomEvent_onExit, bool CallFunc_IsServer_ReturnValue_24, bool CallFunc_AllPlayersReachedRepairZone_ServerOnly_all_players_in_zone, bool CallFunc_IsServer_ReturnValue_25, bool CallFunc_IsServer_ReturnValue_26, TArray<class AQtnPlayerPawn*>& CallFunc_GetAllPlayerPawns_foundPlayerPawns_3, class AQtnPlayerPawn* CallFunc_Array_Get_Item_5, int32 CallFunc_Array_Length_ReturnValue_9, bool CallFunc_Less_IntInt_ReturnValue_5, int32 Temp_int_Loop_Counter_Variable_7, bool CallFunc_Less_IntInt_ReturnValue_6, int32 CallFunc_Add_IntInt_ReturnValue_7, bool CallFunc_IsServer_ReturnValue_27, class AQtnPlayerPawn* K2Node_CustomEvent_player, bool CallFunc_IsValid_ReturnValue_23, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue_3, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_3, bool K2Node_DynamicCast_bSuccess_19, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_4, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_3, bool K2Node_DynamicCast_bSuccess_20, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_4, bool K2Node_DynamicCast_bSuccess_21, class UQtnAttribute* CallFunc_GetAttribute_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_24, bool CallFunc_IsServer_ReturnValue_28, class AQtnPlayerPawn* K2Node_CustomEvent_playerPawnSoul, class AQtnBodyPawn* K2Node_CustomEvent_occupiedBodyPawn, bool K2Node_CustomEvent_isLocalPlayer, bool CallFunc_IsServer_ReturnValue_29, TArray<class AQtnPlayerPawn*>& CallFunc_GetAllPlayerPawns_foundPlayerPawns_4, class AQtnPlayerPawn* CallFunc_Array_Get_Item_6, int32 CallFunc_Array_Length_ReturnValue_10, bool CallFunc_IsValid_ReturnValue_25, bool CallFunc_Less_IntInt_ReturnValue_7, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue_4, int32 Temp_int_Array_Index_Variable_7, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_4, bool K2Node_DynamicCast_bSuccess_22, class ABP_Catapult_C* CallFunc_Array_Get_Item_7, bool CallFunc_IsValid_ReturnValue_26, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_4, bool K2Node_DynamicCast_bSuccess_23, class UQtnAttribute* CallFunc_GetAttribute_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_27)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Act2_ReachEndOfStreet_C", "ExecuteUbergraph_QtnGoal_MS_Act2_ReachEndOfStreet");

	Params::UQtnGoal_MS_Act2_ReachEndOfStreet_C_ExecuteUbergraph_QtnGoal_MS_Act2_ReachEndOfStreet_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGoalStatus_ReturnValue = CallFunc_GetGoalStatus_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsAttribute_Health = K2Node_DynamicCast_AsAttribute_Health;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsAttribute_Health_1 = K2Node_DynamicCast_AsAttribute_Health_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_Event_willEndImmediatelyFromLateJoin = K2Node_Event_willEndImmediatelyFromLateJoin;
	Parms.CallFunc_IsOnServer_ReturnValue = CallFunc_IsOnServer_ReturnValue;
	Parms.CallFunc_GetChildGoals_ReturnValue = CallFunc_GetChildGoals_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsOnServer_ReturnValue_1 = CallFunc_IsOnServer_ReturnValue_1;
	Parms.CallFunc_IsOnServer_ReturnValue_2 = CallFunc_IsOnServer_ReturnValue_2;
	Parms.CallFunc_IsOnServer_ReturnValue_3 = CallFunc_IsOnServer_ReturnValue_3;
	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street = K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsQtn_Goal_MS_Act_2_Repair_Catapult = K2Node_DynamicCast_AsQtn_Goal_MS_Act_2_Repair_Catapult;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsAttribute_Health_2 = K2Node_DynamicCast_AsAttribute_Health_2;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_IsOnServer_ReturnValue_4 = CallFunc_IsOnServer_ReturnValue_4;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CustomEvent_playerWhoEntered_2 = K2Node_CustomEvent_playerWhoEntered_2;
	Parms.K2Node_CustomEvent_onExit_2 = K2Node_CustomEvent_onExit_2;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.K2Node_CustomEvent_goal_class = K2Node_CustomEvent_goal_class;
	Parms.K2Node_CustomEvent_Cutscene_ID = K2Node_CustomEvent_Cutscene_ID;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue_2 = CallFunc_IsServer_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_IsServer_ReturnValue_3 = CallFunc_IsServer_ReturnValue_3;
	Parms.CallFunc_IsServer_ReturnValue_4 = CallFunc_IsServer_ReturnValue_4;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_5 = CallFunc_IsServer_ReturnValue_5;
	Parms.CallFunc_IsServer_ReturnValue_6 = CallFunc_IsServer_ReturnValue_6;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.Temp_int_Loop_Counter_Variable_5 = Temp_int_Loop_Counter_Variable_5;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_7 = CallFunc_IsServer_ReturnValue_7;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype = K2Node_DynamicCast_AsQtn_Game_State_Archetype;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_CustomEvent_playerPawnSoul_3 = K2Node_CustomEvent_playerPawnSoul_3;
	Parms.K2Node_CustomEvent_occupiedBodyPawn_3 = K2Node_CustomEvent_occupiedBodyPawn_3;
	Parms.K2Node_CustomEvent_isLocalPlayer_2 = K2Node_CustomEvent_isLocalPlayer_2;
	Parms.CallFunc_IsServer_ReturnValue_8 = CallFunc_IsServer_ReturnValue_8;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_GetQtnGameState_ReturnValue_1 = CallFunc_GetQtnGameState_ReturnValue_1;
	Parms.CallFunc_HaveExpectedPlayersUpgraded____HaveAllUpgraded = CallFunc_HaveExpectedPlayersUpgraded____HaveAllUpgraded;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype_1 = K2Node_DynamicCast_AsQtn_Game_State_Archetype_1;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_IsServer_ReturnValue_9 = CallFunc_IsServer_ReturnValue_9;
	Parms.K2Node_CustomEvent_playerPawnSoul_2 = K2Node_CustomEvent_playerPawnSoul_2;
	Parms.K2Node_CustomEvent_occupiedBodyPawn_2 = K2Node_CustomEvent_occupiedBodyPawn_2;
	Parms.Temp_int_Array_Index_Variable_5 = Temp_int_Array_Index_Variable_5;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_IsServer_ReturnValue_10 = CallFunc_IsServer_ReturnValue_10;
	Parms.CallFunc_GetQtnGameState_ReturnValue_2 = CallFunc_GetQtnGameState_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype_2 = K2Node_DynamicCast_AsQtn_Game_State_Archetype_2;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_HaveExpectedPlayersUpgraded____HaveAllUpgraded_1 = CallFunc_HaveExpectedPlayersUpgraded____HaveAllUpgraded_1;
	Parms.CallFunc_IsServer_ReturnValue_11 = CallFunc_IsServer_ReturnValue_11;
	Parms.K2Node_CustomEvent_player_who_upgraded = K2Node_CustomEvent_player_who_upgraded;
	Parms.CallFunc_IsServer_ReturnValue_12 = CallFunc_IsServer_ReturnValue_12;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.CallFunc_GetAllPlayerPawns_foundPlayerPawns = CallFunc_GetAllPlayerPawns_foundPlayerPawns;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.K2Node_DynamicCast_AsAttribute_Health_3 = K2Node_DynamicCast_AsAttribute_Health_3;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.CallFunc_IsServer_ReturnValue_13 = CallFunc_IsServer_ReturnValue_13;
	Parms.CallFunc_IsServer_ReturnValue_14 = CallFunc_IsServer_ReturnValue_14;
	Parms.CallFunc_IsValid_ReturnValue_13 = CallFunc_IsValid_ReturnValue_13;
	Parms.K2Node_CustomEvent_playerWhoEntered_1 = K2Node_CustomEvent_playerWhoEntered_1;
	Parms.K2Node_CustomEvent_onExit_1 = K2Node_CustomEvent_onExit_1;
	Parms.CallFunc_IsServer_ReturnValue_15 = CallFunc_IsServer_ReturnValue_15;
	Parms.CallFunc_IsServer_ReturnValue_16 = CallFunc_IsServer_ReturnValue_16;
	Parms.CallFunc_IsValid_ReturnValue_14 = CallFunc_IsValid_ReturnValue_14;
	Parms.CallFunc_GetLocalPlayerInformation_occupiedBodyPawn = CallFunc_GetLocalPlayerInformation_occupiedBodyPawn;
	Parms.CallFunc_GetLocalPlayerInformation_playerPawn = CallFunc_GetLocalPlayerInformation_playerPawn;
	Parms.CallFunc_GetLocalPlayerInformation_playerController = CallFunc_GetLocalPlayerInformation_playerController;
	Parms.CallFunc_GetLocalPlayerInformation_playerUI = CallFunc_GetLocalPlayerInformation_playerUI;
	Parms.CallFunc_GetLocalPlayerInformation_qtnPlayerState = CallFunc_GetLocalPlayerInformation_qtnPlayerState;
	Parms.CallFunc_GetLocalPlayerInformation_isHosting = CallFunc_GetLocalPlayerInformation_isHosting;
	Parms.CallFunc_GetLocalPlayerInformation_outputPin = CallFunc_GetLocalPlayerInformation_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetBodyAliveness_ReturnValue = CallFunc_GetBodyAliveness_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_BP_BeginEffect_ReturnValue = CallFunc_BP_BeginEffect_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue_17 = CallFunc_IsServer_ReturnValue_17;
	Parms.CallFunc_GetAllPlayerPawns_foundPlayerPawns_1 = CallFunc_GetAllPlayerPawns_foundPlayerPawns_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_6 = CallFunc_Array_Length_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_15 = CallFunc_IsValid_ReturnValue_15;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_GetOccupiedBodyPawn_ReturnValue = CallFunc_GetOccupiedBodyPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_DynamicCast_AsQtn_Attribute_Container_Interface = K2Node_DynamicCast_AsQtn_Attribute_Container_Interface;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.CallFunc_IsValid_ReturnValue_16 = CallFunc_IsValid_ReturnValue_16;
	Parms.CallFunc_GetAttribute_ReturnValue = CallFunc_GetAttribute_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.CallFunc_IsServer_ReturnValue_18 = CallFunc_IsServer_ReturnValue_18;
	Parms.CallFunc_collectLeftBehindPlayers_dead_players_in_catapult_zone = CallFunc_collectLeftBehindPlayers_dead_players_in_catapult_zone;
	Parms.CallFunc_Array_Length_ReturnValue_7 = CallFunc_Array_Length_ReturnValue_7;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_19 = CallFunc_IsServer_ReturnValue_19;
	Parms.CallFunc_GetAllPlayerPawns_foundPlayerPawns_2 = CallFunc_GetAllPlayerPawns_foundPlayerPawns_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Length_ReturnValue_8 = CallFunc_Array_Length_ReturnValue_8;
	Parms.CallFunc_IsValid_ReturnValue_17 = CallFunc_IsValid_ReturnValue_17;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_GetOccupiedBodyPawn_ReturnValue_1 = CallFunc_GetOccupiedBodyPawn_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player_1 = K2Node_DynamicCast_AsBody_Pawn_Player_1;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1 = K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.CallFunc_IsValid_ReturnValue_18 = CallFunc_IsValid_ReturnValue_18;
	Parms.CallFunc_GetAttribute_ReturnValue_1 = CallFunc_GetAttribute_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_6 = Temp_int_Array_Index_Variable_6;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_GetGoalStatus_ReturnValue_1 = CallFunc_GetGoalStatus_ReturnValue_1;
	Parms.CallFunc_GetQtnGameState_ReturnValue_3 = CallFunc_GetQtnGameState_ReturnValue_3;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype_3 = K2Node_DynamicCast_AsQtn_Game_State_Archetype_3;
	Parms.K2Node_DynamicCast_bSuccess_13 = K2Node_DynamicCast_bSuccess_13;
	Parms.Temp_int_Loop_Counter_Variable_6 = Temp_int_Loop_Counter_Variable_6;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.K2Node_CustomEvent_for_this_player = K2Node_CustomEvent_for_this_player;
	Parms.CallFunc_IsServer_ReturnValue_20 = CallFunc_IsServer_ReturnValue_20;
	Parms.CallFunc_GetOccupiedBodyPawn_ReturnValue_2 = CallFunc_GetOccupiedBodyPawn_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player_2 = K2Node_DynamicCast_AsBody_Pawn_Player_2;
	Parms.K2Node_DynamicCast_bSuccess_14 = K2Node_DynamicCast_bSuccess_14;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_2 = K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_15 = K2Node_DynamicCast_bSuccess_15;
	Parms.CallFunc_GetAttribute_ReturnValue_2 = CallFunc_GetAttribute_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_19 = CallFunc_IsValid_ReturnValue_19;
	Parms.K2Node_CustomEvent_playerPawnSoul_1 = K2Node_CustomEvent_playerPawnSoul_1;
	Parms.K2Node_CustomEvent_occupiedBodyPawn_1 = K2Node_CustomEvent_occupiedBodyPawn_1;
	Parms.K2Node_CustomEvent_isLocalPlayer_1 = K2Node_CustomEvent_isLocalPlayer_1;
	Parms.CallFunc_GetGoalStatus_ReturnValue_2 = CallFunc_GetGoalStatus_ReturnValue_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.K2Node_Event_catapultGoal = K2Node_Event_catapultGoal;
	Parms.K2Node_DynamicCast_AsQtn_Goal_MS_Act_2_Repair_Catapult_1 = K2Node_DynamicCast_AsQtn_Goal_MS_Act_2_Repair_Catapult_1;
	Parms.K2Node_DynamicCast_bSuccess_16 = K2Node_DynamicCast_bSuccess_16;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetGoalManager_ReturnValue_1 = CallFunc_GetGoalManager_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street_1 = K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street_1;
	Parms.K2Node_DynamicCast_bSuccess_17 = K2Node_DynamicCast_bSuccess_17;
	Parms.CallFunc_IsServer_ReturnValue_21 = CallFunc_IsServer_ReturnValue_21;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_20 = CallFunc_IsValid_ReturnValue_20;
	Parms.K2Node_CustomEvent_Lock = K2Node_CustomEvent_Lock;
	Parms.CallFunc_IsServer_ReturnValue_22 = CallFunc_IsServer_ReturnValue_22;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.CallFunc_IsValid_ReturnValue_21 = CallFunc_IsValid_ReturnValue_21;
	Parms.K2Node_DynamicCast_AsAttribute_Health_4 = K2Node_DynamicCast_AsAttribute_Health_4;
	Parms.K2Node_DynamicCast_bSuccess_18 = K2Node_DynamicCast_bSuccess_18;
	Parms.CallFunc_IsServer_ReturnValue_23 = CallFunc_IsServer_ReturnValue_23;
	Parms.CallFunc_IsValid_ReturnValue_22 = CallFunc_IsValid_ReturnValue_22;
	Parms.K2Node_CustomEvent_playerWhoEntered = K2Node_CustomEvent_playerWhoEntered;
	Parms.K2Node_CustomEvent_onExit = K2Node_CustomEvent_onExit;
	Parms.CallFunc_IsServer_ReturnValue_24 = CallFunc_IsServer_ReturnValue_24;
	Parms.CallFunc_AllPlayersReachedRepairZone_ServerOnly_all_players_in_zone = CallFunc_AllPlayersReachedRepairZone_ServerOnly_all_players_in_zone;
	Parms.CallFunc_IsServer_ReturnValue_25 = CallFunc_IsServer_ReturnValue_25;
	Parms.CallFunc_IsServer_ReturnValue_26 = CallFunc_IsServer_ReturnValue_26;
	Parms.CallFunc_GetAllPlayerPawns_foundPlayerPawns_3 = CallFunc_GetAllPlayerPawns_foundPlayerPawns_3;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Array_Length_ReturnValue_9 = CallFunc_Array_Length_ReturnValue_9;
	Parms.CallFunc_Less_IntInt_ReturnValue_5 = CallFunc_Less_IntInt_ReturnValue_5;
	Parms.Temp_int_Loop_Counter_Variable_7 = Temp_int_Loop_Counter_Variable_7;
	Parms.CallFunc_Less_IntInt_ReturnValue_6 = CallFunc_Less_IntInt_ReturnValue_6;
	Parms.CallFunc_Add_IntInt_ReturnValue_7 = CallFunc_Add_IntInt_ReturnValue_7;
	Parms.CallFunc_IsServer_ReturnValue_27 = CallFunc_IsServer_ReturnValue_27;
	Parms.K2Node_CustomEvent_player = K2Node_CustomEvent_player;
	Parms.CallFunc_IsValid_ReturnValue_23 = CallFunc_IsValid_ReturnValue_23;
	Parms.CallFunc_GetOccupiedBodyPawn_ReturnValue_3 = CallFunc_GetOccupiedBodyPawn_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player_3 = K2Node_DynamicCast_AsBody_Pawn_Player_3;
	Parms.K2Node_DynamicCast_bSuccess_19 = K2Node_DynamicCast_bSuccess_19;
	Parms.CallFunc_GetQtnGameState_ReturnValue_4 = CallFunc_GetQtnGameState_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_3 = K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_3;
	Parms.K2Node_DynamicCast_bSuccess_20 = K2Node_DynamicCast_bSuccess_20;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype_4 = K2Node_DynamicCast_AsQtn_Game_State_Archetype_4;
	Parms.K2Node_DynamicCast_bSuccess_21 = K2Node_DynamicCast_bSuccess_21;
	Parms.CallFunc_GetAttribute_ReturnValue_3 = CallFunc_GetAttribute_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_24 = CallFunc_IsValid_ReturnValue_24;
	Parms.CallFunc_IsServer_ReturnValue_28 = CallFunc_IsServer_ReturnValue_28;
	Parms.K2Node_CustomEvent_playerPawnSoul = K2Node_CustomEvent_playerPawnSoul;
	Parms.K2Node_CustomEvent_occupiedBodyPawn = K2Node_CustomEvent_occupiedBodyPawn;
	Parms.K2Node_CustomEvent_isLocalPlayer = K2Node_CustomEvent_isLocalPlayer;
	Parms.CallFunc_IsServer_ReturnValue_29 = CallFunc_IsServer_ReturnValue_29;
	Parms.CallFunc_GetAllPlayerPawns_foundPlayerPawns_4 = CallFunc_GetAllPlayerPawns_foundPlayerPawns_4;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_Array_Length_ReturnValue_10 = CallFunc_Array_Length_ReturnValue_10;
	Parms.CallFunc_IsValid_ReturnValue_25 = CallFunc_IsValid_ReturnValue_25;
	Parms.CallFunc_Less_IntInt_ReturnValue_7 = CallFunc_Less_IntInt_ReturnValue_7;
	Parms.CallFunc_GetOccupiedBodyPawn_ReturnValue_4 = CallFunc_GetOccupiedBodyPawn_ReturnValue_4;
	Parms.Temp_int_Array_Index_Variable_7 = Temp_int_Array_Index_Variable_7;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player_4 = K2Node_DynamicCast_AsBody_Pawn_Player_4;
	Parms.K2Node_DynamicCast_bSuccess_22 = K2Node_DynamicCast_bSuccess_22;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_IsValid_ReturnValue_26 = CallFunc_IsValid_ReturnValue_26;
	Parms.K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_4 = K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_4;
	Parms.K2Node_DynamicCast_bSuccess_23 = K2Node_DynamicCast_bSuccess_23;
	Parms.CallFunc_GetAttribute_ReturnValue_4 = CallFunc_GetAttribute_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_27 = CallFunc_IsValid_ReturnValue_27;

	UObject::ProcessEvent(Func, &Parms);

}

}


