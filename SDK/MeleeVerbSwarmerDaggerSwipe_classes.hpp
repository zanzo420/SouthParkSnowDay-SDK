#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0xA58 - 0x9F0)
// BlueprintGeneratedClass MeleeVerbSwarmerDaggerSwipe.MeleeVerbSwarmerDaggerSwipe_C
class UMeleeVerbSwarmerDaggerSwipe_C : public UQtnVerb_Archetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         Verb_Done;                                         // 0x9F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6441[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FQtnPawnMontage>               Attacks;                                           // 0xA00(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FQtnPawnMontage                       SelectedAttack;                                    // 0xA10(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance, NoDestructor)
	enum class ESwarmerMeleeEnum                 SwarmerMeleeState;                                 // 0xA20(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6442[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnPawnMontage                       Verb_Intro;                                        // 0xA28(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        Max_Speed_Multiplier;                              // 0xA38(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ChaseTimer;                                        // 0xA3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnPawnMontage                       Verb_Outro;                                        // 0xA40(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        ChaseTimeMax;                                      // 0xA50(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MeleeDistance;                                     // 0xA54(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMeleeVerbSwarmerDaggerSwipe_C* GetDefaultObj();

	void OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void TargetInRange(bool* In_Range, const struct FQtnRangedFloat& K2Node_MakeStruct_QtnRangedFloat, const struct FQtnRangedFloat& K2Node_MakeStruct_QtnRangedFloat_1, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, class UObject* CallFunc_GetIntendedTarget_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsWithinVerbRange_ReturnValue);
	float GetLocoTurnSpeed(enum class ESwarmerMeleeEnum Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float K2Node_Select_Default);
	float GetLocomotionRatio(enum class ESwarmerMeleeEnum Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float K2Node_Select_Default);
	void SetSwarmerMeleeState(enum class ESwarmerMeleeEnum SwarmerMeleeState, float CallFunc_StartVerbAction_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, class UQtnMovementComponent* CallFunc_GetQtnMovementComponent_ReturnValue, float CallFunc_StartVerbAction_ReturnValue_1, float CallFunc_StartVerbAction_ReturnValue_2);
	bool IsVerbFinished();
	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void OnMontageEnded(class UAnimMontage* Montage, bool Interrupted, bool IsServer);
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool Interrupted, bool IsServer);
	void OnActiveVerbTicked(struct FQtnPawnIntentions& PawnIntentions, float DeltaSeconds, float ElapsedTime, bool IsServer);
	void OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer);
	void ExecuteUbergraph_MeleeVerbSwarmerDaggerSwipe(int32 EntryPoint, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer_4, class UAnimMontage* K2Node_Event_montage_1, bool K2Node_Event_interrupted_1, bool K2Node_Event_isServer_3, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_interrupted, bool K2Node_Event_isServer_2, const struct FQtnPawnMontage& CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, bool K2Node_SwitchEnum_CmpSuccess, const struct FQtnPawnIntentions& K2Node_Event_pawnIntentions, float K2Node_Event_DeltaSeconds, float K2Node_Event_elapsedTime, bool K2Node_Event_isServer_1, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_TargetInRange_In_Range, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_1, class UQtnMovementComponent* CallFunc_GetQtnMovementComponent_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, class UObject* CallFunc_GetIntendedTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
};

}


