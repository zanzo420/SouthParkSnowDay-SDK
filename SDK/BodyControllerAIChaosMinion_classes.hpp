#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1B (0x698 - 0x67D)
// BlueprintGeneratedClass BodyControllerAIChaosMinion.BodyControllerAIChaosMinion_C
class ABodyControllerAIChaosMinion_C : public ABodyControllerAI_C
{
public:
	uint8                                        Pad_4DFC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x680(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        PathfindPatience;                                  // 0x688(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DFD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnBodyPawn*                          OwningPlayer;                                      // 0x690(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABodyControllerAIChaosMinion_C* GetDefaultObj();

	void AdoptOwningPlayer(class AQtnBodyPawn* OwningPlayer, const struct FQtnRangedFloat& K2Node_MakeStruct_QtnRangedFloat);
	void ThinkAboutDespawning(float TimeSinceLastThought, class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue, class AActor* CallFunc_IsUsingScriptedDestination_destinationActor, bool CallFunc_IsUsingScriptedDestination_ReturnValue, class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue_1, enum class EQtnPawnLOD CallFunc_GetPawnLOD_ReturnValue, bool CallFunc_IsAliveAndConscious_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UQtnPathFollowingComponent* CallFunc_GetQtnPathFollowingComponent_ReturnValue, float CallFunc_IsPathfindingBlocked_elapsedTime, bool CallFunc_IsPathfindingBlocked_ReturnValue, float CallFunc_HasPathfindingFailed_elapsedTime, bool CallFunc_HasPathfindingFailed_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void OnQtnReadyForGameplay(class AQtnBodyPawn* bodyPawn);
	void OnThink(float TimeSinceLastThought);
	void ExecuteUbergraph_BodyControllerAIChaosMinion(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class AQtnBodyPawn* K2Node_Event_bodyPawn, float K2Node_Event_timeSinceLastThought);
};

}


