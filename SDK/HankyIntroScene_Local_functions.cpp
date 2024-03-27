#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HankyIntroScene_Local.HankyIntroScene_Local_C
// (Actor)

class UClass* AHankyIntroScene_Local_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HankyIntroScene_Local_C");

	return Clss;
}


// HankyIntroScene_Local_C HankyIntroScene_Local.Default__HankyIntroScene_Local_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHankyIntroScene_Local_C* AHankyIntroScene_Local_C::GetDefaultObj()
{
	static class AHankyIntroScene_Local_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHankyIntroScene_Local_C*>(AHankyIntroScene_Local_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HankyIntroScene_Local.HankyIntroScene_Local_C.StartHankySceneForPlayer_Server
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                PlayerBody                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHankyIntroScene_Local_C::StartHankySceneForPlayer_Server(class AQtnBodyPawn* PlayerBody)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HankyIntroScene_Local_C", "StartHankySceneForPlayer_Server");

	Params::AHankyIntroScene_Local_C_StartHankySceneForPlayer_Server_Params Parms{};

	Parms.PlayerBody = PlayerBody;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HankyIntroScene_Local.HankyIntroScene_Local_C.StartLocalScene
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                LocalPlayer                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHankyIntroScene_Local_C::StartLocalScene(class AQtnBodyPawn* LocalPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HankyIntroScene_Local_C", "StartLocalScene");

	Params::AHankyIntroScene_Local_C_StartLocalScene_Params Parms{};

	Parms.LocalPlayer = LocalPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HankyIntroScene_Local.HankyIntroScene_Local_C.PlayHankyLine
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSyncedAudioStruct          AudioStruct                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void AHankyIntroScene_Local_C::PlayHankyLine(const struct FSyncedAudioStruct& AudioStruct)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HankyIntroScene_Local_C", "PlayHankyLine");

	Params::AHankyIntroScene_Local_C_PlayHankyLine_Params Parms{};

	Parms.AudioStruct = AudioStruct;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HankyIntroScene_Local.HankyIntroScene_Local_C.ToggleHiddenActors
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hide                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AHankyIntroScene_Local_C::ToggleHiddenActors(bool Hide)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HankyIntroScene_Local_C", "ToggleHiddenActors");

	Params::AHankyIntroScene_Local_C_ToggleHiddenActors_Params Parms{};

	Parms.Hide = Hide;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HankyIntroScene_Local.HankyIntroScene_Local_C.HidePlayers
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hide                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AHankyIntroScene_Local_C::HidePlayers(bool Hide)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HankyIntroScene_Local_C", "HidePlayers");

	Params::AHankyIntroScene_Local_C_HidePlayers_Params Parms{};

	Parms.Hide = Hide;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HankyIntroScene_Local.HankyIntroScene_Local_C.ServerSideSetup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                PlayerBody                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHankyIntroScene_Local_C::ServerSideSetup(class AQtnBodyPawn* PlayerBody)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HankyIntroScene_Local_C", "ServerSideSetup");

	Params::AHankyIntroScene_Local_C_ServerSideSetup_Params Parms{};

	Parms.PlayerBody = PlayerBody;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HankyIntroScene_Local.HankyIntroScene_Local_C.EndScene_Server
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                BodyToEndScene                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHankyIntroScene_Local_C::EndScene_Server(class AQtnBodyPawn* BodyToEndScene)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HankyIntroScene_Local_C", "EndScene_Server");

	Params::AHankyIntroScene_Local_C_EndScene_Server_Params Parms{};

	Parms.BodyToEndScene = BodyToEndScene;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HankyIntroScene_Local.HankyIntroScene_Local_C.ExitScene
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHankyIntroScene_Local_C::ExitScene()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HankyIntroScene_Local_C", "ExitScene");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HankyIntroScene_Local.HankyIntroScene_Local_C.ExecuteUbergraph_HankyIntroScene_Local
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_CustomEvent_PlayerBody_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_CustomEvent_LocalPlayer                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlledPlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSyncedAudioStruct          K2Node_CustomEvent_AudioStruct                                   (NoDestructor, HasGetValueTypeHash)
// struct FSyncedAudioStruct          K2Node_MakeStruct_SyncedAudioStruct                              (NoDestructor, HasGetValueTypeHash)
// struct FSyncedAudioStruct          K2Node_MakeStruct_SyncedAudioStruct_1                            (NoDestructor, HasGetValueTypeHash)
// struct FSyncedAudioStruct          K2Node_MakeStruct_SyncedAudioStruct_2                            (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Hide_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHanky_Actor_BP_C*           CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Hide                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AQtnBodyPawn*>        CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies                 (ReferenceParm, ContainsInstancedReference)
// class AQtnBodyPawn*                CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_CustomEvent_PlayerBody                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyController*          CallFunc_GetBodyController_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnPawnMontage             K2Node_MakeStruct_QtnPawnMontage                                 (NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class AActor>       CallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_DynamicCast_AsActor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_1                    (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetOccupyingLocalPlayerController_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerTribunalSlot_BP_C*    CallFunc_FinishSpawningActor_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnActionIntention         K2Node_MakeStruct_QtnActionIntention                             (NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_Event_BodyToEndScene                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyController*          CallFunc_GetBodyController_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerUIBP_localPlayerUI                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerUIBP_outputPin                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerUIBP_localPlayerUI_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerUIBP_outputPin_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerOriginalBody_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOriginalBody_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerOriginalBody_outputPin_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOriginalBody_ReturnValue_1                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player_2                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AHankyIntroScene_Local_C::ExecuteUbergraph_HankyIntroScene_Local(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, class AQtnBodyPawn* K2Node_CustomEvent_PlayerBody_1, class AQtnBodyPawn* K2Node_CustomEvent_LocalPlayer, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, const struct FSyncedAudioStruct& K2Node_CustomEvent_AudioStruct, const struct FSyncedAudioStruct& K2Node_MakeStruct_SyncedAudioStruct, const struct FSyncedAudioStruct& K2Node_MakeStruct_SyncedAudioStruct_1, const struct FSyncedAudioStruct& K2Node_MakeStruct_SyncedAudioStruct_2, bool K2Node_CustomEvent_Hide_1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AHanky_Actor_BP_C* CallFunc_FinishSpawningActor_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool K2Node_CustomEvent_Hide, TArray<class AQtnBodyPawn*>& CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies, class AQtnBodyPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, class AQtnBodyPawn* K2Node_CustomEvent_PlayerBody, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Array_Index_Variable_1, TSoftObjectPtr<class AActor> CallFunc_Array_Get_Item_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class AQtnPlayerController* CallFunc_GetOccupyingLocalPlayerController_ReturnValue, class APlayerTribunalSlot_BP_C* CallFunc_FinishSpawningActor_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, const struct FQtnActionIntention& K2Node_MakeStruct_QtnActionIntention, int32 CallFunc_Array_AddUnique_ReturnValue, class AQtnBodyPawn* K2Node_Event_BodyToEndScene, bool CallFunc_IsServer_ReturnValue_1, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue_1, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess_1, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI_1, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin_1, bool K2Node_SwitchEnum_CmpSuccess_1, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOriginalBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOriginalBody_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_1, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_2, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOriginalBody_outputPin_1, class AQtnBodyPawn* CallFunc_GetLocalPlayerOriginalBody_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_3, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_2, bool K2Node_DynamicCast_bSuccess_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HankyIntroScene_Local_C", "ExecuteUbergraph_HankyIntroScene_Local");

	Params::AHankyIntroScene_Local_C_ExecuteUbergraph_HankyIntroScene_Local_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CustomEvent_PlayerBody_1 = K2Node_CustomEvent_PlayerBody_1;
	Parms.K2Node_CustomEvent_LocalPlayer = K2Node_CustomEvent_LocalPlayer;
	Parms.CallFunc_IsLocallyControlledPlayer_ReturnValue = CallFunc_IsLocallyControlledPlayer_ReturnValue;
	Parms.K2Node_CustomEvent_AudioStruct = K2Node_CustomEvent_AudioStruct;
	Parms.K2Node_MakeStruct_SyncedAudioStruct = K2Node_MakeStruct_SyncedAudioStruct;
	Parms.K2Node_MakeStruct_SyncedAudioStruct_1 = K2Node_MakeStruct_SyncedAudioStruct_1;
	Parms.K2Node_MakeStruct_SyncedAudioStruct_2 = K2Node_MakeStruct_SyncedAudioStruct_2;
	Parms.K2Node_CustomEvent_Hide_1 = K2Node_CustomEvent_Hide_1;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.K2Node_CustomEvent_Hide = K2Node_CustomEvent_Hide;
	Parms.CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies = CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_CustomEvent_PlayerBody = K2Node_CustomEvent_PlayerBody;
	Parms.CallFunc_GetBodyController_ReturnValue = CallFunc_GetBodyController_ReturnValue;
	Parms.K2Node_MakeStruct_QtnPawnMontage = K2Node_MakeStruct_QtnPawnMontage;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsActor = K2Node_DynamicCast_AsActor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_1 = CallFunc_K2_GetComponentToWorld_ReturnValue_1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
	Parms.CallFunc_GetOccupyingLocalPlayerController_ReturnValue = CallFunc_GetOccupyingLocalPlayerController_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_1 = CallFunc_FinishSpawningActor_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_MakeStruct_QtnActionIntention = K2Node_MakeStruct_QtnActionIntention;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.K2Node_Event_BodyToEndScene = K2Node_Event_BodyToEndScene;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_GetBodyController_ReturnValue_1 = CallFunc_GetBodyController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetLocalPlayerUIBP_localPlayerUI = CallFunc_GetLocalPlayerUIBP_localPlayerUI;
	Parms.CallFunc_GetLocalPlayerUIBP_outputPin = CallFunc_GetLocalPlayerUIBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetLocalPlayerUIBP_localPlayerUI_1 = CallFunc_GetLocalPlayerUIBP_localPlayerUI_1;
	Parms.CallFunc_GetLocalPlayerUIBP_outputPin_1 = CallFunc_GetLocalPlayerUIBP_outputPin_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetLocalPlayerOriginalBody_outputPin = CallFunc_GetLocalPlayerOriginalBody_outputPin;
	Parms.CallFunc_GetLocalPlayerOriginalBody_ReturnValue = CallFunc_GetLocalPlayerOriginalBody_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player_1 = K2Node_DynamicCast_AsBody_Pawn_Player_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_GetLocalPlayerOriginalBody_outputPin_1 = CallFunc_GetLocalPlayerOriginalBody_outputPin_1;
	Parms.CallFunc_GetLocalPlayerOriginalBody_ReturnValue_1 = CallFunc_GetLocalPlayerOriginalBody_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player_2 = K2Node_DynamicCast_AsBody_Pawn_Player_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HankyIntroScene_Local.HankyIntroScene_Local_C.CutsceneEnded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                PlayerInScene                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHankyIntroScene_Local_C::CutsceneEnded__DelegateSignature(class AQtnBodyPawn* PlayerInScene)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HankyIntroScene_Local_C", "CutsceneEnded__DelegateSignature");

	Params::AHankyIntroScene_Local_C_CutsceneEnded__DelegateSignature_Params Parms{};

	Parms.PlayerInScene = PlayerInScene;

	UObject::ProcessEvent(Func, &Parms);

}

}


