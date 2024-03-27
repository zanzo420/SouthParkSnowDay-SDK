#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x158 - 0x110)
// BlueprintGeneratedClass StatusEffect_Radioactive.StatusEffect_Radioactive_C
class UStatusEffect_Radioactive_C : public UStatusEffect_Cheat_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x110(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        MaxRadioactiveRadius;                              // 0x118(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxDPS;                                            // 0x11C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TickTimer;                                         // 0x120(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TickTimerMax;                                      // 0x124(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                AffectedActor;                                     // 0x128(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnFXActor*                           RadioactiveFX;                                     // 0x130(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              PostProcessMat;                                    // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URadioactiveAuraComponent_C*           As_Radioactive_Aura_Component_Server_Only;         // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UBaseAuraComponent_C*>          Registered_Auras;                                  // 0x148(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UStatusEffect_Radioactive_C* GetDefaultObj();

	void RadioactiveBS_Explosion(class AActor* ActorToDamage, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, const struct FQtnVerbTuningDataRow& CallFunc_GetVerbTuningData_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FQtnDamageInfo& K2Node_MakeStruct_QtnDamageInfo);
	void UnRegister_Aura(class UBaseAuraComponent_C* Aura_to_Remove, class UBaseAuraComponent_C* Temp_object_Variable, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue);
	void Register_Aura(class UBaseAuraComponent_C* Aura_to_Register, class UBaseAuraComponent_C* Temp_object_Variable, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
	void OnStatusEffectBegin(class AActor* AffectedActor, class AQtnPawn* Instigator);
	void OnStatusEffectEnd(class AActor* AffectedActor, class AQtnPawn* Instigator, bool IsActorBeingDestroyed);
	void OnStatusEffectTick(float DeltaSeconds);
	void StartFX();
	void RadioactiveDamage_MULTI(class AActor* Actor);
	void ExecuteUbergraph_StatusEffect_Radioactive(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, float CallFunc_Abs_ReturnValue, enum class EQtnBodyAliveness CallFunc_GetBodyAliveness_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float K2Node_Event_DeltaSeconds, bool CallFunc_IsServer_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, class AActor* K2Node_CustomEvent_actor, int32 Temp_int_Array_Index_Variable, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDecalMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue_2, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_2, class AActor* K2Node_Event_affectedActor, class AQtnPawn* K2Node_Event_instigator, bool K2Node_Event_isActorBeingDestroyed, class UNiagaraComponent* CallFunc_GetNiagaraComponent_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base_1, bool K2Node_DynamicCast_bSuccess_1, class AActor* K2Node_Event_affectedActor_1, class AQtnPawn* K2Node_Event_instigator_1, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base_2, bool K2Node_DynamicCast_bSuccess_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class UBaseAuraComponent_C* CallFunc_Add_Aura_Component_NewAuraComponent, class AActor* CallFunc_GetAffectedActor_ReturnValue, class URadioactiveAuraComponent_C* K2Node_DynamicCast_AsRadioactive_Aura_Component, bool K2Node_DynamicCast_bSuccess_3, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base_3, bool K2Node_DynamicCast_bSuccess_4, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_1, TArray<class AQtnPawn*>& CallFunc_GatherEnemiesWithinRadius_enemyPawns, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base_4, bool K2Node_DynamicCast_bSuccess_5, enum class EQtnBodyAliveness CallFunc_GetBodyAliveness_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsValid_ReturnValue_3, const struct FQtnDangerParameters& K2Node_MakeStruct_QtnDangerParameters, const struct FQtnRangedFloat& K2Node_MakeStruct_QtnRangedFloat, class AQtnDangerVolume* CallFunc_SpawnDangerSphere_ServerOnly_ReturnValue, bool CallFunc_IsValid_ReturnValue_4);
};

}


