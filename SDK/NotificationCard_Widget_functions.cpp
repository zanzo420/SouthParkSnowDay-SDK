#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass NotificationCard_Widget.NotificationCard_Widget_C
// (None)

class UClass* UNotificationCard_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NotificationCard_Widget_C");

	return Clss;
}


// NotificationCard_Widget_C NotificationCard_Widget.Default__NotificationCard_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNotificationCard_Widget_C* UNotificationCard_Widget_C::GetDefaultObj()
{
	static class UNotificationCard_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNotificationCard_Widget_C*>(UNotificationCard_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function NotificationCard_Widget.NotificationCard_Widget_C.SequenceEvent__ENTRYPOINTNotificationCard_Widget_4
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNotificationCard_Widget_C::SequenceEvent__ENTRYPOINTNotificationCard_Widget_4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationCard_Widget_C", "SequenceEvent__ENTRYPOINTNotificationCard_Widget_4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NotificationCard_Widget.NotificationCard_Widget_C.SequenceEvent__ENTRYPOINTNotificationCard_Widget_3
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNotificationCard_Widget_C::SequenceEvent__ENTRYPOINTNotificationCard_Widget_3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationCard_Widget_C", "SequenceEvent__ENTRYPOINTNotificationCard_Widget_3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NotificationCard_Widget.NotificationCard_Widget_C.SequenceEvent__ENTRYPOINTNotificationCard_Widget_2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNotificationCard_Widget_C::SequenceEvent__ENTRYPOINTNotificationCard_Widget_2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationCard_Widget_C", "SequenceEvent__ENTRYPOINTNotificationCard_Widget_2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NotificationCard_Widget.NotificationCard_Widget_C.SequenceEvent__ENTRYPOINTNotificationCard_Widget_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNotificationCard_Widget_C::SequenceEvent__ENTRYPOINTNotificationCard_Widget_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationCard_Widget_C", "SequenceEvent__ENTRYPOINTNotificationCard_Widget_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NotificationCard_Widget.NotificationCard_Widget_C.SequenceEvent__ENTRYPOINTNotificationCard_Widget_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNotificationCard_Widget_C::SequenceEvent__ENTRYPOINTNotificationCard_Widget_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationCard_Widget_C", "SequenceEvent__ENTRYPOINTNotificationCard_Widget_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NotificationCard_Widget.NotificationCard_Widget_C.RefreshLevelScrollWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UScrollSmall_Widget_C*       CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnUpgradeSettings         CallFunc_ConvertReplicatedUpgradeSettings_OutValidUpgradeSettings(None)
// struct FQtnRolledUpgradeData       K2Node_MakeStruct_QtnRolledUpgradeData                           (None)
// TSubclassOf<class UQtnUpgrade>     CallFunc_SyncLoadUpgradeClass_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnUpgrade*                 CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_FormatUpgradeText_ReturnValue                           (None)

void UNotificationCard_Widget_C::RefreshLevelScrollWidget(bool CallFunc_IsValid_ReturnValue, class UScrollSmall_Widget_C* CallFunc_SpawnObject_ReturnValue, const struct FQtnUpgradeSettings& CallFunc_ConvertReplicatedUpgradeSettings_OutValidUpgradeSettings, const struct FQtnRolledUpgradeData& K2Node_MakeStruct_QtnRolledUpgradeData, TSubclassOf<class UQtnUpgrade> CallFunc_SyncLoadUpgradeClass_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class UQtnUpgrade* CallFunc_GetClassDefaultObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_FormatUpgradeText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationCard_Widget_C", "RefreshLevelScrollWidget");

	Params::UNotificationCard_Widget_C_RefreshLevelScrollWidget_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_ConvertReplicatedUpgradeSettings_OutValidUpgradeSettings = CallFunc_ConvertReplicatedUpgradeSettings_OutValidUpgradeSettings;
	Parms.K2Node_MakeStruct_QtnRolledUpgradeData = K2Node_MakeStruct_QtnRolledUpgradeData;
	Parms.CallFunc_SyncLoadUpgradeClass_ReturnValue = CallFunc_SyncLoadUpgradeClass_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_FormatUpgradeText_ReturnValue = CallFunc_FormatUpgradeText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NotificationCard_Widget.NotificationCard_Widget_C.RefreshCardWithQueueEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNotificationCard_Widget_C::RefreshCardWithQueueEntry()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationCard_Widget_C", "RefreshCardWithQueueEntry");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NotificationCard_Widget.NotificationCard_Widget_C.OverrideCardLevelUI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LevelToShow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

void UNotificationCard_Widget_C::OverrideCardLevelUI(int32 LevelToShow, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationCard_Widget_C", "OverrideCardLevelUI");

	Params::UNotificationCard_Widget_C_OverrideCardLevelUI_Params Parms{};

	Parms.LevelToShow = LevelToShow;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NotificationCard_Widget.NotificationCard_Widget_C.UpdateCardStruct
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUI_Card_Struct             NewestFoilPackOrEnemyBS                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// struct FUI_Card_Struct             UI_Card_Struct1                                                  (ConstParm, Parm, OutParm, HasGetValueTypeHash)
// struct FUI_Card_Struct             LOCAL_NewestCard                                                 (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               CallFunc_IsAnyAnimationPlaying_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UNotificationCard_Widget_C::UpdateCardStruct(struct FUI_Card_Struct& NewestFoilPackOrEnemyBS, struct FUI_Card_Struct* UI_Card_Struct1, const struct FUI_Card_Struct& LOCAL_NewestCard, bool CallFunc_IsAnyAnimationPlaying_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationCard_Widget_C", "UpdateCardStruct");

	Params::UNotificationCard_Widget_C_UpdateCardStruct_Params Parms{};

	Parms.NewestFoilPackOrEnemyBS = NewestFoilPackOrEnemyBS;
	Parms.LOCAL_NewestCard = LOCAL_NewestCard;
	Parms.CallFunc_IsAnyAnimationPlaying_ReturnValue = CallFunc_IsAnyAnimationPlaying_ReturnValue;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (UI_Card_Struct1 != nullptr)
		*UI_Card_Struct1 = std::move(Parms.UI_Card_Struct1);

}


// Function NotificationCard_Widget.NotificationCard_Widget_C.AnimTrigger_CardTint
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNotificationCard_Widget_C::AnimTrigger_CardTint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationCard_Widget_C", "AnimTrigger_CardTint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NotificationCard_Widget.NotificationCard_Widget_C.Anim_CardUpgrade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              OrigLevel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnUpgradeSettings         UpgradeSettings                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FQtnRolledUpgradeData       UpgradeRolledData                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UNotificationCard_Widget_C::Anim_CardUpgrade(int32 OrigLevel, const struct FQtnUpgradeSettings& UpgradeSettings, const struct FQtnRolledUpgradeData& UpgradeRolledData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationCard_Widget_C", "Anim_CardUpgrade");

	Params::UNotificationCard_Widget_C_Anim_CardUpgrade_Params Parms{};

	Parms.OrigLevel = OrigLevel;
	Parms.UpgradeSettings = UpgradeSettings;
	Parms.UpgradeRolledData = UpgradeRolledData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NotificationCard_Widget.NotificationCard_Widget_C.CollapseCard
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNotificationCard_Widget_C::CollapseCard()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationCard_Widget_C", "CollapseCard");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NotificationCard_Widget.NotificationCard_Widget_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UNotificationCard_Widget_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationCard_Widget_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NotificationCard_Widget.NotificationCard_Widget_C.CallRemoveToHUD
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNotificationCard_Widget_C::CallRemoveToHUD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationCard_Widget_C", "CallRemoveToHUD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NotificationCard_Widget.NotificationCard_Widget_C.AddUpgradeScroll
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNotificationCard_Widget_C::AddUpgradeScroll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationCard_Widget_C", "AddUpgradeScroll");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NotificationCard_Widget.NotificationCard_Widget_C.AnimTrigger_CardLevelUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNotificationCard_Widget_C::AnimTrigger_CardLevelUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationCard_Widget_C", "AnimTrigger_CardLevelUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NotificationCard_Widget.NotificationCard_Widget_C.Internal_InjectFromQueue_CardUpgrade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFUpgradeNotificationQueueEntryUpgradeQueueEntry                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UNotificationCard_Widget_C::Internal_InjectFromQueue_CardUpgrade(const struct FFUpgradeNotificationQueueEntry& UpgradeQueueEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationCard_Widget_C", "Internal_InjectFromQueue_CardUpgrade");

	Params::UNotificationCard_Widget_C_Internal_InjectFromQueue_CardUpgrade_Params Parms{};

	Parms.UpgradeQueueEntry = UpgradeQueueEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NotificationCard_Widget.NotificationCard_Widget_C.AnimTrigger_IncrementCardLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNotificationCard_Widget_C::AnimTrigger_IncrementCardLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationCard_Widget_C", "AnimTrigger_IncrementCardLevel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NotificationCard_Widget.NotificationCard_Widget_C.ExecuteUbergraph_NotificationCard_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_OrigLevel                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnUpgradeSettings         K2Node_CustomEvent_UpgradeSettings                               (None)
// struct FQtnRolledUpgradeData       K2Node_CustomEvent_UpgradeRolledData                             (None)
// struct FFUpgradeNotificationQueueEntryK2Node_MakeStruct_FUpgradeNotificationQueueEntry                 (HasGetValueTypeHash)
// TArray<struct FLinearColor>        K2Node_MakeArray_Array                                           (ReferenceParm)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFUpgradeNotificationQueueEntryK2Node_CustomEvent_UpgradeQueueEntry                             (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFUpgradeNotificationQueueEntryCallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotificationCard_Widget_C::ExecuteUbergraph_NotificationCard_Widget(int32 EntryPoint, int32 K2Node_CustomEvent_OrigLevel, const struct FQtnUpgradeSettings& K2Node_CustomEvent_UpgradeSettings, const struct FQtnRolledUpgradeData& K2Node_CustomEvent_UpgradeRolledData, const struct FFUpgradeNotificationQueueEntry& K2Node_MakeStruct_FUpgradeNotificationQueueEntry, TArray<struct FLinearColor>& K2Node_MakeArray_Array, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FFUpgradeNotificationQueueEntry& K2Node_CustomEvent_UpgradeQueueEntry, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, const struct FFUpgradeNotificationQueueEntry& CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPanelSlot* CallFunc_AddChild_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationCard_Widget_C", "ExecuteUbergraph_NotificationCard_Widget");

	Params::UNotificationCard_Widget_C_ExecuteUbergraph_NotificationCard_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_OrigLevel = K2Node_CustomEvent_OrigLevel;
	Parms.K2Node_CustomEvent_UpgradeSettings = K2Node_CustomEvent_UpgradeSettings;
	Parms.K2Node_CustomEvent_UpgradeRolledData = K2Node_CustomEvent_UpgradeRolledData;
	Parms.K2Node_MakeStruct_FUpgradeNotificationQueueEntry = K2Node_MakeStruct_FUpgradeNotificationQueueEntry;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype = K2Node_DynamicCast_AsQtn_Game_State_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_CustomEvent_UpgradeQueueEntry = K2Node_CustomEvent_UpgradeQueueEntry;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_AddChild_ReturnValue_1 = CallFunc_AddChild_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NotificationCard_Widget.NotificationCard_Widget_C.HUD_Notification__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Adding                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNotificationCard_Widget_C::HUD_Notification__DelegateSignature(bool Adding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationCard_Widget_C", "HUD_Notification__DelegateSignature");

	Params::UNotificationCard_Widget_C_HUD_Notification__DelegateSignature_Params Parms{};

	Parms.Adding = Adding;

	UObject::ProcessEvent(Func, &Parms);

}

}


