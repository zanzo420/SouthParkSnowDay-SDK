#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2E8 - 0x2D8)
// BlueprintGeneratedClass MentalStateCombat_AllyBot.MentalStateCombat_AllyBot_C
class UMentalStateCombat_AllyBot_C : public UMentalStateCombat_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AQtnPawn*                              TauntedEnemy;                                      // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMentalStateCombat_AllyBot_C* GetDefaultObj();

	void ThinkAboutIntroTaunt(class AQtnBodyPawn* L_selfBody, class AQtnPawn* L_relevantEnemy, const struct FQtnVerbRequest& K2Node_MakeStruct_QtnVerbRequest, bool CallFunc_IsValid_ReturnValue, TSubclassOf<class UQtnTeam> CallFunc_GetTeam_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AQtnPawn* CallFunc_GetRelevantEnemy_ReturnValue, class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue);
	void OnThinkMentalState(float TimeSinceLastThought);
	void OnEnterMentalState(class UQtnMentalState* PreviousMentalState);
	void ExecuteUbergraph_MentalStateCombat_AllyBot(int32 EntryPoint, class ABodyControllerAllyBot_C* K2Node_DynamicCast_AsBody_Controller_Ally_Bot, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_timeSinceLastThought, class UQtnMentalState* K2Node_Event_previousMentalState, class ABodyControllerAllyBot_C* K2Node_DynamicCast_AsBody_Controller_Ally_Bot_1, bool K2Node_DynamicCast_bSuccess_1);
};

}


