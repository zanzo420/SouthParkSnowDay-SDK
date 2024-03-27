#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x23 (0x6A0 - 0x67D)
// BlueprintGeneratedClass BodyControllerAllyBot.BodyControllerAllyBot_C
class ABodyControllerAllyBot_C : public ABodyControllerAI_C
{
public:
	uint8                                        Pad_2BFF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x680(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        PathfindPatience;                                  // 0x688(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ElapsedTimeBeingDeadAndNeglected;                  // 0x68C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DeadAndNeglectPatience;                            // 0x690(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ElapsedTimeWithoutRelevantEnemyDuringCombat;       // 0x694(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHealingTotemVerb_C*                   HealingVerb;                                       // 0x698(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABodyControllerAllyBot_C* GetDefaultObj();

	void AdoptClosestPlayer(bool ForceRefresh, class AQtnBodyPawn* CallFunc_GetRoamingTarget_ReturnValue, class AQtnBodyPawn* CallFunc_GetClosestPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void ThinkAboutHealingOthers(class UQtnMentalSubState* SubState, class UClass* L_verbClass, class ABodyPawnAIAllyBot_C* L_selfBody, class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class UQtnAllyBotManager* CallFunc_GetAllyBotManager_ServerOnly_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, class UAllyBotManager_C* K2Node_DynamicCast_AsAlly_Bot_Manager, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_CanAllyBotThinkAboutHealing_yes, float CallFunc_GetAllyBotDamageMultiplier_multiplier, float CallFunc_GetMoraleRatio_ServerOnly_moraleRatio, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AQtnBodyPawn* CallFunc_GetAllyInNeedOfHelp_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue_1, class ABodyPawnAIAllyBot_C* K2Node_DynamicCast_AsBody_Pawn_AIAlly_Bot, bool K2Node_DynamicCast_bSuccess_2);
	class AQtnBodyPawn* ChooseAllyToHelp(TArray<class AQtnBodyPawn*>& AllyBodies, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class AQtnBodyPawn* CallFunc_Array_Get_Item, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsAliveAndConscious_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void ThinkAboutGoingHome(float TimeSinceLastThought, bool CallFunc_Greater_FloatFloat_ReturnValue, class UQtnAllyBotManager* CallFunc_GetAllyBotManager_ServerOnly_ReturnValue, class UAllyBotManager_C* K2Node_DynamicCast_AsAlly_Bot_Manager, bool K2Node_DynamicCast_bSuccess, float CallFunc_Add_FloatFloat_ReturnValue, class AQtnPawn* CallFunc_GetRelevantEnemy_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue, class ABodyPawnAI_C* K2Node_DynamicCast_AsBody_Pawn_AI, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, class AActor* CallFunc_IsUsingScriptedDestination_destinationActor, bool CallFunc_IsUsingScriptedDestination_ReturnValue, class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue_2, class UQtnPathFollowingComponent* CallFunc_GetQtnPathFollowingComponent_ReturnValue, enum class EQtnPawnLOD CallFunc_GetPawnLOD_ReturnValue, float CallFunc_HasPathfindingFailed_elapsedTime, bool CallFunc_HasPathfindingFailed_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_IsPathfindingBlocked_elapsedTime, bool CallFunc_IsPathfindingBlocked_ReturnValue, bool CallFunc_IsAliveAndConscious_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void OnThink(float TimeSinceLastThought);
	void OnQtnReadyForGameplay(class AQtnBodyPawn* bodyPawn);
	void ExecuteUbergraph_BodyControllerAllyBot(int32 EntryPoint, float K2Node_Event_timeSinceLastThought, class AQtnBodyPawn* K2Node_Event_bodyPawn, class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue, TArray<class UQtnVerb*>& CallFunc_GetVerbs_verbs, bool CallFunc_Array_IsValidIndex_ReturnValue, class UQtnVerb* CallFunc_Array_Get_Item, class UHealingTotemVerb_C* K2Node_DynamicCast_AsHealing_Totem_Verb, bool K2Node_DynamicCast_bSuccess);
};

}


