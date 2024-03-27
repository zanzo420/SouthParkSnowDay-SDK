#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5A (0x38A - 0x330)
// BlueprintGeneratedClass ScriptedSkeletalActor_Trial.ScriptedSkeletalActor_Trial_C
class AScriptedSkeletalActor_Trial_C : public AScriptedSkeletalActor_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                      BeckonTrigger;                                     // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCineCameraComponent*                  Cam_Test;                                          // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                     KidIdle;                                           // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UAnimMontage*>                  PositiveAnimArray;                                 // 0x350(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UAnimMontage*>                  NegativeAnimArray;                                 // 0x360(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         TestCamera;                                        // 0x370(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A59[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          DealAnimation;                                     // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          BeckonAnim;                                        // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldBeckon;                                      // 0x388(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         PlayerCollisionOn;                                 // 0x389(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AScriptedSkeletalActor_Trial_C* GetDefaultObj();

	void GetDayForOnTalkTo(int32* Day);
	void Hub_OnTalkTo(class AQtnBodyPawn* FrobbingPawn, int32 CallFunc_GetDayForOnTalkTo_day, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue);
	void UpdateIdleAnim(class UAnimSequenceBase* IdleAnim, class UMrHanky_AnimBP_C* K2Node_DynamicCast_AsMr_Hanky_Anim_BP, bool K2Node_DynamicCast_bSuccess, class UMackey_ScriptedAnim_BP_C* K2Node_DynamicCast_AsMackey_Scripted_Anim_BP, bool K2Node_DynamicCast_bSuccess_1, class URandyScripted_AnimBP_C* K2Node_DynamicCast_AsRandy_Scripted_Anim_BP, bool K2Node_DynamicCast_bSuccess_2, class UTrialActor_AnimBP_C* K2Node_DynamicCast_AsTrial_Actor_Anim_BP, bool K2Node_DynamicCast_bSuccess_3);
	void UpdateCamera(class UCineCameraComponent* Camera, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult);
	void PlayAnimationFromVO(class UAnimMontage* AnimMontage);
	void PlayAnimationAudio(const struct FTribunal_CharacterResponse& ResponseStruct, int32 VO_Priority_Override, float AnimOffsetTime, class UAudioComponent** Sound, const struct FSyncedAudioStruct& K2Node_MakeStruct_SyncedAudioStruct, bool CallFunc_IsValid_ReturnValue);
	void UserConstructionScript();
	void OnNotifyEnd_C2F283AF4653691D2BFFBEB09BBE597E(class FName NotifyName);
	void OnNotifyBegin_C2F283AF4653691D2BFFBEB09BBE597E(class FName NotifyName);
	void OnInterrupted_C2F283AF4653691D2BFFBEB09BBE597E(class FName NotifyName);
	void OnBlendOut_C2F283AF4653691D2BFFBEB09BBE597E(class FName NotifyName);
	void OnCompleted_C2F283AF4653691D2BFFBEB09BBE597E(class FName NotifyName);
	void OnNotifyEnd_FFAB253D488546CE165B33A079DFA257(class FName NotifyName);
	void OnNotifyBegin_FFAB253D488546CE165B33A079DFA257(class FName NotifyName);
	void OnInterrupted_FFAB253D488546CE165B33A079DFA257(class FName NotifyName);
	void OnBlendOut_FFAB253D488546CE165B33A079DFA257(class FName NotifyName);
	void OnCompleted_FFAB253D488546CE165B33A079DFA257(class FName NotifyName);
	void OnNotifyEnd_0AF845C24627114557E80CAEE8DBA035(class FName NotifyName);
	void OnNotifyBegin_0AF845C24627114557E80CAEE8DBA035(class FName NotifyName);
	void OnInterrupted_0AF845C24627114557E80CAEE8DBA035(class FName NotifyName);
	void OnBlendOut_0AF845C24627114557E80CAEE8DBA035(class FName NotifyName);
	void OnCompleted_0AF845C24627114557E80CAEE8DBA035(class FName NotifyName);
	void ReceiveBeginPlay();
	void React(bool Positive_Reaction);
	void DealUpgradeCards();
	void Beckon();
	void BndEvt__ScriptedSkeletalActor_Trial_BeckonTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void AllowBeckonAgain();
	void DoBeckon(class AActor* OtherActor);
	void BndEvt__ScriptedSkeletalActor_Trial_QtnVO_K2Node_ComponentBoundEvent_1_OnVOPlayed__DelegateSignature(class UCurveFloat* FacialAnimCurve, class UAnimMontage* AnimMontage, bool IsLeadIn, bool NeedsLeadIn, bool IsEmpty, bool AutoClosePhone, bool ForCutsceneHUD);
	void BndEvt__ScriptedSkeletalActor_Trial_QtnVO_K2Node_ComponentBoundEvent_2_OnLipsyncMirror__DelegateSignature(class UQtnVOComponent* SpeakerVOComponent, class UCurveFloat* FacialAnimCurve);
	void ExecuteUbergraph_ScriptedSkeletalActor_Trial(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_12, class FName K2Node_CustomEvent_NotifyName_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_9, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName Temp_name_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class FName Temp_name_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class UMrHanky_AnimBP_C* K2Node_DynamicCast_AsMr_Hanky_Anim_BP, bool K2Node_DynamicCast_bSuccess, class UMackey_ScriptedAnim_BP_C* K2Node_DynamicCast_AsMackey_Scripted_Anim_BP, bool K2Node_DynamicCast_bSuccess_1, class URandyScripted_AnimBP_C* K2Node_DynamicCast_AsRandy_Scripted_Anim_BP, bool K2Node_DynamicCast_bSuccess_2, class UTrialActor_AnimBP_C* K2Node_DynamicCast_AsTrial_Actor_Anim_BP, bool K2Node_DynamicCast_bSuccess_3, bool K2Node_CustomEvent_positive_Reaction, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class UAnimMontage* CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue, class UAnimMontage* CallFunc_Array_Get_Item_1, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_Montage_Play_ReturnValue, class UAnimMontage* CallFunc_GetCurrentActiveMontage_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_2, float CallFunc_Montage_Play_ReturnValue_1, class FName K2Node_CustomEvent_NotifyName_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_IsValid_ReturnValue_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, class AActor* K2Node_CustomEvent_otherActor, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UCurveFloat* K2Node_ComponentBoundEvent_facialAnimCurve_1, class UAnimMontage* K2Node_ComponentBoundEvent_animMontage, bool K2Node_ComponentBoundEvent_isLeadIn, bool K2Node_ComponentBoundEvent_needsLeadIn, bool K2Node_ComponentBoundEvent_isEmpty, bool K2Node_ComponentBoundEvent_autoClosePhone, bool K2Node_ComponentBoundEvent_forCutsceneHUD, class UQtnVOComponent* K2Node_ComponentBoundEvent_speakerVOComponent, class UCurveFloat* K2Node_ComponentBoundEvent_facialAnimCurve, class FName K2Node_CustomEvent_NotifyName_14);
};

}


