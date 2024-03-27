#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0xA60 - 0x9F0)
// BlueprintGeneratedClass KyleBossThornTeleportVerb.KyleBossThornTeleportVerb_C
class UKyleBossThornTeleportVerb_C : public UQtnVerb_Archetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         Verb_Done;                                         // 0x9F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_756C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnPawnMontage                       Verb_Action;                                       // 0xA00(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         Attack_Begin;                                      // 0xA10(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_756D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Tick_Time;                                         // 0xA14(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AKyleBossTeleportMarker_C*>     Kyle_Teleport_Locations;                           // 0xA18(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FVector                               KyleTeleportLocation;                              // 0xA28(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TeleportLocationFound;                             // 0xA34(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_756E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              Actor_Rotation;                                    // 0xA38(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        CooldownBumpAmount;                                // 0xA44(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AKyleBossTeleportMarker_C*>     Kyle_Possible_Teleport_Locations;                  // 0xA48(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class AKyleBossTeleportMarker_C*             SelectedTeleportLocation;                          // 0xA58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UKyleBossThornTeleportVerb_C* GetDefaultObj();

	bool CanVerbStart(class UObject* PotentialTarget, bool CallFunc_IsCooldownZero_yes, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, class UQtnCarryComponent* CallFunc_GetCarryComponent_ReturnValue, bool CallFunc_IsTouchingGround_ReturnValue, class AActor* CallFunc_GetCarryingActor_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue);
	bool IsVerbFinished();
	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void OnMontageEnded(class UAnimMontage* Montage, bool Interrupted, bool IsServer);
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool Interrupted, bool IsServer);
	void OnAnimNotify(class UQtnAnimNotify* AnimNotify, bool IsServer);
	void OnActiveVerbTicked(struct FQtnPawnIntentions& PawnIntentions, float DeltaSeconds, float ElapsedTime, bool IsServer);
	void OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer);
	void OnVerbInit(bool IsServer);
	void OnVerbUnInit(bool IsServer);
	void ServerOnly_REduceTeleportCooldownOnDamaged(class UQtnDamageReceptorComponent* DamagedReceptor, struct FQtnDamageInfo& DamageInfo, struct FQtnHitReactionInfo& HitReactionInfo, bool IsServer);
	void ExecuteUbergraph_KyleBossThornTeleportVerb(int32 EntryPoint, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, enum class EQtnDifficulty Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, enum class EQtnDifficulty CallFunc_GetDifficulty_ReturnValue, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, bool Temp_bool_Variable, float K2Node_Select_Default, float Temp_float_Variable_4, float Temp_float_Variable_5, int32 Temp_int_Array_Index_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, float Temp_float_Variable_6, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer_7, class UAnimMontage* K2Node_Event_montage_1, bool K2Node_Event_interrupted_1, bool K2Node_Event_isServer_6, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_interrupted, bool K2Node_Event_isServer_5, class UQtnAnimNotify* K2Node_Event_animNotify, bool K2Node_Event_isServer_4, class UAnimNotify_Custom1_C* K2Node_DynamicCast_AsQtn_Anim_Notify_Custom_1, bool K2Node_DynamicCast_bSuccess, class UAnimNotify_FireProjectile_C* K2Node_DynamicCast_AsAnim_Notify_Fire_Projectile, bool K2Node_DynamicCast_bSuccess_1, const struct FQtnPawnIntentions& K2Node_Event_pawnIntentions, float K2Node_Event_DeltaSeconds, float K2Node_Event_elapsedTime, bool K2Node_Event_isServer_3, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_StartVerbAction_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, class AKyleBossTeleportMarker_C* CallFunc_Array_Get_Item, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_1, float CallFunc_Vector_Distance_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, TArray<class AQtnPawn*>& CallFunc_GatherEnemiesWithinRadius_enemyPawns, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_2, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_3, class AKyleBossTeleportMarker_C* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_4, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_5, class AKyleRangedProjectileTeleport_C* CallFunc_SpawnActor_ServerOnly_ReturnValue, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer_2, float Temp_float_Variable_7, int32 CallFunc_Array_AddUnique_ReturnValue, class AKyleBossTeleportMarker_C* CallFunc_Array_Random_OutItem_1, int32 CallFunc_Array_Random_OutIndex_1, bool Temp_bool_Variable_1, bool CallFunc_IsValid_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_6, class AKyleBossTeleportMarker_C* CallFunc_Array_Get_Item_1, class AQtnItem* CallFunc_GetActualEquippedItem_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue, class AKyleRangedProjectileTeleport_C* CallFunc_SpawnActor_ServerOnly_ReturnValue_1, class UKyleBossRangedPrimaryVerb_C* CallFunc_GetVerb_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, bool K2Node_Event_isServer_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool K2Node_Event_isServer, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_7, class UQtnDamageReceptorComponent* K2Node_CustomEvent_damagedReceptor, const struct FQtnDamageInfo& K2Node_CustomEvent_damageInfo, const struct FQtnHitReactionInfo& K2Node_CustomEvent_hitReactionInfo, bool K2Node_CustomEvent_isServer, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_8, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_9, float CallFunc_GetHealth_health, float CallFunc_GetHealth_maxHealth, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, float K2Node_Select_Default_1, float K2Node_Select_Default_2, float CallFunc_Multiply_FloatFloat_ReturnValue);
};

}


