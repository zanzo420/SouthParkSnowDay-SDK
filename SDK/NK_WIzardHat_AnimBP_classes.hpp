#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3058 (0x3310 - 0x2B8)
// AnimBlueprintGeneratedClass NK_WIzardHat_AnimBP.NK_WIzardHat_AnimBP_C
class UNK_WIzardHat_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_4B11[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x2F8(0x118)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x410(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x430(0x20)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_10;                     // 0x450(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_9;                      // 0x890(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_8;                      // 0xCD0(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_7;                      // 0x1110(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_6;                      // 0x1550(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_5;                      // 0x1990(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_4;                      // 0x1DD0(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_3;                      // 0x2210(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_2;                      // 0x2650(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_1;                      // 0x2A90(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics;                        // 0x2ED0(0x440)(None)

	static class UClass* StaticClass();
	static class UNK_WIzardHat_AnimBP_C* GetDefaultObj();

	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_NK_WIzardHat_AnimBP(int32 EntryPoint);
};

}


