#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_BullshitCard_Widget.UI_BullshitCard_Widget_C
// (None)

class UClass* UUI_BullshitCard_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_BullshitCard_Widget_C");

	return Clss;
}


// UI_BullshitCard_Widget_C UI_BullshitCard_Widget.Default__UI_BullshitCard_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_BullshitCard_Widget_C* UUI_BullshitCard_Widget_C::GetDefaultObj()
{
	static class UUI_BullshitCard_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_BullshitCard_Widget_C*>(UUI_BullshitCard_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UUI_BullshitCard_Widget_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BullshitCard_Widget_C", "OnFocusReceived");

	Params::UUI_BullshitCard_Widget_C_OnFocusReceived_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.RefreshCardData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnUpgradeSettings         UpgradeSettings                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FQtnRolledUpgradeData       UpgradeRolledData                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// class UClass*                      EnemyBullshitBPBase                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtn_CheatVerb_Archetype_C*  PlayerBullshitVerbArchetype                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ForceRolledDataUpdate                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnUpgradeSettings         CallFunc_ConvertReplicatedUpgradeSettings_OutValidUpgradeSettings(None)

void UUI_BullshitCard_Widget_C::RefreshCardData(const struct FQtnUpgradeSettings& UpgradeSettings, const struct FQtnRolledUpgradeData& UpgradeRolledData, class UClass* EnemyBullshitBPBase, class UQtn_CheatVerb_Archetype_C* PlayerBullshitVerbArchetype, bool ForceRolledDataUpdate, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FQtnUpgradeSettings& CallFunc_ConvertReplicatedUpgradeSettings_OutValidUpgradeSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BullshitCard_Widget_C", "RefreshCardData");

	Params::UUI_BullshitCard_Widget_C_RefreshCardData_Params Parms{};

	Parms.UpgradeSettings = UpgradeSettings;
	Parms.UpgradeRolledData = UpgradeRolledData;
	Parms.EnemyBullshitBPBase = EnemyBullshitBPBase;
	Parms.PlayerBullshitVerbArchetype = PlayerBullshitVerbArchetype;
	Parms.ForceRolledDataUpdate = ForceRolledDataUpdate;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_ConvertReplicatedUpgradeSettings_OutValidUpgradeSettings = CallFunc_ConvertReplicatedUpgradeSettings_OutValidUpgradeSettings;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.SetBoolIsBullshit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_BullshitCard_Widget_C::SetBoolIsBullshit(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValidClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BullshitCard_Widget_C", "SetBoolIsBullshit");

	Params::UUI_BullshitCard_Widget_C_SetBoolIsBullshit_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.UpgradeRefreshLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

void UUI_BullshitCard_Widget_C::UpgradeRefreshLevel(class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BullshitCard_Widget_C", "UpgradeRefreshLevel");

	Params::UUI_BullshitCard_Widget_C_UpgradeRefreshLevel_Params Parms{};

	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.SetCardName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnBullshitBPBaseArchetype_C*CallFunc_GetBullshitArchetype_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_BullshitCard_Widget_C::SetCardName(bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UQtnBullshitBPBaseArchetype_C* CallFunc_GetBullshitArchetype_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BullshitCard_Widget_C", "SetCardName");

	Params::UUI_BullshitCard_Widget_C_SetCardName_Params Parms{};

	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetBullshitArchetype_ReturnValue = CallFunc_GetBullshitArchetype_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.Set Description Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnBullshitBPBaseArchetype_C*CallFunc_GetBullshitArchetype_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FText                        CallFunc_Format_Upgrade_Value_OutFormattedValue                  (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// class FText                        CallFunc_Format_Upgrade_Value_OutFormattedValue_1                (None)
// class FText                        CallFunc_Format_Upgrade_Value_OutFormattedValue_2                (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// class FText                        CallFunc_DecorateWithRichTextStyle_ReturnValue                   (None)

void UUI_BullshitCard_Widget_C::Set_Description_Text(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UQtnBullshitBPBaseArchetype_C* CallFunc_GetBullshitArchetype_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1, class FText CallFunc_Format_Upgrade_Value_OutFormattedValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText CallFunc_Format_Upgrade_Value_OutFormattedValue_1, class FText CallFunc_Format_Upgrade_Value_OutFormattedValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2, class FText CallFunc_DecorateWithRichTextStyle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BullshitCard_Widget_C", "Set Description Text");

	Params::UUI_BullshitCard_Widget_C_Set_Description_Text_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetBullshitArchetype_ReturnValue = CallFunc_GetBullshitArchetype_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_Format_Upgrade_Value_OutFormattedValue = CallFunc_Format_Upgrade_Value_OutFormattedValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_Format_Upgrade_Value_OutFormattedValue_1 = CallFunc_Format_Upgrade_Value_OutFormattedValue_1;
	Parms.CallFunc_Format_Upgrade_Value_OutFormattedValue_2 = CallFunc_Format_Upgrade_Value_OutFormattedValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.CallFunc_DecorateWithRichTextStyle_ReturnValue = CallFunc_DecorateWithRichTextStyle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.Refresh Bullshit or Upgrade UI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     LOCAL_Font_Meanwhile                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     LOCAL_Font_PermanentMarker                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     LOCAL_Font_Schoolbell                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FAnchors                    K2Node_MakeStruct_Anchors                                        (NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FAnchors                    K2Node_MakeStruct_Anchors_1                                      (NoDestructor)
// struct FAnchors                    K2Node_MakeStruct_Anchors_2                                      (NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// struct FAnchors                    K2Node_MakeStruct_Anchors_3                                      (NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// class UCanvasPanelSlot*            CallFunc_GetCanvasPanelSlot_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnchors                    K2Node_MakeStruct_Anchors_4                                      (NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (None)
// class UCanvasPanelSlot*            CallFunc_GetCanvasPanelSlot_ReturnValue_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_GetCanvasPanelSlot_ReturnValue_2                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScaleBoxSlot*               CallFunc_SlotAsScaleBoxSlot_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_GetCanvasPanelSlot_ReturnValue_3                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScaleBoxSlot*               CallFunc_SlotAsScaleBoxSlot_ReturnValue_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_3                           (None)
// struct FAnchors                    K2Node_MakeStruct_Anchors_5                                      (NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_GetCanvasPanelSlot_ReturnValue_4                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_GetCanvasPanelSlot_ReturnValue_5                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo_1                                (HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo_2                                (HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_4                           (None)
// class UMaterialInstance*           CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Map_Find_Value_1                                        (None)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_BullshitCard_Widget_C::Refresh_Bullshit_or_Upgrade_UI(class UObject* LOCAL_Font_Meanwhile, class UObject* LOCAL_Font_PermanentMarker, class UObject* LOCAL_Font_Schoolbell, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FAnchors& K2Node_MakeStruct_Anchors, class FText CallFunc_Format_ReturnValue, const struct FAnchors& K2Node_MakeStruct_Anchors_1, const struct FAnchors& K2Node_MakeStruct_Anchors_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class FText CallFunc_Format_ReturnValue_1, const struct FAnchors& K2Node_MakeStruct_Anchors_3, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, class UCanvasPanelSlot* CallFunc_GetCanvasPanelSlot_ReturnValue, const struct FAnchors& K2Node_MakeStruct_Anchors_4, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, class UCanvasPanelSlot* CallFunc_GetCanvasPanelSlot_ReturnValue_1, class UCanvasPanelSlot* CallFunc_GetCanvasPanelSlot_ReturnValue_2, class UScaleBoxSlot* CallFunc_SlotAsScaleBoxSlot_ReturnValue, class UCanvasPanelSlot* CallFunc_GetCanvasPanelSlot_ReturnValue_3, class UScaleBoxSlot* CallFunc_SlotAsScaleBoxSlot_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_TextToUpper_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_3, const struct FAnchors& K2Node_MakeStruct_Anchors_5, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_Format_ReturnValue_2, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, class UCanvasPanelSlot* CallFunc_GetCanvasPanelSlot_ReturnValue_4, class UCanvasPanelSlot* CallFunc_GetCanvasPanelSlot_ReturnValue_5, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_1, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_2, class FText CallFunc_MakeLiteralText_ReturnValue_4, class UMaterialInstance* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FText CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BullshitCard_Widget_C", "Refresh Bullshit or Upgrade UI");

	Params::UUI_BullshitCard_Widget_C_Refresh_Bullshit_or_Upgrade_UI_Params Parms{};

	Parms.LOCAL_Font_Meanwhile = LOCAL_Font_Meanwhile;
	Parms.LOCAL_Font_PermanentMarker = LOCAL_Font_PermanentMarker;
	Parms.LOCAL_Font_Schoolbell = LOCAL_Font_Schoolbell;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_Anchors = K2Node_MakeStruct_Anchors;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_Anchors_1 = K2Node_MakeStruct_Anchors_1;
	Parms.K2Node_MakeStruct_Anchors_2 = K2Node_MakeStruct_Anchors_2;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.K2Node_MakeStruct_Anchors_3 = K2Node_MakeStruct_Anchors_3;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.CallFunc_GetCanvasPanelSlot_ReturnValue = CallFunc_GetCanvasPanelSlot_ReturnValue;
	Parms.K2Node_MakeStruct_Anchors_4 = K2Node_MakeStruct_Anchors_4;
	Parms.K2Node_MakeStruct_SlateColor_2 = K2Node_MakeStruct_SlateColor_2;
	Parms.CallFunc_GetCanvasPanelSlot_ReturnValue_1 = CallFunc_GetCanvasPanelSlot_ReturnValue_1;
	Parms.CallFunc_GetCanvasPanelSlot_ReturnValue_2 = CallFunc_GetCanvasPanelSlot_ReturnValue_2;
	Parms.CallFunc_SlotAsScaleBoxSlot_ReturnValue = CallFunc_SlotAsScaleBoxSlot_ReturnValue;
	Parms.CallFunc_GetCanvasPanelSlot_ReturnValue_3 = CallFunc_GetCanvasPanelSlot_ReturnValue_3;
	Parms.CallFunc_SlotAsScaleBoxSlot_ReturnValue_1 = CallFunc_SlotAsScaleBoxSlot_ReturnValue_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue_2 = CallFunc_MakeLiteralText_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_3 = CallFunc_MakeLiteralText_ReturnValue_3;
	Parms.K2Node_MakeStruct_Anchors_5 = K2Node_MakeStruct_Anchors_5;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;
	Parms.CallFunc_GetCanvasPanelSlot_ReturnValue_4 = CallFunc_GetCanvasPanelSlot_ReturnValue_4;
	Parms.CallFunc_GetCanvasPanelSlot_ReturnValue_5 = CallFunc_GetCanvasPanelSlot_ReturnValue_5;
	Parms.K2Node_MakeStruct_SlateFontInfo_1 = K2Node_MakeStruct_SlateFontInfo_1;
	Parms.K2Node_MakeStruct_SlateFontInfo_2 = K2Node_MakeStruct_SlateFontInfo_2;
	Parms.CallFunc_MakeLiteralText_ReturnValue_4 = CallFunc_MakeLiteralText_ReturnValue_4;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.Show or Hide Level UI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show_                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_BullshitCard_Widget_C::Show_or_Hide_Level_UI(bool Show_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BullshitCard_Widget_C", "Show or Hide Level UI");

	Params::UUI_BullshitCard_Widget_C_Show_or_Hide_Level_UI_Params Parms{};

	Parms.Show_ = Show_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.MakeEnemyBullshitCard
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      EnemyBullshitBPBase                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnBullshitBPBaseArchetype_C*CallFunc_GetBullshitArchetype_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (UObjectWrapper, HasGetValueTypeHash)
// struct FUI_Card_Struct             K2Node_MakeStruct_UI_Card_Struct                                 (HasGetValueTypeHash)

void UUI_BullshitCard_Widget_C::MakeEnemyBullshitCard(class UClass* EnemyBullshitBPBase, class UQtnBullshitBPBaseArchetype_C* CallFunc_GetBullshitArchetype_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, const struct FUI_Card_Struct& K2Node_MakeStruct_UI_Card_Struct)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BullshitCard_Widget_C", "MakeEnemyBullshitCard");

	Params::UUI_BullshitCard_Widget_C_MakeEnemyBullshitCard_Params Parms{};

	Parms.EnemyBullshitBPBase = EnemyBullshitBPBase;
	Parms.CallFunc_GetBullshitArchetype_ReturnValue = CallFunc_GetBullshitArchetype_ReturnValue;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	Parms.K2Node_MakeStruct_UI_Card_Struct = K2Node_MakeStruct_UI_Card_Struct;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.MakePlayerBullshitCard
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtn_CheatVerb_Archetype_C*  As_Qtn_Cheat_Verb_Archetype                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (UObjectWrapper, HasGetValueTypeHash)
// struct FUI_Card_Struct             K2Node_MakeStruct_UI_Card_Struct                                 (HasGetValueTypeHash)

void UUI_BullshitCard_Widget_C::MakePlayerBullshitCard(class UQtn_CheatVerb_Archetype_C* As_Qtn_Cheat_Verb_Archetype, TSoftObjectPtr<class UTexture2D> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, const struct FUI_Card_Struct& K2Node_MakeStruct_UI_Card_Struct)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BullshitCard_Widget_C", "MakePlayerBullshitCard");

	Params::UUI_BullshitCard_Widget_C_MakePlayerBullshitCard_Params Parms{};

	Parms.As_Qtn_Cheat_Verb_Archetype = As_Qtn_Cheat_Verb_Archetype;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	Parms.K2Node_MakeStruct_UI_Card_Struct = K2Node_MakeStruct_UI_Card_Struct;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.Make Large Upgrade Card
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnUpgradeSettings         UpgradeSettings                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               IsPlayerCard                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnRolledUpgradeData       QtnRolledUpgradeData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               IsRulebook                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               LOCAL_Rulebook                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UTexture2D*>          LOCAL_RarityTextures                                             (Edit, BlueprintVisible)
// TArray<struct FGameplayTag>        Local_RarityTags                                                 (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        LOCAL_RarityColors                                               (Edit, BlueprintVisible)
// TMap<struct FGameplayTag, class FText>LOCAL_TagToText                                                  (Edit, BlueprintVisible)
// struct FQtnRolledUpgradeData       LOCAL_RolledUpgradeData                                          (Edit, BlueprintVisible)
// TArray<class UTexture2D*>          K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<struct FGameplayTag>        K2Node_MakeArray_Array_1                                         (ReferenceParm)
// struct FQtnRolledUpgradeData       K2Node_MakeStruct_QtnRolledUpgradeData                           (None)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetTagName_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_RightChop_ReturnValue                                   (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_Upgrade_Value_OutFormattedValue                  (None)
// class FString                      CallFunc_ToUpper_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Format_Upgrade_Value_OutFormattedValue_1                (None)
// class FText                        CallFunc_Format_Upgrade_Value_OutFormattedValue_2                (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FUI_Card_Struct             K2Node_MakeStruct_UI_Card_Struct                                 (HasGetValueTypeHash)
// struct FUI_Card_Struct             K2Node_MakeStruct_UI_Card_Struct_1                               (HasGetValueTypeHash)

void UUI_BullshitCard_Widget_C::Make_Large_Upgrade_Card(const struct FQtnUpgradeSettings& UpgradeSettings, bool IsPlayerCard, const struct FQtnRolledUpgradeData& QtnRolledUpgradeData, bool IsRulebook, bool LOCAL_Rulebook, const TArray<class UTexture2D*>& LOCAL_RarityTextures, const TArray<struct FGameplayTag>& Local_RarityTags, const TArray<struct FLinearColor>& LOCAL_RarityColors, TMap<struct FGameplayTag, class FText> LOCAL_TagToText, const struct FQtnRolledUpgradeData& LOCAL_RolledUpgradeData, TArray<class UTexture2D*>& K2Node_MakeArray_Array, TArray<struct FGameplayTag>& K2Node_MakeArray_Array_1, const struct FQtnRolledUpgradeData& K2Node_MakeStruct_QtnRolledUpgradeData, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, bool Temp_bool_Variable, class UTexture2D* K2Node_Select_Default, int32 CallFunc_Array_Find_ReturnValue, class FName CallFunc_GetTagName_ReturnValue, class UTexture2D* CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_RightChop_ReturnValue, class FText CallFunc_Format_Upgrade_Value_OutFormattedValue, const class FString& CallFunc_ToUpper_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Format_Upgrade_Value_OutFormattedValue_1, class FText CallFunc_Format_Upgrade_Value_OutFormattedValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue, const struct FUI_Card_Struct& K2Node_MakeStruct_UI_Card_Struct, const struct FUI_Card_Struct& K2Node_MakeStruct_UI_Card_Struct_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BullshitCard_Widget_C", "Make Large Upgrade Card");

	Params::UUI_BullshitCard_Widget_C_Make_Large_Upgrade_Card_Params Parms{};

	Parms.UpgradeSettings = UpgradeSettings;
	Parms.IsPlayerCard = IsPlayerCard;
	Parms.QtnRolledUpgradeData = QtnRolledUpgradeData;
	Parms.IsRulebook = IsRulebook;
	Parms.LOCAL_Rulebook = LOCAL_Rulebook;
	Parms.LOCAL_RarityTextures = LOCAL_RarityTextures;
	Parms.Local_RarityTags = Local_RarityTags;
	Parms.LOCAL_RarityColors = LOCAL_RarityColors;
	Parms.LOCAL_TagToText = LOCAL_TagToText;
	Parms.LOCAL_RolledUpgradeData = LOCAL_RolledUpgradeData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeStruct_QtnRolledUpgradeData = K2Node_MakeStruct_QtnRolledUpgradeData;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_GetTagName_ReturnValue = CallFunc_GetTagName_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_RightChop_ReturnValue = CallFunc_RightChop_ReturnValue;
	Parms.CallFunc_Format_Upgrade_Value_OutFormattedValue = CallFunc_Format_Upgrade_Value_OutFormattedValue;
	Parms.CallFunc_ToUpper_ReturnValue = CallFunc_ToUpper_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Format_Upgrade_Value_OutFormattedValue_1 = CallFunc_Format_Upgrade_Value_OutFormattedValue_1;
	Parms.CallFunc_Format_Upgrade_Value_OutFormattedValue_2 = CallFunc_Format_Upgrade_Value_OutFormattedValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_UI_Card_Struct = K2Node_MakeStruct_UI_Card_Struct;
	Parms.K2Node_MakeStruct_UI_Card_Struct_1 = K2Node_MakeStruct_UI_Card_Struct_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.Format Upgrade Value
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FQtnUpgradeSettings         UpgradeSettings                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FQtnRolledUpgradeData       RolledData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        OutFormattedValue                                                (Parm, OutParm)
// TSubclassOf<class UQtnUpgrade>     CallFunc_SyncLoadUpgradeClass_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnUpgrade*                 CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetFormattedValueAtIndex_ReturnValue                    (None)

void UUI_BullshitCard_Widget_C::Format_Upgrade_Value(struct FQtnUpgradeSettings& UpgradeSettings, struct FQtnRolledUpgradeData& RolledData, int32 Index, class FText* OutFormattedValue, TSubclassOf<class UQtnUpgrade> CallFunc_SyncLoadUpgradeClass_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UQtnUpgrade* CallFunc_GetClassDefaultObject_ReturnValue, class FText CallFunc_GetFormattedValueAtIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BullshitCard_Widget_C", "Format Upgrade Value");

	Params::UUI_BullshitCard_Widget_C_Format_Upgrade_Value_Params Parms{};

	Parms.UpgradeSettings = UpgradeSettings;
	Parms.RolledData = RolledData;
	Parms.Index = Index;
	Parms.CallFunc_SyncLoadUpgradeClass_ReturnValue = CallFunc_SyncLoadUpgradeClass_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.CallFunc_GetFormattedValueAtIndex_ReturnValue = CallFunc_GetFormattedValueAtIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutFormattedValue != nullptr)
		*OutFormattedValue = Parms.OutFormattedValue;

}


// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.SetupRarity
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FLinearColor>        RarityColors                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                RarityTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CardBackgroundColor                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 RarityFontColor                                                  (Parm, OutParm)
// class FText                        RarityText                                                       (Parm, OutParm)
// TMap<struct FGameplayTag, class FText>LOCAL_TagToText                                                  (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        LOCAL_RarityColors                                               (Edit, BlueprintVisible)
// TMap<struct FGameplayTag, class FText>K2Node_MakeVariable_MakeVariableOutput                           (None)
// class FText                        CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FGameplayTag>        CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

void UUI_BullshitCard_Widget_C::SetupRarity(TArray<struct FLinearColor>& RarityColors, const struct FGameplayTag& RarityTag, struct FLinearColor* CardBackgroundColor, struct FSlateColor* RarityFontColor, class FText* RarityText, TMap<struct FGameplayTag, class FText> LOCAL_TagToText, const TArray<struct FLinearColor>& LOCAL_RarityColors, TMap<struct FGameplayTag, class FText> K2Node_MakeVariable_MakeVariableOutput, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<struct FGameplayTag>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Find_ReturnValue, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BullshitCard_Widget_C", "SetupRarity");

	Params::UUI_BullshitCard_Widget_C_SetupRarity_Params Parms{};

	Parms.RarityColors = RarityColors;
	Parms.RarityTag = RarityTag;
	Parms.LOCAL_TagToText = LOCAL_TagToText;
	Parms.LOCAL_RarityColors = LOCAL_RarityColors;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue = CallFunc_Multiply_LinearColorFloat_ReturnValue;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_1 = CallFunc_Multiply_LinearColorFloat_ReturnValue_1;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

	if (CardBackgroundColor != nullptr)
		*CardBackgroundColor = std::move(Parms.CardBackgroundColor);

	if (RarityFontColor != nullptr)
		*RarityFontColor = std::move(Parms.RarityFontColor);

	if (RarityText != nullptr)
		*RarityText = Parms.RarityText;

}


// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.Completed_AC5FDFB141F9139C793A92BB4FC57312
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_BullshitCard_Widget_C::Completed_AC5FDFB141F9139C793A92BB4FC57312(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BullshitCard_Widget_C", "Completed_AC5FDFB141F9139C793A92BB4FC57312");

	Params::UUI_BullshitCard_Widget_C_Completed_AC5FDFB141F9139C793A92BB4FC57312_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.Tick_AC5FDFB141F9139C793A92BB4FC57312
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_BullshitCard_Widget_C::Tick_AC5FDFB141F9139C793A92BB4FC57312(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BullshitCard_Widget_C", "Tick_AC5FDFB141F9139C793A92BB4FC57312");

	Params::UUI_BullshitCard_Widget_C_Tick_AC5FDFB141F9139C793A92BB4FC57312_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.Completed_0D26863247C9819588D18CBD1872098B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_BullshitCard_Widget_C::Completed_0D26863247C9819588D18CBD1872098B(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BullshitCard_Widget_C", "Completed_0D26863247C9819588D18CBD1872098B");

	Params::UUI_BullshitCard_Widget_C_Completed_0D26863247C9819588D18CBD1872098B_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.Tick_0D26863247C9819588D18CBD1872098B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_BullshitCard_Widget_C::Tick_0D26863247C9819588D18CBD1872098B(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BullshitCard_Widget_C", "Tick_0D26863247C9819588D18CBD1872098B");

	Params::UUI_BullshitCard_Widget_C_Tick_0D26863247C9819588D18CBD1872098B_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.OnLoaded_0F3DFB2242E371AF419BF1A6568BA1D6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_BullshitCard_Widget_C::OnLoaded_0F3DFB2242E371AF419BF1A6568BA1D6(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BullshitCard_Widget_C", "OnLoaded_0F3DFB2242E371AF419BF1A6568BA1D6");

	Params::UUI_BullshitCard_Widget_C_OnLoaded_0F3DFB2242E371AF419BF1A6568BA1D6_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.OnLoaded_CDC6644B4E04A754AAE771B663141047
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_BullshitCard_Widget_C::OnLoaded_CDC6644B4E04A754AAE771B663141047(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BullshitCard_Widget_C", "OnLoaded_CDC6644B4E04A754AAE771B663141047");

	Params::UUI_BullshitCard_Widget_C_OnLoaded_CDC6644B4E04A754AAE771B663141047_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.AnimSeq_Hover
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHovered                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_BullshitCard_Widget_C::AnimSeq_Hover(bool IsHovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BullshitCard_Widget_C", "AnimSeq_Hover");

	Params::UUI_BullshitCard_Widget_C_AnimSeq_Hover_Params Parms{};

	Parms.IsHovered = IsHovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.BndEvt__UI_BullshitCard_Widget_Button_1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_BullshitCard_Widget_C::BndEvt__UI_BullshitCard_Widget_Button_1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BullshitCard_Widget_C", "BndEvt__UI_BullshitCard_Widget_Button_1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.BndEvt__UI_BullshitCard_Widget_Button_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_BullshitCard_Widget_C::BndEvt__UI_BullshitCard_Widget_Button_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BullshitCard_Widget_C", "BndEvt__UI_BullshitCard_Widget_Button_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.BndEvt__UI_BullshitCard_Widget_Button_1_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_BullshitCard_Widget_C::BndEvt__UI_BullshitCard_Widget_Button_1_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BullshitCard_Widget_C", "BndEvt__UI_BullshitCard_Widget_Button_1_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.BndEvt__UI_BullshitCard_Widget_Button_1_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_BullshitCard_Widget_C::BndEvt__UI_BullshitCard_Widget_Button_1_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BullshitCard_Widget_C", "BndEvt__UI_BullshitCard_Widget_Button_1_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.MakeCardFromStruct
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUI_Card_Struct             MyCardInfo                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UUI_BullshitCard_Widget_C::MakeCardFromStruct(const struct FUI_Card_Struct& MyCardInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BullshitCard_Widget_C", "MakeCardFromStruct");

	Params::UUI_BullshitCard_Widget_C_MakeCardFromStruct_Params Parms{};

	Parms.MyCardInfo = MyCardInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.SetupCardArtAndIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_BullshitCard_Widget_C::SetupCardArtAndIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BullshitCard_Widget_C", "SetupCardArtAndIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.RefreshCardUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_BullshitCard_Widget_C::RefreshCardUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BullshitCard_Widget_C", "RefreshCardUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_BullshitCard_Widget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BullshitCard_Widget_C", "PreConstruct");

	Params::UUI_BullshitCard_Widget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.ForceUnhover
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_BullshitCard_Widget_C::ForceUnhover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BullshitCard_Widget_C", "ForceUnhover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.ForceHover
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_BullshitCard_Widget_C::ForceHover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BullshitCard_Widget_C", "ForceHover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.ExecuteUbergraph_UI_BullshitCard_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Value_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  CallFunc_GetIconForUI_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnBullshitBPBaseArchetype_C*CallFunc_GetBullshitArchetype_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_IsHovered                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_Value_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Ease_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnAsyncInterpolateValueRealtime*CallFunc_AsyncInterpolateValueRealtime_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnAsyncInterpolateValueRealtime*CallFunc_AsyncInterpolateValueRealtime_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUI_Card_Struct             K2Node_CustomEvent_MyCardInfo                                    (HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Value_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_BullshitCard_Widget_C::ExecuteUbergraph_UI_BullshitCard_Widget(int32 EntryPoint, float Temp_float_Variable, float CallFunc_Conv_BoolToFloat_ReturnValue, float K2Node_CustomEvent_Value_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_CustomEvent_Value, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float Temp_float_Variable_1, class UObject* K2Node_CustomEvent_Loaded_1, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable_1, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UTexture2D* CallFunc_GetIconForUI_ReturnValue, class UQtnBullshitBPBaseArchetype_C* CallFunc_GetBullshitArchetype_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable_1, bool K2Node_CustomEvent_IsHovered, float K2Node_CustomEvent_Value_2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, float CallFunc_Add_FloatFloat_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_2, float CallFunc_Ease_ReturnValue, class UQtnAsyncInterpolateValueRealtime* CallFunc_AsyncInterpolateValueRealtime_ReturnValue, class UQtnAsyncInterpolateValueRealtime* CallFunc_AsyncInterpolateValueRealtime_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FUI_Card_Struct& K2Node_CustomEvent_MyCardInfo, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, float K2Node_CustomEvent_Value_3, bool Temp_bool_IsClosed_Variable_2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_4, bool K2Node_Event_IsDesignTime, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BullshitCard_Widget_C", "ExecuteUbergraph_UI_BullshitCard_Widget");

	Params::UUI_BullshitCard_Widget_C_ExecuteUbergraph_UI_BullshitCard_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.K2Node_CustomEvent_Value_1 = K2Node_CustomEvent_Value_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.K2Node_CustomEvent_Loaded_1 = K2Node_CustomEvent_Loaded_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_DynamicCast_AsTexture_2D_1 = K2Node_DynamicCast_AsTexture_2D_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetIconForUI_ReturnValue = CallFunc_GetIconForUI_ReturnValue;
	Parms.CallFunc_GetBullshitArchetype_ReturnValue = CallFunc_GetBullshitArchetype_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.K2Node_CustomEvent_IsHovered = K2Node_CustomEvent_IsHovered;
	Parms.K2Node_CustomEvent_Value_2 = K2Node_CustomEvent_Value_2;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable_2 = Temp_bool_Has_Been_Initd_Variable_2;
	Parms.CallFunc_Ease_ReturnValue = CallFunc_Ease_ReturnValue;
	Parms.CallFunc_AsyncInterpolateValueRealtime_ReturnValue = CallFunc_AsyncInterpolateValueRealtime_ReturnValue;
	Parms.CallFunc_AsyncInterpolateValueRealtime_ReturnValue_1 = CallFunc_AsyncInterpolateValueRealtime_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CustomEvent_MyCardInfo = K2Node_CustomEvent_MyCardInfo;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue_1 = CallFunc_IsValidSoftObjectReference_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_2 = CallFunc_GetDynamicMaterial_ReturnValue_2;
	Parms.K2Node_CustomEvent_Value_3 = K2Node_CustomEvent_Value_3;
	Parms.Temp_bool_IsClosed_Variable_2 = Temp_bool_IsClosed_Variable_2;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_3 = CallFunc_GetDynamicMaterial_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_4 = CallFunc_GetDynamicMaterial_ReturnValue_4;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_5 = CallFunc_GetDynamicMaterial_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.CardButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Pressed_                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_BullshitCard_Widget_C::CardButtonPressed__DelegateSignature(bool Pressed_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BullshitCard_Widget_C", "CardButtonPressed__DelegateSignature");

	Params::UUI_BullshitCard_Widget_C_CardButtonPressed__DelegateSignature_Params Parms{};

	Parms.Pressed_ = Pressed_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.CardButtonHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hovered_                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              HoveredIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUI_Card_Struct             CardInfo                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UUI_BullshitCard_Widget_C::CardButtonHovered__DelegateSignature(bool Hovered_, int32 HoveredIndex, const struct FUI_Card_Struct& CardInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BullshitCard_Widget_C", "CardButtonHovered__DelegateSignature");

	Params::UUI_BullshitCard_Widget_C_CardButtonHovered__DelegateSignature_Params Parms{};

	Parms.Hovered_ = Hovered_;
	Parms.HoveredIndex = HoveredIndex;
	Parms.CardInfo = CardInfo;

	UObject::ProcessEvent(Func, &Parms);

}

}


