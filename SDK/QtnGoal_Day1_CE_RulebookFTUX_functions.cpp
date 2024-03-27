#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnGoal_Day1_CE_RulebookFTUX.QtnGoal_Day1_CE_RulebookFTUX_C
// (None)

class UClass* UQtnGoal_Day1_CE_RulebookFTUX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnGoal_Day1_CE_RulebookFTUX_C");

	return Clss;
}


// QtnGoal_Day1_CE_RulebookFTUX_C QtnGoal_Day1_CE_RulebookFTUX.Default__QtnGoal_Day1_CE_RulebookFTUX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnGoal_Day1_CE_RulebookFTUX_C* UQtnGoal_Day1_CE_RulebookFTUX_C::GetDefaultObj()
{
	static class UQtnGoal_Day1_CE_RulebookFTUX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnGoal_Day1_CE_RulebookFTUX_C*>(UQtnGoal_Day1_CE_RulebookFTUX_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QtnGoal_Day1_CE_RulebookFTUX.QtnGoal_Day1_CE_RulebookFTUX_C.Get Spawn Location Server Only
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              CallFunc_Find_Marked_Actors_Server_Only_foundActors              (ReferenceParm)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALocationMarker_BP_C*        K2Node_DynamicCast_AsLocation_Marker_BP                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_Day1_CE_RulebookFTUX_C::Get_Spawn_Location_Server_Only(TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_Array_Get_Item, class ALocationMarker_BP_C* K2Node_DynamicCast_AsLocation_Marker_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Day1_CE_RulebookFTUX_C", "Get Spawn Location Server Only");

	Params::UQtnGoal_Day1_CE_RulebookFTUX_C_Get_Spawn_Location_Server_Only_Params Parms{};

	Parms.CallFunc_Find_Marked_Actors_Server_Only_foundActors = CallFunc_Find_Marked_Actors_Server_Only_foundActors;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsLocation_Marker_BP = K2Node_DynamicCast_AsLocation_Marker_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_Day1_CE_RulebookFTUX.QtnGoal_Day1_CE_RulebookFTUX_C.DEBUGONLY Start Goal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AQtnBodyPawn*>        CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies                 (ReferenceParm, ContainsInstancedReference)
// class AQtnBodyPawn*                CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_Day1_CE_RulebookFTUX_C::DEBUGONLY_Start_Goal(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AQtnBodyPawn*>& CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies, class AQtnBodyPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Day1_CE_RulebookFTUX_C", "DEBUGONLY Start Goal");

	Params::UQtnGoal_Day1_CE_RulebookFTUX_C_DEBUGONLY_Start_Goal_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies = CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_Day1_CE_RulebookFTUX.QtnGoal_Day1_CE_RulebookFTUX_C.DisableNicholeFrob
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_Day1_CE_RulebookFTUX_C::DisableNicholeFrob()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Day1_CE_RulebookFTUX_C", "DisableNicholeFrob");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_Day1_CE_RulebookFTUX.QtnGoal_Day1_CE_RulebookFTUX_C.CheckAllExpectedAreComplete
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               All_expected_have_completed_FTUX                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerPawn*              CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_Day1_CE_RulebookFTUX_C::CheckAllExpectedAreComplete(bool* All_expected_have_completed_FTUX, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue, class AQtnPlayerPawn* CallFunc_Array_Get_Item, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Day1_CE_RulebookFTUX_C", "CheckAllExpectedAreComplete");

	Params::UQtnGoal_Day1_CE_RulebookFTUX_C_CheckAllExpectedAreComplete_Params Parms{};

	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (All_expected_have_completed_FTUX != nullptr)
		*All_expected_have_completed_FTUX = Parms.All_expected_have_completed_FTUX;

}


// Function QtnGoal_Day1_CE_RulebookFTUX.QtnGoal_Day1_CE_RulebookFTUX_C.UpdateExpectedPlayers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Add                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerPawn*              Player_pawn                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckAllExpectedAreComplete_All_expected_have_completed_FTUX(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_Day1_CE_RulebookFTUX_C::UpdateExpectedPlayers(bool Add, class AQtnPlayerPawn* Player_pawn, bool CallFunc_CheckAllExpectedAreComplete_All_expected_have_completed_FTUX, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Day1_CE_RulebookFTUX_C", "UpdateExpectedPlayers");

	Params::UQtnGoal_Day1_CE_RulebookFTUX_C_UpdateExpectedPlayers_Params Parms{};

	Parms.Add = Add;
	Parms.Player_pawn = Player_pawn;
	Parms.CallFunc_CheckAllExpectedAreComplete_All_expected_have_completed_FTUX = CallFunc_CheckAllExpectedAreComplete_All_expected_have_completed_FTUX;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_Day1_CE_RulebookFTUX.QtnGoal_Day1_CE_RulebookFTUX_C.GetExpectedPlayers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AQtnPlayerPawn*>      CallFunc_GetAllPlayerPawns_foundPlayerPawns                      (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UQtnGoal_Day1_CE_RulebookFTUX_C::GetExpectedPlayers(TArray<class AQtnPlayerPawn*>& CallFunc_GetAllPlayerPawns_foundPlayerPawns, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_IsServer_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Day1_CE_RulebookFTUX_C", "GetExpectedPlayers");

	Params::UQtnGoal_Day1_CE_RulebookFTUX_C_GetExpectedPlayers_Params Parms{};

	Parms.CallFunc_GetAllPlayerPawns_foundPlayerPawns = CallFunc_GetAllPlayerPawns_foundPlayerPawns;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_Day1_CE_RulebookFTUX.QtnGoal_Day1_CE_RulebookFTUX_C.GetVolume
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              CallFunc_Find_Marked_Actors_Server_Only_foundActors              (ReferenceParm)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATargetLocationVolume_C*     K2Node_DynamicCast_AsTarget_Location_Volume                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_Day1_CE_RulebookFTUX_C::GetVolume(TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_Array_Get_Item, class ATargetLocationVolume_C* K2Node_DynamicCast_AsTarget_Location_Volume, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Day1_CE_RulebookFTUX_C", "GetVolume");

	Params::UQtnGoal_Day1_CE_RulebookFTUX_C_GetVolume_Params Parms{};

	Parms.CallFunc_Find_Marked_Actors_Server_Only_foundActors = CallFunc_Find_Marked_Actors_Server_Only_foundActors;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsTarget_Location_Volume = K2Node_DynamicCast_AsTarget_Location_Volume;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_Day1_CE_RulebookFTUX.QtnGoal_Day1_CE_RulebookFTUX_C.Receive Skirmish Notify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnSkirmish*                Skirmish_Sending_Event                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Final_skirmish_action                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Action_Tag                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_Day1_CE_RulebookFTUX_C::Receive_Skirmish_Notify(class AQtnSkirmish* Skirmish_Sending_Event, bool Final_skirmish_action, class FName Action_Tag, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Day1_CE_RulebookFTUX_C", "Receive Skirmish Notify");

	Params::UQtnGoal_Day1_CE_RulebookFTUX_C_Receive_Skirmish_Notify_Params Parms{};

	Parms.Skirmish_Sending_Event = Skirmish_Sending_Event;
	Parms.Final_skirmish_action = Final_skirmish_action;
	Parms.Action_Tag = Action_Tag;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_Day1_CE_RulebookFTUX.QtnGoal_Day1_CE_RulebookFTUX_C.OnRep_GoalEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_Day1_CE_RulebookFTUX_C::OnRep_GoalEnded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Day1_CE_RulebookFTUX_C", "OnRep_GoalEnded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_Day1_CE_RulebookFTUX.QtnGoal_Day1_CE_RulebookFTUX_C.OnRep_GoalStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_Day1_CE_RulebookFTUX_C::OnRep_GoalStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Day1_CE_RulebookFTUX_C", "OnRep_GoalStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_Day1_CE_RulebookFTUX.QtnGoal_Day1_CE_RulebookFTUX_C.LOCAL_UpdateIcons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerOccupiedBody_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOccupiedBody_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerPawn_outputPin                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              CallFunc_GetLocalPlayerPawn_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_Day1_CE_RulebookFTUX_C::LOCAL_UpdateIcons(enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Array_Contains_ReturnValue, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerPawn_outputPin, class AQtnPlayerPawn* CallFunc_GetLocalPlayerPawn_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_Array_Contains_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Day1_CE_RulebookFTUX_C", "LOCAL_UpdateIcons");

	Params::UQtnGoal_Day1_CE_RulebookFTUX_C_LOCAL_UpdateIcons_Params Parms{};

	Parms.CallFunc_GetLocalPlayerOccupiedBody_outputPin = CallFunc_GetLocalPlayerOccupiedBody_outputPin;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_ReturnValue = CallFunc_GetLocalPlayerOccupiedBody_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_GetLocalPlayerPawn_outputPin = CallFunc_GetLocalPlayerPawn_outputPin;
	Parms.CallFunc_GetLocalPlayerPawn_ReturnValue = CallFunc_GetLocalPlayerPawn_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_Day1_CE_RulebookFTUX.QtnGoal_Day1_CE_RulebookFTUX_C.Get Nichole Server Only
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManagerBase_C*       K2Node_DynamicCast_AsQtn_Goal_Manager_Base                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_Find_Marked_Actors_Server_Only_foundActors              (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AShrine_Nichole_BP_C*        K2Node_DynamicCast_AsShrine_Nichole_BP                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALocationMarker_BP_C*        K2Node_DynamicCast_AsLocation_Marker_BP                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_Day1_CE_RulebookFTUX_C::Get_Nichole_Server_Only(class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManagerBase_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Base, bool K2Node_DynamicCast_bSuccess, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class AShrine_Nichole_BP_C* K2Node_DynamicCast_AsShrine_Nichole_BP, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class ALocationMarker_BP_C* K2Node_DynamicCast_AsLocation_Marker_BP, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Day1_CE_RulebookFTUX_C", "Get Nichole Server Only");

	Params::UQtnGoal_Day1_CE_RulebookFTUX_C_Get_Nichole_Server_Only_Params Parms{};

	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Base = K2Node_DynamicCast_AsQtn_Goal_Manager_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Find_Marked_Actors_Server_Only_foundActors = CallFunc_Find_Marked_Actors_Server_Only_foundActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_DynamicCast_AsShrine_Nichole_BP = K2Node_DynamicCast_AsShrine_Nichole_BP;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsLocation_Marker_BP = K2Node_DynamicCast_AsLocation_Marker_BP;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_Day1_CE_RulebookFTUX.QtnGoal_Day1_CE_RulebookFTUX_C.VO_Greeting
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue                      (None)
// bool                               CallFunc_MakeLiteralBool_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_Day1_CE_RulebookFTUX_C::VO_Greeting(bool CallFunc_IsServer_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, bool CallFunc_MakeLiteralBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Day1_CE_RulebookFTUX_C", "VO_Greeting");

	Params::UQtnGoal_Day1_CE_RulebookFTUX_C_VO_Greeting_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue = CallFunc_StaticMakeEventMessage_ReturnValue;
	Parms.CallFunc_MakeLiteralBool_ReturnValue = CallFunc_MakeLiteralBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_Day1_CE_RulebookFTUX.QtnGoal_Day1_CE_RulebookFTUX_C.OnRep_playersWhoCompletedFTUX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_Day1_CE_RulebookFTUX_C::OnRep_playersWhoCompletedFTUX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Day1_CE_RulebookFTUX_C", "OnRep_playersWhoCompletedFTUX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_Day1_CE_RulebookFTUX.QtnGoal_Day1_CE_RulebookFTUX_C.OnRep_listOfUpgradedPlayers
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_Day1_CE_RulebookFTUX_C::OnRep_listOfUpgradedPlayers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Day1_CE_RulebookFTUX_C", "OnRep_listOfUpgradedPlayers");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_Day1_CE_RulebookFTUX.QtnGoal_Day1_CE_RulebookFTUX_C.OnRep_TaskComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_Day1_CE_RulebookFTUX_C::OnRep_TaskComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Day1_CE_RulebookFTUX_C", "OnRep_TaskComplete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_Day1_CE_RulebookFTUX.QtnGoal_Day1_CE_RulebookFTUX_C.LOCAL_UITextUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerInformation_occupiedBodyPawn              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              CallFunc_GetLocalPlayerInformation_playerPawn                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerInformation_playerController              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerInformation_playerUI                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerState*             CallFunc_GetLocalPlayerInformation_qtnPlayerState                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLocalPlayerInformation_isHosting                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerInformation_outputPin                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AQtnPlayerPawn*>      CallFunc_GetAllPlayerPawns_foundPlayerPawns                      (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerInformation_occupiedBodyPawn_1            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              CallFunc_GetLocalPlayerInformation_playerPawn_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerInformation_playerController_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerInformation_playerUI_1                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerState*             CallFunc_GetLocalPlayerInformation_qtnPlayerState_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLocalPlayerInformation_isHosting_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerInformation_outputPin_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_Day1_CE_RulebookFTUX_C::LOCAL_UITextUpdate(class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TArray<class AQtnPlayerPawn*>& CallFunc_GetAllPlayerPawns_foundPlayerPawns, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn_1, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn_1, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController_1, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI_1, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState_1, bool CallFunc_GetLocalPlayerInformation_isHosting_1, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin_1, bool K2Node_SwitchEnum_CmpSuccess_1, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Day1_CE_RulebookFTUX_C", "LOCAL_UITextUpdate");

	Params::UQtnGoal_Day1_CE_RulebookFTUX_C_LOCAL_UITextUpdate_Params Parms{};

	Parms.CallFunc_GetLocalPlayerInformation_occupiedBodyPawn = CallFunc_GetLocalPlayerInformation_occupiedBodyPawn;
	Parms.CallFunc_GetLocalPlayerInformation_playerPawn = CallFunc_GetLocalPlayerInformation_playerPawn;
	Parms.CallFunc_GetLocalPlayerInformation_playerController = CallFunc_GetLocalPlayerInformation_playerController;
	Parms.CallFunc_GetLocalPlayerInformation_playerUI = CallFunc_GetLocalPlayerInformation_playerUI;
	Parms.CallFunc_GetLocalPlayerInformation_qtnPlayerState = CallFunc_GetLocalPlayerInformation_qtnPlayerState;
	Parms.CallFunc_GetLocalPlayerInformation_isHosting = CallFunc_GetLocalPlayerInformation_isHosting;
	Parms.CallFunc_GetLocalPlayerInformation_outputPin = CallFunc_GetLocalPlayerInformation_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetAllPlayerPawns_foundPlayerPawns = CallFunc_GetAllPlayerPawns_foundPlayerPawns;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetLocalPlayerInformation_occupiedBodyPawn_1 = CallFunc_GetLocalPlayerInformation_occupiedBodyPawn_1;
	Parms.CallFunc_GetLocalPlayerInformation_playerPawn_1 = CallFunc_GetLocalPlayerInformation_playerPawn_1;
	Parms.CallFunc_GetLocalPlayerInformation_playerController_1 = CallFunc_GetLocalPlayerInformation_playerController_1;
	Parms.CallFunc_GetLocalPlayerInformation_playerUI_1 = CallFunc_GetLocalPlayerInformation_playerUI_1;
	Parms.CallFunc_GetLocalPlayerInformation_qtnPlayerState_1 = CallFunc_GetLocalPlayerInformation_qtnPlayerState_1;
	Parms.CallFunc_GetLocalPlayerInformation_isHosting_1 = CallFunc_GetLocalPlayerInformation_isHosting_1;
	Parms.CallFunc_GetLocalPlayerInformation_outputPin_1 = CallFunc_GetLocalPlayerInformation_outputPin_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_Day1_CE_RulebookFTUX.QtnGoal_Day1_CE_RulebookFTUX_C.Open Upgrade Station
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_Day1_CE_RulebookFTUX_C::Open_Upgrade_Station(bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Day1_CE_RulebookFTUX_C", "Open Upgrade Station");

	Params::UQtnGoal_Day1_CE_RulebookFTUX_C_Open_Upgrade_Station_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_Day1_CE_RulebookFTUX.QtnGoal_Day1_CE_RulebookFTUX_C.Block Upgrade Station
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_Day1_CE_RulebookFTUX_C::Block_Upgrade_Station(bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Day1_CE_RulebookFTUX_C", "Block Upgrade Station");

	Params::UQtnGoal_Day1_CE_RulebookFTUX_C_Block_Upgrade_Station_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_Day1_CE_RulebookFTUX.QtnGoal_Day1_CE_RulebookFTUX_C.getExitGate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              CallFunc_Find_Marked_Actors_Server_Only_foundActors              (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATravelVolume_BP_C*          K2Node_DynamicCast_AsTravel_Volume_BP                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_Day1_CE_RulebookFTUX_C::GetExitGate(TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class ATravelVolume_BP_C* K2Node_DynamicCast_AsTravel_Volume_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Day1_CE_RulebookFTUX_C", "getExitGate");

	Params::UQtnGoal_Day1_CE_RulebookFTUX_C_GetExitGate_Params Parms{};

	Parms.CallFunc_Find_Marked_Actors_Server_Only_foundActors = CallFunc_Find_Marked_Actors_Server_Only_foundActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_DynamicCast_AsTravel_Volume_BP = K2Node_DynamicCast_AsTravel_Volume_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_Day1_CE_RulebookFTUX.QtnGoal_Day1_CE_RulebookFTUX_C.OnGoalSpawned_ServerOnly
// (Event, Public, BlueprintEvent)
// Parameters:

void UQtnGoal_Day1_CE_RulebookFTUX_C::OnGoalSpawned_ServerOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Day1_CE_RulebookFTUX_C", "OnGoalSpawned_ServerOnly");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_Day1_CE_RulebookFTUX.QtnGoal_Day1_CE_RulebookFTUX_C.OnGoalStart
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               WillEndImmediatelyFromLateJoin                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_Day1_CE_RulebookFTUX_C::OnGoalStart(bool WillEndImmediatelyFromLateJoin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Day1_CE_RulebookFTUX_C", "OnGoalStart");

	Params::UQtnGoal_Day1_CE_RulebookFTUX_C_OnGoalStart_Params Parms{};

	Parms.WillEndImmediatelyFromLateJoin = WillEndImmediatelyFromLateJoin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_Day1_CE_RulebookFTUX.QtnGoal_Day1_CE_RulebookFTUX_C.bindFTUXCompleteEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_Day1_CE_RulebookFTUX_C::bindFTUXCompleteEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Day1_CE_RulebookFTUX_C", "bindFTUXCompleteEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_Day1_CE_RulebookFTUX.QtnGoal_Day1_CE_RulebookFTUX_C.FTUXDone
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_Day1_CE_RulebookFTUX_C::FTUXDone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Day1_CE_RulebookFTUX_C", "FTUXDone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_Day1_CE_RulebookFTUX.QtnGoal_Day1_CE_RulebookFTUX_C.bindUpgradeStationEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_Day1_CE_RulebookFTUX_C::bindUpgradeStationEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Day1_CE_RulebookFTUX_C", "bindUpgradeStationEvents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_Day1_CE_RulebookFTUX.QtnGoal_Day1_CE_RulebookFTUX_C.PlayerUpgraded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnPlayer_C*           Player_who_upgraded                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoal_Day1_CE_RulebookFTUX_C::PlayerUpgraded(class ABodyPawnPlayer_C* Player_who_upgraded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Day1_CE_RulebookFTUX_C", "PlayerUpgraded");

	Params::UQtnGoal_Day1_CE_RulebookFTUX_C_PlayerUpgraded_Params Parms{};

	Parms.Player_who_upgraded = Player_who_upgraded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_Day1_CE_RulebookFTUX.QtnGoal_Day1_CE_RulebookFTUX_C.bindEndGoalEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_Day1_CE_RulebookFTUX_C::bindEndGoalEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Day1_CE_RulebookFTUX_C", "bindEndGoalEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_Day1_CE_RulebookFTUX.QtnGoal_Day1_CE_RulebookFTUX_C.PlayersLeftSpoke
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATravelVolume_BP_C*          From_this_volume                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoal_Day1_CE_RulebookFTUX_C::PlayersLeftSpoke(class ATravelVolume_BP_C* From_this_volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Day1_CE_RulebookFTUX_C", "PlayersLeftSpoke");

	Params::UQtnGoal_Day1_CE_RulebookFTUX_C_PlayersLeftSpoke_Params Parms{};

	Parms.From_this_volume = From_this_volume;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_Day1_CE_RulebookFTUX.QtnGoal_Day1_CE_RulebookFTUX_C.ThisPlayerDone
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerPawn*              Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoal_Day1_CE_RulebookFTUX_C::ThisPlayerDone(class AQtnPlayerPawn* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Day1_CE_RulebookFTUX_C", "ThisPlayerDone");

	Params::UQtnGoal_Day1_CE_RulebookFTUX_C_ThisPlayerDone_Params Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_Day1_CE_RulebookFTUX.QtnGoal_Day1_CE_RulebookFTUX_C.bindLeadInGateEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATravelVolume_BP_C*          Lead_In_Gate                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoal_Day1_CE_RulebookFTUX_C::bindLeadInGateEvents(class ATravelVolume_BP_C* Lead_In_Gate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Day1_CE_RulebookFTUX_C", "bindLeadInGateEvents");

	Params::UQtnGoal_Day1_CE_RulebookFTUX_C_bindLeadInGateEvents_Params Parms{};

	Parms.Lead_In_Gate = Lead_In_Gate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_Day1_CE_RulebookFTUX.QtnGoal_Day1_CE_RulebookFTUX_C.PlayersHeadingToHub
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATravelVolume_BP_C*          From_this_volume                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoal_Day1_CE_RulebookFTUX_C::PlayersHeadingToHub(class ATravelVolume_BP_C* From_this_volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Day1_CE_RulebookFTUX_C", "PlayersHeadingToHub");

	Params::UQtnGoal_Day1_CE_RulebookFTUX_C_PlayersHeadingToHub_Params Parms{};

	Parms.From_this_volume = From_this_volume;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_Day1_CE_RulebookFTUX.QtnGoal_Day1_CE_RulebookFTUX_C.unbindLeadInGateEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_Day1_CE_RulebookFTUX_C::UnbindLeadInGateEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Day1_CE_RulebookFTUX_C", "unbindLeadInGateEvents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_Day1_CE_RulebookFTUX.QtnGoal_Day1_CE_RulebookFTUX_C.OnTickActiveGoal
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoal_Day1_CE_RulebookFTUX_C::OnTickActiveGoal(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Day1_CE_RulebookFTUX_C", "OnTickActiveGoal");

	Params::UQtnGoal_Day1_CE_RulebookFTUX_C_OnTickActiveGoal_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_Day1_CE_RulebookFTUX.QtnGoal_Day1_CE_RulebookFTUX_C.bindApproachVolumeEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_Day1_CE_RulebookFTUX_C::bindApproachVolumeEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Day1_CE_RulebookFTUX_C", "bindApproachVolumeEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_Day1_CE_RulebookFTUX.QtnGoal_Day1_CE_RulebookFTUX_C.PlayerApproachedNichole
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerPawn*              PlayerWhoEntered                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               OnExit                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_Day1_CE_RulebookFTUX_C::PlayerApproachedNichole(class AQtnPlayerPawn* PlayerWhoEntered, bool OnExit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Day1_CE_RulebookFTUX_C", "PlayerApproachedNichole");

	Params::UQtnGoal_Day1_CE_RulebookFTUX_C_PlayerApproachedNichole_Params Parms{};

	Parms.PlayerWhoEntered = PlayerWhoEntered;
	Parms.OnExit = OnExit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_Day1_CE_RulebookFTUX.QtnGoal_Day1_CE_RulebookFTUX_C.bindFTUXCompleteFromPactSealed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_Day1_CE_RulebookFTUX_C::bindFTUXCompleteFromPactSealed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Day1_CE_RulebookFTUX_C", "bindFTUXCompleteFromPactSealed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_Day1_CE_RulebookFTUX.QtnGoal_Day1_CE_RulebookFTUX_C.PactSealed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALoot_Rulebook_Parent_Frob_C*Rulebook                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoal_Day1_CE_RulebookFTUX_C::PactSealed(class ALoot_Rulebook_Parent_Frob_C* Rulebook)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Day1_CE_RulebookFTUX_C", "PactSealed");

	Params::UQtnGoal_Day1_CE_RulebookFTUX_C_PactSealed_Params Parms{};

	Parms.Rulebook = Rulebook;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_Day1_CE_RulebookFTUX.QtnGoal_Day1_CE_RulebookFTUX_C.unbindPactSealed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_Day1_CE_RulebookFTUX_C::UnbindPactSealed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Day1_CE_RulebookFTUX_C", "unbindPactSealed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_Day1_CE_RulebookFTUX.QtnGoal_Day1_CE_RulebookFTUX_C.UpdatePlayerCount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerPawn*              PlayerPawnSoul                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                OccupiedBodyPawn                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLocalPlayer                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_Day1_CE_RulebookFTUX_C::UpdatePlayerCount(class AQtnPlayerPawn* PlayerPawnSoul, class AQtnBodyPawn* OccupiedBodyPawn, bool IsLocalPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Day1_CE_RulebookFTUX_C", "UpdatePlayerCount");

	Params::UQtnGoal_Day1_CE_RulebookFTUX_C_UpdatePlayerCount_Params Parms{};

	Parms.PlayerPawnSoul = PlayerPawnSoul;
	Parms.OccupiedBodyPawn = OccupiedBodyPawn;
	Parms.IsLocalPlayer = IsLocalPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_Day1_CE_RulebookFTUX.QtnGoal_Day1_CE_RulebookFTUX_C.BindLateJoinExitEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_Day1_CE_RulebookFTUX_C::BindLateJoinExitEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Day1_CE_RulebookFTUX_C", "BindLateJoinExitEvents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_Day1_CE_RulebookFTUX.QtnGoal_Day1_CE_RulebookFTUX_C.UpdatePlayerCountPlayerLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerPawn*              PlayerPawnSoul                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                OccupiedBodyPawn                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoal_Day1_CE_RulebookFTUX_C::UpdatePlayerCountPlayerLeft(class AQtnPlayerPawn* PlayerPawnSoul, class AQtnBodyPawn* OccupiedBodyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Day1_CE_RulebookFTUX_C", "UpdatePlayerCountPlayerLeft");

	Params::UQtnGoal_Day1_CE_RulebookFTUX_C_UpdatePlayerCountPlayerLeft_Params Parms{};

	Parms.PlayerPawnSoul = PlayerPawnSoul;
	Parms.OccupiedBodyPawn = OccupiedBodyPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_Day1_CE_RulebookFTUX.QtnGoal_Day1_CE_RulebookFTUX_C.UnbindLateJoinEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_Day1_CE_RulebookFTUX_C::UnbindLateJoinEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Day1_CE_RulebookFTUX_C", "UnbindLateJoinEvents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_Day1_CE_RulebookFTUX.QtnGoal_Day1_CE_RulebookFTUX_C.bindSpokeArrival_ServerOnly
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_Day1_CE_RulebookFTUX_C::bindSpokeArrival_ServerOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Day1_CE_RulebookFTUX_C", "bindSpokeArrival_ServerOnly");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_Day1_CE_RulebookFTUX.QtnGoal_Day1_CE_RulebookFTUX_C.RegisterJimmyFrobRejectionOnSpokeArrival_ServerOnly
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_Day1_CE_RulebookFTUX_C::RegisterJimmyFrobRejectionOnSpokeArrival_ServerOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Day1_CE_RulebookFTUX_C", "RegisterJimmyFrobRejectionOnSpokeArrival_ServerOnly");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_Day1_CE_RulebookFTUX.QtnGoal_Day1_CE_RulebookFTUX_C.ExecuteUbergraph_QtnGoal_Day1_CE_RulebookFTUX
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_willEndImmediatelyFromLateJoin                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_CustomEvent_player_who_upgraded                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATravelVolume_BP_C*          K2Node_CustomEvent_from_this_volume_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class AQtnPlayerPawn*              K2Node_CustomEvent_player                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATravelVolume_BP_C*          K2Node_CustomEvent_lead_in_gate                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATravelVolume_BP_C*          K2Node_CustomEvent_from_this_volume                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsReadyForGameplay_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_10                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class AQtnPlayerPawn*              K2Node_CustomEvent_playerWhoEntered                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_onExit                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_11                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckAllExpectedAreComplete_All_expected_have_completed_FTUX(ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_12                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ALoot_Rulebook_Parent_Frob_C*K2Node_CustomEvent_rulebook                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_13                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue_2                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_14                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue_3                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              K2Node_CustomEvent_playerPawnSoul_1                              (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_CustomEvent_occupiedBodyPawn_1                            (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_isLocalPlayer                                 (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_15                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckAllExpectedAreComplete_All_expected_have_completed_FTUX_1(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_16                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerPawn*              K2Node_CustomEvent_playerPawnSoul                                (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_CustomEvent_occupiedBodyPawn                              (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_17                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue_1                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue_4                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_18                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_19                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_20                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)

void UQtnGoal_Day1_CE_RulebookFTUX_C::ExecuteUbergraph_QtnGoal_Day1_CE_RulebookFTUX(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_willEndImmediatelyFromLateJoin, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, class ABodyPawnPlayer_C* K2Node_CustomEvent_player_who_upgraded, bool CallFunc_IsServer_ReturnValue_3, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_IsServer_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_3, class ATravelVolume_BP_C* K2Node_CustomEvent_from_this_volume_1, bool CallFunc_IsServer_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AQtnPlayerPawn* K2Node_CustomEvent_player, bool CallFunc_IsServer_ReturnValue_6, int32 CallFunc_Array_AddUnique_ReturnValue_1, class ATravelVolume_BP_C* K2Node_CustomEvent_lead_in_gate, bool CallFunc_IsServer_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_5, class ATravelVolume_BP_C* K2Node_CustomEvent_from_this_volume, bool CallFunc_IsServer_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsServer_ReturnValue_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, float K2Node_Event_DeltaSeconds, bool CallFunc_Not_PreBool_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, bool CallFunc_IsReadyForGameplay_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsServer_ReturnValue_10, bool CallFunc_IsValid_ReturnValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class AQtnPlayerPawn* K2Node_CustomEvent_playerWhoEntered, bool K2Node_CustomEvent_onExit, bool CallFunc_IsServer_ReturnValue_11, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_CheckAllExpectedAreComplete_All_expected_have_completed_FTUX, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_IsServer_ReturnValue_12, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, class ALoot_Rulebook_Parent_Frob_C* K2Node_CustomEvent_rulebook, bool CallFunc_IsServer_ReturnValue_13, bool CallFunc_IsValid_ReturnValue_10, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_2, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsServer_ReturnValue_14, bool CallFunc_IsValid_ReturnValue_11, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_3, class AQtnPlayerPawn* K2Node_CustomEvent_playerPawnSoul_1, class AQtnBodyPawn* K2Node_CustomEvent_occupiedBodyPawn_1, bool K2Node_CustomEvent_isLocalPlayer, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_IsServer_ReturnValue_15, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_CheckAllExpectedAreComplete_All_expected_have_completed_FTUX_1, bool CallFunc_IsServer_ReturnValue_16, class AQtnPlayerPawn* K2Node_CustomEvent_playerPawnSoul, class AQtnBodyPawn* K2Node_CustomEvent_occupiedBodyPawn, bool CallFunc_IsServer_ReturnValue_17, const class FString& CallFunc_GetDisplayName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_4, bool CallFunc_IsServer_ReturnValue_18, bool CallFunc_IsServer_ReturnValue_19, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_IsValid_ReturnValue_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, bool CallFunc_IsServer_ReturnValue_20, bool CallFunc_IsValid_ReturnValue_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Day1_CE_RulebookFTUX_C", "ExecuteUbergraph_QtnGoal_Day1_CE_RulebookFTUX");

	Params::UQtnGoal_Day1_CE_RulebookFTUX_C_ExecuteUbergraph_QtnGoal_Day1_CE_RulebookFTUX_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Event_willEndImmediatelyFromLateJoin = K2Node_Event_willEndImmediatelyFromLateJoin;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue_2 = CallFunc_IsServer_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CustomEvent_player_who_upgraded = K2Node_CustomEvent_player_who_upgraded;
	Parms.CallFunc_IsServer_ReturnValue_3 = CallFunc_IsServer_ReturnValue_3;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_4 = CallFunc_IsServer_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_CustomEvent_from_this_volume_1 = K2Node_CustomEvent_from_this_volume_1;
	Parms.CallFunc_IsServer_ReturnValue_5 = CallFunc_IsServer_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_player = K2Node_CustomEvent_player;
	Parms.CallFunc_IsServer_ReturnValue_6 = CallFunc_IsServer_ReturnValue_6;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;
	Parms.K2Node_CustomEvent_lead_in_gate = K2Node_CustomEvent_lead_in_gate;
	Parms.CallFunc_IsServer_ReturnValue_7 = CallFunc_IsServer_ReturnValue_7;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.K2Node_CustomEvent_from_this_volume = K2Node_CustomEvent_from_this_volume;
	Parms.CallFunc_IsServer_ReturnValue_8 = CallFunc_IsServer_ReturnValue_8;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_IsServer_ReturnValue_9 = CallFunc_IsServer_ReturnValue_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.CallFunc_IsReadyForGameplay_ReturnValue = CallFunc_IsReadyForGameplay_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_10 = CallFunc_IsServer_ReturnValue_10;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CustomEvent_playerWhoEntered = K2Node_CustomEvent_playerWhoEntered;
	Parms.K2Node_CustomEvent_onExit = K2Node_CustomEvent_onExit;
	Parms.CallFunc_IsServer_ReturnValue_11 = CallFunc_IsServer_ReturnValue_11;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_CheckAllExpectedAreComplete_All_expected_have_completed_FTUX = CallFunc_CheckAllExpectedAreComplete_All_expected_have_completed_FTUX;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_IsServer_ReturnValue_12 = CallFunc_IsServer_ReturnValue_12;
	Parms.CallFunc_GetQtnGameState_ReturnValue_1 = CallFunc_GetQtnGameState_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype = K2Node_DynamicCast_AsQtn_Game_State_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_rulebook = K2Node_CustomEvent_rulebook;
	Parms.CallFunc_IsServer_ReturnValue_13 = CallFunc_IsServer_ReturnValue_13;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_GetQtnGameState_ReturnValue_2 = CallFunc_GetQtnGameState_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype_1 = K2Node_DynamicCast_AsQtn_Game_State_Archetype_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsServer_ReturnValue_14 = CallFunc_IsServer_ReturnValue_14;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.CallFunc_GetQtnGameState_ReturnValue_3 = CallFunc_GetQtnGameState_ReturnValue_3;
	Parms.K2Node_CustomEvent_playerPawnSoul_1 = K2Node_CustomEvent_playerPawnSoul_1;
	Parms.K2Node_CustomEvent_occupiedBodyPawn_1 = K2Node_CustomEvent_occupiedBodyPawn_1;
	Parms.K2Node_CustomEvent_isLocalPlayer = K2Node_CustomEvent_isLocalPlayer;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_15 = CallFunc_IsServer_ReturnValue_15;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_CheckAllExpectedAreComplete_All_expected_have_completed_FTUX_1 = CallFunc_CheckAllExpectedAreComplete_All_expected_have_completed_FTUX_1;
	Parms.CallFunc_IsServer_ReturnValue_16 = CallFunc_IsServer_ReturnValue_16;
	Parms.K2Node_CustomEvent_playerPawnSoul = K2Node_CustomEvent_playerPawnSoul;
	Parms.K2Node_CustomEvent_occupiedBodyPawn = K2Node_CustomEvent_occupiedBodyPawn;
	Parms.CallFunc_IsServer_ReturnValue_17 = CallFunc_IsServer_ReturnValue_17;
	Parms.CallFunc_GetDisplayName_ReturnValue_1 = CallFunc_GetDisplayName_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetQtnGameState_ReturnValue_4 = CallFunc_GetQtnGameState_ReturnValue_4;
	Parms.CallFunc_IsServer_ReturnValue_18 = CallFunc_IsServer_ReturnValue_18;
	Parms.CallFunc_IsServer_ReturnValue_19 = CallFunc_IsServer_ReturnValue_19;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_IsServer_ReturnValue_20 = CallFunc_IsServer_ReturnValue_20;
	Parms.CallFunc_IsValid_ReturnValue_13 = CallFunc_IsValid_ReturnValue_13;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


