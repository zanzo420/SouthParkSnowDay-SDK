#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x6B4 (0x96C - 0x2B8)
// AnimBlueprintGeneratedClass Turret_AnimBP.Turret_AnimBP_C
class UTurret_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_F25[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0x2C8(0x108)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x3D0(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x3F0(0x118)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x508(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x528(0x108)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x630(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x660(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x6A8(0x80)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x728(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x830(0x108)(None)
	struct FRotator                              TurretRotation;                                    // 0x938(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F28[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMeshComponent*                OwningComp;                                        // 0x948(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              OriginalRot;                                       // 0x950(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F29[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              DynamicMatInstance;                                // 0x960(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Aimamt;                                            // 0x968(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTurret_AnimBP_C* GetDefaultObj();

	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Turret_AnimBP_AnimGraphNode_ModifyBone_15C5CAAE4E2207B8282741B443CEC603();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Turret_AnimBP_AnimGraphNode_ModifyBone_2695DC6F4B3ABF4B2AD49EA549A7794A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Turret_AnimBP_AnimGraphNode_ModifyBone_4F52CD694BA6C2476FB71FAB5FBD06AB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Turret_AnimBP_AnimGraphNode_ModifyBone_6BD4A0244514A1531ABD76BBAF96CCC9();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void SetTurretRotation(const struct FRotator& Rotator);
	void AimAlpha(float Amt);
	void ExecuteUbergraph_Turret_AnimBP(int32 EntryPoint, float K2Node_CustomEvent_amt, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_3, float K2Node_Event_DeltaTimeX, const struct FRotator& K2Node_CustomEvent_rotator, class USkeletalMeshComponent* CallFunc_GetOwningComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1);
};

}


