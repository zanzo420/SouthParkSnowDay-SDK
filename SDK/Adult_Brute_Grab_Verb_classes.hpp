#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xB00 - 0xAD0)
// BlueprintGeneratedClass Adult_Brute_Grab_Verb.Adult_Brute_Grab_Verb_C
class UAdult_Brute_Grab_Verb_C : public UBrute_Grab_Verb_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAD0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         R_hasAttemptedGrab;                                // 0xAD8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_60F3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnRangedFloat                       GiveUpDuration;                                    // 0xADC(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        GiveUpTime;                                        // 0xAE4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IntroCompleted;                                    // 0xAE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60F4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnPawnMontage                       Verb_Action;                                       // 0xAF0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UAdult_Brute_Grab_Verb_C* GetDefaultObj();

	float GetLocoTurnSpeed(bool K2Node_SwitchEnum_CmpSuccess);
	float GetLocomotionRatio(bool K2Node_SwitchEnum_CmpSuccess);
	TSubclassOf<class UQtnDamageType> GetDamageType(enum class EQtnEnumGrabVerbState Temp_byte_Variable, TSubclassOf<class UQtnDamageType> Temp_class_Variable, TSubclassOf<class UQtnDamageType> Temp_class_Variable_1, TSubclassOf<class UQtnDamageType> CallFunc_GetDamageType_ReturnValue, TSubclassOf<class UQtnDamageType> K2Node_Select_Default);
	void OnRep_r_hasAttemptedGrab(class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, float CallFunc_StartVerbAction_ReturnValue);
	void OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	void TickPull(class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, const struct FVector& CallFunc_GetBodyIntentionWorldMovement_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, bool CallFunc_Vector_IsNearlyZero_ReturnValue, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue, class UQtnPathFollowingComponent* CallFunc_GetQtnPathFollowingComponent_ReturnValue, bool CallFunc_IsAtDestination_ReturnValue, float CallFunc_HasPathfindingFailed_elapsedTime, bool CallFunc_HasPathfindingFailed_ReturnValue, float CallFunc_GetElapsedVerbTime_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class UObject* CallFunc_GetIntendedTarget_ReturnValue, class AQtnPawn* K2Node_DynamicCast_AsQtn_Pawn, bool K2Node_DynamicCast_bSuccess, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, TArray<class AQtnPawn*>& CallFunc_GetOverlappingPawns_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	void StartPullAction(bool CallFunc_IsServer_ReturnValue, float CallFunc_GetRandomValue_ReturnValue);
	void MulticastGiveUpOnGrab();
	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool Interrupted, bool IsServer);
	void OnMontageEnded(class UAnimMontage* Montage, bool Interrupted, bool IsServer);
	void ExecuteUbergraph_Adult_Brute_Grab_Verb(int32 EntryPoint, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer_2, class UAnimMontage* K2Node_Event_montage_1, bool K2Node_Event_interrupted_1, bool K2Node_Event_isServer_1, float CallFunc_StartVerbAction_ReturnValue, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_interrupted, bool K2Node_Event_isServer, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1);
};

}


