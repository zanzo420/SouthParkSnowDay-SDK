#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x328 - 0x260)
// WidgetBlueprintGeneratedClass BP_PopUnlock_Widget.BP_PopUnlock_Widget_C
class UBP_PopUnlock_Widget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      HideUnlock;                                        // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      RefreshRewards;                                    // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Open_NoAudio;                                      // 0x278(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Open;                                              // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_Padlock;                                     // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Reward;                                      // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Announce;                                     // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_RewardName;                                   // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_UnlockDesc;                                   // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_UnlockName;                                   // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PopListManager_Widget_C*           ListManager;                                       // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Timer;                                             // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Exiting;                                           // 0x2C4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5786[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DEPRECATED_IconSide;                               // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NewLvl;                                            // 0x2CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FGameplayTag                          CurrencyTag;                                       // 0x2D0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FText                                  UnlockRewardType;                                  // 0x2D8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                        OriginalLevel;                                     // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_5787[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  UnlockReward;                                      // 0x2F8(0x18)(Edit, BlueprintVisible)
	FMulticastInlineDelegateProperty_            RemoveUnlockNotification;                          // 0x310(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                          RefreshTimer;                                      // 0x320(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_PopUnlock_Widget_C* GetDefaultObj();

	void SequenceEvent__ENTRYPOINTBP_PopUnlock_Widget_2(class UTextBlock* Text_Announce);
	void SequenceEvent__ENTRYPOINTBP_PopUnlock_Widget_1(class UTextBlock* Text_Announce);
	void SequenceEvent__ENTRYPOINTBP_PopUnlock_Widget_0();
	void SetRewardText(class FText InputPin2, const struct FGameplayTag& InputPin, class FText CallFunc_MakeLiteralText_ReturnValue, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1);
	void SetCategoryText(const struct FGameplayTag& Selection, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess);
	void AnimEvent_RefreshTextWithRewards();
	void Update_Unlock_Currency_Amount(int32 IncomingAmount, int32 CallFunc_Add_IntInt_ReturnValue);
	void Finished_98BF508B4D7C3F94D223FEAD3705C832();
	void Finished_C12D60524B6C369232255B9721AF4BD4();
	void Finished_C5899259416C234C385784A694A4898E();
	void HideNotification();
	void Text_AnnounceReward(class UTextBlock* Text_Announce, class FText InText);
	void Text_AnnounceUnlock(class UTextBlock* Text_Announce, class FText InText);
	void Anim_RefreshRewards();
	void Anim_HideUnlock();
	void InitUnlock(class FText UnlockName, class FText UnlockDescription, class FText UnlockReward, class UTexture2D* RewardTexture, const struct FGameplayTag& RewardType);
	void Anim_HUDNotification();
	void ExecuteUbergraph_BP_PopUnlock_Widget(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UTextBlock* K2Node_CustomEvent_Text_Announce_1, class FText K2Node_CustomEvent_InText_1, class UTextBlock* K2Node_CustomEvent_Text_Announce, class FText K2Node_CustomEvent_InText, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_1, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_2, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_2, class FText K2Node_CustomEvent_UnlockName, class FText K2Node_CustomEvent_UnlockDescription, class FText K2Node_CustomEvent_UnlockReward, class UTexture2D* K2Node_CustomEvent_RewardTexture, const struct FGameplayTag& K2Node_CustomEvent_RewardType, bool CallFunc_IsValid_ReturnValue_2);
	void RemoveUnlockNotification__DelegateSignature();
};

}


