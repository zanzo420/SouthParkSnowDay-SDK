#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0xA59 - 0xA50)
// BlueprintGeneratedClass VerbPlayerCheatBase.VerbPlayerCheatBase_C
class UVerbPlayerCheatBase_C : public UQtn_CheatVerb_Archetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA50(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	enum class EPlayerCheatInputStateEnum        PlayerCheatInputState;                             // 0xA58(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UVerbPlayerCheatBase_C* GetDefaultObj();

	void OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue);
	void Set_Cheat_Input_State(enum class EPlayerCheatInputStateEnum DesiredState, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void StartCheatExecution();
	bool IsVerbFinished(enum class EPlayerCheatInputStateEnum Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool K2Node_Select_Default);
	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void OnActiveVerbTicked(struct FQtnPawnIntentions& PawnIntentions, float DeltaSeconds, float ElapsedTime, bool IsServer);
	void OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer);
	void ServerEnsureRemoteCheatState(enum class EPlayerCheatInputStateEnum DesiredState);
	void MultiCastEnsureRemoteCheatState(enum class EPlayerCheatInputStateEnum DesiredState);
	void ExecuteUbergraph_VerbPlayerCheatBase(int32 EntryPoint, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer_2, bool CallFunc_IsLocallyControlled_ReturnValue, const struct FQtnPawnIntentions& K2Node_Event_pawnIntentions, float K2Node_Event_DeltaSeconds, float K2Node_Event_elapsedTime, bool K2Node_Event_isServer_1, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsAssociatedInputActionPressed_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_1, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_2, float CallFunc_GetElapsedVerbTime_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, enum class EPlayerCheatInputStateEnum K2Node_CustomEvent_desiredState_1, enum class EPlayerCheatInputStateEnum K2Node_CustomEvent_desiredState, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsVerbActive_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_3, bool CallFunc_IsLocallyControlled_ReturnValue_1);
};

}


