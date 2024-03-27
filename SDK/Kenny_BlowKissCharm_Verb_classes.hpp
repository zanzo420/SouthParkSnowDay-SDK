#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3C (0xA2C - 0x9F0)
// BlueprintGeneratedClass Kenny_BlowKissCharm_Verb.Kenny_BlowKissCharm_Verb_C
class UKenny_BlowKissCharm_Verb_C : public UQtnVerb_Archetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FQtnPawnMontage                       Verb_Action;                                       // 0x9F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         Verb_Done;                                         // 0xA08(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6176[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABodyPawnBase_C*>               TargetBodies;                                      // 0xA10(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, Transient, DisableEditOnInstance, ContainsInstancedReference)
	class UBattlefieldTrackingComponent_C*       CachedBattlefieldTracker;                          // 0xA20(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Total_Additional_Hearts;                           // 0xA28(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UKenny_BlowKissCharm_Verb_C* GetDefaultObj();

	void SetAdditionalHearts(bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, float CallFunc_GetHealth_health, float CallFunc_GetHealth_maxHealth, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, int32 K2Node_Select_Default);
	float GetDamageValue(class AActor* VictimActor, float* BaseDamage, float DamageMultiplier);
	void IsValidCharmTarget(class ABodyPawnBase_C*& Body, bool* Yes, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasStatusEffect_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsAliveAndConscious_ReturnValue);
	bool WillVerbSucceed(class UObject* PotentialTarget, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasStatusEffect_ReturnValue, bool CallFunc_WillVerbSucceed_ReturnValue);
	void BlowKiss_ServerOnly(class ABodyPawnBase_C*& TargetBody, bool LOCAL_IsPlayer, bool Temp_bool_Variable, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValidCharmTarget_yes, int32 Temp_int_Variable, int32 Temp_int_Variable_1, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, int32 Temp_int_Variable_2, float Temp_float_Variable_3, float Temp_float_Variable_4, float Temp_float_Variable_5, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, float K2Node_Select_Default, float K2Node_Select_Default_1, int32 CallFunc_Add_IntInt_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, int32 K2Node_Select_Default_2, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, const struct FVector& K2Node_Select_Default_3, const struct FVector& CallFunc_GetActorEyesViewPoint_OutLocation, const struct FRotator& CallFunc_GetActorEyesViewPoint_OutRotation, class AProjectile_CharmKiss_C* CallFunc_SpawnProjectile_ServerOnly_ReturnValue, class UQtnProjectileMovementComponent* CallFunc_GetProjectileMovement_ReturnValue);
	void AcquireTargets_ServerOnly(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ABodyPawnBase_C*>& CallFunc_GetPlayerAndBotBodies_bodies, class ABodyPawnBase_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValidCharmTarget_yes);
	bool IsVerbFinished();
	bool CanVerbStart(class UObject* PotentialTarget, bool CallFunc_CanVerbStart_ReturnValue);
	void OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer);
	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool Interrupted, bool IsServer);
	void OnMontageEnded(class UAnimMontage* Montage, bool Interrupted, bool IsServer);
	void OnAnimNotify(class UQtnAnimNotify* AnimNotify, bool IsServer);
	void OnVerbInit(bool IsServer);
	void ExecuteUbergraph_Kenny_BlowKissCharm_Verb(int32 EntryPoint, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, enum class EQtnDifficulty Temp_byte_Variable, float Temp_float_Variable_2, float Temp_float_Variable_3, float Temp_float_Variable_4, float Temp_float_Variable_5, bool Temp_bool_Variable_1, float Temp_float_Variable_6, float Temp_float_Variable_7, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer_5, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer_4, class UAnimMontage* K2Node_Event_montage_1, bool K2Node_Event_interrupted_1, bool K2Node_Event_isServer_3, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_interrupted, bool K2Node_Event_isServer_2, class UQtnAnimNotify* K2Node_Event_animNotify, bool K2Node_Event_isServer_1, float CallFunc_StartVerbAction_ReturnValue, class UAnimNotify_FireProjectile_C* K2Node_DynamicCast_AsAnim_Notify_Fire_Projectile, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_isServer, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, class ABodyPawnBase_C* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, float CallFunc_GetHealth_health, float CallFunc_GetHealth_maxHealth, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float K2Node_Select_Default, float K2Node_Select_Default_1, enum class EQtnDifficulty CallFunc_GetDifficulty_ReturnValue, float K2Node_Select_Default_2, float CallFunc_Multiply_FloatFloat_ReturnValue);
};

}


