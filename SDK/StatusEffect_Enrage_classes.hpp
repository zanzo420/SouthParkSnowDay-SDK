#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0x114 - 0xF0)
// BlueprintGeneratedClass StatusEffect_Enrage.StatusEffect_Enrage_C
class UStatusEffect_Enrage_C : public UQtnStatusEffect
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        DamageMultiplier;                                  // 0xF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Tick_Rate;                                         // 0xFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Tick_Time;                                         // 0x100(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Damage_Radius;                                     // 0x104(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StampShakeRadius;                                  // 0x108(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Screen_Shake_Scale;                                // 0x10C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ContactDamageAmount;                               // 0x110(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UStatusEffect_Enrage_C* GetDefaultObj();

	void GetContactDamageAmount(class AActor*& VictimActor, float* TotalDamage, float* BaseDamage);
	void Deal_Contact_Damage(float A, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsServer_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_2, bool CallFunc_IsPlayerControlled_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsExceedingMaxSpeed_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_3, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_4, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TArray<class AActor*>& CallFunc_GatherActorsWithinRadius_otherActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_GetContactDamageAmount_totalDamage, float CallFunc_GetContactDamageAmount_baseDamage, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class UQtnDamageReceptorComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsAlly_ReturnValue, class UDamageReceptorBodyPawn_C* K2Node_DynamicCast_AsDamage_Receptor_Body_Pawn, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_5, bool CallFunc_Greater_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FQtnDamageInfo& K2Node_MakeStruct_QtnDamageInfo);
	void OnStatusEffectTick(float DeltaSeconds);
	void Footstep(enum class EPhysicalSurface PhysicalSurface, struct FVector& ImpactLocation, struct FVector& ImpactNormal, float FootstepLoudness);
	void Landed(class AQtnPawn* Pawn, struct FHitResult& Hit);
	void OnStatusEffectEnd(class AActor* AffectedActor, class AQtnPawn* Instigator, bool IsActorBeingDestroyed);
	void Hit_FX(class AActor* Target_Actor);
	void OnStatusEffectBegin(class AActor* AffectedActor, class AQtnPawn* Instigator);
	void ExecuteUbergraph_StatusEffect_Enrage(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, const struct FQtnRangedFloat& K2Node_MakeStruct_QtnRangedFloat, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, float K2Node_Event_DeltaSeconds, enum class EPhysicalSurface K2Node_CustomEvent_physicalSurface, const struct FVector& K2Node_CustomEvent_impactLocation, const struct FVector& K2Node_CustomEvent_impactNormal, float K2Node_CustomEvent_footstepLoudness, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_3, class AQtnPawn* K2Node_CustomEvent_pawn, const struct FHitResult& K2Node_CustomEvent_Hit, class AActor* K2Node_Event_affectedActor_1, class AQtnPawn* K2Node_Event_instigator_1, bool K2Node_Event_isActorBeingDestroyed, class AActor* K2Node_CustomEvent_Target_Actor, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_4, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, class UDamageReceptorBodyPawn_C* K2Node_DynamicCast_AsDamage_Receptor_Body_Pawn, bool K2Node_DynamicCast_bSuccess_1, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_5, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue_1, class UDamageReceptorBodyPawn_C* K2Node_DynamicCast_AsDamage_Receptor_Body_Pawn_1, bool K2Node_DynamicCast_bSuccess_2, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_Vector_Distance_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_6, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsValid_ReturnValue, class UCameraShakeBase* CallFunc_StartCameraShake_ReturnValue, class AActor* K2Node_Event_affectedActor, class AQtnPawn* K2Node_Event_instigator);
};

}


