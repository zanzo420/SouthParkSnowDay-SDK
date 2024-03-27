#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xB8 - 0xB0)
// BlueprintGeneratedClass MentalSubStateHealTactics_AllyBot.MentalSubStateHealTactics_AllyBot_C
class UMentalSubStateHealTactics_AllyBot_C : public UMentalSubStateHealTactics_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UMentalSubStateHealTactics_AllyBot_C* GetDefaultObj();

	void ThinkAboutPlacingHealingTotem(class UQtnVerb* L_healingVerb, class ABodyPawnAIAllyBot_C* L_selfBody, class UQtnAllyBotManager* CallFunc_GetAllyBotManager_ServerOnly_ReturnValue, class UAllyBotManager_C* K2Node_DynamicCast_AsAlly_Bot_Manager, bool K2Node_DynamicCast_bSuccess, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_CanAllyBotThinkAboutHealing_yes, class UClass* CallFunc_GetObjectClass_ReturnValue, class ABodyControllerAllyBot_C* K2Node_DynamicCast_AsBody_Controller_Ally_Bot, bool K2Node_DynamicCast_bSuccess_2, class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue, class ABodyPawnAIAllyBot_C* K2Node_DynamicCast_AsBody_Pawn_AIAlly_Bot, bool K2Node_DynamicCast_bSuccess_3, int32 CallFunc_Array_Length_ReturnValue, class AQtnBodyPawn* CallFunc_GetAllyInNeedOfHelp_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_WillVerbSucceed_ReturnValue, const struct FQtnVerbRequest& K2Node_MakeStruct_QtnVerbRequest);
	void OnThinkMentalSubState(float TimeSinceLastThought);
	void OnEnterMentalSubState(class UQtnMentalSubState* PreviousMentalSubState);
	void OnExitMentalSubState(TSubclassOf<class UQtnMentalSubState> NextMentalSubStateClass);
	void ExecuteUbergraph_MentalSubStateHealTactics_AllyBot(int32 EntryPoint, class UQtnAllyBotManager* CallFunc_GetAllyBotManager_ServerOnly_ReturnValue, class UAllyBotManager_C* K2Node_DynamicCast_AsAlly_Bot_Manager, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_timeSinceLastThought, class UQtnMentalSubState* K2Node_Event_previousMentalSubState, TSubclassOf<class UQtnMentalSubState> K2Node_Event_nextMentalSubStateClass, class UQtnAllyBotManager* CallFunc_GetAllyBotManager_ServerOnly_ReturnValue_1, class UAllyBotManager_C* K2Node_DynamicCast_AsAlly_Bot_Manager_1, bool K2Node_DynamicCast_bSuccess_1);
};

}


