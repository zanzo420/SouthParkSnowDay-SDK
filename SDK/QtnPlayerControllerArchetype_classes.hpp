#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x810 - 0x7A0)
// BlueprintGeneratedClass QtnPlayerControllerArchetype.QtnPlayerControllerArchetype_C
class AQtnPlayerControllerArchetype_C : public AQtnPlayerController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ULookAtPerceptionComponent_C*          LookAtPerceptionComponent;                         // 0x7A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         IsUIOff;                                           // 0x7B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31B3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ElapsedRunForwardTime_LocalOnly;                   // 0x7B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  TutorialPrompt_Keys;                               // 0x7B8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         TutorialSatisfied;                                 // 0x7D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31B4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                TutorialHeading;                                   // 0x7D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FText                                  TutorialPrompt_Gamepad;                            // 0x7E8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                TutorialPrompt;                                    // 0x800(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AQtnPlayerControllerArchetype_C* GetDefaultObj();

	void TrainingSatisfied_(class UClass* QtnTutorial, const class FString& Prompt, bool* IsFound, bool* IsSatisfied, bool CallFunc_IsValidClass_ReturnValue, enum class EQtnTutorialStatus CallFunc_GetTutorialState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void PrimeNecessarySounds(const struct FSoundWaveRefs& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_PrimeSoundCues_ReturnValue, bool CallFunc_PrimeSoundWaves_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_ShouldPrimeSoundsOnPlatform_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, TArray<class UQtnVerb*>& CallFunc_GetAllEquippedVerbs_pawnVerbs, int32 CallFunc_Array_Length_ReturnValue, class UQtnVerb* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UQtnVerb_Archetype_C* K2Node_DynamicCast_AsQtn_Verb_Archetype, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, const struct FSoundWaveRefs& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, bool CallFunc_PrimeSoundWaves_ReturnValue_1, bool CallFunc_PrimeSoundCues_ReturnValue_1);
	void Start_Sprint_Training(enum class EQtnTutorialStatus CallFunc_GetTutorialState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void OnPlayerControllerDebugDisplay(class UQtnDebugWrapper* DebugWrapper, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UObject*>& CallFunc_GetSprintInhibitors_ReturnValue, class UObject* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue);
	void ReceiveTick(float DeltaSeconds);
	void OnLocalPlayerScriptedControlChanged(bool IsUnderScriptedControl);
	void OnPlayerControllerOccupy(class AQtnBodyPawn* OccupiedBodyPawn, bool FirstTime);
	void ExecuteUbergraph_QtnPlayerControllerArchetype(int32 EntryPoint, bool K2Node_Event_IsUnderScriptedControl, float K2Node_Event_DeltaSeconds, class AQtnBodyPawn* K2Node_Event_occupiedBodyPawn, bool K2Node_Event_firstTime, bool CallFunc_ShouldPrimeSoundsOnPlatform_ReturnValue, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, class AQtnPawn* CallFunc_WaitForReadyForGameplay_readyPawn);
};

}


