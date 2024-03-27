#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xC8 - 0xC0)
// BlueprintGeneratedClass MentalStateFollowAlly_Bot.MentalStateFollowAlly_Bot_C
class UMentalStateFollowAlly_Bot_C : public UQtnMentalStateFollowAlly
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UMentalStateFollowAlly_Bot_C* GetDefaultObj();

	void ThinkAboutEmoting(class AQtnPawn* CallFunc_GetAlly_ReturnValue, class AQtnPawn* CallFunc_GetAlly_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, class ABodyPawnAIAllyBot_C* K2Node_DynamicCast_AsBody_Pawn_AIAlly_Bot, bool K2Node_DynamicCast_bSuccess_1, class UQtnVerb* CallFunc_GetCurrentActiveVerb_ReturnValue, class UQtnEmoteVerb_Archetype_C* K2Node_DynamicCast_AsQtn_Emote_Verb_Archetype, bool K2Node_DynamicCast_bSuccess_2, class UQtnVerb* CallFunc_GetCurrentActiveVerb_ReturnValue_1, bool CallFunc_IsValid_ReturnValue);
	void OnThinkMentalState(float TimeSinceLastThought);
	void ExecuteUbergraph_MentalStateFollowAlly_Bot(int32 EntryPoint, float K2Node_Event_timeSinceLastThought);
};

}


