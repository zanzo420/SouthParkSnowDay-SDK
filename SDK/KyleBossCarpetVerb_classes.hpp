#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x69 (0xA59 - 0x9F0)
// BlueprintGeneratedClass KyleBossCarpetVerb.KyleBossCarpetVerb_C
class UKyleBossCarpetVerb_C : public UQtnVerb_Archetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         Verb_Done;                                         // 0x9F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5DB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnPawnMontage                       Verb_Action;                                       // 0xA00(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         Valid_Location;                                    // 0xA10(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5DC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       Thorn_Locations;                                   // 0xA18(0x10)(Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	float                                        Min_Distance_Between_Thorns;                       // 0xA28(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5DE[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UBattlefieldTrackingComponent_C*       batllefieldTracker;                                // 0xA30(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SproutsRemaining_ServerOnly;                       // 0xA38(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NumSproutsToSpawn;                                 // 0xA3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        R_sproutSpawningState;                             // 0xA40(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	float                                        CooldownBumpAmount;                                // 0xA44(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AQtnPawn*>                      Enemy_Pawns;                                       // 0xA48(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         RecastActive;                                      // 0xA58(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UKyleBossCarpetVerb_C* GetDefaultObj();

	void ShouldCastAgain(bool* Cast_Again, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, float CallFunc_GetHealth_health, float CallFunc_GetHealth_maxHealth, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_2, TArray<class AQtnPawn*>& CallFunc_GatherEnemiesWithinRadius_enemyPawns, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void OnRep_r_sproutSpawningState(bool K2Node_SwitchInteger_CmpSuccess);
	void SpawnIfValidLocation_ServerOnly(const struct FVector& Selected_Location, bool* Valid_Location_Found, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Vector_Distance_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue);
	void ArenaWide_ServerOnly(class AActor* Target, float Radius, bool Temp_bool_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, bool CallFunc_QtnGetRandomReachablePoint_foundRandomReachablePoint, const struct FVector& CallFunc_QtnGetRandomReachablePoint_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, TArray<struct FHitResult>& CallFunc_LineTrace_hits, bool CallFunc_LineTrace_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FVector& K2Node_Select_Default, bool CallFunc_SpawnIfValidLocation_ServerOnly_Valid_Location_Found, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, class AKyleCarpetProjectile_C* CallFunc_SpawnActor_ServerOnly_ReturnValue);
	void Start_Verb(int32 __of_Projectiles, float CallFunc_StartVerbAction_ReturnValue);
	bool CanVerbStart(class UObject* PotentialTarget, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, bool CallFunc_CanVerbStart_ReturnValue, bool CallFunc_IsTouchingGround_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	bool IsVerbFinished();
	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void OnMontageEnded(class UAnimMontage* Montage, bool Interrupted, bool IsServer);
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool Interrupted, bool IsServer);
	void OnAnimNotify(class UQtnAnimNotify* AnimNotify, bool IsServer);
	void OnActiveVerbTicked(struct FQtnPawnIntentions& PawnIntentions, float DeltaSeconds, float ElapsedTime, bool IsServer);
	void OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer);
	void OnVerbInit(bool IsServer);
	void Recast();
	void ExecuteUbergraph_KyleBossCarpetVerb(int32 EntryPoint, float Temp_float_Variable, bool Temp_bool_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, bool Temp_bool_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, float Temp_float_Variable_3, float Temp_float_Variable_4, float Temp_float_Variable_5, enum class EQtnDifficulty Temp_byte_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Variable, float Temp_float_Variable_6, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer_6, class UAnimMontage* K2Node_Event_montage_1, bool K2Node_Event_interrupted_1, bool K2Node_Event_isServer_5, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_interrupted, bool K2Node_Event_isServer_4, class UQtnAnimNotify* K2Node_Event_animNotify, bool K2Node_Event_isServer_3, const struct FQtnPawnIntentions& K2Node_Event_pawnIntentions, float K2Node_Event_DeltaSeconds, float K2Node_Event_elapsedTime, bool K2Node_Event_isServer_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class UAnimNotify_FireProjectile_C* K2Node_DynamicCast_AsAnim_Notify_Fire_Projectile, bool K2Node_DynamicCast_bSuccess, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer_1, bool K2Node_Event_isServer, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Greater_IntInt_ReturnValue, float Temp_float_Variable_7, int32 CallFunc_Subtract_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, enum class EQtnUIBodyActionEnum CallFunc_GetAssociatedInputAction_ReturnValue, int32 Temp_int_Variable_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, int32 CallFunc_Min_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_2, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, class AQtnPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_2, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, TArray<class AQtnPawn*>& CallFunc_GatherEnemiesWithinRadius_enemyPawns, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_2, TArray<class AQtnPawn*>& CallFunc_GatherEnemiesWithinRadius_enemyPawns_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class AQtnPawn* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, class ABodyPawnAIAllyBot_C* K2Node_DynamicCast_AsBody_Pawn_AIAlly_Bot, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Array_AddUnique_ReturnValue_1, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess_3, int32 CallFunc_Array_Length_ReturnValue_3, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_1, float CallFunc_GetHealth_health, float CallFunc_GetHealth_maxHealth, float CallFunc_Divide_FloatFloat_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, float K2Node_Select_Default, float K2Node_Select_Default_1, enum class EQtnDifficulty CallFunc_GetDifficulty_ReturnValue, float K2Node_Select_Default_2, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_ShouldCastAgain_Cast_Again);
};

}

