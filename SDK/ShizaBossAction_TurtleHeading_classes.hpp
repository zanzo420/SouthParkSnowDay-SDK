#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x49 (0x989 - 0x940)
// BlueprintGeneratedClass ShizaBossAction_TurtleHeading.ShizaBossAction_TurtleHeading_C
class UShizaBossAction_TurtleHeading_C : public UShizaBossActionArchetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x940(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        NumTurtleHeadsExpected;                            // 0x948(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TurtleHeadTelegraphTime;                           // 0x94C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFQtnTurtleHeadTarget                 R_TurtleHeadTargetInfo;                            // 0x950(0x20)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	float                                        DamageRadius;                                      // 0x970(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36BE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFQtnTurtleHeadTarget>         TurtleHeadTargetData_ServerOnly;                   // 0x978(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         IsLastTurtleHead;                                  // 0x988(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UShizaBossAction_TurtleHeading_C* GetDefaultObj();

	void VO_StartAttackVO(class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue);
	void OnRep_r_TurtleHeadTargetInfo(bool CallFunc_IsServer_ReturnValue);
	void GetActionHeuristic(float* HValue, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, class AQtnPawn_ShizaHulud_C* K2Node_DynamicCast_AsQtn_Pawn_Shiza_Hulud, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetActionHeuristic_HValue, int32 CallFunc_GetActionRecordCount_OutCount, float CallFunc_Multiply_IntFloat_ReturnValue, float K2Node_Select_Default, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1);
	void CanStartAction(bool* CanStart, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, bool CallFunc_CanStartAction_CanStart, class AQtnPawn_ShizaHulud_C* K2Node_DynamicCast_AsQtn_Pawn_Shiza_Hulud, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue);
	void OnNotifyEnd_E22C4CC945682EF681EC9A86CD9A0293(class FName NotifyName);
	void OnNotifyBegin_E22C4CC945682EF681EC9A86CD9A0293(class FName NotifyName);
	void OnInterrupted_E22C4CC945682EF681EC9A86CD9A0293(class FName NotifyName);
	void OnBlendOut_E22C4CC945682EF681EC9A86CD9A0293(class FName NotifyName);
	void OnCompleted_E22C4CC945682EF681EC9A86CD9A0293(class FName NotifyName);
	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void StartTurtleHeadSubaction(bool IsServer);
	void OnAnimNotify(class UQtnAnimNotify* AnimNotify, bool IsServer);
	void RunTurtleHeadAnimation();
	void GenerateTargetSolution();
	void SelectNextTurtleHeadTarget();
	void OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer);
	void ExecuteUbergraph_ShizaBossAction_TurtleHeading(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_3, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName Temp_name_Variable, bool Temp_bool_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer_2, bool K2Node_CustomEvent_isServer, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, class AQtnPawn_ShizaHulud_C* CallFunc_GetOwningShizaHulud_OwningShiza, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AQtnPawn_ShizaHulud_C* CallFunc_GetOwningShizaHulud_OwningShiza_1, class UQtnAnimNotify* K2Node_Event_animNotify, bool K2Node_Event_isServer_1, class UAnimNotify_Custom1_C* K2Node_DynamicCast_AsQtn_Anim_Notify_Custom_1, bool K2Node_DynamicCast_bSuccess, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess_1, class AQtnPawn_ShizaHulud_C* CallFunc_GetOwningShizaHulud_OwningShiza_2, TArray<class ABodyPawnBase_C*>& CallFunc_GetPlayerAndBotBodies_bodies, class AQtnPawn_ShizaHulud_C* CallFunc_GetOwningShizaHulud_OwningShiza_3, class ABodyPawnBase_C* CallFunc_Array_Get_Item, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_FindSafeTurtleHeadPosition_TargetLocation, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, TArray<struct FHitResult>& CallFunc_LineTrace_hits, bool CallFunc_LineTrace_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item_1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, float K2Node_Select_Default, bool CallFunc_IsServer_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_ShizaHulud_CircleDamageGuide_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FFQtnTurtleHeadTarget& K2Node_MakeStruct_FQtnTurtleHeadTarget, class AQtnPawn_ShizaHulud_C* CallFunc_GetOwningShizaHulud_OwningShiza_4, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, class FName K2Node_CustomEvent_NotifyName_4, const struct FFQtnTurtleHeadTarget& CallFunc_Array_Get_Item_2, const struct FFQtnTurtleHeadTarget& K2Node_MakeStruct_FQtnTurtleHeadTarget_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer, float CallFunc_SelectFloat_ReturnValue, const struct FFQtnTurtleHeadTarget& CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
};

}


