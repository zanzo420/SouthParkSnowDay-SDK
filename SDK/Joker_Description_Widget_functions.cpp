#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Joker_Description_Widget.Joker_Description_Widget_C
// (None)

class UClass* UJoker_Description_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Joker_Description_Widget_C");

	return Clss;
}


// Joker_Description_Widget_C Joker_Description_Widget.Default__Joker_Description_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UJoker_Description_Widget_C* UJoker_Description_Widget_C::GetDefaultObj()
{
	static class UJoker_Description_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UJoker_Description_Widget_C*>(UJoker_Description_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Joker_Description_Widget.Joker_Description_Widget_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FEventReply                 CallFunc_SetUserFocus_ReturnValue                                (None)

struct FEventReply UJoker_Description_Widget_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Joker_Description_Widget_C", "OnFocusReceived");

	Params::UJoker_Description_Widget_C_OnFocusReceived_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_SetUserFocus_ReturnValue = CallFunc_SetUserFocus_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Joker_Description_Widget.Joker_Description_Widget_C.Format Upgrade Value
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FQtnUpgradeSettings         UpgradeSettings                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FQtnRolledUpgradeData       RolledData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        OutFormattedValue                                                (Parm, OutParm)
// TSubclassOf<class UQtnUpgrade>     CallFunc_SyncLoadUpgradeClass_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UQtnUpgrade*                 CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetFormattedValueAtIndex_ReturnValue                    (None)

void UJoker_Description_Widget_C::Format_Upgrade_Value(struct FQtnUpgradeSettings& UpgradeSettings, struct FQtnRolledUpgradeData& RolledData, int32 Index, class FText* OutFormattedValue, TSubclassOf<class UQtnUpgrade> CallFunc_SyncLoadUpgradeClass_ReturnValue, class UQtnUpgrade* CallFunc_GetClassDefaultObject_ReturnValue, class FText CallFunc_GetFormattedValueAtIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Joker_Description_Widget_C", "Format Upgrade Value");

	Params::UJoker_Description_Widget_C_Format_Upgrade_Value_Params Parms{};

	Parms.UpgradeSettings = UpgradeSettings;
	Parms.RolledData = RolledData;
	Parms.Index = Index;
	Parms.CallFunc_SyncLoadUpgradeClass_ReturnValue = CallFunc_SyncLoadUpgradeClass_ReturnValue;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.CallFunc_GetFormattedValueAtIndex_ReturnValue = CallFunc_GetFormattedValueAtIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutFormattedValue != nullptr)
		*OutFormattedValue = Parms.OutFormattedValue;

}


// Function Joker_Description_Widget.Joker_Description_Widget_C.AngleAdjust
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Angles                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJoker_Description_Widget_C::AngleAdjust(const struct FVector2D& Angles, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_RandomFloatInRange_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Joker_Description_Widget_C", "AngleAdjust");

	Params::UJoker_Description_Widget_C_AngleAdjust_Params Parms{};

	Parms.Angles = Angles;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Joker_Description_Widget.Joker_Description_Widget_C.UpdateChoiceText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerController*        Player                                                           (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnBullshitBPBaseArchetype_C*CurrentBSArchetype                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerControllerBP_localPlayerController        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerControllerBP_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_Upgrade_Value_OutFormattedValue                  (None)
// class FText                        CallFunc_Format_Upgrade_Value_OutFormattedValue_1                (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// class FText                        CallFunc_Format_Upgrade_Value_OutFormattedValue_2                (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)

void UJoker_Description_Widget_C::UpdateChoiceText(class AQtnPlayerController* Player, class UQtnBullshitBPBaseArchetype_C* CurrentBSArchetype, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_Format_Upgrade_Value_OutFormattedValue, class FText CallFunc_Format_Upgrade_Value_OutFormattedValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Format_Upgrade_Value_OutFormattedValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Joker_Description_Widget_C", "UpdateChoiceText");

	Params::UJoker_Description_Widget_C_UpdateChoiceText_Params Parms{};

	Parms.Player = Player;
	Parms.CurrentBSArchetype = CurrentBSArchetype;
	Parms.CallFunc_GetLocalPlayerControllerBP_localPlayerController = CallFunc_GetLocalPlayerControllerBP_localPlayerController;
	Parms.CallFunc_GetLocalPlayerControllerBP_outputPin = CallFunc_GetLocalPlayerControllerBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Format_Upgrade_Value_OutFormattedValue = CallFunc_Format_Upgrade_Value_OutFormattedValue;
	Parms.CallFunc_Format_Upgrade_Value_OutFormattedValue_1 = CallFunc_Format_Upgrade_Value_OutFormattedValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Format_Upgrade_Value_OutFormattedValue_2 = CallFunc_Format_Upgrade_Value_OutFormattedValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Joker_Description_Widget.Joker_Description_Widget_C.FormatChoiceText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ThisText                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        PopulatedText                                                    (Parm, OutParm)

void UJoker_Description_Widget_C::FormatChoiceText(class FText ThisText, class FText* PopulatedText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Joker_Description_Widget_C", "FormatChoiceText");

	Params::UJoker_Description_Widget_C_FormatChoiceText_Params Parms{};

	Parms.ThisText = ThisText;

	UObject::ProcessEvent(Func, &Parms);

	if (PopulatedText != nullptr)
		*PopulatedText = Parms.PopulatedText;

}


// Function Joker_Description_Widget.Joker_Description_Widget_C.InitChoiceWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnBSChoice                Choice                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerTribunalSlot_BP_C*    PlayerSlot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AllowInteraction                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsUpgrade                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnUpgradeSettings         UpgradeChoice                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FQtnRolledUpgradeData       UpgradeData                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UJoker_Description_Widget_C::InitChoiceWidget(int32 Index, const struct FQtnBSChoice& Choice, class APlayerTribunalSlot_BP_C* PlayerSlot, bool AllowInteraction, bool IsUpgrade, const struct FQtnUpgradeSettings& UpgradeChoice, const struct FQtnRolledUpgradeData& UpgradeData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Joker_Description_Widget_C", "InitChoiceWidget");

	Params::UJoker_Description_Widget_C_InitChoiceWidget_Params Parms{};

	Parms.Index = Index;
	Parms.Choice = Choice;
	Parms.PlayerSlot = PlayerSlot;
	Parms.AllowInteraction = AllowInteraction;
	Parms.IsUpgrade = IsUpgrade;
	Parms.UpgradeChoice = UpgradeChoice;
	Parms.UpgradeData = UpgradeData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Joker_Description_Widget.Joker_Description_Widget_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UJoker_Description_Widget_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Joker_Description_Widget_C", "OnRemovedFromFocusPath");

	Params::UJoker_Description_Widget_C_OnRemovedFromFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Joker_Description_Widget.Joker_Description_Widget_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UJoker_Description_Widget_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Joker_Description_Widget_C", "OnAddedToFocusPath");

	Params::UJoker_Description_Widget_C_OnAddedToFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Joker_Description_Widget.Joker_Description_Widget_C.ExecuteUbergraph_Joker_Description_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_index                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnBSChoice                K2Node_CustomEvent_choice                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerTribunalSlot_BP_C*    K2Node_CustomEvent_PlayerSlot                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_AllowInteraction                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_isUpgrade                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnUpgradeSettings         K2Node_CustomEvent_upgradeChoice                                 (None)
// struct FQtnRolledUpgradeData       K2Node_CustomEvent_UpgradeData                                   (None)
// struct FFocusEvent                 K2Node_Event_InFocusEvent_1                                      (NoDestructor)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)
// class ABS_Choice_Card_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UJoker_Description_Widget_C::ExecuteUbergraph_Joker_Description_Widget(int32 EntryPoint, int32 K2Node_CustomEvent_index, const struct FQtnBSChoice& K2Node_CustomEvent_choice, class APlayerTribunalSlot_BP_C* K2Node_CustomEvent_PlayerSlot, bool K2Node_CustomEvent_AllowInteraction, bool K2Node_CustomEvent_isUpgrade, const struct FQtnUpgradeSettings& K2Node_CustomEvent_upgradeChoice, const struct FQtnRolledUpgradeData& K2Node_CustomEvent_UpgradeData, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, const struct FFocusEvent& K2Node_Event_InFocusEvent, class ABS_Choice_Card_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Joker_Description_Widget_C", "ExecuteUbergraph_Joker_Description_Widget");

	Params::UJoker_Description_Widget_C_ExecuteUbergraph_Joker_Description_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_index = K2Node_CustomEvent_index;
	Parms.K2Node_CustomEvent_choice = K2Node_CustomEvent_choice;
	Parms.K2Node_CustomEvent_PlayerSlot = K2Node_CustomEvent_PlayerSlot;
	Parms.K2Node_CustomEvent_AllowInteraction = K2Node_CustomEvent_AllowInteraction;
	Parms.K2Node_CustomEvent_isUpgrade = K2Node_CustomEvent_isUpgrade;
	Parms.K2Node_CustomEvent_upgradeChoice = K2Node_CustomEvent_upgradeChoice;
	Parms.K2Node_CustomEvent_UpgradeData = K2Node_CustomEvent_UpgradeData;
	Parms.K2Node_Event_InFocusEvent_1 = K2Node_Event_InFocusEvent_1;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


