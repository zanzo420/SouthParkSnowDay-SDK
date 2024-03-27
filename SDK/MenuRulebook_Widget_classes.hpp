#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1B0 (0x448 - 0x298)
// WidgetBlueprintGeneratedClass MenuRulebook_Widget.MenuRulebook_Widget_C
class UMenuRulebook_Widget_C : public UQtnUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      CloseTooltip;                                      // 0x2A0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      RefreshTooltip;                                    // 0x2A8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      PreviewCard;                                       // 0x2B0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UAffordance_Widget_C*                  Affordance_Widget;                                 // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CapsuleBtn_Widget_C*               Btn_SignRulebook;                                  // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCurrencyWallet_Widget_C*              CurrencyWallet_Widget;                             // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URulebookReward_Widget_C*              Reward_Widget;                                     // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_Reward;                                   // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URulebookSignature_Widget_C*           Signature_1;                                       // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URulebookSignature_Widget_C*           Signature_2;                                       // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URulebookSignature_Widget_C*           Signature_3;                                       // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Condition;                                    // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_MenuTitle;                                    // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_BullshitCard_Widget_C*             TooltipCard_Widget;                                // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                              Wbox_Upgrades;                                     // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class ERulebookTypes_Enum               RulebookType;                                      // 0x318(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E4B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class URulebookSignature_Widget_C*>   SignatureWidgets;                                  // 0x320(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	float                                        Anim_Current_Time;                                 // 0x330(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E4C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUI_CardIcon_Widget_C*>         EnemyCardWidgets;                                  // 0x338(0x10)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        LastHoveredCard;                                   // 0x348(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x34C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class AQtnPlayerState*, class URulebookSignature_Widget_C*> VotedPlayerStatesToWidgets;                        // 0x350(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate, Transient, DisableEditOnInstance, ContainsInstancedReference)
	class ALoot_Rulebook_Parent_Frob_C*          CurrentRulebook;                                   // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URulebookComponent_C*                  PlayerRulebookComponent;                           // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          IdleTimer;                                         // 0x3B0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FQtnStruct_VOLine>             VO_FTUXIntro;                                      // 0x3B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FGameplayTag>                  VO_FTUXIntro_SystemicEvents;                       // 0x3C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         InFTUX;                                            // 0x3D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E4F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  FTUX_disableLabel;                                 // 0x3E0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         FTUX_VOComplete;                                   // 0x3F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E50[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CloseMenuTimer;                                    // 0x400(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class AQtnPlayerState*>               VotedYesPlayers;                                   // 0x408(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class UUI_CardMini_Widget_C*>         RulebookCardWidgets;                               // 0x418(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class URulebookSignature_Widget_C*>   SignaturesRequired;                                // 0x428(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class AQtnPlayerUIArchetype_C*               OwningPlayerUIArchetype;                           // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                As_Reward_Unlock_Base;                             // 0x440(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMenuRulebook_Widget_C* GetDefaultObj();

	void SequenceEvent__ENTRYPOINTMenuRulebook_Widget_0();
	void GetQtnPlayerUIArchetype(class AQtnPlayerUIArchetype_C** QtnPlayerUI_Archetype, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue, class AQtnPlayerUIArchetype_C* K2Node_DynamicCast_AsQtn_Player_UIArchetype, bool K2Node_DynamicCast_bSuccess);
	void Refresh_Signatures(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool CallFunc_Array_Contains_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, TArray<class URulebookSignature_Widget_C*>& K2Node_MakeArray_Array, TArray<class URulebookSignature_Widget_C*>& K2Node_MakeArray_Array_1, TArray<class URulebookSignature_Widget_C*>& K2Node_MakeArray_Array_2, bool CallFunc_Array_Contains_ReturnValue_1, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, TArray<class AQtnPlayerState*>& CallFunc_GetAuthoritativePlayerArray_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1, int32 CallFunc_Array_Length_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
	void InitTooltipOnResume(int32 LOCAL_HoveredIndex, bool LOCAL_HoverFound, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UUI_CardIcon_Widget_C* CallFunc_Array_Get_Item, bool CallFunc_IsHovered_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void RefreshTooltipCard(int32 IndexToShow, class UUI_CardMini_Widget_C* CallFunc_Array_Get_Item);
	class UMessagingHUD_C* GetMessagingHUD(class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue, class UMessagingHUDScreen_C* CallFunc_GetScreen_ReturnValue, class UMessagingHUD_C* CallFunc_GetUserWidget_ReturnValue);
	void RefreshVoteInputText(bool UsingMouse, bool Temp_bool_Variable, class FText Temp_text_Variable, bool Temp_bool_Variable_1, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue, class FText Temp_text_Variable_3, bool Temp_bool_Variable_2, bool CallFunc_IsActivated_Activated, bool CallFunc_IsActivated_Activated_1, bool CallFunc_HasLocalPlayerVoted__LocalVoteCast, const class FString& CallFunc_StaticParseInputText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText K2Node_Select_Default, bool CallFunc_HasLocalPlayerVoted__LocalVoteCast_1, class FText K2Node_Select_Default_1, class FText K2Node_Select_Default_2);
	void HasLocalPlayerVoted_(bool* LocalVoteCast, class AQtnPlayerState* CallFunc_StaticGetLocalPlayerState_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	void End_FTUX(class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManagerBase_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Base, bool K2Node_DynamicCast_bSuccess, class UQtnGoalManager_StarksPond_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond, bool K2Node_DynamicCast_bSuccess_1, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, class UFTUXDataBag_C* CallFunc_GetCustomDataBag_ReturnValue);
	void NeedFTUX(bool* InFTUX, bool Local_DidMapSetupFTUX, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess_1, class UFTUXDataBag_C* CallFunc_GetCustomDataBag_ReturnValue, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UQtnGoalManagerBase_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, class UQtnGoalManager_StarksPond_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2);
	void FTUX_SaveComplete(class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, class UFTUXDataBag_C* CallFunc_GetCustomDataBag_ReturnValue);
	void UpdateConditionText(TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class FText CallFunc_Format_ReturnValue_2, TArray<class AQtnPlayerState*>& CallFunc_GetAuthoritativePlayerArray_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 Temp_int_Variable, class FText K2Node_Select_Default);
	void OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void RefreshVotes(class AQtnPlayerState* LOCAL_NewQtnPlayerState, class URulebookSignature_Widget_C* LOCAL_EmptySignature, const TArray<class AQtnPlayerState*>& LOCAL_RulebooksYesVotes, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, class AQtnPlayerState* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class URulebookSignature_Widget_C* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, class URulebookSignature_Widget_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void Clear_Child_Widgets();
	void FindPlayersByPlayernumber(const TArray<class AQtnPlayerState*>& LOCAL_QtnPlayerStates, int32 LOCAL_NextPlayerNumber, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnPlayerState* CallFunc_Array_Get_Item, TArray<class AQtnPlayerState*>& CallFunc_GetAuthoritativePlayerArray_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void MoveCardRepeater();
	void AnimSeq_CardHovered(bool IsHovered_, int32 HoveredIndex);
	void SetupRulebookUI(class ALoot_Rulebook_Parent_Frob_C* Rulebook);
	void PreviewNewCard(bool Hovered_, int32 HoveredIndex, const struct FUI_Card_Struct& CardInfo);
	void OnQtnWidgetOccupied(class AQtnBodyPawn* OccupiedBodyPawn, bool FirstTime);
	void OnUIScreenActionPressed(enum class EQtnUIScreenActionEnum ScreenAction);
	void OnQtnWidgetResumed(class UQtnScreen* PreviousScreen);
	void OnQtnWidgetInitialized();
	void OnQtnWidgetPaused();
	void OnRulebookUpdated(class ALoot_Rulebook_Parent_Frob_C* UpdatedRulebook);
	void PlayerEnteredOrLeftWorld(class AQtnPlayerPawn* PlayerPawnSoul, class AQtnBodyPawn* OccupiedBodyPawn, bool IsLocalPlayer);
	void PlayerLeftWorld(class AQtnPlayerPawn* PlayerPawnSoul, class AQtnBodyPawn* OccupiedBodyPawn);
	void PreConstruct(bool IsDesignTime);
	void CloseMenu();
	void ResetIdleTimer();
	void OnIdleTimer();
	void FTUX_IntroVO();
	void RefreshInputs(bool IsUsingMouseAndKeyboard);
	void BndEvt__MenuRulebook_Widget_Btn_VoteYes_K2Node_ComponentBoundEvent_6_ButtonClicked__DelegateSignature();
	void AddLocalSignature();
	void RefreshActivationState(class ALoot_Rulebook_Parent_Frob_C* Rulebook);
	void DelayedCloseMenu();
	void OnQtnWidgetStarted();
	void OnQtnWidgetStopped();
	void OnInputUsageChange(bool IsUsingMouseAndKeyboard);
	void Gamepad_Focus();
	void RefreshTeamPanel(bool WantShown);
	void ExecuteUbergraph_MenuRulebook_Widget(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, int32 Temp_int_Variable, bool K2Node_CustomEvent_IsHovered_, int32 K2Node_CustomEvent_HoveredIndex_1, bool CallFunc_IsAnimationPlayingForward_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable_1, class UPanelWidget* CallFunc_GetParent_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, class ALoot_Rulebook_Parent_Frob_C* K2Node_CustomEvent_rulebook_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const class FString& CallFunc_GetDisplayName_ReturnValue, float CallFunc_Ease_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_Ease_ReturnValue_1, float CallFunc_Ease_ReturnValue_2, float CallFunc_Ease_ReturnValue_3, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, bool K2Node_CustomEvent_Hovered_, int32 K2Node_CustomEvent_HoveredIndex, const struct FUI_Card_Struct& K2Node_CustomEvent_CardInfo, const struct FAnchors& K2Node_MakeStruct_Anchors, int32 CallFunc_Array_Length_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsReward_Unlock_Base, bool K2Node_ClassDynamicCast_bSuccess, class AQtnBodyPawn* K2Node_Event_occupiedBodyPawn, bool K2Node_Event_firstTime, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, class AQtnPlayerState* CallFunc_GetOwningQtnPlayerState_ReturnValue, enum class EQtnUIScreenActionEnum K2Node_Event_screenAction, class UQtnScreen* CallFunc_GetOwningScreen_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UQtnScreen* K2Node_Event_previousScreen, class ALoot_Rulebook_Parent_Frob_C* K2Node_CustomEvent_updatedRulebook, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess_1, class AQtnPlayerPawn* K2Node_CustomEvent_playerPawnSoul_1, class AQtnBodyPawn* K2Node_CustomEvent_occupiedBodyPawn_1, bool K2Node_CustomEvent_isLocalPlayer, class AQtnPlayerPawn* K2Node_CustomEvent_playerPawnSoul, class AQtnBodyPawn* K2Node_CustomEvent_occupiedBodyPawn, bool K2Node_Event_IsDesignTime, bool CallFunc_needFTUX_inFTUX, bool CallFunc_IsActivated_Activated, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_1, bool K2Node_DynamicCast_bSuccess_2, int32 Temp_int_Array_Index_Variable_2, bool CallFunc_HasLocalPlayerVoted__LocalVoteCast, class UClass* CallFunc_Array_Get_Item, class UQtnUpgrade* CallFunc_GetClassDefaultObject_ReturnValue, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue, const struct FQtnUpgradeSettings& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool K2Node_CustomEvent_isUsingMouseAndKeyboard, bool CallFunc_HasLocalPlayerVoted__LocalVoteCast_1, class ALoot_Rulebook_Parent_Frob_C* K2Node_CustomEvent_rulebook, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, int32 Temp_int_Loop_Counter_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FQtnRolledUpgradeData& K2Node_MakeStruct_QtnRolledUpgradeData, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, class UMessagingHUD_C* CallFunc_GetMessagingHUD_ReturnValue, class UMessagingHUD_C* CallFunc_GetMessagingHUD_ReturnValue_1, bool K2Node_Event_isUsingMouseAndKeyboard, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, class UUI_CardMini_Widget_C* CallFunc_Create_ReturnValue, class UUI_CardMini_Widget_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, enum class ERulebookTypes_Enum Temp_byte_Variable, int32 CallFunc_Array_Add_ReturnValue, float K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_CustomEvent_WantShown, class AQtnPlayerUIArchetype_C* CallFunc_GetQtnPlayerUIArchetype_QtnPlayerUI_Archetype, class AQtnPlayerUIArchetype_C* CallFunc_GetQtnPlayerUIArchetype_QtnPlayerUI_Archetype_1, enum class ERulebookTypes_Enum Temp_byte_Variable_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, class UUI_CardMini_Widget_C* CallFunc_Array_Get_Item_2, enum class ERulebookTypes_Enum Temp_byte_Variable_2, int32 Temp_int_Variable_1, const struct FGameplayTag& CallFunc_Array_Get_Item_3, enum class ERulebookTypes_Enum K2Node_Select_Default_1, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, bool CallFunc_MakeLiteralBool_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}

