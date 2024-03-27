#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x500 (0x7B8 - 0x2B8)
// AnimBlueprintGeneratedClass MrHanky_AnimBP.MrHanky_AnimBP_C
class UMrHanky_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_2E39[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x2F8(0x80)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x378(0x48)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x3C0(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x4C8(0x108)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x5D0(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x5F0(0x20)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x610(0x158)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x768(0x28)(None)
	float                                        HeadTrackAmount;                                   // 0x790(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HeadTrack;                                         // 0x794(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E3A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              HeadRotation;                                      // 0x798(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               TargetPosition;                                    // 0x7A4(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                     IdleAnim;                                          // 0x7B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMrHanky_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void SetHeadTrackingRanges(const struct FQtnRangedFloat& PitchRange, const struct FQtnRangedFloat& YawRange);
	void PlaySyncedAnim(class UAnimSequence* AnimSequence, class UAnimMontage* Montage);
	void AnimNotifyCuckoo(bool On, int32 Index);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MrHanky_AnimBP_AnimGraphNode_ModifyBone_F6A0B1964C1767FAC81C0A8BC0AE8AD4();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void SetTrackedPosition(const struct FVector& Position);
	void SetHeadTracking(bool ShouldTrack);
	void ExecuteUbergraph_MrHanky_AnimBP(int32 EntryPoint, bool K2Node_Event_shouldTrack, const struct FQtnRangedFloat& K2Node_Event_pitchRange, const struct FQtnRangedFloat& K2Node_Event_yawRange, class UAnimSequence* K2Node_Event_AnimSequence, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_On, int32 K2Node_Event_index, float K2Node_Event_DeltaTimeX, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_FClamp_ReturnValue, float CallFunc_FClamp_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class AActor* CallFunc_GetOwningActor_ReturnValue, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue_2, float CallFunc_FClamp_ReturnValue_3, class USkeletalMeshComponent* CallFunc_GetOwningComponent_ReturnValue, const struct FVector& K2Node_Event_position, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue_1, const struct FVector& CallFunc_Normal_ReturnValue, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, float CallFunc_Dot_VectorVector_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_2, float CallFunc_Subtract_FloatFloat_ReturnValue_3, int32 CallFunc_FCeil_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


