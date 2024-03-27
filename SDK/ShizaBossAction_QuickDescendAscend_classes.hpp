#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x958 - 0x940)
// BlueprintGeneratedClass ShizaBossAction_QuickDescendAscend.ShizaBossAction_QuickDescendAscend_C
class UShizaBossAction_QuickDescendAscend_C : public UShizaBossActionArchetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x940(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        TimeToCompleteSubmerge;                            // 0x948(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        INTERNAL_TimeRemainingToComplete;                  // 0x94C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Internal_HasStartedRapidAscend;                    // 0x950(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_412D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinimumDistanceToMoveFromNearestPlayer;            // 0x954(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UShizaBossAction_QuickDescendAscend_C* GetDefaultObj();

	void GetActionHeuristic(float* HValue, TArray<class AQtnBodyPawn*>& CallFunc_GetAllTargetEnemies_TargetPawns, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AQtnPawn_ShizaHulud_C* K2Node_DynamicCast_AsQtn_Pawn_Shiza_Hulud, bool K2Node_DynamicCast_bSuccess, float CallFunc_FindNearestActor_Distance, class AActor* CallFunc_FindNearestActor_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_GetActionHeuristic_HValue);
	void CanStartAction(bool* CanStart, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, bool CallFunc_CanStartAction_CanStart, class AQtnPawn_ShizaHulud_C* K2Node_DynamicCast_AsQtn_Pawn_Shiza_Hulud, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void OnActiveVerbTicked(struct FQtnPawnIntentions& PawnIntentions, float DeltaSeconds, float ElapsedTime, bool IsServer);
	void OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer);
	void ExecuteUbergraph_ShizaBossAction_QuickDescendAscend(int32 EntryPoint, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_1, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FQtnPawnIntentions& K2Node_Event_pawnIntentions, float K2Node_Event_DeltaSeconds, float K2Node_Event_elapsedTime, bool K2Node_Event_isServer_1, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_2, class AQtnPawn_ShizaHulud_C* K2Node_DynamicCast_AsQtn_Pawn_Shiza_Hulud, bool K2Node_DynamicCast_bSuccess, float CallFunc_Subtract_FloatFloat_ReturnValue, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_3, class AQtnPawn_ShizaHulud_C* K2Node_DynamicCast_AsQtn_Pawn_Shiza_Hulud_1, bool K2Node_DynamicCast_bSuccess_1, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_4, class AQtnPawn_ShizaHulud_C* K2Node_DynamicCast_AsQtn_Pawn_Shiza_Hulud_2, bool K2Node_DynamicCast_bSuccess_2, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_5, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, class AQtnPawn_ShizaHulud_C* K2Node_DynamicCast_AsQtn_Pawn_Shiza_Hulud_3, bool K2Node_DynamicCast_bSuccess_3, class AActor* CallFunc_SpawnDangerZone_Target, const struct FVector& CallFunc_FindSafeEmergancePosition_TargetLocation, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_6, class AQtnPawn_ShizaHulud_C* K2Node_DynamicCast_AsQtn_Pawn_Shiza_Hulud_4, bool K2Node_DynamicCast_bSuccess_4);
};

}


