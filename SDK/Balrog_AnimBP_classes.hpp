#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x156C (0x1954 - 0x3E8)
// AnimBlueprintGeneratedClass Balrog_AnimBP.Balrog_AnimBP_C
class UBalrog_AnimBP_C : public UQtnBodyAnimGraphTP
{
public:
	uint8                                        Pad_3D2C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_5;                              // 0x3F8(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_4;                    // 0x440(0x158)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_7;                     // 0x598(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_6;                     // 0x5C0(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_4;                              // 0x5E8(0x48)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_2;                  // 0x630(0xC0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_3;                    // 0x6F0(0x158)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_5;                     // 0x848(0x28)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_1;                  // 0x870(0xC0)(None)
	struct FAnimNode_Inertialization             AnimGraphNode_Inertialization;                     // 0x930(0x70)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_3;                              // 0x9A0(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_2;                              // 0x9E8(0x48)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0xA30(0xC0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_2;                    // 0xAF0(0x158)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_4;                     // 0xC48(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3;                     // 0xC70(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0xC98(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0xCE0(0x158)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0xE38(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0xE60(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0xE88(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0xEB0(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0xEF8(0x158)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_9;                  // 0x1050(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8;                  // 0x1078(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_7;                  // 0x10A0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6;                  // 0x10C8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0x10F0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0x1118(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x1140(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x1168(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x1190(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4;                       // 0x1210(0x30)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x1240(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x1268(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x12E8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x1318(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x1398(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_1;                      // 0x13C8(0xB0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x1478(0x30)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x14A8(0x28)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_2;                  // 0x14D0(0xE8)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0x15B8(0xE8)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum;                     // 0x16A0(0xB0)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x1750(0xE8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x1838(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x1868(0xB0)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x1918(0x30)(None)
	struct FRotator                              RotationNoise;                                     // 0x1948(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBalrog_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Balrog_AnimBP_AnimGraphNode_TransitionResult_3A2940424B93C54529FDE4A4686A2A0B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Balrog_AnimBP_AnimGraphNode_TransitionResult_0DFCD0BD4D8BAD10CB4127AF35944170();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Balrog_AnimBP_AnimGraphNode_TransitionResult_1404EB0943DE4FA5B774A2BBE07E5677();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Balrog_AnimBP_AnimGraphNode_TransitionResult_7D083A7B469EB27EF9A94F9E06A29A17();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Balrog_AnimBP_AnimGraphNode_TransitionResult_C4AB9D2C41C077020077B6A5D4031B6D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Balrog_AnimBP_AnimGraphNode_TransitionResult_735732E546A257EFDB33A2BA024F7176();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Balrog_AnimBP_AnimGraphNode_TransitionResult_EC8947C7439B34FA740C4DA90C326D43();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_Balrog_AnimBP(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_PerlinNoise1D_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, float CallFunc_PerlinNoise1D_ReturnValue_1, float CallFunc_PerlinNoise1D_ReturnValue_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, float K2Node_Event_DeltaTimeX);
};

}


