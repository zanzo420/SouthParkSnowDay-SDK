#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x138 - 0x120)
// BlueprintGeneratedClass StatusEffect_Frozen.StatusEffect_Frozen_C
class UStatusEffect_Frozen_C : public UStatusEffect_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x120(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        LastRemainingTime;                                 // 0x128(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        buttonMashHelpFromDamage;                          // 0x12C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnFXActor*                           FrozenFX;                                          // 0x130(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UStatusEffect_Frozen_C* GetDefaultObj();

	void Handle_Incoming_Damage(class UQtnDamageReceptorComponent* DamagedReceptor, struct FQtnDamageInfo& DamageInfo, struct FQtnHitReactionInfo& HitReactionInfo, bool IsServer, class AActor* CallFunc_GetAffectedActor_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void PresentFrozenBreakFX(class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, class UNiagaraComponent* CallFunc_GetNiagaraComponent_ReturnValue);
	void ApplyFrozenDamage(class AQtnPawn* CallFunc_GetStatusInstigator_ReturnValue, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, const struct FQtnDamageInfo& K2Node_MakeStruct_QtnDamageInfo);
	void OnStatusEffectBegin(class AActor* AffectedActor, class AQtnPawn* Instigator);
	void OnStatusEffectEnd(class AActor* AffectedActor, class AQtnPawn* Instigator, bool IsActorBeingDestroyed);
	void OnStatusEffectTick(float DeltaSeconds);
	void OnStatusEffectInit_ServerOnly(class AActor* AffectedActor, class AQtnPawn* Instigator);
	void ResetFrozenFX();
	void ExecuteUbergraph_StatusEffect_Frozen(int32 EntryPoint, class AActor* CallFunc_GetAffectedActor_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* K2Node_Event_affectedActor_2, class AQtnPawn* K2Node_Event_instigator_2, class AActor* K2Node_Event_affectedActor_1, class AQtnPawn* K2Node_Event_instigator_1, bool K2Node_Event_isActorBeingDestroyed, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base_1, bool K2Node_DynamicCast_bSuccess_1, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue_1, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue_1, float K2Node_Event_DeltaSeconds, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_2, TSubclassOf<class UQtnVerb> CallFunc_SyncLoadVerbClass_ReturnValue, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_2, class UQtnCameraComponent* CallFunc_GetQtnCameraComponent_ReturnValue, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_1, class UQtnCameraComponent* CallFunc_GetQtnCameraComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UAmbientTetherCam_StatusEffect_C* CallFunc_RequestCameraBehavior_ReturnValue, class AActor* K2Node_Event_affectedActor, class AQtnPawn* K2Node_Event_instigator, class UQtnVerb* CallFunc_GetExistingVerb_ReturnValue, TScriptInterface<class IInterface_GravityBombVerb_C> K2Node_DynamicCast_AsInterface_Gravity_Bomb_Verb, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_3, float CallFunc_GetAbsoluteZeroDuration_absoluteZeroDuration, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_4, float CallFunc_GetRemainingTime_ReturnValue, bool CallFunc_IsPlayerControlled_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class AQtnPawn* CallFunc_GetStatusInstigator_ReturnValue, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_5, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue_2, bool CallFunc_IsPlayerControlled_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_6, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetCompletionRatio_ReturnValue, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_8, float CallFunc_Subtract_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_GetLastUpdateLocation_ReturnValue, class AActor* CallFunc_GetAffectedActor_ReturnValue_1, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, float CallFunc_GetRemainingTime_ReturnValue_1, float CallFunc_SafeDivide_ReturnValue, TArray<class UMaterialInstanceDynamic*>& CallFunc_GetOverlayMaterialInstances_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class AActor* CallFunc_GetAffectedActor_ReturnValue_2, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue_1, class AActor* CallFunc_GetAffectedActor_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_5, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue_2, class AActor* CallFunc_GetAffectedActor_ReturnValue_4);
};

}


