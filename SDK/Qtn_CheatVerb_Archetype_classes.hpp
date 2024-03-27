#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0xA50 - 0x9F0)
// BlueprintGeneratedClass Qtn_CheatVerb_Archetype.Qtn_CheatVerb_Archetype_C
class UQtn_CheatVerb_Archetype_C : public UQtnVerb_Archetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        R_InvokeCount;                                     // 0x9F8(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Max_Invoke_Count;                                  // 0x9FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Remaining_Time__Ratio_;                            // 0xA00(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4C7E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UQtnStatusEffect>          Status_Effect_To_Apply;                            // 0xA08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class UQtnVerb>                  Verb_Class;                                        // 0xA10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FGameplayTag                          BullshitType;                                      // 0xA18(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            FTUXCheatVerbStarted;                              // 0xA20(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            BSCheatActivated;                                  // 0xA30(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            BullshitRefilled;                                  // 0xA40(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UQtn_CheatVerb_Archetype_C* GetDefaultObj();

	void Increment_Invoke_Count_Server_Only(class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, int32 Temp_int_Variable, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void GetExpendedBullshitAmount(int32* ExpendedBullshits, int32 CallFunc_Subtract_IntInt_ReturnValue);
	void OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, class UQtnDebugWrapper* L_debugWrapper, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3);
	void Reset_Invoke_Count_ServerOnly(bool CallFunc_IsServer_ReturnValue);
	void Do_Cheat_Activation_Presentation(bool CallFunc_IsServer_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue);
	void Decrement_Invoke_Count_Server_Only(class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue);
	void HasCheatVerbBeenUsed(bool* HasBeenUsed, bool CallFunc_Less_IntInt_ReturnValue);
	void Check_Invoke_Count_and_Remove_Verb();
	bool CanVerbStart(class UObject* PotentialTarget, bool CallFunc_CanVerbStart_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer);
	void OnVerbInit(bool IsServer);
	void OnBullshitRefilled_MULTI();
	void ExecuteUbergraph_Qtn_CheatVerb_Archetype(int32 EntryPoint, class UClass* CallFunc_GetObjectClass_ReturnValue, TSoftClassPtr<class UQtn_CheatVerb_Archetype_C> CallFunc_Conv_ClassToSoftClassReference_ReturnValue, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer_2, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer_1, bool K2Node_Event_isServer, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess);
	void BullshitRefilled__DelegateSignature();
	void BSCheatActivated__DelegateSignature();
	void FTUXCheatVerbStarted__DelegateSignature();
};

}


