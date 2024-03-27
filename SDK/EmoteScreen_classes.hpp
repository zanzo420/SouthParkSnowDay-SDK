#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x138 - 0x130)
// BlueprintGeneratedClass EmoteScreen.EmoteScreen_C
class UEmoteScreen_C : public UQtnScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UEmoteScreen_C* GetDefaultObj();

	void CanEmote(bool* Result, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UQtnVerb* CallFunc_GetCurrentActiveVerb_ReturnValue, class UQtnEmoteVerb_Archetype_C* K2Node_DynamicCast_AsQtn_Emote_Verb_Archetype, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsBodyIdle_ReturnValue);
	void OnUIScreenActionPressed(enum class EQtnUIScreenActionEnum ScreenAction);
	void OnUIScreenActionReleased(enum class EQtnUIScreenActionEnum ScreenAction);
	void OnScreenPaused();
	void OnScreenTicked(float DeltaSeconds);
	void ExecuteUbergraph_EmoteScreen(int32 EntryPoint, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue, enum class EQtnUIScreenActionEnum K2Node_Event_screenAction, bool K2Node_SwitchEnum_CmpSuccess, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, class UEmoteWidget_C* K2Node_DynamicCast_AsEmote_Widget, bool K2Node_DynamicCast_bSuccess, enum class EQtnUIScreenActionEnum K2Node_Event_screenAction_1, bool K2Node_SwitchEnum_CmpSuccess_1, class UUserWidget* CallFunc_GetMainWidget_ReturnValue_1, float K2Node_Event_DeltaSeconds, class UEmoteWidget_C* K2Node_DynamicCast_AsEmote_Widget_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_CanEmote_result);
};

}


