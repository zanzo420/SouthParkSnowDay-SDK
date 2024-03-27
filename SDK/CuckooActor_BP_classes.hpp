#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x137 (0x4C1 - 0x38A)
// BlueprintGeneratedClass CuckooActor_BP.CuckooActor_BP_C
class ACuckooActor_BP_C : public AScriptedSkeletalActor_Trial_C
{
public:
	uint8                                        Pad_5219[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x390(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                         IdleStopTrigger;                                   // 0x398(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         ResponseTrigger;                                   // 0x3A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TMap<enum class EQtnCuckooEvent, struct FQtnCuckooResponseArray> EventResponseMap;                                  // 0x3A8(0x50)(Edit, BlueprintVisible)
	class ACuckooActor_BP_C*                     PairedCuckooActor;                                 // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UAnimMontage*>                  JukeboxAnims;                                      // 0x400(0x10)(Edit, BlueprintVisible)
	struct FVector2D                             JukeboxDelayRange;                                 // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          JukeboxTimer_Local;                                // 0x418(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        NextGlobalCanPlayTime_ServerOnly;                  // 0x420(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_521A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTribunal_CharacterResponse>   Responses_DEPRECATED;                              // 0x428(0x10)(Edit, BlueprintVisible)
	bool                                         Triggerable_DEPRECATED;                            // 0x438(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_521B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ResponseDelay_DEPRECATED;                          // 0x43C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          Post_ResponseTimer_DEPRECATED;                     // 0x440(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        CurIndex_DEPRECATED;                               // 0x448(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PartOfConversation_DEPRECATED;                     // 0x44C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_521C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            ResponseDone;                                      // 0x450(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FTribunal_CharacterResponse>   Responses_DEPRECATED;                              // 0x460(0x10)(Edit, BlueprintVisible)
	bool                                         RandomizeAppearance;                               // 0x470(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_521D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RandomSeed;                                        // 0x474(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                RandomMatIDs;                                      // 0x478(0x10)(Edit, BlueprintVisible)
	class USkeletalMesh*                         MeshOverride;                                      // 0x488(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                         RandomizeMesh_Local;                               // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkinTone_Local;                                    // 0x498(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        IdleTime;                                          // 0x49C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          IdleTimer_ServerOnly;                              // 0x4A0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class ABodyPawnPlayer_C*>             IdleHolders_ServerOnly;                            // 0x4A8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         ShouldClearResponseOnPlay_DEPRECATED;              // 0x4B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_521E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CachedIndex;                                       // 0x4BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ProximityTriggerEnabled_ServerOnly;                // 0x4C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ACuckooActor_BP_C* GetDefaultObj();

	void SetProximityTriggerEnabled_ServerOnly(bool ProximityTriggerEnabled, bool CallFunc_IsServer_ReturnValue);
	void TriggerPairedActor_ServerOnly(bool CallFunc_IsValid_ReturnValue);
	void PlayEventResponse_ServerOnly(struct FQtnCuckooResponse& EventResponse, enum class EQtnCuckooEvent CuckooEvent, int32 ArrayIndex, float CallFunc_GetQtnTimeSeconds_ReturnValue, float CallFunc_GetQtnTimeSeconds_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1);
	void CanPlayEventResponse_ServerOnly(struct FQtnCuckooResponse& EventResponse, bool* CanPlay, float CallFunc_GetQtnTimeSeconds_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
	void CanPlayAnyEventResponse_ServerOnly(bool* CanPlayResponse, float CallFunc_GetQtnTimeSeconds_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_IsPlaying_ReturnValue_1, bool CallFunc_IsValid_ReturnValue);
	void ReceiveCuckooEvent_ServerOnly(enum class EQtnCuckooEvent CuckooEvent, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_CanPlayAnyEventResponse_ServerOnly_canPlayResponse, const struct FQtnCuckooResponseArray& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FQtnCuckooResponse& CallFunc_Array_Get_Item, bool CallFunc_CanPlayEventResponse_ServerOnly_canPlay, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void RandomAppearanceFunction(class UMaterialInstanceDynamic* CurDynMat, float Color2, float Color1, const struct FLinearColor& HairColor, const TArray<struct FLinearColor>& HairColors, float LOCAL_SkinTone, const struct FRandomStream& RandomStream, int32 SeedToUSe, TArray<struct FLinearColor>& K2Node_MakeArray_Array, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<struct FSkeletalMaterial>& CallFunc_GetMaterials_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FSkeletalMaterial& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float CallFunc_RandomFloatInRangeFromStream_ReturnValue, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Fraction_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_RandomIntegerFromStream_ReturnValue, const struct FLinearColor& CallFunc_Array_Get_Item_2, const struct FLinearColor& CallFunc_Array_Get_Item_3, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_2, const struct FRandomStream& CallFunc_MakeRandomStream_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_FTrunc_ReturnValue);
	void UserConstructionScript(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Map_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FTribunal_CharacterResponse& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FTribunal_CharacterResponse& CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue);
	void OnNotifyEnd_BC16B0C54ECACC56F7BBCEBC71BF8DFE(class FName NotifyName);
	void OnNotifyBegin_BC16B0C54ECACC56F7BBCEBC71BF8DFE(class FName NotifyName);
	void OnInterrupted_BC16B0C54ECACC56F7BBCEBC71BF8DFE(class FName NotifyName);
	void OnBlendOut_BC16B0C54ECACC56F7BBCEBC71BF8DFE(class FName NotifyName);
	void OnCompleted_BC16B0C54ECACC56F7BBCEBC71BF8DFE(class FName NotifyName);
	void PlaySyncedAnim(class UAnimSequence* AnimSequence, class UAnimMontage* Montage);
	void SetHeadTracking(bool ShouldTrack);
	void SetHeadTrackingRanges(const struct FQtnRangedFloat& PitchRange, const struct FQtnRangedFloat& YawRange);
	void SetTrackedPosition(const struct FVector& Position);
	void BndEvt__GenAdult_Actor_Shovel_Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void ReceiveBeginPlay();
	void StartJukeboxTimer_Local();
	void AnimNotifyCuckoo(bool On, int32 Index);
	void OnJukeboxTimer_Local();
	void PlayAnim_Local(class UAnimMontage* Montage);
	void StartIdleTimer_ServerOnly(class ABodyPawnPlayer_C* IdleHolder);
	void StopIdleTimer_ServerOnly(class ABodyPawnPlayer_C* IdleHolder);
	void OnIdleTimer_ServerOnly();
	void BndEvt__CuckooActor_BP_IdleStopTrigger_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void PlayEventResponse_Multicast(const struct FGameplayTag& Scripted_VO_ID, int32 PrescribedVariantIndex, class UAnimMontage* Animation, bool Trigger_Paired_Conversation);
	void ExecuteUbergraph_CuckooActor_BP(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_4, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EQtnCuckooEvent Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UAnimSequence* K2Node_Event_AnimSequence, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_shouldTrack, const struct FQtnRangedFloat& K2Node_Event_pitchRange, const struct FQtnRangedFloat& K2Node_Event_yawRange, const struct FVector& K2Node_Event_position, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_IsServer_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, bool K2Node_Event_On, int32 K2Node_Event_index, float CallFunc_RandomFloatInRange_ReturnValue, class UAnimMontage* K2Node_CustomEvent_montage, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABodyPawnPlayer_C* K2Node_CustomEvent_idleHolder_1, class ABodyPawnPlayer_C* K2Node_CustomEvent_idleHolder, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, class FName K2Node_CustomEvent_NotifyName, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FGameplayTag& K2Node_CustomEvent_Scripted_VO_ID, int32 K2Node_CustomEvent_PrescribedVariantIndex, class UAnimMontage* K2Node_CustomEvent_Animation, bool K2Node_CustomEvent_Trigger_Paired_Conversation, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_GetPlayLength_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsGameplayTagValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsServer_ReturnValue_1, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue, class UAnimMontage* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, class UAnimMontage* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_1, float CallFunc_GetPlayLength_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_2, bool CallFunc_IsServer_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FQtnCuckooResponseArray& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6);
	void ResponseDone__DelegateSignature(const struct FGameplayTag& ID);
};

}


