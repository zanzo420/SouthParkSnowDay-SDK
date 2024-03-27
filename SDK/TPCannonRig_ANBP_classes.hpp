#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2F0 (0x5A8 - 0x2B8)
// AnimBlueprintGeneratedClass TPCannonRig_ANBP.TPCannonRig_ANBP_C
class UTPCannonRig_ANBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_4109[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x2F8(0x108)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x400(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x420(0x108)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x528(0x48)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x570(0x20)(None)
	struct FRotator                              BarrelRotator;                                     // 0x590(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               AmmoOffset;                                        // 0x59C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTPCannonRig_ANBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void SetPitch(float Pitch);
	void SetAmmoPercent(float Percent);
	void ExecuteUbergraph_TPCannonRig_ANBP(int32 EntryPoint, float K2Node_CustomEvent_Percent, float CallFunc_FClamp_ReturnValue, float K2Node_CustomEvent_Pitch, float CallFunc_Lerp_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue);
};

}


