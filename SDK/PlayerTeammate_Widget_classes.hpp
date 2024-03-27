#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x13A (0x39A - 0x260)
// WidgetBlueprintGeneratedClass PlayerTeammate_Widget.PlayerTeammate_Widget_C
class UPlayerTeammate_Widget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_CapsuleBtnChild_Widget_C*          Btn_Ban;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CapsuleBtnChild_Widget_C*          Btn_Invite;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CapsuleBtnChild_Widget_C*          Btn_Kick;                                          // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CapsuleBtnChild_Widget_C*          Btn_View;                                          // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerNumber_Widget_C*                PlayerNumber_Widget;                               // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_Btns;                                     // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_HostName;                                     // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AQtnPlayerState*                       AssociatedPlayerState;                             // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateFontInfo                        LocalPlayerFont;                                   // 0x2A8(0x58)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSlateFontInfo                        FriendPlayerFont;                                  // 0x300(0x58)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FLinearColor                          JoinButtonColor;                                   // 0x358(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          KickButtonColor;                                   // 0x368(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PlayerNumber;                                      // 0x378(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_2AED[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQtnCloudOptionsSaveData*              CloudOptionsSaveData;                              // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            RemovePlayerRequest;                               // 0x388(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         DEBUG_HasPlayer;                                   // 0x398(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         DEBUG_IsHost;                                      // 0x399(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UPlayerTeammate_Widget_C* GetDefaultObj();

	void Handle_Character_Limit(class FString& PlayerUsername, class FString* FormattedName, const class FString& LOCAL_Name, int32 CallFunc_Len_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const class FString& CallFunc_GetSubstring_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void ToggleVisibility_ButtonsInvite(bool WantShown, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void ToggleVisibility_ButtonsView(bool WantShown, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void Refresh_Name_and_Font(const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FFontOutlineSettings& K2Node_MakeStruct_FontOutlineSettings, const class FString& CallFunc_GetPlayerName_ReturnValue, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, const class FString& CallFunc_Handle_Character_Limit_FormattedName, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FLinearColor& CallFunc_Get_Colors_FontColor, const struct FLinearColor& CallFunc_Get_Colors_OutlineColor, const struct FLinearColor& CallFunc_Get_Colors_BoxColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool CallFunc_IsValid_ReturnValue, const struct FFontOutlineSettings& K2Node_MakeStruct_FontOutlineSettings_1, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_1);
	void ToggleVisibility_ButtonsKickBan(bool WantShown, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsVisible_ReturnValue_1);
	void DEBUG_ToggleHasPlayer(bool HasPlayer);
	void ToggleHasPlayer(class AQtnPlayerState* AssociatedPlayerState, bool CallFunc_IsLocalPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EQtnPlatform CallFunc_GetPlatform_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EQtnPlatform CallFunc_GetPlatform_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, enum class EQtnPlatform CallFunc_GetPlatform_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_2);
	void InitTeamPlayer(class AQtnPlayerState*& PlayerState, int32 PlayerLevel, bool Local_);
	class FText GetJoinablePartyName(int32 PartyCount, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_1);
	void InitJoinableHost(class AQtnPlayerState* QtnPlayerState);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__PlayerTeammate_Widget_Btn_Ban_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature();
	void BndEvt__PlayerTeammate_Widget_Btn_Kick_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature();
	void ToggleHostFunctions(bool CanBeRemovedLocally);
	void BndEvt__PlayerTeammate_Widget_BP_View_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature();
	void BndEvt__PlayerTeammate_Widget_Btn_Invite_K2Node_ComponentBoundEvent_3_ButtonClicked__DelegateSignature();
	void ExecuteUbergraph_PlayerTeammate_Widget(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool K2Node_CustomEvent_CanBeRemovedLocally, enum class EQtnPlatform CallFunc_GetPlatform_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UQtnGameInstance* K2Node_DynamicCast_AsQtn_Game_Instance, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetJoinablePartyName_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AQtnPlayerState* K2Node_CustomEvent_QtnPlayerState, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, enum class EQtnOutputSuccessEnum CallFunc_ShowInviteUI_outputPin, bool K2Node_SwitchEnum_CmpSuccess_1);
	void RemovePlayerRequest__DelegateSignature(class AQtnPlayerState* QtnPlayerState, bool BanPlayer);
};

}


