#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD1 (0x369 - 0x298)
// WidgetBlueprintGeneratedClass CutsceneHUD_Widget.CutsceneHUD_Widget_C
class UCutsceneHUD_Widget_C : public UQtnUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AddSkipWidget;                                     // 0x2A0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      RewardSizzle;                                      // 0x2A8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      BannerAnnounce;                                    // 0x2B0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               BlackCoverup;                                      // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCharacterCom_Widget_C*                CharacterCom_Widget;                               // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCutsceneSkip_Widget_C*                CutsceneSkip_Widget_C_4;                           // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        Hbox_ObjectiveAnnounce;                            // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_3;                                           // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_4;                                           // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TEXT_AnnounceSubText;                              // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TEXT_GoalAnnounce;                                 // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TEXT_SceneTImer;                                   // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TEXT_ShotInfo;                                     // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TEXT_ShotTime;                                     // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UThrobber*                             Throbber_79;                                       // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VBOX_Info;                                         // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            CancelCalled;                                      // 0x320(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        ShotTimer;                                         // 0x330(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SkipRequested;                                     // 0x334(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         RequestingSkip;                                    // 0x335(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_19B6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACinematicSceneArchetype_BP_C*         CurrentScene;                                      // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NumRequestingSkip;                                 // 0x340(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_19B7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UImage*>                        Pips;                                              // 0x348(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	float                                        SceneTimer;                                        // 0x358(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Anim_Current_Time;                                 // 0x35C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          SkipRequestWidgetTimer;                            // 0x360(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         LateJoiner;                                        // 0x368(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UCutsceneHUD_Widget_C* GetDefaultObj();

	void SequenceEvent__ENTRYPOINTCutsceneHUD_Widget_0();
	void UpdateCharacterCommunicationToAutoClose();
	void FinishCharacterCommunicationFromVO(class AScriptedSkeletalPhoneActor_C* PhoneActor);
	void StartCharacterCommunicationFromVO(class AScriptedSkeletalPhoneActor_C* PhoneActor, bool AutoClose, class UAnimMontage* AnimMontage, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void ResetSkipWidget(class UCanvasPanelSlot* CallFunc_GetCanvasPanelSlot_ReturnValue);
	void UpdateSkipRequest(int32 Num_requesting, int32 Num_needed, bool* SkipRequested_, int32 NumNeededLocal, int32 NumReady, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Variable, class UImage* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void UpdateShotInfo(class FText Text, bool NewShot);
	void AddSkipRepeater();
	void AnimSeq_AddSkipWidget();
	void Local_StartSkipRequest();
	void AnimSeq_RemoveSkipWidget();
	void Local_CancelSkipRequest();
	void HideSkipWidget();
	void Start_SkipRequestWidget_Timer(float InitialStartDelay);
	void SkipRequested_Teammate(int32 Num_requesting, int32 Num_needed);
	void ResetVisGate();
	void BannerAnnouncement(class FText Announcement, bool ShowReward, float Speed);
	void OnUIScreenActionPressed(enum class EQtnUIScreenActionEnum ScreenAction);
	void OnQtnWidgetResumed(class UQtnScreen* PreviousScreen);
	void OnQtnWidgetTicked(float DeltaSeconds);
	void OnUIScreenActionReleased(enum class EQtnUIScreenActionEnum ScreenAction);
	void StopSkipRequest();
	void OnUIBodyActionPressed(enum class EQtnUIBodyActionEnum BodyAction);
	void Construct();
	void OnQtnWidgetPaused();
	void OnQtnWidgetInitialized();
	void Local_SkipRequestComplete();
	void OnQtnWidgetStarted();
	void OnQtnWidgetStopped();
	void PreConstruct(bool IsDesignTime);
	void ResetInput();
	void LateJoinScene(bool LateJoining);
	void ExecuteUbergraph_CutsceneHUD_Widget(int32 EntryPoint, float CallFunc_Ease_ReturnValue, const class FString& CallFunc_TimeSecondsToString_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, float CallFunc_Ease_ReturnValue_1, float CallFunc_Lerp_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, float CallFunc_GetStartTime_ReturnValue, bool CallFunc_IsAnimationPlayingForward_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, float CallFunc_GetEndTime_ReturnValue, class UCanvasPanelSlot* CallFunc_GetCanvasPanelSlot_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float K2Node_CustomEvent_InitialStartDelay, int32 K2Node_CustomEvent_num_requesting, int32 K2Node_CustomEvent_num_needed, float CallFunc_GetEndTime_ReturnValue_1, bool CallFunc_UpdateSkipRequest_SkipRequested_, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float CallFunc_GetStartTime_ReturnValue_1, bool CallFunc_NotEqual_FloatFloat_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_UpdateSkipRequest_SkipRequested__1, bool Temp_bool_Variable, class FText K2Node_CustomEvent_Announcement, bool K2Node_CustomEvent_showReward, float K2Node_CustomEvent_Speed, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, enum class EQtnUIScreenActionEnum K2Node_Event_screenAction_1, class UQtnScreen* K2Node_Event_previousScreen, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_IsClosed_Variable, float K2Node_Event_DeltaSeconds, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, enum class ESlateVisibility K2Node_Select_Default, enum class EQtnUIScreenActionEnum K2Node_Event_screenAction, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_UpdateSkipRequest_SkipRequested__2, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, enum class EQtnUIBodyActionEnum K2Node_Event_bodyAction, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class UImage*>& K2Node_MakeArray_Array, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_Add_FloatFloat_ReturnValue_1, const class FString& CallFunc_TimeSecondsToString_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, bool K2Node_Event_IsDesignTime, bool K2Node_CustomEvent_lateJoining);
	void CancelCalled__DelegateSignature();
};

}


