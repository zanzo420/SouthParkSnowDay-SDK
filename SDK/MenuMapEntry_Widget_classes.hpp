#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x218 (0x4B0 - 0x298)
// WidgetBlueprintGeneratedClass MenuMapEntry_Widget.MenuMapEntry_Widget_C
class UMenuMapEntry_Widget_C : public UQtnUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      ShowBanner;                                        // 0x2A0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Open_FadeIn;                                       // 0x2A8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Open_Timer;                                        // 0x2B0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      CloseMenu_NextMission;                             // 0x2B8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      PulseStartButton;                                  // 0x2C0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               Border_CTA;                                        // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CapsuleBtn_Widget_C*               Btn_StartRun;                                      // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanelSafe;                                   // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Background;                                  // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Banner;                                      // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_BlackScreen;                                 // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Banner;                                    // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RText_MapDescription;                              // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RText_MapTitle;                                    // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_Banner;                                    // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTimer_Widget_C*                       Timer_Widget;                                      // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          Vbox_CTA_Vote;                                     // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          Vbox_PlayerNames;                                  // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class AQtnBodyPawn*>                  TrackedPlayerBodies;                               // 0x330(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         ClosingScreen;                                     // 0x340(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IntroFinished;                                     // 0x341(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44E1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            SkipIntro;                                         // 0x348(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                          IntroTimer;                                        // 0x358(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          TimerNotAllPlayersHere;                            // 0x360(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         CTA_Added;                                         // 0x368(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44E3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MapEntryCountdown_ServerOnly;                      // 0x36C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasPlayedDelayCommentary;                          // 0x370(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44E5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DelayCommentaryTime;                               // 0x374(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FReplicatedArcDepthInfo               ProgressInfoFromGamestate;                         // 0x378(0x14)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_44E6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMapEntryName_Widget_C*>        PlayerNames;                                       // 0x390(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	float                                        Anim_Current_Time;                                 // 0x3A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NextPlayerIndex;                                   // 0x3A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Story_Summary;                                     // 0x3A8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FString, struct FUI_MapEntryInfo_Struct> MapName_Map;                                       // 0x3C0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FUI_MapEntryInfo_Struct               ProgressInfoUI;                                    // 0x410(0x40)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UDataTable*                            ActMapDataTable;                                   // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             StartCue;                                          // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SkipIntroEnabled;                                  // 0x460(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44EA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Description_Text;                                  // 0x468(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        DescriptionStringIndex;                            // 0x480(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44EC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          TypeTimer;                                         // 0x488(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          TimerHandle;                                       // 0x490(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       AudioComponent_Music;                              // 0x498(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkipIntroDelay;                                    // 0x4A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AddStartButtonAnimFinished;                        // 0x4A4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsHordeMode;                                       // 0x4A5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44F0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            HordeModeMapDataTable;                             // 0x4A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMenuMapEntry_Widget_C* GetDefaultObj();

	void RefreshUIStyle(bool Temp_bool_Variable, class UDataTable* Temp_object_Variable, class UDataTable* Temp_object_Variable_1, bool Temp_bool_Variable_1, class UMaterialInstance* Temp_object_Variable_2, class UMaterialInstance* Temp_object_Variable_3, class UDataTable* K2Node_Select_Default, class UMaterialInstance* K2Node_Select_Default_1);
	void PlayScreenMusic(enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOriginalBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOriginalBody_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess);
	void InitializeUi(const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, class UCanvasPanelSlot* CallFunc_GetCanvasPanelSlot_ReturnValue);
	void RefreshUI_InfoBanner(bool WantShown, const struct FAnchors& K2Node_MakeStruct_Anchors, const struct FAnchors& K2Node_MakeStruct_Anchors_1, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1);
	void RefreshMapSummaryText(class FText DescriptionTextToShow, class FText DescriptionTextToHide, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void IsReadyToAdvance(bool* IsReadyToAdvance, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, int32 CallFunc_AreAllExpectedPlayersReady_numExpectedPlayers, int32 CallFunc_AreAllExpectedPlayersReady_numReadyPlayers, bool CallFunc_AreAllExpectedPlayersReady_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void HandleDefaultFocus(bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue);
	void OnRep_r_mapEntryCountdownInt();
	void TryDelayCommentary_ServerOnly(bool CallFunc_IsServer_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void SetupActVisuals(int32 ActOrDepth, class FText Temp_text_Variable, bool Temp_bool_Variable, bool CallFunc_TextIsEmpty_ReturnValue, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void HandlePlayerExit(class AQtnBodyPawn*& ExitingBody, bool LOCAL_PlayerFound, class AQtnBodyPawn* LOCAL_ExitingBody, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_Array_RemoveItem_ReturnValue, class UMapEntryName_Widget_C* CallFunc_Array_Get_Item, bool CallFunc_Array_RemoveItem_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue);
	void CheckArcInfoReady(bool* IsReady, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsReadyForGameplay_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void Try_Grant_Save_TP_Unlock_Server_Only(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AQtnBodyPawn*>& CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies, bool CallFunc_IsServer_ReturnValue, class AQtnBodyPawn* CallFunc_Array_Get_Item, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Set_Animations_to_End_Point(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, class UMapEntryName_Widget_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UCanvasPanelSlot* CallFunc_GetCanvasPanelSlot_ReturnValue);
	void CheckAllPlayersReady(bool* All_ready, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, int32 CallFunc_AreAllExpectedPlayersReady_numExpectedPlayers, int32 CallFunc_AreAllExpectedPlayersReady_numReadyPlayers, bool CallFunc_AreAllExpectedPlayersReady_ReturnValue, class UMapEntryName_Widget_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void CheckReadyToAdvance(bool CallFunc_IsReadyToAdvance_IsReadyToAdvance);
	void UpdatePlayerArray(int32 Temp_int_Loop_Counter_Variable, TArray<class AQtnBodyPawn*>& CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class AQtnBodyPawn* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, class UMapEntryName_Widget_C* CallFunc_SpawnObject_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void Finished_AF0C318B499CE5BD8F8554BC62D0B4C7();
	void Completed_8F61B411465F5BDA06C5CDB3311F0124(float Value);
	void Tick_8F61B411465F5BDA06C5CDB3311F0124(float Value);
	void Finished_8E8358514611FB6D57B39C9B2B89EA37();
	void Finished_BA410F72469FCB85DF7704A61B42F1B6();
	void AnimSeq_AddCTA();
	void AnimSeq_AddPlayers();
	void AddNextPlayer();
	void AddLetter();
	void Anim_ShowActInfo();
	void SkipTyping();
	void Anim_BeginIntro();
	void Anim_AddTimer();
	void Anim_AddStartButton();
	void OnQtnWidgetResumed(class UQtnScreen* PreviousScreen);
	void OnQtnWidgetTicked(float DeltaSeconds);
	void PlayerReadyReceived(class ABodyPawnPlayer_C* Body);
	void CloseScreen(bool LoadNextMission);
	void HideScreen();
	void OnQtnWidgetInitialized();
	void BndEvt__MenuMapEntry_Widget_Btn_StartRun_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature();
	void SkipIntro_Event();
	void OnUIScreenActionPressed(enum class EQtnUIScreenActionEnum ScreenAction);
	void TimerReady();
	void InitiateTravel(bool LoadNextMission);
	void BindToDayInfoReady();
	void ActDayInfoReady();
	void BindToProgressLineReady();
	void ProgressLinePotentiallyReady();
	void UnbindReplicationEvents();
	void PlayerExit(class AQtnPlayerPawn* PlayerPawnSoul, class AQtnBodyPawn* OccupiedBodyPawn);
	void OnRep_mapEntryCountdown(int32 Countdown);
	void OnInputUsageChange(bool IsUsingMouseAndKeyboard);
	void OnIntroFinished();
	void EventFadeOutMusicSafely(float FadeTime);
	void OnQtnWidgetStarted();
	void OnQtnWidgetStopped();
	void ExecuteUbergraph_MenuMapEntry_Widget(int32 EntryPoint, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, int32 Temp_int_Variable, int32 Temp_int_Array_Index_Variable, class FText Temp_text_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class FText Temp_text_Variable_1, float CallFunc_Ease_ReturnValue, class UCanvasPanelSlot* CallFunc_GetCanvasPanelSlot_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool Temp_bool_Variable_3, float CallFunc_Ease_ReturnValue_1, int32 CallFunc_FFloor_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, int32 CallFunc_Max_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Ease_ReturnValue_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, class UMapEntryName_Widget_C* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Len_ReturnValue, const class FString& CallFunc_GetSubstring_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class UQtnAsyncInterpolateValue* CallFunc_AsyncInterpolateValue_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_1, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_2, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, int32 CallFunc_Len_ReturnValue_1, const class FString& CallFunc_GetSubstring_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class UQtnScreen* K2Node_Event_previousScreen, float K2Node_Event_DeltaSeconds, class ABodyPawnPlayer_C* K2Node_CustomEvent_Body, int32 Temp_int_Variable_1, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_CheckAllPlayersReady_all_ready, bool K2Node_CustomEvent_LoadNextMission_1, class UQtnScreen* CallFunc_GetOwningScreen_ReturnValue, class FText K2Node_Select_Default, enum class EUMGSequencePlayMode K2Node_Select_Default_1, bool CallFunc_Not_PreBool_ReturnValue, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AQtnPlayerUIArchetype_C* K2Node_DynamicCast_AsQtn_Player_UIArchetype, bool K2Node_DynamicCast_bSuccess, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue_1, class AQtnPlayerUIArchetype_C* K2Node_DynamicCast_AsQtn_Player_UIArchetype_1, bool K2Node_DynamicCast_bSuccess_1, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue_2, class AQtnPlayerUIArchetype_C* K2Node_DynamicCast_AsQtn_Player_UIArchetype_2, bool K2Node_DynamicCast_bSuccess_2, enum class EQtnUIScreenActionEnum K2Node_Event_screenAction, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, float CallFunc_Subtract_FloatFloat_ReturnValue, bool K2Node_CustomEvent_LoadNextMission, class UQtnGlobalRunProgress* CallFunc_GetGlobalRunProgress_ServerOnly_ReturnValue, bool CallFunc_IsServer_ReturnValue, float Temp_float_Variable, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, bool Temp_bool_IsClosed_Variable, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess_3, int32 Temp_int_Variable_2, class FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_CheckArcInfoReady_isReady, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_1, bool K2Node_DynamicCast_bSuccess_4, int32 K2Node_Select_Default_2, class FName CallFunc_Conv_StringToName_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_2, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_2, bool K2Node_DynamicCast_bSuccess_5, float K2Node_CustomEvent_Value, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_3, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_3, bool K2Node_DynamicCast_bSuccess_6, class UMapEntryName_Widget_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_4, class UMapEntryName_Widget_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, class AQtnPlayerPawn* K2Node_CustomEvent_playerPawnSoul, class AQtnBodyPawn* K2Node_CustomEvent_occupiedBodyPawn, bool CallFunc_Less_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float CallFunc_GetEndTime_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue, float K2Node_CustomEvent_Value_1, bool CallFunc_IsServer_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, bool CallFunc_IsServer_ReturnValue_2, int32 K2Node_CustomEvent_countdown, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess_7, bool K2Node_SwitchEnum_CmpSuccess_1, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_5, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_4, bool K2Node_DynamicCast_bSuccess_8, bool K2Node_Event_isUsingMouseAndKeyboard, float K2Node_CustomEvent_fadeTime, bool CallFunc_IsValid_ReturnValue_4, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOriginalBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOriginalBody_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_1, bool K2Node_DynamicCast_bSuccess_9, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_2, class AQtnGameState* CallFunc_WaitForReadyForGameplay_readyGameState, bool CallFunc_BooleanAND_ReturnValue_3, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_2, bool K2Node_DynamicCast_bSuccess_10, bool CallFunc_IsReadyForGameplay_ReturnValue, bool CallFunc_IsShippingBuild_ReturnValue, int32 CallFunc_GetConsoleVariableIntValue_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, class UDataTable* K2Node_Select_Default_3, const struct FUI_MapEntryArray_Struct& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void SkipIntro__DelegateSignature();
};

}

