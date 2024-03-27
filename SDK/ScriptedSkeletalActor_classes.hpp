#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x330 - 0x2E0)
// BlueprintGeneratedClass ScriptedSkeletalActor.ScriptedSkeletalActor_C
class AScriptedSkeletalActor_C : public AQtnScriptedSkeletalActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                     Capsule;                                           // 0x2E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDamageReceptorSmashable_C*            DamageReceptorSmashable;                           // 0x2F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQtnVOComponent*                       QtnVO;                                             // 0x2F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      HeadTrackCollision;                                // 0x300(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFacialAnimComponent_C*                FacialAnimComponent;                               // 0x308(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                CharacterMesh;                                     // 0x310(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x318(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UAnimMontage*>                  FartReactMontages;                                 // 0x320(0x10)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class AScriptedSkeletalActor_C* GetDefaultObj();

	void UpdateHeadTracker(float DTime, float TimeMax, float TimeMin, bool CallFunc_LessEqual_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue);
	void OnNotifyEnd_365436DF421B03300B177B89D39FDE3E(class FName NotifyName);
	void OnNotifyBegin_365436DF421B03300B177B89D39FDE3E(class FName NotifyName);
	void OnInterrupted_365436DF421B03300B177B89D39FDE3E(class FName NotifyName);
	void OnBlendOut_365436DF421B03300B177B89D39FDE3E(class FName NotifyName);
	void OnCompleted_365436DF421B03300B177B89D39FDE3E(class FName NotifyName);
	void OnNotifyEnd_3910AD3E405B734E389E1A9D1A91601E(class FName NotifyName);
	void OnNotifyBegin_3910AD3E405B734E389E1A9D1A91601E(class FName NotifyName);
	void OnInterrupted_3910AD3E405B734E389E1A9D1A91601E(class FName NotifyName);
	void OnBlendOut_3910AD3E405B734E389E1A9D1A91601E(class FName NotifyName);
	void OnCompleted_3910AD3E405B734E389E1A9D1A91601E(class FName NotifyName);
	void BndEvt__ScriptedSkeletalActor_QtnVO_K2Node_ComponentBoundEvent_2_OnVOPlayed__DelegateSignature(class UCurveFloat* FacialAnimCurve, class UAnimMontage* AnimMontage, bool IsLeadIn, bool NeedsLeadIn, bool IsEmpty, bool AutoClosePhone, bool ForCutsceneHUD);
	void BndEvt__ScriptedSkeletalActor_HeadTrackCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__ScriptedSkeletalActor_DamageReceptorSmashable_K2Node_ComponentBoundEvent_3_QtnIncomingDamageEvent__DelegateSignature(class UQtnDamageReceptorComponent* DamagedReceptor, struct FQtnDamageInfo& DamageInfo, struct FQtnHitReactionInfo& HitReactionInfo, bool IsServer);
	void BndEvt__ScriptedSkeletalActor_HeadTrackCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__ScriptedSkeletalActor_DamageReceptorSmashable_K2Node_ComponentBoundEvent_0_QtnIncomingTootFartEvent__DelegateSignature(struct FQtnDamageInfo& DamageInfo, bool IsServer);
	void ReceiveBeginPlay();
	void EventOnFartedOn(class AQtnPawn* Culprit, float Delay);
	void BndEvt__ScriptedSkeletalActor_QtnVO_K2Node_ComponentBoundEvent_5_OnVOPhoneSpeakerLipsync__DelegateSignature(class UQtnVOComponent* PhoneSpeakerVOComponent, class UCurveFloat* FacialAnimCurve);
	void StopAnimWithRandomDelay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_ScriptedSkeletalActor(int32 EntryPoint, class FName Temp_name_Variable, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class UCurveFloat* K2Node_ComponentBoundEvent_facialAnimCurve_1, class UAnimMontage* K2Node_ComponentBoundEvent_animMontage, bool K2Node_ComponentBoundEvent_isLeadIn, bool K2Node_ComponentBoundEvent_needsLeadIn, bool K2Node_ComponentBoundEvent_isEmpty, bool K2Node_ComponentBoundEvent_autoClosePhone, bool K2Node_ComponentBoundEvent_forCutsceneHUD, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, class FName K2Node_CustomEvent_NotifyName_5, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsActorTickEnabled_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UQtnDamageReceptorComponent* K2Node_ComponentBoundEvent_damagedReceptor, const struct FQtnDamageInfo& K2Node_ComponentBoundEvent_damageInfo_1, const struct FQtnHitReactionInfo& K2Node_ComponentBoundEvent_hitReactionInfo, bool K2Node_ComponentBoundEvent_isServer_1, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, class AQtnBodyPawn* CallFunc_GetBodyToBlame_ReturnValue, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, class UAnimMontage* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class ABodyPawnAIAllyBot_C* K2Node_DynamicCast_AsBody_Pawn_AIAlly_Bot, bool K2Node_DynamicCast_bSuccess_1, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct FQtnDamageInfo& K2Node_ComponentBoundEvent_damageInfo, bool K2Node_ComponentBoundEvent_isServer, class FName K2Node_CustomEvent_NotifyName_7, class AQtnPawn* K2Node_CustomEvent_culprit, float K2Node_CustomEvent_Delay, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsLocallyControlledPlayer_ReturnValue_1, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue_1, class FName K2Node_CustomEvent_NotifyName_8, class FName K2Node_CustomEvent_NotifyName_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, TSubclassOf<class UQtnVerb> CallFunc_SyncLoadVerbClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class UQtnVOComponent* K2Node_ComponentBoundEvent_phoneSpeakerVOComponent, class UCurveFloat* K2Node_ComponentBoundEvent_facialAnimCurve, bool CallFunc_GetShouldHeadTrack_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UAnimMontage* CallFunc_Array_Random_OutItem_1, int32 CallFunc_Array_Random_OutIndex_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_1, float K2Node_Event_DeltaSeconds);
};

}


