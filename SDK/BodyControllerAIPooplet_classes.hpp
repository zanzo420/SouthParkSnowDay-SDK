#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB (0x688 - 0x67D)
// BlueprintGeneratedClass BodyControllerAIPooplet.BodyControllerAIPooplet_C
class ABodyControllerAIPooplet_C : public ABodyControllerAISwarmer_C
{
public:
	uint8                                        Pad_4F01[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x680(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABodyControllerAIPooplet_C* GetDefaultObj();

	void UserConstructionScript(class UPathFollowingComponent* CallFunc_GetPathFollowingComponent_ReturnValue, class UAIPerceptionComponent* CallFunc_GetAIPerceptionComponent_ReturnValue, enum class EQtnUtilitiesSwitchQuality CallFunc_BranchUseSwitchQuality_Branch, bool K2Node_SwitchEnum_CmpSuccess);
	void OnQtnReadyForGameplay(class AQtnBodyPawn* bodyPawn);
	void OnThink(float TimeSinceLastThought);
	void ExecuteUbergraph_BodyControllerAIPooplet(int32 EntryPoint, class AQtnBodyPawn* K2Node_Event_bodyPawn, const struct FQtnRangedFloat& K2Node_MakeStruct_QtnRangedFloat, float K2Node_Event_timeSinceLastThought, class UQtnPathFollowingComponent* CallFunc_GetQtnPathFollowingComponent_ReturnValue, float CallFunc_HasPathfindingFailed_elapsedTime, bool CallFunc_HasPathfindingFailed_ReturnValue, class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue, float CallFunc_GetHealth_health, float CallFunc_GetHealth_maxHealth, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, const struct FQtnDamageInfo& K2Node_MakeStruct_QtnDamageInfo, bool CallFunc_Greater_FloatFloat_ReturnValue, class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue_1, bool CallFunc_IsBodyIdle_ReturnValue);
};

}


