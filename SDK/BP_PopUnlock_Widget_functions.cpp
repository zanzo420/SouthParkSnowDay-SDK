#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_PopUnlock_Widget.BP_PopUnlock_Widget_C
// (None)

class UClass* UBP_PopUnlock_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PopUnlock_Widget_C");

	return Clss;
}


// BP_PopUnlock_Widget_C BP_PopUnlock_Widget.Default__BP_PopUnlock_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PopUnlock_Widget_C* UBP_PopUnlock_Widget_C::GetDefaultObj()
{
	static class UBP_PopUnlock_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PopUnlock_Widget_C*>(UBP_PopUnlock_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PopUnlock_Widget.BP_PopUnlock_Widget_C.SequenceEvent__ENTRYPOINTBP_PopUnlock_Widget_2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*                  Text_Announce                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PopUnlock_Widget_C::SequenceEvent__ENTRYPOINTBP_PopUnlock_Widget_2(class UTextBlock* Text_Announce)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PopUnlock_Widget_C", "SequenceEvent__ENTRYPOINTBP_PopUnlock_Widget_2");

	Params::UBP_PopUnlock_Widget_C_SequenceEvent__ENTRYPOINTBP_PopUnlock_Widget_2_Params Parms{};

	Parms.Text_Announce = Text_Announce;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PopUnlock_Widget.BP_PopUnlock_Widget_C.SequenceEvent__ENTRYPOINTBP_PopUnlock_Widget_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*                  Text_Announce                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PopUnlock_Widget_C::SequenceEvent__ENTRYPOINTBP_PopUnlock_Widget_1(class UTextBlock* Text_Announce)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PopUnlock_Widget_C", "SequenceEvent__ENTRYPOINTBP_PopUnlock_Widget_1");

	Params::UBP_PopUnlock_Widget_C_SequenceEvent__ENTRYPOINTBP_PopUnlock_Widget_1_Params Parms{};

	Parms.Text_Announce = Text_Announce;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PopUnlock_Widget.BP_PopUnlock_Widget_C.SequenceEvent__ENTRYPOINTBP_PopUnlock_Widget_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PopUnlock_Widget_C::SequenceEvent__ENTRYPOINTBP_PopUnlock_Widget_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PopUnlock_Widget_C", "SequenceEvent__ENTRYPOINTBP_PopUnlock_Widget_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PopUnlock_Widget.BP_PopUnlock_Widget_C.SetRewardText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InputPin2                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTag                InputPin                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// bool                               GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)

void UBP_PopUnlock_Widget_C::SetRewardText(class FText InputPin2, const struct FGameplayTag& InputPin, class FText CallFunc_MakeLiteralText_ReturnValue, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PopUnlock_Widget_C", "SetRewardText");

	Params::UBP_PopUnlock_Widget_C_SetRewardText_Params Parms{};

	Parms.InputPin2 = InputPin2;
	Parms.InputPin = InputPin;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PopUnlock_Widget.BP_PopUnlock_Widget_C.SetCategoryText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PopUnlock_Widget_C::SetCategoryText(const struct FGameplayTag& Selection, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PopUnlock_Widget_C", "SetCategoryText");

	Params::UBP_PopUnlock_Widget_C_SetCategoryText_Params Parms{};

	Parms.Selection = Selection;
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PopUnlock_Widget.BP_PopUnlock_Widget_C.AnimEvent_RefreshTextWithRewards
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PopUnlock_Widget_C::AnimEvent_RefreshTextWithRewards()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PopUnlock_Widget_C", "AnimEvent_RefreshTextWithRewards");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PopUnlock_Widget.BP_PopUnlock_Widget_C.Update Unlock Currency Amount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              IncomingAmount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PopUnlock_Widget_C::Update_Unlock_Currency_Amount(int32 IncomingAmount, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PopUnlock_Widget_C", "Update Unlock Currency Amount");

	Params::UBP_PopUnlock_Widget_C_Update_Unlock_Currency_Amount_Params Parms{};

	Parms.IncomingAmount = IncomingAmount;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PopUnlock_Widget.BP_PopUnlock_Widget_C.Finished_98BF508B4D7C3F94D223FEAD3705C832
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PopUnlock_Widget_C::Finished_98BF508B4D7C3F94D223FEAD3705C832()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PopUnlock_Widget_C", "Finished_98BF508B4D7C3F94D223FEAD3705C832");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PopUnlock_Widget.BP_PopUnlock_Widget_C.Finished_C12D60524B6C369232255B9721AF4BD4
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PopUnlock_Widget_C::Finished_C12D60524B6C369232255B9721AF4BD4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PopUnlock_Widget_C", "Finished_C12D60524B6C369232255B9721AF4BD4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PopUnlock_Widget.BP_PopUnlock_Widget_C.Finished_C5899259416C234C385784A694A4898E
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PopUnlock_Widget_C::Finished_C5899259416C234C385784A694A4898E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PopUnlock_Widget_C", "Finished_C5899259416C234C385784A694A4898E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PopUnlock_Widget.BP_PopUnlock_Widget_C.HideNotification
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PopUnlock_Widget_C::HideNotification()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PopUnlock_Widget_C", "HideNotification");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PopUnlock_Widget.BP_PopUnlock_Widget_C.Text_AnnounceReward
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*                  Text_Announce                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_PopUnlock_Widget_C::Text_AnnounceReward(class UTextBlock* Text_Announce, class FText InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PopUnlock_Widget_C", "Text_AnnounceReward");

	Params::UBP_PopUnlock_Widget_C_Text_AnnounceReward_Params Parms{};

	Parms.Text_Announce = Text_Announce;
	Parms.InText = InText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PopUnlock_Widget.BP_PopUnlock_Widget_C.Text_AnnounceUnlock
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*                  Text_Announce                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_PopUnlock_Widget_C::Text_AnnounceUnlock(class UTextBlock* Text_Announce, class FText InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PopUnlock_Widget_C", "Text_AnnounceUnlock");

	Params::UBP_PopUnlock_Widget_C_Text_AnnounceUnlock_Params Parms{};

	Parms.Text_Announce = Text_Announce;
	Parms.InText = InText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PopUnlock_Widget.BP_PopUnlock_Widget_C.Anim_RefreshRewards
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PopUnlock_Widget_C::Anim_RefreshRewards()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PopUnlock_Widget_C", "Anim_RefreshRewards");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PopUnlock_Widget.BP_PopUnlock_Widget_C.Anim_HideUnlock
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PopUnlock_Widget_C::Anim_HideUnlock()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PopUnlock_Widget_C", "Anim_HideUnlock");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PopUnlock_Widget.BP_PopUnlock_Widget_C.InitUnlock
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        UnlockName                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        UnlockDescription                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        UnlockReward                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*                  RewardTexture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                RewardType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBP_PopUnlock_Widget_C::InitUnlock(class FText UnlockName, class FText UnlockDescription, class FText UnlockReward, class UTexture2D* RewardTexture, const struct FGameplayTag& RewardType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PopUnlock_Widget_C", "InitUnlock");

	Params::UBP_PopUnlock_Widget_C_InitUnlock_Params Parms{};

	Parms.UnlockName = UnlockName;
	Parms.UnlockDescription = UnlockDescription;
	Parms.UnlockReward = UnlockReward;
	Parms.RewardTexture = RewardTexture;
	Parms.RewardType = RewardType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PopUnlock_Widget.BP_PopUnlock_Widget_C.Anim_HUDNotification
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PopUnlock_Widget_C::Anim_HUDNotification()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PopUnlock_Widget_C", "Anim_HUDNotification");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PopUnlock_Widget.BP_PopUnlock_Widget_C.ExecuteUbergraph_BP_PopUnlock_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UTextBlock*                  K2Node_CustomEvent_Text_Announce_1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_InText_1                                      (None)
// class UTextBlock*                  K2Node_CustomEvent_Text_Announce                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_InText                                        (None)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue_2            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_UnlockName                                    (None)
// class FText                        K2Node_CustomEvent_UnlockDescription                             (None)
// class FText                        K2Node_CustomEvent_UnlockReward                                  (None)
// class UTexture2D*                  K2Node_CustomEvent_RewardTexture                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_RewardType                                    (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PopUnlock_Widget_C::ExecuteUbergraph_BP_PopUnlock_Widget(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UTextBlock* K2Node_CustomEvent_Text_Announce_1, class FText K2Node_CustomEvent_InText_1, class UTextBlock* K2Node_CustomEvent_Text_Announce, class FText K2Node_CustomEvent_InText, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_1, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_2, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_2, class FText K2Node_CustomEvent_UnlockName, class FText K2Node_CustomEvent_UnlockDescription, class FText K2Node_CustomEvent_UnlockReward, class UTexture2D* K2Node_CustomEvent_RewardTexture, const struct FGameplayTag& K2Node_CustomEvent_RewardType, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PopUnlock_Widget_C", "ExecuteUbergraph_BP_PopUnlock_Widget");

	Params::UBP_PopUnlock_Widget_C_ExecuteUbergraph_BP_PopUnlock_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_Text_Announce_1 = K2Node_CustomEvent_Text_Announce_1;
	Parms.K2Node_CustomEvent_InText_1 = K2Node_CustomEvent_InText_1;
	Parms.K2Node_CustomEvent_Text_Announce = K2Node_CustomEvent_Text_Announce;
	Parms.K2Node_CustomEvent_InText = K2Node_CustomEvent_InText;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result_1 = CallFunc_CreatePlayAnimationProxyObject_Result_1;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1 = CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result_2 = CallFunc_CreatePlayAnimationProxyObject_Result_2;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue_2 = CallFunc_CreatePlayAnimationProxyObject_ReturnValue_2;
	Parms.K2Node_CustomEvent_UnlockName = K2Node_CustomEvent_UnlockName;
	Parms.K2Node_CustomEvent_UnlockDescription = K2Node_CustomEvent_UnlockDescription;
	Parms.K2Node_CustomEvent_UnlockReward = K2Node_CustomEvent_UnlockReward;
	Parms.K2Node_CustomEvent_RewardTexture = K2Node_CustomEvent_RewardTexture;
	Parms.K2Node_CustomEvent_RewardType = K2Node_CustomEvent_RewardType;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PopUnlock_Widget.BP_PopUnlock_Widget_C.RemoveUnlockNotification__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PopUnlock_Widget_C::RemoveUnlockNotification__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PopUnlock_Widget_C", "RemoveUnlockNotification__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


