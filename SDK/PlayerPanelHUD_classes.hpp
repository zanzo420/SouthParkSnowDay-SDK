#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x2B8 - 0x298)
// WidgetBlueprintGeneratedClass PlayerPanelHUD.PlayerPanelHUD_C
class UPlayerPanelHUD_C : public UQtnUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                          PlayerPanel;                                       // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          RootCanvasPanel;                                   // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_1;                                        // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPlayerPanelHUD_C* GetDefaultObj();

	void PopulatePanelPanel_Internal(const TArray<class AQtnPlayerState*>& L_playerStates, const TArray<class ABodyPawnAIAllyBot_C*>& L_botBodiesByNumber, const TArray<class AQtnPlayerState*>& L_playerStatesByNumber, const TArray<class ABodyPawnAIAllyBot_C*>& L_allyBotBodies, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_2, class AQtnPlayerState* CallFunc_Array_Get_Item, class ABodyPawnAIAllyBot_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class ABodyPawnAIAllyBot_C* CallFunc_Array_Get_Item_2, class AQtnPlayerState* CallFunc_Array_Get_Item_3, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsUIHidden_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TArray<class AQtnPlayerState*>& CallFunc_GetAllPlayerStates_currentPlayerStates);
	void CreateBotWidget(class ABodyPawnAIAllyBot_C* botBody, class AQtnBodyPawn* LOCAL_BotBodyPawn, class AQtnPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UTeamPlayerWidget_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void CreatePlayerWidget(class AQtnPlayerState* PlayerState, class AQtnPlayerState* LOCAL_PlayerState, class AQtnBodyPawn* LOCAL_PlayerBodyPawn, class AQtnPlayerPawn* LOCAL_PlayerPawn, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue, class AQtnPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class AQtnBodyPawn* CallFunc_GetOriginalBodyPawn_ReturnValue, class UTeamPlayerWidget_C* CallFunc_Create_ReturnValue, class AQtnPlayerPawn* CallFunc_GetOwningQtnPlayerPawn_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class AQtnPlayerPawn* CallFunc_GetOwningPlayerPawn_ReturnValue);
	void MinimizePanelHud(bool Enabled, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UTeamPlayerWidget_C* K2Node_DynamicCast_AsTeam_Player_Widget, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void PlayerEnteredWorld(class AQtnPlayerPawn* PlayerPawnSoul, class AQtnBodyPawn* OccupiedBodyPawn, bool IsLocalPlayer);
	void PlayerExitWorld(class AQtnPlayerPawn* PlayerPawnSoul, class AQtnBodyPawn* OccupiedBodyPawn);
	void OnQtnWidgetResumed(class UQtnScreen* PreviousScreen);
	void HandleToggleUI(bool IsHidden);
	void PlayerStateChange();
	void OnQtnWidgetReadyForGameplay();
	void PopulatePlayerPanel();
	void BotEnterWorldEvent_Event_0(class ABodyPawnAIAllyBot_C* EnteringBotBody);
	void BotExitWorldEvent_Event_0(class ABodyPawnAIAllyBot_C* ExitingBotBody);
	void ExecuteUbergraph_PlayerPanelHUD(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AQtnPlayerPawn* K2Node_CustomEvent_playerPawnSoul_1, class AQtnBodyPawn* K2Node_CustomEvent_occupiedBodyPawn_1, bool K2Node_CustomEvent_isLocalPlayer, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class AQtnPlayerPawn* K2Node_CustomEvent_playerPawnSoul, class AQtnBodyPawn* K2Node_CustomEvent_occupiedBodyPawn, class UQtnScreen* K2Node_Event_previousScreen, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue, bool K2Node_CustomEvent_isHidden, bool CallFunc_Not_PreBool_ReturnValue, class UQtnScreen* CallFunc_GetOwningScreen_ReturnValue, bool CallFunc_IsScreenActive_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, enum class EQtnOutputYesNoEnum CallFunc_DoesThisMapSpawnBodiesBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, enum class EQtnOutputYesNoEnum CallFunc_DoesThisMapSpawnBodiesBP_outputPin_1, bool K2Node_SwitchEnum_CmpSuccess_1, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue_1, class ABodyPawnAIAllyBot_C* K2Node_CustomEvent_enteringBotBody, bool CallFunc_IsUIHidden_ReturnValue, class ABodyPawnAIAllyBot_C* K2Node_CustomEvent_exitingBotBody, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue_2, bool CallFunc_IsUIHidden_ReturnValue_1);
};

}


