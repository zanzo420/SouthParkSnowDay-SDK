#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x68C - 0x67D)
// BlueprintGeneratedClass BodyControllerAICartmanBuddy.BodyControllerAICartmanBuddy_C
class ABodyControllerAICartmanBuddy_C : public ABodyControllerAICartmanBase_C
{
public:
	uint8                                        Pad_4E6B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x680(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        PathfindPatience;                                  // 0x688(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABodyControllerAICartmanBuddy_C* GetDefaultObj();

	void IsTeleportTargetStable(class AActor*& TeleportTarget, bool* IsStable, class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsOnNavMesh_ReturnValue, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsDead_canBeRevived, bool CallFunc_IsDead_ReturnValue, bool CallFunc_IsBodyIdle_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void GetTeleportTarget(class AActor** TeleportTarget, class UQtnPathFollowingComponent* CallFunc_GetQtnPathFollowingComponent_ReturnValue, class AActor* CallFunc_GetFormationTarget_ReturnValue, class AActor* CallFunc_GetAIDestinationActor_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void ThinkAboutTeleporting(class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue, class AActor* CallFunc_GetTeleportTarget_teleportTarget, class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue_1, bool CallFunc_IsTeleportTargetStable_isStable, bool CallFunc_HasJustTeleported_ReturnValue, bool CallFunc_IsAirborne_ReturnValue, bool CallFunc_IsBodyIdle_ReturnValue, const struct FQtnVerbRequest& K2Node_MakeStruct_QtnVerbRequest, bool CallFunc_BooleanOR_ReturnValue, class UQtnPathFollowingComponent* CallFunc_GetQtnPathFollowingComponent_ReturnValue, float CallFunc_IsPathfindingBlocked_elapsedTime, bool CallFunc_IsPathfindingBlocked_ReturnValue, float CallFunc_HasPathfindingFailed_elapsedTime, bool CallFunc_HasPathfindingFailed_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1);
	void OnThink(float TimeSinceLastThought);
	void OnQtnReadyForGameplay(class AQtnBodyPawn* bodyPawn);
	void ExecuteUbergraph_BodyControllerAICartmanBuddy(int32 EntryPoint, class AActor* CallFunc_GetFormationTarget_ReturnValue, class AQtnBodyPawn* K2Node_Event_bodyPawn, bool CallFunc_IsValid_ReturnValue, const struct FQtnRangedFloat& K2Node_MakeStruct_QtnRangedFloat, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, float K2Node_Event_timeSinceLastThought, class AQtnBodyPawn* CallFunc_GetLocalPlayerOriginalBody_ReturnValue);
};

}


