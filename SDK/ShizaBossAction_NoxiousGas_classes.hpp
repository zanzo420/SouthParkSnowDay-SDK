#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x998 - 0x940)
// BlueprintGeneratedClass ShizaBossAction_NoxiousGas.ShizaBossAction_NoxiousGas_C
class UShizaBossAction_NoxiousGas_C : public UShizaBossActionArchetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x940(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AQtnBodyPawn*                          TargetPlayer;                                      // 0x948(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FaceTargetPlayer;                                  // 0x950(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         AttackActionActive;                                // 0x951(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3331[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Internal_TimeRemainingOnAttack;                    // 0x954(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnFXActor*                           ActiveSprayFX;                                     // 0x958(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AttackDistance;                                    // 0x960(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AttackWidth;                                       // 0x964(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          BeamAttackDmgTimer;                                // 0x968(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        AttackTickRate;                                    // 0x970(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DamagePerSecond;                                   // 0x974(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_DynamicForceFeedbackZone_C*        ForceFeedbackZone;                                 // 0x978(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BeamAttackSeconds;                                 // 0x980(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3332[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnDangerVolume*                      DangerCapsule_ServerOnly;                          // 0x988(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     ShitBubbleNiagaraComponent;                        // 0x990(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UShizaBossAction_NoxiousGas_C* GetDefaultObj();

	void CleanUpBubbleSpawnFX(bool CallFunc_IsValid_ReturnValue);
	void Spawn_Shit_Bubble_Server_Only(class AQtnPawn_ShizaHulud_C* CallFunc_GetOwningShizaHulud_OwningShiza, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class AProjectile_ShizaNoxiousGas_C* CallFunc_SpawnProjectile_ServerOnly_ReturnValue);
	void VO_StartAttackVO(class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManager_SewagePlant_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Sewage_Plant, bool K2Node_DynamicCast_bSuccess);
	void GetActionHeuristic(float* HValue, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, class AQtnPawn_ShizaHulud_C* K2Node_DynamicCast_AsQtn_Pawn_Shiza_Hulud, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetActionHeuristic_HValue, float K2Node_Select_Default, float CallFunc_Add_FloatFloat_ReturnValue);
	void CanStartAction(bool* CanStart, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_1, bool CallFunc_CanStartAction_CanStart, class AQtnPawn_ShizaHulud_C* K2Node_DynamicCast_AsQtn_Pawn_Shiza_Hulud, bool K2Node_DynamicCast_bSuccess, class AQtnBodyPawn* CallFunc_FindBestTargetEnemy_EnemyToTarget, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_GetHorizontalDistanceTo_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
	void OnNotifyEnd_F17D01DA40AF720342B61DBC2ED13DB2(class FName NotifyName);
	void OnNotifyBegin_F17D01DA40AF720342B61DBC2ED13DB2(class FName NotifyName);
	void OnInterrupted_F17D01DA40AF720342B61DBC2ED13DB2(class FName NotifyName);
	void OnBlendOut_F17D01DA40AF720342B61DBC2ED13DB2(class FName NotifyName);
	void OnCompleted_F17D01DA40AF720342B61DBC2ED13DB2(class FName NotifyName);
	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void OnActiveVerbTicked(struct FQtnPawnIntentions& PawnIntentions, float DeltaSeconds, float ElapsedTime, bool IsServer);
	void OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer);
	void PlayOutroAnimAndEndVerb();
	void OnDelayedStart();
	void OnAnimNotify(class UQtnAnimNotify* AnimNotify, bool IsServer);
	void OnAnimWindowBegin(class UQtnAnimWindow* AnimWindow, float TotalDuration, bool IsServer);
	void OnAnimWindowEnd(class UQtnAnimWindow* AnimWindow, bool Interrupted, bool IsServer);
	void ExecuteUbergraph_ShizaBossAction_NoxiousGas(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_3, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName Temp_name_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer_5, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, const struct FQtnPawnIntentions& K2Node_Event_pawnIntentions, float K2Node_Event_DeltaSeconds, float K2Node_Event_elapsedTime, bool K2Node_Event_isServer_4, bool CallFunc_IsValid_ReturnValue, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer_3, bool CallFunc_IsServer_ReturnValue, class UABP_SheisseHuludBoss_C* CallFunc_GetShizaAnimInstance_AnimInstance, class UABP_SheisseHuludBoss_C* CallFunc_GetShizaAnimInstance_AnimInstance_1, class UABP_SheisseHuludBoss_C* CallFunc_GetShizaAnimInstance_AnimInstance_2, bool CallFunc_IsValid_ReturnValue_1, class UABP_SheisseHuludBoss_C* CallFunc_GetShizaAnimInstance_AnimInstance_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class AQtnPawn_ShizaHulud_C* CallFunc_GetOwningShizaHulud_OwningShiza, class AQtnBodyPawn* CallFunc_FindBestTargetEnemy_EnemyToTarget, class AQtnPawn_ShizaHulud_C* CallFunc_GetOwningShizaHulud_OwningShiza_1, class AQtnPawn_ShizaHulud_C* CallFunc_GetOwningShizaHulud_OwningShiza_2, bool CallFunc_IsServer_ReturnValue_1, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_1, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_2, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue_1, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_1, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_3, class AQtnPawn_ShizaHulud_C* CallFunc_GetOwningShizaHulud_OwningShiza_3, class FName K2Node_CustomEvent_NotifyName_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UQtnAnimNotify* K2Node_Event_animNotify, bool K2Node_Event_isServer_2, class UAnimNotify_Custom1_C* K2Node_DynamicCast_AsQtn_Anim_Notify_Custom_1, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_RandomBool_ReturnValue, class UQtnAnimWindow* K2Node_Event_animWindow_1, float K2Node_Event_totalDuration, bool K2Node_Event_isServer_1, class UAnimWindow_Custom1_C* K2Node_DynamicCast_AsAnim_Window_Custom_1, bool K2Node_DynamicCast_bSuccess_1, class UQtnAnimWindow* K2Node_Event_animWindow, bool K2Node_Event_interrupted, bool K2Node_Event_isServer, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_4, class UAnimWindow_Custom1_C* K2Node_DynamicCast_AsAnim_Window_Custom_1_1, bool K2Node_DynamicCast_bSuccess_2, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue);
};

}


