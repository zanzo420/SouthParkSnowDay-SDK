#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4E8 (0x748 - 0x260)
// WidgetBlueprintGeneratedClass NotificationEnemyBullshit_Widget.NotificationEnemyBullshit_Widget_C
class UNotificationEnemyBullshit_Widget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Jitter;                                            // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      EBS_Reveal;                                        // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Notification_Start;                                // 0x278(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Notification_LightningAndRemove;                   // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      EBS_End;                                           // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      EBS_ResetTimer;                                    // 0x290(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      EBS_IncrementCounter;                              // 0x298(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      EBS_AddCounter;                                    // 0x2A0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      EBS_AddTimer;                                      // 0x2A8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Glow_Card;                                         // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_BullshitRadial;                              // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Card;                                        // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LightningFlipbook;                                 // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Name;                                      // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Counter;                                      // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Name;                                         // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FLinearColor>                  RarityColorTable;                                  // 0x2E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FGameplayTag, struct FLinearColor> RarityColorMap;                                    // 0x2F8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FUI_Card_Struct                       Current_Card;                                      // 0x348(0x340)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            HUD_Notification;                                  // 0x688(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UScrollSmall_Widget_C*                 UpgradeScrollWidget;                               // 0x698(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Intensity;                                         // 0x6A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6504[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  UpgradeText;                                       // 0x6A8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        Instances;                                         // 0x6C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6505[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            ClearThisEnemyBullshit;                            // 0x6C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         TimedCheatActive;                                  // 0x6D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsTimed;                                           // 0x6D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6506[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeMax;                                           // 0x6DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeCurrent;                                       // 0x6E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6507[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                MyEnemyCheatVerbBase;                              // 0x6E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                MyQtnBullshitBPB;                                  // 0x6F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEnemyBSManagerComponent_C*            Enemy_BSManager_Component;                         // 0x6F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFUpgradeNotificationQueueEntry> UpgradeCardQueue;                                  // 0x700(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        CurrentOriginalLevel;                              // 0x710(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6508[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          TickTimer;                                         // 0x718(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        RotateTime;                                        // 0x720(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LefthandCard;                                      // 0x724(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6509[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        JitterMax;                                         // 0x728(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_650A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          JitterTimer;                                       // 0x730(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        JitterInterval;                                    // 0x738(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        JitterTime;                                        // 0x73C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          JitterExpTimer;                                    // 0x740(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UNotificationEnemyBullshit_Widget_C* GetDefaultObj();

	void SequenceEvent__ENTRYPOINTNotificationEnemyBullshit_Widget_8();
	void SequenceEvent__ENTRYPOINTNotificationEnemyBullshit_Widget_7();
	void SequenceEvent__ENTRYPOINTNotificationEnemyBullshit_Widget_6();
	void SequenceEvent__ENTRYPOINTNotificationEnemyBullshit_Widget_5();
	void SequenceEvent__ENTRYPOINTNotificationEnemyBullshit_Widget_4();
	void SequenceEvent__ENTRYPOINTNotificationEnemyBullshit_Widget_3();
	void SequenceEvent__ENTRYPOINTNotificationEnemyBullshit_Widget_2();
	void SequenceEvent__ENTRYPOINTNotificationEnemyBullshit_Widget_1();
	void SequenceEvent__ENTRYPOINTNotificationEnemyBullshit_Widget_0();
	void UpdateInstanceCounter(int32 NewCount, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void ResumeActiveBullshit(bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable, float K2Node_Select_Default, float CallFunc_Divide_FloatFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_3, int32 CallFunc_GetBullshitActiveBullshitters_NumActiveBullshitters, float CallFunc_GetBullshitTimeRemaining_RemainingTime, bool CallFunc_GetBullshitTimeRemaining_Active);
	void ResetWidgetInactive();
	void IncrementBullshit(class FText CallFunc_MakeLiteralText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, float CallFunc_GetBullshitTimeRemaining_RemainingTime, bool CallFunc_GetBullshitTimeRemaining_Active, int32 CallFunc_GetBullshitActiveBullshitters_NumActiveBullshitters, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void UpdateCardStruct(struct FUI_Card_Struct& NewestEBS, struct FUI_Card_Struct* UI_Card_Struct1, const struct FUI_Card_Struct& LOCAL_NewestCard, bool CallFunc_IsAnyAnimationPlaying_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue);
	void OnLoaded_83BD68E74D200C0D37BEADB399670170(class UObject* Loaded);
	void OnLoaded_C9B90C0C4BE32914E48D5DAF2038FA9B(class UObject* Loaded);
	void FinishEnemyBullshitUI();
	void RemoveEnemyBSCard();
	void RepeaterRotate();
	void AnimSeq_RotateCard();
	void Anim_StartEnemyBullshit();
	void LoopJitter();
	void RefreshJitterTimer();
	void StopJitterTimer();
	void AnimSeq_Jitter();
	void JitterRepeater();
	void CollapseCard();
	void OnInitialized();
	void PrepareEnemyBullshit(struct FUI_Card_Struct& UI_Card_Struct, float TimeMax);
	void CallRemoveToHUD();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void AddTimeOrCounter();
	void UpdateExistingTimeOrCounter();
	void UpdateBullshitTimer(class UClass* Bullshit, float Timer, bool Active);
	void OnBSCountChangedEvent(class UClass* BSClass, int32 NewCount, int32 OldCount, class AQtnBodyPawn* AffectedBody, float TimerMax);
	void RefreshCardUI(const struct FUI_Card_Struct& CardStruct);
	void ExecuteUbergraph_NotificationEnemyBullshit_Widget(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* Temp_object_Variable, class UObject* K2Node_CustomEvent_Loaded, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetBullshitTimeRemaining_RemainingTime, bool CallFunc_GetBullshitTimeRemaining_Active, bool CallFunc_Greater_FloatFloat_ReturnValue, int32 CallFunc_GetBullshitActiveBullshitters_NumActiveBullshitters, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsAnimationPlayingForward_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_IsAnimationPlayingForward_ReturnValue_1, float CallFunc_GetAnimationCurrentTime_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, const struct FUI_Card_Struct& K2Node_CustomEvent_UI_Card_Struct, float K2Node_CustomEvent_TimeMax, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UObject* Temp_object_Variable_1, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_1, bool K2Node_DynamicCast_bSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UObject* K2Node_CustomEvent_Loaded_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, float CallFunc_Lerp_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class UClass* K2Node_CustomEvent_Bullshit, float K2Node_CustomEvent_Timer, bool K2Node_CustomEvent_Active, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_GetBullshitTimeRemaining_RemainingTime_1, bool CallFunc_GetBullshitTimeRemaining_Active_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_3, class UClass* K2Node_CustomEvent_BSClass, int32 K2Node_CustomEvent_NewCount, int32 K2Node_CustomEvent_OldCount, class AQtnBodyPawn* K2Node_CustomEvent_AffectedBody, float K2Node_CustomEvent_TimerMax, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue_1, const struct FUI_Card_Struct& K2Node_CustomEvent_CardStruct, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_4, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_5, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable, float K2Node_Select_Default, float CallFunc_Ease_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_6);
	void ClearThisEnemyBullshit__DelegateSignature(class UClass* BullshitToRemove);
	void HUD_Notification__DelegateSignature(bool Adding);
};

}


