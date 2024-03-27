#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C4 (0x57C - 0x2B8)
// AnimBlueprintGeneratedClass IkeRopes_RIG_Skeleton_AnimBlueprint.IkeRopes_RIG_Skeleton_AnimBlueprint_C
class UIkeRopes_RIG_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	uint8                                        Pad_7541[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x2C8(0x108)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x3D0(0x30)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x400(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x420(0x118)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x538(0x20)(None)
	class USkeletalMeshComponent*                IkeSkelMesh;                                       // 0x558(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RopeBonePos;                                       // 0x560(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OverrideRope;                                      // 0x56C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7542[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              RopeRotation;                                      // 0x570(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UIkeRopes_RIG_Skeleton_AnimBlueprint_C* GetDefaultObj();

	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_IkeRopes_RIG_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_B87872D347B8CB96F56CD08B735940CA();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_IkeRopes_RIG_Skeleton_AnimBlueprint(int32 EntryPoint, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float K2Node_Event_DeltaTimeX, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_GetSocketRotation_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_TransformDirection_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
};

}


