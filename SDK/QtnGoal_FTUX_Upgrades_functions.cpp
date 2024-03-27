#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnGoal_FTUX_Upgrades.QtnGoal_FTUX_Upgrades_C
// (None)

class UClass* UQtnGoal_FTUX_Upgrades_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnGoal_FTUX_Upgrades_C");

	return Clss;
}


// QtnGoal_FTUX_Upgrades_C QtnGoal_FTUX_Upgrades.Default__QtnGoal_FTUX_Upgrades_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnGoal_FTUX_Upgrades_C* UQtnGoal_FTUX_Upgrades_C::GetDefaultObj()
{
	static class UQtnGoal_FTUX_Upgrades_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnGoal_FTUX_Upgrades_C*>(UQtnGoal_FTUX_Upgrades_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QtnGoal_FTUX_Upgrades.QtnGoal_FTUX_Upgrades_C.RefreshUpgradeStation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnReactionToTag           K2Node_MakeStruct_QtnReactionToTag                               (NoDestructor)
// TArray<struct FQtnReactionToTag>   K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_FTUX_Upgrades_C::RefreshUpgradeStation(const struct FQtnReactionToTag& K2Node_MakeStruct_QtnReactionToTag, TArray<struct FQtnReactionToTag>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_Upgrades_C", "RefreshUpgradeStation");

	Params::UQtnGoal_FTUX_Upgrades_C_RefreshUpgradeStation_Params Parms{};

	Parms.K2Node_MakeStruct_QtnReactionToTag = K2Node_MakeStruct_QtnReactionToTag;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_FTUX_Upgrades.QtnGoal_FTUX_Upgrades_C.EndSequence
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UQtnGoal*>            CallFunc_GetChildGoals_ReturnValue                               (ConstParm, ReferenceParm, ContainsInstancedReference)
// enum class EQtnGoalStatus          CallFunc_GetGoalStatus_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_FTUX_Upgrades_C::EndSequence(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UQtnGoal*>& CallFunc_GetChildGoals_ReturnValue, enum class EQtnGoalStatus CallFunc_GetGoalStatus_ReturnValue, class UQtnGoal* CallFunc_Array_Get_Item, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_Upgrades_C", "EndSequence");

	Params::UQtnGoal_FTUX_Upgrades_C_EndSequence_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetChildGoals_ReturnValue = CallFunc_GetChildGoals_ReturnValue;
	Parms.CallFunc_GetGoalStatus_ReturnValue = CallFunc_GetGoalStatus_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_FTUX_Upgrades.QtnGoal_FTUX_Upgrades_C.Post VOConversation Server Only
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_FTUX_Upgrades_C::Post_VOConversation_Server_Only()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_Upgrades_C", "Post VOConversation Server Only");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_FTUX_Upgrades.QtnGoal_FTUX_Upgrades_C.getJimmy
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              CallFunc_Find_Marked_Actors_Server_Only_foundActors              (ReferenceParm)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AUpgradeStation_FTUX_C*      K2Node_DynamicCast_AsUpgrade_Station_FTUX                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_FTUX_Upgrades_C::GetJimmy(TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, bool CallFunc_Array_IsValidIndex_ReturnValue, class AActor* CallFunc_Array_Get_Item, class AUpgradeStation_FTUX_C* K2Node_DynamicCast_AsUpgrade_Station_FTUX, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_Upgrades_C", "getJimmy");

	Params::UQtnGoal_FTUX_Upgrades_C_GetJimmy_Params Parms{};

	Parms.CallFunc_Find_Marked_Actors_Server_Only_foundActors = CallFunc_Find_Marked_Actors_Server_Only_foundActors;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsUpgrade_Station_FTUX = K2Node_DynamicCast_AsUpgrade_Station_FTUX;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_FTUX_Upgrades.QtnGoal_FTUX_Upgrades_C.OnGoalSpawned_ServerOnly
// (Event, Public, BlueprintEvent)
// Parameters:

void UQtnGoal_FTUX_Upgrades_C::OnGoalSpawned_ServerOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_Upgrades_C", "OnGoalSpawned_ServerOnly");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_FTUX_Upgrades.QtnGoal_FTUX_Upgrades_C.OnGoalStart
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               WillEndImmediatelyFromLateJoin                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_FTUX_Upgrades_C::OnGoalStart(bool WillEndImmediatelyFromLateJoin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_Upgrades_C", "OnGoalStart");

	Params::UQtnGoal_FTUX_Upgrades_C_OnGoalStart_Params Parms{};

	Parms.WillEndImmediatelyFromLateJoin = WillEndImmediatelyFromLateJoin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_FTUX_Upgrades.QtnGoal_FTUX_Upgrades_C.playInterruptableConvo
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FQtnStruct_VOLine>   Convo                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UQtnGoal_FTUX_Upgrades_C::PlayInterruptableConvo(TArray<struct FQtnStruct_VOLine>& Convo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_Upgrades_C", "playInterruptableConvo");

	Params::UQtnGoal_FTUX_Upgrades_C_PlayInterruptableConvo_Params Parms{};

	Parms.Convo = Convo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_FTUX_Upgrades.QtnGoal_FTUX_Upgrades_C.hideDoubleJimmy
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_FTUX_Upgrades_C::HideDoubleJimmy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_Upgrades_C", "hideDoubleJimmy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_FTUX_Upgrades.QtnGoal_FTUX_Upgrades_C.bindJimmyFrobEventNEW
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_FTUX_Upgrades_C::bindJimmyFrobEventNEW()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_Upgrades_C", "bindJimmyFrobEventNEW");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_FTUX_Upgrades.QtnGoal_FTUX_Upgrades_C.playerEnteredFTUXNEW
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_FTUX_Upgrades_C::PlayerEnteredFTUXNEW()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_Upgrades_C", "playerEnteredFTUXNEW");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_FTUX_Upgrades.QtnGoal_FTUX_Upgrades_C.PLAYERLEFTFTUXNEW
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_FTUX_Upgrades_C::PLAYERLEFTFTUXNEW()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_Upgrades_C", "PLAYERLEFTFTUXNEW");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_FTUX_Upgrades.QtnGoal_FTUX_Upgrades_C.ExecuteUbergraph_QtnGoal_FTUX_Upgrades
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FQtnStruct_VOLine>   K2Node_CustomEvent_Convo                                         (ConstParm, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_willEndImmediatelyFromLateJoin                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnStruct_VOLine           CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerOccupiedBody_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOccupiedBody_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_FindPlayerData____FoundPlayer                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerUpgradeSessionState_C*CallFunc_FindPlayerData____PlayerSession                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindPlayerData____PlayerIndex                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoal_FTUX_Upgrades_C::ExecuteUbergraph_QtnGoal_FTUX_Upgrades(int32 EntryPoint, TArray<struct FQtnStruct_VOLine>& K2Node_CustomEvent_Convo, int32 CallFunc_Array_Length_ReturnValue, bool K2Node_Event_willEndImmediatelyFromLateJoin, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, const struct FQtnStruct_VOLine& CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_FindPlayerData____FoundPlayer, class UPlayerUpgradeSessionState_C* CallFunc_FindPlayerData____PlayerSession, int32 CallFunc_FindPlayerData____PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_Upgrades_C", "ExecuteUbergraph_QtnGoal_FTUX_Upgrades");

	Params::UQtnGoal_FTUX_Upgrades_C_ExecuteUbergraph_QtnGoal_FTUX_Upgrades_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Convo = K2Node_CustomEvent_Convo;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_Event_willEndImmediatelyFromLateJoin = K2Node_Event_willEndImmediatelyFromLateJoin;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_outputPin = CallFunc_GetLocalPlayerOccupiedBody_outputPin;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_ReturnValue = CallFunc_GetLocalPlayerOccupiedBody_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_FindPlayerData____FoundPlayer = CallFunc_FindPlayerData____FoundPlayer;
	Parms.CallFunc_FindPlayerData____PlayerSession = CallFunc_FindPlayerData____PlayerSession;
	Parms.CallFunc_FindPlayerData____PlayerIndex = CallFunc_FindPlayerData____PlayerIndex;

	UObject::ProcessEvent(Func, &Parms);

}

}


