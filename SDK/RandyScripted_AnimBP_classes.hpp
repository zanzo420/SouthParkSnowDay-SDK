#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8B8 (0xBA8 - 0x2F0)
// AnimBlueprintGeneratedClass RandyScripted_AnimBP.RandyScripted_AnimBP_C
class URandyScripted_AnimBP_C : public UQtnScriptedActorAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2F8(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_2;                              // 0x328(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x370(0x80)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_1;                  // 0x3F0(0xC0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x4B0(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0x4F8(0x158)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3;                     // 0x650(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x678(0x28)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x6A0(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x7A8(0x108)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x8B0(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x8D0(0x20)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x8F0(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x938(0x158)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0xA90(0x28)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0xAB8(0xC0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0xB78(0x28)(None)
	class UAnimSequenceBase*                     IdleAnim;                                          // 0xBA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URandyScripted_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void PlaySyncedAnim(class UAnimSequence* AnimSequence, class UAnimMontage* Montage);
	void AnimNotifyCuckoo(bool On, int32 Index);
	void BlueprintInitializeAnimation();
	void SetTrackedPosition(const struct FVector& Position);
	void SetHeadTracking(bool ShouldTrack);
	void SetHeadTrackingRanges(const struct FQtnRangedFloat& PitchRange, const struct FQtnRangedFloat& YawRange);
	void ExecuteUbergraph_RandyScripted_AnimBP(int32 EntryPoint, class UAnimSequence* K2Node_Event_AnimSequence, class UAnimMontage* K2Node_Event_montage, float CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& K2Node_Event_position, bool K2Node_Event_shouldTrack, const struct FQtnRangedFloat& K2Node_Event_pitchRange, const struct FQtnRangedFloat& K2Node_Event_yawRange, bool K2Node_Event_On, int32 K2Node_Event_index);
};

}


