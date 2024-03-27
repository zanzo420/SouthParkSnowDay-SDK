#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0xA30 - 0x9F0)
// BlueprintGeneratedClass ClericHealingTotemVerb.ClericHealingTotemVerb_C
class UClericHealingTotemVerb_C : public UQtnVerb_Archetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         Verb_Done;                                         // 0x9F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_602F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnPawnMontage                       Verb_Action;                                       // 0xA00(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int32                                        Max_Concurrent_Totems;                             // 0xA10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6030[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AClericTotem_C*>                Existing_Totems;                                   // 0xA18(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	struct FTimerHandle                          LandTimer;                                         // 0xA28(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UClericHealingTotemVerb_C* GetDefaultObj();

	bool WillVerbSucceed(class UObject* PotentialTarget, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class AQtnPawn*>& CallFunc_GatherPawnsWithinRadius_pawns, int32 CallFunc_Array_Length_ReturnValue, class AQtnPawn* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_GetHealth_health, float CallFunc_GetHealth_maxHealth, bool CallFunc_Less_FloatFloat_ReturnValue);
	void HandleTotemDestruction(class AClericTotem_C* DestroyedTotem, bool CallFunc_Array_RemoveItem_ReturnValue);
	bool CanVerbStart(class UObject* PotentialTarget, class AClericTotem_C* Temp_object_Variable, bool CallFunc_CanVerbStart_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	bool IsVerbFinished();
	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool Interrupted, bool IsServer);
	void OnMontageEnded(class UAnimMontage* Montage, bool Interrupted, bool IsServer);
	void OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer);
	void OnAnimNotify(class UQtnAnimNotify* AnimNotify, bool IsServer);
	void OnFinishTimer();
	void ExecuteUbergraph_ClericHealingTotemVerb(int32 EntryPoint, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer_1, float CallFunc_StartVerbAction_ReturnValue, bool CallFunc_IsServer_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_interrupted, bool K2Node_Event_isServer_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class UAnimMontage* K2Node_Event_montage_1, bool K2Node_Event_interrupted_1, bool K2Node_Event_isServer_3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer_4, TArray<struct FHitResult>& CallFunc_LineTrace_hits, bool CallFunc_LineTrace_ReturnValue, class UQtnAnimNotify* K2Node_Event_animNotify, bool K2Node_Event_isServer, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAnimNotify_Custom2_C* K2Node_DynamicCast_AsQtn_Anim_Notify_Custom_2, bool K2Node_DynamicCast_bSuccess, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UAnimNotify_Custom1_C* K2Node_DynamicCast_AsQtn_Anim_Notify_Custom_1, bool K2Node_DynamicCast_bSuccess_1, bool Temp_bool_Variable, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, const struct FVector& K2Node_Select_Default, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class ATotem_Healing_RainbowLegion_C* CallFunc_SpawnActor_ServerOnly_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
};

}


