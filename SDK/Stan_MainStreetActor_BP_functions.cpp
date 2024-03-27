#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Stan_MainStreetActor_BP.Stan_MainStreetActor_BP_C
// (Actor)

class UClass* AStan_MainStreetActor_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Stan_MainStreetActor_BP_C");

	return Clss;
}


// Stan_MainStreetActor_BP_C Stan_MainStreetActor_BP.Default__Stan_MainStreetActor_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AStan_MainStreetActor_BP_C* AStan_MainStreetActor_BP_C::GetDefaultObj()
{
	static class AStan_MainStreetActor_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AStan_MainStreetActor_BP_C*>(AStan_MainStreetActor_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Stan_MainStreetActor_BP.Stan_MainStreetActor_BP_C.LOCAL Update Toggle Vis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AStan_MainStreetActor_BP_C::LOCAL_Update_Toggle_Vis()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Stan_MainStreetActor_BP_C", "LOCAL Update Toggle Vis");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Stan_MainStreetActor_BP.Stan_MainStreetActor_BP_C.OnRep_toggledOnToday
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStan_MainStreetActor_BP_C::OnRep_toggledOnToday()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Stan_MainStreetActor_BP_C", "OnRep_toggledOnToday");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Stan_MainStreetActor_BP.Stan_MainStreetActor_BP_C.Toggle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Want_On                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AStan_MainStreetActor_BP_C::Toggle(bool Want_On, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Stan_MainStreetActor_BP_C", "Toggle");

	Params::AStan_MainStreetActor_BP_C_Toggle_Params Parms{};

	Parms.Want_On = Want_On;
	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Stan_MainStreetActor_BP.Stan_MainStreetActor_BP_C.OnNotifyEnd_00FD4792460FBE8BAC6FC89647E95CB7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStan_MainStreetActor_BP_C::OnNotifyEnd_00FD4792460FBE8BAC6FC89647E95CB7(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Stan_MainStreetActor_BP_C", "OnNotifyEnd_00FD4792460FBE8BAC6FC89647E95CB7");

	Params::AStan_MainStreetActor_BP_C_OnNotifyEnd_00FD4792460FBE8BAC6FC89647E95CB7_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Stan_MainStreetActor_BP.Stan_MainStreetActor_BP_C.OnNotifyBegin_00FD4792460FBE8BAC6FC89647E95CB7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStan_MainStreetActor_BP_C::OnNotifyBegin_00FD4792460FBE8BAC6FC89647E95CB7(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Stan_MainStreetActor_BP_C", "OnNotifyBegin_00FD4792460FBE8BAC6FC89647E95CB7");

	Params::AStan_MainStreetActor_BP_C_OnNotifyBegin_00FD4792460FBE8BAC6FC89647E95CB7_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Stan_MainStreetActor_BP.Stan_MainStreetActor_BP_C.OnInterrupted_00FD4792460FBE8BAC6FC89647E95CB7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStan_MainStreetActor_BP_C::OnInterrupted_00FD4792460FBE8BAC6FC89647E95CB7(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Stan_MainStreetActor_BP_C", "OnInterrupted_00FD4792460FBE8BAC6FC89647E95CB7");

	Params::AStan_MainStreetActor_BP_C_OnInterrupted_00FD4792460FBE8BAC6FC89647E95CB7_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Stan_MainStreetActor_BP.Stan_MainStreetActor_BP_C.OnBlendOut_00FD4792460FBE8BAC6FC89647E95CB7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStan_MainStreetActor_BP_C::OnBlendOut_00FD4792460FBE8BAC6FC89647E95CB7(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Stan_MainStreetActor_BP_C", "OnBlendOut_00FD4792460FBE8BAC6FC89647E95CB7");

	Params::AStan_MainStreetActor_BP_C_OnBlendOut_00FD4792460FBE8BAC6FC89647E95CB7_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Stan_MainStreetActor_BP.Stan_MainStreetActor_BP_C.OnCompleted_00FD4792460FBE8BAC6FC89647E95CB7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStan_MainStreetActor_BP_C::OnCompleted_00FD4792460FBE8BAC6FC89647E95CB7(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Stan_MainStreetActor_BP_C", "OnCompleted_00FD4792460FBE8BAC6FC89647E95CB7");

	Params::AStan_MainStreetActor_BP_C_OnCompleted_00FD4792460FBE8BAC6FC89647E95CB7_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Stan_MainStreetActor_BP.Stan_MainStreetActor_BP_C.PlayerTriggerStan
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                PlayerBody                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMainStreetDamageVolume_BP_C*DamageVolume                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStan_MainStreetActor_BP_C::PlayerTriggerStan(class AQtnBodyPawn* PlayerBody, class AMainStreetDamageVolume_BP_C* DamageVolume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Stan_MainStreetActor_BP_C", "PlayerTriggerStan");

	Params::AStan_MainStreetActor_BP_C_PlayerTriggerStan_Params Parms{};

	Parms.PlayerBody = PlayerBody;
	Parms.DamageVolume = DamageVolume;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Stan_MainStreetActor_BP.Stan_MainStreetActor_BP_C.StanHitPlayer_MULTI
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                bodyToAttack                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStan_MainStreetActor_BP_C::StanHitPlayer_MULTI(class AQtnBodyPawn* bodyToAttack)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Stan_MainStreetActor_BP_C", "StanHitPlayer_MULTI");

	Params::AStan_MainStreetActor_BP_C_StanHitPlayer_MULTI_Params Parms{};

	Parms.bodyToAttack = bodyToAttack;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Stan_MainStreetActor_BP.Stan_MainStreetActor_BP_C.ProcessThrow
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStan_MainStreetActor_BP_C::ProcessThrow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Stan_MainStreetActor_BP_C", "ProcessThrow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Stan_MainStreetActor_BP.Stan_MainStreetActor_BP_C.AxeHitTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                MyBody                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStan_MainStreetActor_BP_C::AxeHitTarget(class AQtnBodyPawn* MyBody)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Stan_MainStreetActor_BP_C", "AxeHitTarget");

	Params::AStan_MainStreetActor_BP_C_AxeHitTarget_Params Parms{};

	Parms.MyBody = MyBody;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Stan_MainStreetActor_BP.Stan_MainStreetActor_BP_C.ToggleEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WantOn                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AStan_MainStreetActor_BP_C::ToggleEvent(bool WantOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Stan_MainStreetActor_BP_C", "ToggleEvent");

	Params::AStan_MainStreetActor_BP_C_ToggleEvent_Params Parms{};

	Parms.WantOn = WantOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Stan_MainStreetActor_BP.Stan_MainStreetActor_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AStan_MainStreetActor_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Stan_MainStreetActor_BP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Stan_MainStreetActor_BP.Stan_MainStreetActor_BP_C.ExecuteUbergraph_Stan_MainStreetActor_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class AQtnBodyPawn*                K2Node_CustomEvent_PlayerBody                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMainStreetDamageVolume_BP_C*K2Node_CustomEvent_DamageVolume                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                K2Node_CustomEvent_bodyToAttack                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlledPlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnPawnMontage             K2Node_MakeStruct_QtnPawnMontage                                 (NoDestructor)
// struct FQtnActionIntention         K2Node_MakeStruct_QtnActionIntention                             (NoDestructor)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerControllerBP_localPlayerController        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerControllerBP_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AScriptedAxeNuke_BP_C*       CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlledPlayer_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlledPlayer_ReturnValue_2                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyController*          CallFunc_GetBodyController_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                K2Node_CustomEvent_myBody                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyController*          CallFunc_GetBodyController_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_WantOn                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AStan_MainStreetActor_BP_C::ExecuteUbergraph_Stan_MainStreetActor_BP(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class AQtnBodyPawn* K2Node_CustomEvent_PlayerBody, class AMainStreetDamageVolume_BP_C* K2Node_CustomEvent_DamageVolume, bool CallFunc_IsServer_ReturnValue, class AQtnBodyPawn* K2Node_CustomEvent_bodyToAttack, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage, const struct FQtnActionIntention& K2Node_MakeStruct_QtnActionIntention, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AScriptedAxeNuke_BP_C* CallFunc_FinishSpawningActor_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsLocallyControlledPlayer_ReturnValue_1, bool CallFunc_IsLocallyControlledPlayer_ReturnValue_2, class FName K2Node_CustomEvent_NotifyName_4, class AQtnBodyPawn* CallFunc_Array_Get_Item, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue, class AQtnBodyPawn* CallFunc_Array_Get_Item_1, bool CallFunc_IsServer_ReturnValue_1, class AQtnBodyPawn* K2Node_CustomEvent_myBody, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue_2, bool K2Node_Event_WantOn, bool CallFunc_IsServer_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Stan_MainStreetActor_BP_C", "ExecuteUbergraph_Stan_MainStreetActor_BP");

	Params::AStan_MainStreetActor_BP_C_ExecuteUbergraph_Stan_MainStreetActor_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_PlayerBody = K2Node_CustomEvent_PlayerBody;
	Parms.K2Node_CustomEvent_DamageVolume = K2Node_CustomEvent_DamageVolume;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_CustomEvent_bodyToAttack = K2Node_CustomEvent_bodyToAttack;
	Parms.CallFunc_IsLocallyControlledPlayer_ReturnValue = CallFunc_IsLocallyControlledPlayer_ReturnValue;
	Parms.K2Node_MakeStruct_QtnPawnMontage = K2Node_MakeStruct_QtnPawnMontage;
	Parms.K2Node_MakeStruct_QtnActionIntention = K2Node_MakeStruct_QtnActionIntention;
	Parms.CallFunc_GetLocalPlayerControllerBP_localPlayerController = CallFunc_GetLocalPlayerControllerBP_localPlayerController;
	Parms.CallFunc_GetLocalPlayerControllerBP_outputPin = CallFunc_GetLocalPlayerControllerBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsLocallyControlledPlayer_ReturnValue_1 = CallFunc_IsLocallyControlledPlayer_ReturnValue_1;
	Parms.CallFunc_IsLocallyControlledPlayer_ReturnValue_2 = CallFunc_IsLocallyControlledPlayer_ReturnValue_2;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetBodyController_ReturnValue = CallFunc_GetBodyController_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.K2Node_CustomEvent_myBody = K2Node_CustomEvent_myBody;
	Parms.CallFunc_GetBodyController_ReturnValue_1 = CallFunc_GetBodyController_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsServer_ReturnValue_2 = CallFunc_IsServer_ReturnValue_2;
	Parms.K2Node_Event_WantOn = K2Node_Event_WantOn;
	Parms.CallFunc_IsServer_ReturnValue_3 = CallFunc_IsServer_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


