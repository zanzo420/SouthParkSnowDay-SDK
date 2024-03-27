#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xA38 - 0xA20)
// BlueprintGeneratedClass CartmanBossTurret_DefensiveBlast_Verb.CartmanBossTurret_DefensiveBlast_Verb_C
class UCartmanBossTurret_DefensiveBlast_Verb_C : public UCartmanBoss_StaffFlare_Verb_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA20(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Radius;                                            // 0xA28(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Fling_Speed;                                       // 0xA2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnFXActor*                           ChargeFX;                                          // 0xA30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCartmanBossTurret_DefensiveBlast_Verb_C* GetDefaultObj();

	void ShouldFling_ServerOnly(class AQtnPawn* PawnToConsider, bool* ShouldFling, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_CanHitReact_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess);
	void OnAnimNotify(class UQtnAnimNotify* AnimNotify, bool IsServer);
	void BlastFX();
	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer);
	void ExecuteUbergraph_CartmanBossTurret_DefensiveBlast_Verb(int32 EntryPoint, class UNiagaraComponent* CallFunc_GetNiagaraComponent_ReturnValue, int32 Temp_int_Array_Index_Variable, class UQtnAnimNotify* K2Node_Event_animNotify, bool K2Node_Event_isServer_2, bool CallFunc_IsServer_ReturnValue, class UAnimNotify_FireProjectile_C* K2Node_DynamicCast_AsAnim_Notify_Fire_Projectile, bool K2Node_DynamicCast_bSuccess, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class AQtnItem* CallFunc_GetActualEquippedItem_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, class ACartmanBossStaff_Turret_C* K2Node_DynamicCast_AsCartman_Boss_Staff_Turret, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_GetMuzzleLocation_MuzzleLocation, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class AQtnPawn*>& CallFunc_GatherPawnsWithinRadius_pawns, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, class AQtnPawn* CallFunc_Array_Get_Item, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_ShouldFling_ServerOnly_ShouldFling, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer_1, const struct FVector& CallFunc_GetDirectionUnitVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_2, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_3, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class UNiagaraComponent* CallFunc_GetNiagaraComponent_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

}


