#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x139 - 0x130)
// BlueprintGeneratedClass PlayerHUDScreen.PlayerHUDScreen_C
class UPlayerHUDScreen_C : public UQtnScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         SafeToBringUpMenus;                                // 0x138(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UPlayerHUDScreen_C* GetDefaultObj();

	void OnUIScreenActionPressed(enum class EQtnUIScreenActionEnum ScreenAction);
	void OnScreenReadyForGameplay();
	void OnScreenResumed(class UQtnScreen* PreviousScreen);
	void ExecuteUbergraph_PlayerHUDScreen(int32 EntryPoint, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue, class UUI_FTUX_TrainingMoment_Screen_C* CallFunc_GetScreen_ReturnValue, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue_1, class UUI_FTUX_Archetype_Widget_C* CallFunc_GetUserWidget_ReturnValue, class UEmoteScreen_C* CallFunc_RegisterScreen_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CanEmote_result, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue_2, enum class EQtnUIScreenActionEnum K2Node_Event_screenAction, class UMenuBuild_Screen_C* CallFunc_RegisterScreen_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, class UMenuEquipment_Screen_C* CallFunc_RegisterScreen_ReturnValue_2, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue_3, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue_4, class USystemMenuScreen_C* CallFunc_RegisterScreen_ReturnValue_3, class UGlobalNav_Screen_C* CallFunc_GetScreen_ReturnValue_1, bool CallFunc_IsPlayingInEditor_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, enum class EQtnOutputYesNoEnum CallFunc_IsThisMapAMissionWorldBP_outputPin, bool CallFunc_AreDevCheatsLocallyEnabled_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_BooleanOR_ReturnValue, class UQtnScreen* K2Node_Event_previousScreen);
};

}


