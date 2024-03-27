#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x82 (0x422 - 0x3A0)
// BlueprintGeneratedClass Stan_MainStreetActor_BP.Stan_MainStreetActor_BP_C
class AStan_MainStreetActor_BP_C : public AStan_Actor_BP_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     Niagara;                                           // 0x3A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQtnGoalMarkerComponent*               QtnGoalMarker_0;                                   // 0x3B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh1;                                       // 0x3B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x3C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AScriptedAxeNuke_BP_C*                 SpawnedAxe;                                        // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnPlayerController*                  Local_Player_Controller;                           // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnBodyController*                    CurBodyController;                                 // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainStreetDamageVolume_BP_C*          Damage_Volume;                                     // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnBodyPawn*                          Player_Body_Local;                                 // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AQtnBodyPawn*>                  BodiesBeingHit;                                    // 0x3F0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class AQtnBodyController*>            Controllers;                                       // 0x400(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                         CurrentTargetIsLocal;                              // 0x410(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_526B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnBodyPawn*                          CurBodyForProcessing;                              // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ToggledOnToday;                                    // 0x420(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         Init;                                              // 0x421(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AStan_MainStreetActor_BP_C* GetDefaultObj();

	void LOCAL_Update_Toggle_Vis();
	void OnRep_toggledOnToday();
	void Toggle(bool Want_On, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnNotifyEnd_00FD4792460FBE8BAC6FC89647E95CB7(class FName NotifyName);
	void OnNotifyBegin_00FD4792460FBE8BAC6FC89647E95CB7(class FName NotifyName);
	void OnInterrupted_00FD4792460FBE8BAC6FC89647E95CB7(class FName NotifyName);
	void OnBlendOut_00FD4792460FBE8BAC6FC89647E95CB7(class FName NotifyName);
	void OnCompleted_00FD4792460FBE8BAC6FC89647E95CB7(class FName NotifyName);
	void PlayerTriggerStan(class AQtnBodyPawn* PlayerBody, class AMainStreetDamageVolume_BP_C* DamageVolume);
	void StanHitPlayer_MULTI(class AQtnBodyPawn* bodyToAttack);
	void ProcessThrow();
	void AxeHitTarget(class AQtnBodyPawn* MyBody);
	void ToggleEvent(bool WantOn);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Stan_MainStreetActor_BP(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class AQtnBodyPawn* K2Node_CustomEvent_PlayerBody, class AMainStreetDamageVolume_BP_C* K2Node_CustomEvent_DamageVolume, bool CallFunc_IsServer_ReturnValue, class AQtnBodyPawn* K2Node_CustomEvent_bodyToAttack, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage, const struct FQtnActionIntention& K2Node_MakeStruct_QtnActionIntention, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AScriptedAxeNuke_BP_C* CallFunc_FinishSpawningActor_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsLocallyControlledPlayer_ReturnValue_1, bool CallFunc_IsLocallyControlledPlayer_ReturnValue_2, class FName K2Node_CustomEvent_NotifyName_4, class AQtnBodyPawn* CallFunc_Array_Get_Item, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue, class AQtnBodyPawn* CallFunc_Array_Get_Item_1, bool CallFunc_IsServer_ReturnValue_1, class AQtnBodyPawn* K2Node_CustomEvent_myBody, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue_2, bool K2Node_Event_WantOn, bool CallFunc_IsServer_ReturnValue_3);
};

}


