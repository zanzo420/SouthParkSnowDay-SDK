#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0xA90 - 0x9F0)
// BlueprintGeneratedClass Brainwash_Verb.Brainwash_Verb_C
class UBrainwash_Verb_C : public UQtnVerb_Archetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         Verb_Done;                                         // 0x9F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_106C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnPawnMontage                       Verb_Action;                                       // 0xA00(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class ACheeseCat_C*                          MrKitty;                                           // 0xA10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Start_Spray;                                       // 0xA18(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Upgrade_HatefulCheesing;                           // 0xA19(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Upgrade_Brainsplosion;                             // 0xA1A(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_106F[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BrainsplosionBaseDamage;                           // 0xA1C(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BrainwashDuration;                                 // 0xA20(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BrainsplosionDamageRadius;                         // 0xA24(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HatefulCheesingDamageScalar;                       // 0xA28(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BrainwashRange;                                    // 0xA2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Upgrade_VampiricCheesing;                          // 0xA30(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1073[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        VampiricCheesingHealingPercentage;                 // 0xA34(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Upgrade_NecroCheesing;                             // 0xA38(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1076[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        NecroCheesingSeconds;                              // 0xA3C(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class AQtnFXActor>               FxClass;                                           // 0xA40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<class AActor*>                        ImmuneActors;                                      // 0xA48(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FQtnRangedFloat                       ConeAngleRange;                                    // 0xA58(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TArray<class ACheeseCat_C*>                  EscapeCats;                                        // 0xA60(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                        EscapeCatInt;                                      // 0xA70(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1079[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ImmuneText;                                        // 0xA78(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBrainwash_Verb_C* GetDefaultObj();

	void SpawnEscapeCats(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ACheeseCat_C* CallFunc_Array_Get_Item, const struct FTransform& CallFunc_GetTransform_ReturnValue, class ACheeseCat_C* CallFunc_SpawnNonReplicatedActor_ReturnValue, class ACheeseCat_C* CallFunc_SpawnNonReplicatedActor_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1);
	void Apply_NecroCheese(class AQtnPawn* Dead_Pawn, class ABodyPawnAI_C* K2Node_DynamicCast_AsBody_Pawn_AI, bool K2Node_DynamicCast_bSuccess, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue_1, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttributeMax_self_CastInput, float CallFunc_GetAttributeMax_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_IncreaseAttributeValue_self_CastInput, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_AddAttribute_self_CastInput, class UQtnAttribute* CallFunc_AddAttribute_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_HasAttribute_self_CastInput, bool CallFunc_HasAttribute_ReturnValue, bool CallFunc_IsAliveAndConscious_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	bool CanVerbStart(class UObject* PotentialTarget, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, bool CallFunc_CanVerbStart_ReturnValue, bool CallFunc_IsTouchingGround_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	bool IsVerbFinished();
	void OnNotifyEnd_F6B707BC4038CDD14F70E3A907E8BC12(class FName NotifyName);
	void OnNotifyBegin_F6B707BC4038CDD14F70E3A907E8BC12(class FName NotifyName);
	void OnInterrupted_F6B707BC4038CDD14F70E3A907E8BC12(class FName NotifyName);
	void OnBlendOut_F6B707BC4038CDD14F70E3A907E8BC12(class FName NotifyName);
	void OnCompleted_F6B707BC4038CDD14F70E3A907E8BC12(class FName NotifyName);
	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void OnMontageEnded(class UAnimMontage* Montage, bool Interrupted, bool IsServer);
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool Interrupted, bool IsServer);
	void OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer);
	void OnAnimNotify(class UQtnAnimNotify* AnimNotify, bool IsServer);
	void OnActiveVerbTicked(struct FQtnPawnIntentions& PawnIntentions, float DeltaSeconds, float ElapsedTime, bool IsServer);
	void OnVerbEquipChange(bool IsEquipped, bool IsServer);
	void HandleOutgoingDamage(class AActor* DamagedActor, struct FQtnDamageInfo& DamageInfo, struct FQtnHitReactionInfo& HitReactionInfo, bool IsServer);
	void ResetImmune();
	void MrKittyFinished(class UAnimMontage* Montage, bool Interrupt);
	void SprayDecal();
	void ExecuteUbergraph_Brainwash_Verb(int32 EntryPoint, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class FName Temp_name_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, class FName K2Node_CustomEvent_NotifyName, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer_7, class UAnimMontage* K2Node_Event_montage_1, bool K2Node_Event_interrupted_1, bool K2Node_Event_isServer_6, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_interrupted, bool K2Node_Event_isServer_5, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer_4, class UQtnAnimNotify* K2Node_Event_animNotify, bool K2Node_Event_isServer_3, bool K2Node_SwitchEnum_CmpSuccess, class UAnimNotify_Custom2_C* K2Node_DynamicCast_AsQtn_Anim_Notify_Custom_2, bool K2Node_DynamicCast_bSuccess, class UAnimNotify_Custom1_C* K2Node_DynamicCast_AsQtn_Anim_Notify_Custom_1, bool K2Node_DynamicCast_bSuccess_1, const struct FQtnPawnIntentions& K2Node_Event_pawnIntentions, float K2Node_Event_DeltaSeconds, float K2Node_Event_elapsedTime, bool K2Node_Event_isServer_2, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_2, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_4, const struct FQtnDamageInfo& K2Node_MakeStruct_QtnDamageInfo, class FName K2Node_CustomEvent_NotifyName_1, float CallFunc_StartVerbAction_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool K2Node_Event_isEquipped, bool K2Node_Event_isServer_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_5, const struct FTransform& CallFunc_GetTransform_ReturnValue, class ACheeseCat_C* CallFunc_SpawnNonReplicatedActor_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_Not_PreBool_ReturnValue, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AActor* K2Node_Event_damagedActor, const struct FQtnDamageInfo& K2Node_Event_DamageInfo, const struct FQtnHitReactionInfo& K2Node_Event_hitReactionInfo, bool K2Node_Event_isServer, const struct FQtnDamageNumberOptionalInfo& K2Node_MakeStruct_QtnDamageNumberOptionalInfo, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, class UQtnDamageNumbersSubsystem* CallFunc_GetQtnDamageNumbersSubsystem_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, TArray<class AQtnPawn*>& CallFunc_GatherEnemiesWithinViewCone_enemyPawns, class AQtnPawn* CallFunc_Array_Get_Item, float CallFunc_GetScaledValue_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, bool CallFunc_IsBoss_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_HasStatusEffect_ReturnValue, bool CallFunc_IsAliveAndConscious_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UAnimMontage* K2Node_CustomEvent_montage, bool K2Node_CustomEvent_Interrupt, class FName K2Node_CustomEvent_NotifyName_3, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, int32 Temp_int_Variable, class ACheeseCat_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, int32 CallFunc_Percent_IntInt_ReturnValue, class ACheeseCat_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Add_IntInt_ReturnValue_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_7, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_8, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue_1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue_2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_4, TArray<struct FHitResult>& CallFunc_LineTrace_hits, bool CallFunc_LineTrace_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, const struct FHitResult& CallFunc_Array_Get_Item_3, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, int32 CallFunc_Array_Find_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FRotator& CallFunc_MakeRotFromXY_ReturnValue, class UDecalComponent* CallFunc_SpawnDecalAtLocation_ReturnValue, class FName K2Node_CustomEvent_NotifyName_4, int32 CallFunc_Array_AddUnique_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, bool CallFunc_IsAlly_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
};

}


