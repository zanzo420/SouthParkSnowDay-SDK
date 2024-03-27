#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xBC (0x37C - 0x2C0)
// BlueprintGeneratedClass FacialAnimComponent.FacialAnimComponent_C
class UFacialAnimComponent_C : public UQtnFacialAnimComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FEyePositionStruct>            EyePositions;                                      // 0x2C8(0x10)(Edit, BlueprintVisible)
	struct FMouthMapStruct                       MouthMap;                                          // 0x2D8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UMaterialInterface*                    BlinkMat;                                          // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseCustomizationRoute;                             // 0x330(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6F29[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             blinkRange;                                        // 0x334(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             DeadBlinkRange;                                    // 0x33C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DeadBlinkTime;                                     // 0x344(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSyncedAudioStruct                    CurStruct;                                         // 0x348(0x2D)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F2A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BlinkTime;                                         // 0x378(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UFacialAnimComponent_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void SetFacialExpressionFromNotify(bool Starting, class UMaterialInterface* EyeMat, class UMaterialInterface* MouthMat, const struct FEyePositionStruct& Struct, bool PersistBrows);
	void PlaySyncedAudio(const struct FSyncedAudioStruct& AudioStruct, int32 VO_Priority_Override, float TimeOffset);
	void AppearanceChanged();
	void BodyAlivenessChange(class AQtnBodyPawn* bodyPawn, class AActor* AlivenessInstigator, enum class EQtnBodyAliveness OldBodyAliveness, enum class EQtnBodyAliveness bodyAliveness, bool IsServer);
	void OnVOPlayed(class UAudioComponent* AudioComponent, class UCurveFloat* FacialAnimCurve);
	void PlayAnimationFromVO(class UAnimMontage* AnimMontage);
	void OnAudioFinished();
	void OnAudioPlayStateChanged(enum class EAudioComponentPlayState PlayState);
	void SetCurrentSound(class UAudioComponent* NewSound);
	void ResetMesh();
	void UpdateEyeTone(float NonBodySkinTone);
	void ExecuteUbergraph_FacialAnimComponent(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UQtnCharacterAppearanceComponent* CallFunc_GetBodyAppearanceComponent_ReturnValue, class USkeletalMeshComponent* CallFunc_GetBodyComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_2, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base_1, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetOwner_ReturnValue, class AQtnBodyPawn* K2Node_CustomEvent_BodyPawn, class AActor* K2Node_CustomEvent_alivenessInstigator, enum class EQtnBodyAliveness K2Node_CustomEvent_oldBodyAliveness, enum class EQtnBodyAliveness K2Node_CustomEvent_bodyAliveness, bool K2Node_CustomEvent_isServer, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_EqualExactly_VectorVector_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsGameplayTagValid_ReturnValue, class UAudioComponent* K2Node_CustomEvent_audioComponent, class UCurveFloat* K2Node_CustomEvent_facialAnimCurve, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, class AActor* CallFunc_GetOwner_ReturnValue_1, TArray<class UActorComponent*>& CallFunc_GetComponentsByTag_ReturnValue, TArray<class UActorComponent*>& CallFunc_GetComponentsByTag_ReturnValue_1, class UActorComponent* CallFunc_Array_Get_Item, class UActorComponent* CallFunc_Array_Get_Item_1, class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component, bool K2Node_DynamicCast_bSuccess_2, class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component_1, bool K2Node_DynamicCast_bSuccess_3, class UQtnCharacterAppearanceComponent* CallFunc_GetComponentByClass_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base_2, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsValid_ReturnValue_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FSyncedAudioStruct& K2Node_CustomEvent_AudioStruct, int32 K2Node_CustomEvent_VO_Priority_Override, float K2Node_CustomEvent_TimeOffset, bool K2Node_CustomEvent_starting, class UMaterialInterface* K2Node_CustomEvent_eyeMat, class UMaterialInterface* K2Node_CustomEvent_mouthMat, const struct FEyePositionStruct& K2Node_CustomEvent_Struct, bool K2Node_CustomEvent_PersistBrows, float CallFunc_Montage_Play_ReturnValue, const struct FEyePosition& K2Node_MakeStruct_EyePosition, class AActor* CallFunc_GetOwner_ReturnValue_2, class USkeletalMeshComponent* CallFunc_GetBodyComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_10, class USkeletalMeshComponent* CallFunc_GetHeadComponent_ReturnValue, class UAnimMontage* K2Node_CustomEvent_animMontage, bool CallFunc_IsValid_ReturnValue_11, bool CallFunc_IsValid_ReturnValue_12, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float CallFunc_Montage_Play_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_13, enum class EAudioComponentPlayState K2Node_CustomEvent_PlayState, bool K2Node_SwitchEnum_CmpSuccess_1, class UAudioComponent* K2Node_CustomEvent_newSound, bool CallFunc_IsValid_ReturnValue_14, int32 Temp_int_Array_Index_Variable, class FText CallFunc_GetSpeakerName_ReturnValue, const struct FEyePositionStruct& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue, const struct FEyePosition& K2Node_MakeStruct_EyePosition_1, bool CallFunc_Less_IntInt_ReturnValue, float K2Node_Event_NonBodySkinTone);
};

}


