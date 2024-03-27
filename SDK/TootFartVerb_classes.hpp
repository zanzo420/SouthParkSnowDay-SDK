#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2E (0xA1E - 0x9F0)
// BlueprintGeneratedClass TootFartVerb.TootFartVerb_C
class UTootFartVerb_C : public UQtnVerb_Archetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FQtnPawnMontage>               TootActions;                                       // 0x9F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FQtnPawnMontage>               R_randomizedTootActions;                           // 0xA08(0x10)(Edit, BlueprintVisible, Net, Transient, DisableEditOnInstance)
	int32                                        R_tootIndex;                                       // 0xA18(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFinished;                                        // 0xA1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsAirToot;                                         // 0xA1D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UTootFartVerb_C* GetDefaultObj();

	bool IsVerbFinished();
	void RandomizeToots_ServerOnly(TArray<struct FQtnPawnMontage>& Temp_wildcard_Variable, TArray<struct FQtnPawnMontage>& Temp_wildcard_Variable_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Variable_2, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1);
	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void OnVerbInit(bool IsServer);
	void OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer);
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool Interrupted, bool IsServer);
	void ExecuteUbergraph_TootFartVerb(int32 EntryPoint, int32 Temp_int_Variable, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer_3, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, const struct FQtnDamageInfo& K2Node_MakeStruct_QtnDamageInfo, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_1, TArray<class AActor*>& CallFunc_QtnDoRadialDamage_ReturnValue, bool K2Node_Event_isServer_2, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer_1, float CallFunc_StartVerbAction_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_interrupted, bool K2Node_Event_isServer, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_2, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_3, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, bool CallFunc_IsPlayerControlled_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_2, bool CallFunc_IsTouchingGround_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
};

}


