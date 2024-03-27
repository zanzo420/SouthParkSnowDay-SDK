#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xBC (0x538 - 0x47C)
// BlueprintGeneratedClass CinematicSceneCharacter_BP.CinematicSceneCharacter_BP_C
class ACinematicSceneCharacter_BP_C : public ACinematicSceneArchetype_BP_C
{
public:
	uint8                                        Pad_5B84[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x480(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                Char2;                                             // 0x488(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UActorPlacementComp_C*                 PL2;                                               // 0x490(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Char1;                                             // 0x498(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UActorPlacementComp_C*                 PL1;                                               // 0x4A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       CharactersParent;                                  // 0x4A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                FalseKid3;                                         // 0x4B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                FalseKid2;                                         // 0x4B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                FalseKid1;                                         // 0x4C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                FalseKid;                                          // 0x4C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCineCameraComponent*                  Char2Cam;                                          // 0x4D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCineCameraComponent*                  Char1CaM;                                          // 0x4D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Sound;                                             // 0x4E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B85[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCameraAnimationSequence*              CameraAnim;                                        // 0x4E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                        SceneCharacters;                                   // 0x4F0(0x10)(Edit, BlueprintVisible)
	class AActor*                                ViewTargetActor;                                   // 0x500(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InWorldActorAvailable;                             // 0x508(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B86[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQTNActorSequenceComponent_C*          SelectedSequence;                                  // 0x510(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActorSequencePlayer*                  IntroSequence_0;                                   // 0x518(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         KidBlockingView;                                   // 0x520(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B87[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQTNActorSequenceComponent_C*          LastSelectedSequence;                              // 0x528(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldStartHidden;                                 // 0x530(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CameraCutPending;                                  // 0x531(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B88[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PreCacheShot;                                      // 0x534(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ACinematicSceneCharacter_BP_C* GetDefaultObj();

	void CacheVOForShot(int32 Shot, bool Blocking, enum class EQtnUtilitiesSwitchQuality CallFunc_BranchUseSwitchQuality_Branch, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Array_IsValidIndex_ReturnValue, const class FString& CallFunc_GetDebugStringFromGameplayTag_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class AScriptedSkeletalActor_Trial_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void UpdateCamera(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void SpawnCharacterActors(class USkeletalMeshComponent* CurCharLocal, const TArray<class UActorPlacementComp_C*>& PlacementArrayLocal, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class USceneComponent* CallFunc_GetChildComponentByClass_ReturnValue, class UCineCameraComponent* K2Node_DynamicCast_AsCine_Camera_Component, bool K2Node_DynamicCast_bSuccess, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class UActorPlacementComp_C* CallFunc_Array_Get_Item, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class USceneComponent* CallFunc_GetChildComponentByClass_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component, bool K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Loop_Counter_Variable_1, class UClass* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AScriptedSkeletalActor_Trial_C* CallFunc_FinishSpawningActor_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, int32 CallFunc_Array_Length_ReturnValue_1, class USceneComponent* CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_1, class UActorPlacementComp_C* K2Node_DynamicCast_AsActor_Placement_Comp, bool K2Node_DynamicCast_bSuccess_2);
	void CloseVideoCall(class UUserWidget* CallFunc_GetMainWidget_ReturnValue, class UCutsceneHUD_Widget_C* K2Node_DynamicCast_AsCutscene_HUD_Widget, bool K2Node_DynamicCast_bSuccess);
	void UserConstructionScript(bool CallFunc_IsPlayingInEditor_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsRunningCommandlet_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void EndScene();
	void PlayNextShot();
	void ReceiveBeginPlay();
	void PlayCharacterAnimVO(class UAnimMontage* Montage, class UClass* Char, const struct FGameplayTag& CharTag, const struct FGameplayTag& LineTag, bool StopAnim, class UCurveFloat* LipsyncAnimCurve, class USoundCue* SoundCueToPlay, float BlendTime, float AnimOffsetTime);
	void ScriptedVOTimeout();
	void SetCharacterClosedMouthOverride(class UClass* Char, int32 ClosedMouthShape);
	void ReceiveTick(float DeltaSeconds);
	void Collect_Garbage();
	void BeginSequence();
	void FalseStartForCache();
	void StartSyncedAudio();
	void DelayedSceneStart();
	void PostFadeStartScene();
	void ExecuteUbergraph_CinematicSceneCharacter_BP(int32 EntryPoint, class UQTNActorSequenceComponent_C* CallFunc_getSequenceForShot_shot, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, class UQTNActorSequenceComponent_C* CallFunc_getSequenceForShot_shot_1, class UQTNActorSequenceComponent_C* CallFunc_getSequenceForShot_shot_2, bool CallFunc_IsValid_ReturnValue_3, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, class UCutsceneHUD_Widget_C* K2Node_DynamicCast_AsCutscene_HUD_Widget, bool K2Node_DynamicCast_bSuccess, class UAnimMontage* K2Node_CustomEvent_montage, class UClass* K2Node_CustomEvent_char_1, const struct FGameplayTag& K2Node_CustomEvent_charTag, const struct FGameplayTag& K2Node_CustomEvent_LineTag, bool K2Node_CustomEvent_stopAnim, class UCurveFloat* K2Node_CustomEvent_lipsyncAnimCurve, class USoundCue* K2Node_CustomEvent_soundCueToPlay, float K2Node_CustomEvent_BlendTime, float K2Node_CustomEvent_AnimOffsetTime, const struct FTribunal_CharacterResponse& K2Node_MakeStruct_Tribunal_CharacterResponse, class AScriptedSkeletalActor_Trial_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UAudioComponent* CallFunc_PlayAnimationAudio_sound, const struct FCinematicShot_Struct& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class FName CallFunc_GetTagName_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue_1, bool CallFunc_IsGameplayTagValid_ReturnValue_2, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, class UClass* K2Node_CustomEvent_char, int32 K2Node_CustomEvent_closedMouthShape, class AScriptedSkeletalActor_Trial_C* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class AScriptedSkeletalActor_Trial_C* CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, class UAudioComponent* CallFunc_PlayAnimationAudio_sound_1, bool CallFunc_Less_IntInt_ReturnValue, class UQtnGameInstance* CallFunc_GetQtnGameInstance_ReturnValue, class UQtnGameInstanceArchetype_C* K2Node_DynamicCast_AsQtn_Game_Instance_Archetype, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, float K2Node_Event_DeltaSeconds, enum class EQtnPlatform CallFunc_GetPlatform_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1);
};

}


