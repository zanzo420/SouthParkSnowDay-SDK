#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ReplicatedSaveDataComponent.ReplicatedSaveDataComponent_C
// (None)

class UClass* UReplicatedSaveDataComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReplicatedSaveDataComponent_C");

	return Clss;
}


// ReplicatedSaveDataComponent_C ReplicatedSaveDataComponent.Default__ReplicatedSaveDataComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UReplicatedSaveDataComponent_C* UReplicatedSaveDataComponent_C::GetDefaultObj()
{
	static class UReplicatedSaveDataComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UReplicatedSaveDataComponent_C*>(UReplicatedSaveDataComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ReplicatedSaveDataComponent.ReplicatedSaveDataComponent_C.GetTutorialState
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      TutorialClass                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnTutorialStatus      Status                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnReplicatedTutorialData  CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MatchesTag_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UReplicatedSaveDataComponent_C::GetTutorialState(class UClass* TutorialClass, enum class EQtnTutorialStatus* Status, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FQtnReplicatedTutorialData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_MatchesTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicatedSaveDataComponent_C", "GetTutorialState");

	Params::UReplicatedSaveDataComponent_C_GetTutorialState_Params Parms{};

	Parms.TutorialClass = TutorialClass;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_MatchesTag_ReturnValue = CallFunc_MatchesTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Status != nullptr)
		*Status = Parms.Status;

}


// Function ReplicatedSaveDataComponent.ReplicatedSaveDataComponent_C.Extract Info from Databags for Replication
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerController*        LocalPlayerController                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FQtnReplicatedTutorialData>TutorialDataToPush                                               (Edit, BlueprintVisible)
// struct FQtnReplicatedSaveData      SaveDataToPush                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnLocalOptionsSaveData*    CallFunc_GetSaveLoadDataBP_localOptionsSaveData                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCloudOptionsSaveData*    CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnProgressSaveData*        CallFunc_GetSaveLoadDataBP_progressSaveData                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetSaveLoadDataBP_outputPin                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnTutorialDataBag*         CallFunc_GetTutorialDataBag_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMissionDataBag_C*           CallFunc_GetCustomDataBag_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFTUXDataBag_C*              CallFunc_GetCustomDataBag_ReturnValue_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FQtnTutorialInstanceData>CallFunc_Map_Values_Values                                       (ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnTutorialInstanceData    CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnReplicatedTutorialData  K2Node_MakeStruct_QtnReplicatedTutorialData                      (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGameInstance*            CallFunc_GetQtnGameInstance_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnDLCManager*              CallFunc_GetDLCManager_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasPurchasedDLC_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnReplicatedSaveData      CallFunc_PopulateReplicatedStruct_modifiedStruct                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnReplicatedSaveData      CallFunc_PopulateReplicatedStruct_modifiedStruct_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReplicatedSaveDataComponent_C::Extract_Info_from_Databags_for_Replication(class AQtnPlayerController*& LocalPlayerController, const TArray<struct FQtnReplicatedTutorialData>& TutorialDataToPush, const struct FQtnReplicatedSaveData& SaveDataToPush, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, int32 Temp_int_Array_Index_Variable, bool K2Node_SwitchEnum_CmpSuccess, class UQtnTutorialDataBag* CallFunc_GetTutorialDataBag_ReturnValue, class UMissionDataBag_C* CallFunc_GetCustomDataBag_ReturnValue, class UFTUXDataBag_C* CallFunc_GetCustomDataBag_ReturnValue_1, TArray<struct FQtnTutorialInstanceData>& CallFunc_Map_Values_Values, int32 Temp_int_Loop_Counter_Variable, const struct FQtnTutorialInstanceData& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, const struct FQtnReplicatedTutorialData& K2Node_MakeStruct_QtnReplicatedTutorialData, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UQtnGameInstance* CallFunc_GetQtnGameInstance_ReturnValue, class UQtnDLCManager* CallFunc_GetDLCManager_ReturnValue, bool CallFunc_HasPurchasedDLC_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FQtnReplicatedSaveData& CallFunc_PopulateReplicatedStruct_modifiedStruct, const struct FQtnReplicatedSaveData& CallFunc_PopulateReplicatedStruct_modifiedStruct_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicatedSaveDataComponent_C", "Extract Info from Databags for Replication");

	Params::UReplicatedSaveDataComponent_C_Extract_Info_from_Databags_for_Replication_Params Parms{};

	Parms.LocalPlayerController = LocalPlayerController;
	Parms.TutorialDataToPush = TutorialDataToPush;
	Parms.SaveDataToPush = SaveDataToPush;
	Parms.CallFunc_GetSaveLoadDataBP_localOptionsSaveData = CallFunc_GetSaveLoadDataBP_localOptionsSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData = CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_progressSaveData = CallFunc_GetSaveLoadDataBP_progressSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_outputPin = CallFunc_GetSaveLoadDataBP_outputPin;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetTutorialDataBag_ReturnValue = CallFunc_GetTutorialDataBag_ReturnValue;
	Parms.CallFunc_GetCustomDataBag_ReturnValue = CallFunc_GetCustomDataBag_ReturnValue;
	Parms.CallFunc_GetCustomDataBag_ReturnValue_1 = CallFunc_GetCustomDataBag_ReturnValue_1;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_QtnReplicatedTutorialData = K2Node_MakeStruct_QtnReplicatedTutorialData;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetQtnGameInstance_ReturnValue = CallFunc_GetQtnGameInstance_ReturnValue;
	Parms.CallFunc_GetDLCManager_ReturnValue = CallFunc_GetDLCManager_ReturnValue;
	Parms.CallFunc_HasPurchasedDLC_ReturnValue = CallFunc_HasPurchasedDLC_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_PopulateReplicatedStruct_modifiedStruct = CallFunc_PopulateReplicatedStruct_modifiedStruct;
	Parms.CallFunc_PopulateReplicatedStruct_modifiedStruct_1 = CallFunc_PopulateReplicatedStruct_modifiedStruct_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReplicatedSaveDataComponent.ReplicatedSaveDataComponent_C.DebugDisplayReplicatedSaveData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnDebugWrapper*            DebugWrapper                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)

void UReplicatedSaveDataComponent_C::DebugDisplayReplicatedSaveData(class UQtnDebugWrapper*& DebugWrapper, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Conv_BoolToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicatedSaveDataComponent_C", "DebugDisplayReplicatedSaveData");

	Params::UReplicatedSaveDataComponent_C_DebugDisplayReplicatedSaveData_Params Parms{};

	Parms.DebugWrapper = DebugWrapper;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue_1 = CallFunc_Conv_BoolToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Conv_BoolToString_ReturnValue_2 = CallFunc_Conv_BoolToString_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReplicatedSaveDataComponent.ReplicatedSaveDataComponent_C.HasBeenFullyReplicated
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UReplicatedSaveDataComponent_C::HasBeenFullyReplicated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicatedSaveDataComponent_C", "HasBeenFullyReplicated");

	Params::UReplicatedSaveDataComponent_C_HasBeenFullyReplicated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ReplicatedSaveDataComponent.ReplicatedSaveDataComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UReplicatedSaveDataComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicatedSaveDataComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReplicatedSaveDataComponent.ReplicatedSaveDataComponent_C.ServerPushReplicatedSaveData
// (Net, NetReliable, NetServer, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnReplicatedSaveData      ReplicatedSaveData                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReplicatedSaveDataComponent_C::ServerPushReplicatedSaveData(struct FQtnReplicatedSaveData& ReplicatedSaveData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicatedSaveDataComponent_C", "ServerPushReplicatedSaveData");

	Params::UReplicatedSaveDataComponent_C_ServerPushReplicatedSaveData_Params Parms{};

	Parms.ReplicatedSaveData = ReplicatedSaveData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReplicatedSaveDataComponent.ReplicatedSaveDataComponent_C.PlayerPawnOccupyEvent_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                OccupiedBodyPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FirstTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UReplicatedSaveDataComponent_C::PlayerPawnOccupyEvent_Event_0(class AQtnBodyPawn* OccupiedBodyPawn, bool FirstTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicatedSaveDataComponent_C", "PlayerPawnOccupyEvent_Event_0");

	Params::UReplicatedSaveDataComponent_C_PlayerPawnOccupyEvent_Event_0_Params Parms{};

	Parms.OccupiedBodyPawn = OccupiedBodyPawn;
	Parms.FirstTime = FirstTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReplicatedSaveDataComponent.ReplicatedSaveDataComponent_C.ServerPushReplicatedTutorialData
// (Net, NetReliable, NetServer, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FQtnReplicatedTutorialData>ReplicatedTutorialData                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UReplicatedSaveDataComponent_C::ServerPushReplicatedTutorialData(TArray<struct FQtnReplicatedTutorialData>& ReplicatedTutorialData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicatedSaveDataComponent_C", "ServerPushReplicatedTutorialData");

	Params::UReplicatedSaveDataComponent_C_ServerPushReplicatedTutorialData_Params Parms{};

	Parms.ReplicatedTutorialData = ReplicatedTutorialData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReplicatedSaveDataComponent.ReplicatedSaveDataComponent_C.OnTutorialAdded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UQtnTutorial>    TutorialArchetype                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               IsReminder                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UReplicatedSaveDataComponent_C::OnTutorialAdded(TSubclassOf<class UQtnTutorial> TutorialArchetype, bool IsReminder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicatedSaveDataComponent_C", "OnTutorialAdded");

	Params::UReplicatedSaveDataComponent_C_OnTutorialAdded_Params Parms{};

	Parms.TutorialArchetype = TutorialArchetype;
	Parms.IsReminder = IsReminder;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReplicatedSaveDataComponent.ReplicatedSaveDataComponent_C.OnTutorialStateChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnTutorialInstanceData    TutorialInstance                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UReplicatedSaveDataComponent_C::OnTutorialStateChange(const struct FQtnTutorialInstanceData& TutorialInstance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicatedSaveDataComponent_C", "OnTutorialStateChange");

	Params::UReplicatedSaveDataComponent_C_OnTutorialStateChange_Params Parms{};

	Parms.TutorialInstance = TutorialInstance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReplicatedSaveDataComponent.ReplicatedSaveDataComponent_C.ExecuteUbergraph_ReplicatedSaveDataComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerControllerBP_localPlayerController        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerControllerBP_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlledPlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnReplicatedSaveData      K2Node_CustomEvent_replicatedSaveData                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawnArchetype_C*   K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                K2Node_CustomEvent_occupiedBodyPawn                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_firstTime                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FQtnReplicatedTutorialData>K2Node_CustomEvent_ReplicatedTutorialData                        (ConstParm, ReferenceParm)
// class AQtnPawn*                    CallFunc_WaitForReadyForGameplay_readyPawn                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetOccupyingLocalPlayerController_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UQtnTutorial>    K2Node_CustomEvent_tutorialArchetype                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_isReminder                                    (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnTutorialInstanceData    K2Node_CustomEvent_TutorialInstance                              (None)

void UReplicatedSaveDataComponent_C::ExecuteUbergraph_ReplicatedSaveDataComponent(int32 EntryPoint, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AActor* CallFunc_GetOwner_ReturnValue, const struct FQtnReplicatedSaveData& K2Node_CustomEvent_replicatedSaveData, class AQtnPlayerPawnArchetype_C* K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype, bool K2Node_DynamicCast_bSuccess, class AQtnBodyPawn* K2Node_CustomEvent_occupiedBodyPawn, bool K2Node_CustomEvent_firstTime, TArray<struct FQtnReplicatedTutorialData>& K2Node_CustomEvent_ReplicatedTutorialData, class AQtnPawn* CallFunc_WaitForReadyForGameplay_readyPawn, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnPlayerController* CallFunc_GetOccupyingLocalPlayerController_ReturnValue, TSubclassOf<class UQtnTutorial> K2Node_CustomEvent_tutorialArchetype, bool K2Node_CustomEvent_isReminder, const struct FQtnTutorialInstanceData& K2Node_CustomEvent_TutorialInstance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicatedSaveDataComponent_C", "ExecuteUbergraph_ReplicatedSaveDataComponent");

	Params::UReplicatedSaveDataComponent_C_ExecuteUbergraph_ReplicatedSaveDataComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetLocalPlayerControllerBP_localPlayerController = CallFunc_GetLocalPlayerControllerBP_localPlayerController;
	Parms.CallFunc_GetLocalPlayerControllerBP_outputPin = CallFunc_GetLocalPlayerControllerBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsLocallyControlledPlayer_ReturnValue = CallFunc_IsLocallyControlledPlayer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_CustomEvent_replicatedSaveData = K2Node_CustomEvent_replicatedSaveData;
	Parms.K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype = K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_occupiedBodyPawn = K2Node_CustomEvent_occupiedBodyPawn;
	Parms.K2Node_CustomEvent_firstTime = K2Node_CustomEvent_firstTime;
	Parms.K2Node_CustomEvent_ReplicatedTutorialData = K2Node_CustomEvent_ReplicatedTutorialData;
	Parms.CallFunc_WaitForReadyForGameplay_readyPawn = CallFunc_WaitForReadyForGameplay_readyPawn;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.CallFunc_GetOccupyingLocalPlayerController_ReturnValue = CallFunc_GetOccupyingLocalPlayerController_ReturnValue;
	Parms.K2Node_CustomEvent_tutorialArchetype = K2Node_CustomEvent_tutorialArchetype;
	Parms.K2Node_CustomEvent_isReminder = K2Node_CustomEvent_isReminder;
	Parms.K2Node_CustomEvent_TutorialInstance = K2Node_CustomEvent_TutorialInstance;

	UObject::ProcessEvent(Func, &Parms);

}

}


