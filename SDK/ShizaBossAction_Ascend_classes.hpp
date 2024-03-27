#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x960 - 0x940)
// BlueprintGeneratedClass ShizaBossAction_Ascend.ShizaBossAction_Ascend_C
class UShizaBossAction_Ascend_C : public UShizaBossActionArchetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x940(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        TimeToCompleteEmerge;                              // 0x948(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        INTERNAL_TimeRemainingToComplete;                  // 0x94C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Radius;                                            // 0x950(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B4F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_ShizaHulud_CircleDamageGuide_C*    WarningCircle;                                     // 0x958(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UShizaBossAction_Ascend_C* GetDefaultObj();

	void GetActionHeuristic(float* HValue, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, class AQtnPawn_ShizaHulud_C* K2Node_DynamicCast_AsQtn_Pawn_Shiza_Hulud, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetActionHeuristic_HValue, float K2Node_Select_Default, float CallFunc_Add_FloatFloat_ReturnValue);
	void CanStartAction(bool* CanStart, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, bool CallFunc_CanStartAction_CanStart, class AQtnPawn_ShizaHulud_C* K2Node_DynamicCast_AsQtn_Pawn_Shiza_Hulud, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue);
	void OnDelayedStart();
	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer);
	void ExecuteUbergraph_ShizaBossAction_Ascend(int32 EntryPoint, class AQtnPawn_ShizaHulud_C* CallFunc_GetOwningShizaHulud_OwningShiza, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_1, class AQtnPawn_ShizaHulud_C* K2Node_DynamicCast_AsQtn_Pawn_Shiza_Hulud, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AQtnPawn_ShizaHulud_C* K2Node_DynamicCast_AsQtn_Pawn_Shiza_Hulud_1, bool K2Node_DynamicCast_bSuccess_1, class ABP_ShizaHulud_CircleDamageGuide_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FVector& CallFunc_FindSafeEmergancePosition_TargetLocation, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_2, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_3, class AQtnPawn_ShizaHulud_C* K2Node_DynamicCast_AsQtn_Pawn_Shiza_Hulud_2, bool K2Node_DynamicCast_bSuccess_2, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_4, class AQtnPawn_ShizaHulud_C* K2Node_DynamicCast_AsQtn_Pawn_Shiza_Hulud_3, bool K2Node_DynamicCast_bSuccess_3, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Vector_Normal2D_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_5, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, class AQtnPawn_ShizaHulud_C* CallFunc_GetOwningShizaHulud_OwningShiza_1);
};

}


