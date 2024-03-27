#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x87 (0x5F0 - 0x569)
// BlueprintGeneratedClass QtnGoal_SP_Day1_DeliverGas_Cabin.QtnGoal_SP_Day1_DeliverGas_Cabin_C
class UQtnGoal_SP_Day1_DeliverGas_Cabin_C : public UQtnGoal_SP_Day1_DeliverGasParent_C
{
public:
	uint8                                        Pad_5DA8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x570(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         VO_GasHolderKilled;                                // 0x578(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5DA9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnStruct_VOLine                     VO_GasHolderReminder;                              // 0x580(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5DAA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        VO_GasReminderTimer;                               // 0x5A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5DAB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnStruct_VOLine                     VO_SpokeEntry;                                     // 0x5B0(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5DAC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Special_Case_Failure_Frob_Text;                    // 0x5D8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UQtnGoal_SP_Day1_DeliverGas_Cabin_C* GetDefaultObj();

	void DEBUGONLY_Start_Goal(bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue);
	void VO_Gas_Holder_Reminder(bool CallFunc_IsServer_ReturnValue);
	void IsThisAIAnEncroacher(class AQtnPawn* AI, bool* Is_encroacher, class UClass* CallFunc_GetObjectClass_ReturnValue, enum class EQtnOutputYesNoEnum CallFunc_IsClassOfType_outputPin, enum class EQtnOutputYesNoEnum CallFunc_IsClassOfType_outputPin_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1);
	void ToggleScriptyBits();
	void GetSkirmish(bool CallFunc_IsValid_ReturnValue);
	void Receive_Skirmish_Notify(class AQtnSkirmish* Skirmish_Sending_Event, bool Final_skirmish_action, class FName Action_Tag, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsOnServer_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void Pick_Up_Quest_Item(class ABP_GoalPickup_C* Item_picked_up, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnGoalStart(bool WillEndImmediatelyFromLateJoin);
	void bindSkirmishSpawnEvents();
	void OnSkirmishSpawn(class AQtnSkirmish* Skirmish, class AQtnPawn* SkirmishPawn);
	void GasCarrierAIDeath(class AActor* DeadAI);
	void Players_arrived();
	void bindPlayerArrival();
	void ExecuteUbergraph_QtnGoal_SP_Day1_DeliverGas_Cabin(int32 EntryPoint, bool CallFunc_IsOnServer_ReturnValue, class AQtnSkirmish* K2Node_CustomEvent_Skirmish, class AQtnPawn* K2Node_CustomEvent_skirmishPawn, bool CallFunc_IsOnServer_ReturnValue_1, class ABodyPawnAI_C* K2Node_DynamicCast_AsBody_Pawn_AI, bool K2Node_DynamicCast_bSuccess, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool CallFunc_isThisAIAnEncroacher_is_encroacher, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_Event_willEndImmediatelyFromLateJoin, bool CallFunc_IsValid_ReturnValue, class AActor* K2Node_CustomEvent_deadAI, bool CallFunc_IsOnServer_ReturnValue_2, bool CallFunc_IsServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsServer_ReturnValue_1);
};

}


