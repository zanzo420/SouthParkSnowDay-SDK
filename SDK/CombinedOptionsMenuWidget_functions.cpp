#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C
// (None)

class UClass* UCombinedOptionsMenuWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CombinedOptionsMenuWidget_C");

	return Clss;
}


// CombinedOptionsMenuWidget_C CombinedOptionsMenuWidget.Default__CombinedOptionsMenuWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCombinedOptionsMenuWidget_C* UCombinedOptionsMenuWidget_C::GetDefaultObj()
{
	static class UCombinedOptionsMenuWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCombinedOptionsMenuWidget_C*>(UCombinedOptionsMenuWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.SetupFromSaveData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCombinedOptionsMenuWidget_C::SetupFromSaveData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "SetupFromSaveData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.OnPreviewKeyDown
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// class UOptionsSwitchWidget_C*      K2Node_DynamicCast_AsOptions_Switch_Widget                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOptionsSliderWidget_C*      K2Node_DynamicCast_AsOptions_Slider_Widget                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOptionsComboWidget_C*       K2Node_DynamicCast_AsOptions_Combo_Widget                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// class UOptionsComboWidget_C*       K2Node_DynamicCast_AsOptions_Combo_Widget_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOptionsSwitchWidget_C*      K2Node_DynamicCast_AsOptions_Switch_Widget_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOptionsSliderWidget_C*      K2Node_DynamicCast_AsOptions_Slider_Widget_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FEventReply UCombinedOptionsMenuWidget_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, class UOptionsSwitchWidget_C* K2Node_DynamicCast_AsOptions_Switch_Widget, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, class UOptionsSliderWidget_C* K2Node_DynamicCast_AsOptions_Slider_Widget, bool K2Node_DynamicCast_bSuccess_1, class UOptionsComboWidget_C* K2Node_DynamicCast_AsOptions_Combo_Widget, bool K2Node_DynamicCast_bSuccess_2, const struct FEventReply& CallFunc_Handled_ReturnValue, class UOptionsComboWidget_C* K2Node_DynamicCast_AsOptions_Combo_Widget_1, bool K2Node_DynamicCast_bSuccess_3, class UOptionsSwitchWidget_C* K2Node_DynamicCast_AsOptions_Switch_Widget_1, bool K2Node_DynamicCast_bSuccess_4, class UOptionsSliderWidget_C* K2Node_DynamicCast_AsOptions_Slider_Widget_1, bool K2Node_DynamicCast_bSuccess_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "OnPreviewKeyDown");

	Params::UCombinedOptionsMenuWidget_C_OnPreviewKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.K2Node_DynamicCast_AsOptions_Switch_Widget = K2Node_DynamicCast_AsOptions_Switch_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsOptions_Slider_Widget = K2Node_DynamicCast_AsOptions_Slider_Widget;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsOptions_Combo_Widget = K2Node_DynamicCast_AsOptions_Combo_Widget;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.K2Node_DynamicCast_AsOptions_Combo_Widget_1 = K2Node_DynamicCast_AsOptions_Combo_Widget_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsOptions_Switch_Widget_1 = K2Node_DynamicCast_AsOptions_Switch_Widget_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsOptions_Slider_Widget_1 = K2Node_DynamicCast_AsOptions_Slider_Widget_1;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.RefreshTooltip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCombinedOptionsMenuWidget_C::RefreshTooltip(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "RefreshTooltip");

	Params::UCombinedOptionsMenuWidget_C_RefreshTooltip_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.FormatHeaderRichText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URichTextBlock*              Self2                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        String                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UCombinedOptionsMenuWidget_C::FormatHeaderRichText(class URichTextBlock* Self2, class FText String, class FText CallFunc_TextToUpper_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "FormatHeaderRichText");

	Params::UCombinedOptionsMenuWidget_C_FormatHeaderRichText_Params Parms{};

	Parms.Self2 = Self2;
	Parms.String = String;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.InitHeaders
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_3                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_4                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_5                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_6                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_7                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_8                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_9                           (None)

void UCombinedOptionsMenuWidget_C::InitHeaders(class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, class FText CallFunc_MakeLiteralText_ReturnValue_3, class FText CallFunc_MakeLiteralText_ReturnValue_4, class FText CallFunc_MakeLiteralText_ReturnValue_5, class FText CallFunc_MakeLiteralText_ReturnValue_6, class FText CallFunc_MakeLiteralText_ReturnValue_7, class FText CallFunc_MakeLiteralText_ReturnValue_8, class FText CallFunc_MakeLiteralText_ReturnValue_9)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "InitHeaders");

	Params::UCombinedOptionsMenuWidget_C_InitHeaders_Params Parms{};

	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue_2 = CallFunc_MakeLiteralText_ReturnValue_2;
	Parms.CallFunc_MakeLiteralText_ReturnValue_3 = CallFunc_MakeLiteralText_ReturnValue_3;
	Parms.CallFunc_MakeLiteralText_ReturnValue_4 = CallFunc_MakeLiteralText_ReturnValue_4;
	Parms.CallFunc_MakeLiteralText_ReturnValue_5 = CallFunc_MakeLiteralText_ReturnValue_5;
	Parms.CallFunc_MakeLiteralText_ReturnValue_6 = CallFunc_MakeLiteralText_ReturnValue_6;
	Parms.CallFunc_MakeLiteralText_ReturnValue_7 = CallFunc_MakeLiteralText_ReturnValue_7;
	Parms.CallFunc_MakeLiteralText_ReturnValue_8 = CallFunc_MakeLiteralText_ReturnValue_8;
	Parms.CallFunc_MakeLiteralText_ReturnValue_9 = CallFunc_MakeLiteralText_ReturnValue_9;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.Get VOLanguage Text from Tag
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTag                LanguageTag                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class FText                        LanguageText                                                     (Parm, OutParm)
// class FText                        CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCombinedOptionsMenuWidget_C::Get_VOLanguage_Text_from_Tag(const struct FGameplayTag& LanguageTag, class FText* LanguageText, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "Get VOLanguage Text from Tag");

	Params::UCombinedOptionsMenuWidget_C_Get_VOLanguage_Text_from_Tag_Params Parms{};

	Parms.LanguageTag = LanguageTag;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (LanguageText != nullptr)
		*LanguageText = Parms.LanguageText;

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.SetDefaultGamepadFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EQtnPlatform            CallFunc_GetPlatform_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCombinedOptionsMenuWidget_C::SetDefaultGamepadFocus(enum class EQtnPlatform CallFunc_GetPlatform_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "SetDefaultGamepadFocus");

	Params::UCombinedOptionsMenuWidget_C_SetDefaultGamepadFocus_Params Parms{};

	Parms.CallFunc_GetPlatform_ReturnValue = CallFunc_GetPlatform_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue = CallFunc_IsUsingMouseAndKeyboard_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.ChangePassiveEscapes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SavedPassiveEscape                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCombinedOptionsMenuWidget_C::ChangePassiveEscapes(bool SavedPassiveEscape, class AQtnPlayerController* CallFunc_GetOwningPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "ChangePassiveEscapes");

	Params::UCombinedOptionsMenuWidget_C_ChangePassiveEscapes_Params Parms{};

	Parms.SavedPassiveEscape = SavedPassiveEscape;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.GetDefaultGamepadIndexBasedOnPlatform
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EQtnPlatform            Platform                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ReturnIndex                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnPlatform            Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EQtnGamepadGlyphStyle>CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// enum class EQtnGamepadGlyphStyle   K2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCombinedOptionsMenuWidget_C::GetDefaultGamepadIndexBasedOnPlatform(enum class EQtnPlatform Platform, int32* ReturnIndex, enum class EQtnPlatform Temp_byte_Variable, uint8 CallFunc_MakeLiteralByte_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_2, uint8 CallFunc_MakeLiteralByte_ReturnValue_3, TArray<enum class EQtnGamepadGlyphStyle>& CallFunc_Map_Keys_Keys, enum class EQtnGamepadGlyphStyle K2Node_Select_Default, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "GetDefaultGamepadIndexBasedOnPlatform");

	Params::UCombinedOptionsMenuWidget_C_GetDefaultGamepadIndexBasedOnPlatform_Params Parms{};

	Parms.Platform = Platform;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_1 = CallFunc_MakeLiteralByte_ReturnValue_1;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_2 = CallFunc_MakeLiteralByte_ReturnValue_2;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_3 = CallFunc_MakeLiteralByte_ReturnValue_3;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnIndex != nullptr)
		*ReturnIndex = Parms.ReturnIndex;

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.DemoSubtitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_CreateSound2D_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCombinedOptionsMenuWidget_C::DemoSubtitle(bool CallFunc_IsValid_ReturnValue, class UAudioComponent* CallFunc_CreateSound2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "DemoSubtitle");

	Params::UCombinedOptionsMenuWidget_C_DemoSubtitle_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreateSound2D_ReturnValue = CallFunc_CreateSound2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.ResetAccessibilityValues
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              LOCAL_SubtitleSizes                                              (Edit, BlueprintVisible)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MakeLiteralBool_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESubtitleFontSize       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCombinedOptionsMenuWidget_C::ResetAccessibilityValues(const TArray<class FString>& LOCAL_SubtitleSizes, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_MakeLiteralBool_ReturnValue, enum class ESubtitleFontSize CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "ResetAccessibilityValues");

	Params::UCombinedOptionsMenuWidget_C_ResetAccessibilityValues_Params Parms{};

	Parms.LOCAL_SubtitleSizes = LOCAL_SubtitleSizes;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeLiteralBool_ReturnValue = CallFunc_MakeLiteralBool_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.ConvertLocaleToLanguageEnum
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Locale                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ELanguageOptions        Language                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Left_ReturnValue                                        (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELanguageOptions        CallFunc_ConvertLocaleToLanguageEnum_language                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              CallFunc_Map_Values_Values                                       (ReferenceParm)
// TArray<enum class ELanguageOptions>CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCombinedOptionsMenuWidget_C::ConvertLocaleToLanguageEnum(const class FString& Locale, enum class ELanguageOptions* Language, const class FString& CallFunc_Left_ReturnValue, int32 CallFunc_Len_ReturnValue, enum class ELanguageOptions CallFunc_ConvertLocaleToLanguageEnum_language, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<class FString>& CallFunc_Map_Values_Values, TArray<enum class ELanguageOptions>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "ConvertLocaleToLanguageEnum");

	Params::UCombinedOptionsMenuWidget_C_ConvertLocaleToLanguageEnum_Params Parms{};

	Parms.Locale = Locale;
	Parms.CallFunc_Left_ReturnValue = CallFunc_Left_ReturnValue;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_ConvertLocaleToLanguageEnum_language = CallFunc_ConvertLocaleToLanguageEnum_language;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Language != nullptr)
		*Language = Parms.Language;

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.MinimizeTeamPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Minimize                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerUI*                CallFunc_GetOwningPlayerUI_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUIArchetype_C*     K2Node_DynamicCast_AsQtn_Player_UIArchetype                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCombinedOptionsMenuWidget_C::MinimizeTeamPanel(bool Minimize, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue, class AQtnPlayerUIArchetype_C* K2Node_DynamicCast_AsQtn_Player_UIArchetype, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "MinimizeTeamPanel");

	Params::UCombinedOptionsMenuWidget_C_MinimizeTeamPanel_Params Parms{};

	Parms.Minimize = Minimize;
	Parms.CallFunc_GetOwningPlayerUI_ReturnValue = CallFunc_GetOwningPlayerUI_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Player_UIArchetype = K2Node_DynamicCast_AsQtn_Player_UIArchetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.SetUpConsoleSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EQtnPlatform            CallFunc_GetPlatform_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCombinedOptionsMenuWidget_C::SetUpConsoleSettings(enum class EQtnPlatform CallFunc_GetPlatform_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "SetUpConsoleSettings");

	Params::UCombinedOptionsMenuWidget_C_SetUpConsoleSettings_Params Parms{};

	Parms.CallFunc_GetPlatform_ReturnValue = CallFunc_GetPlatform_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.SwitchActiveVbox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCombinedOptionsMenuWidget_C::SwitchActiveVbox(bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "SwitchActiveVbox");

	Params::UCombinedOptionsMenuWidget_C_SwitchActiveVbox_Params Parms{};

	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_2 = CallFunc_EqualEqual_ObjectObject_ReturnValue_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.CheckValidOptionSelection
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     OutWidget                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     WidgetToCheck                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScaleBox*                   K2Node_DynamicCast_AsScale_Box                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOptionsMenuButtonWidget_C*  K2Node_DynamicCast_AsOptions_Menu_Button_Widget                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOptionsSliderWidget_C*      K2Node_DynamicCast_AsOptions_Slider_Widget                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOptionsSwitchWidget_C*      K2Node_DynamicCast_AsOptions_Switch_Widget                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOptionsComboWidget_C*       K2Node_DynamicCast_AsOptions_Combo_Widget                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCombinedOptionsMenuWidget_C::CheckValidOptionSelection(class UWidget* Widget, bool* IsValid, class UWidget** OutWidget, class UWidget* WidgetToCheck, class UScaleBox* K2Node_DynamicCast_AsScale_Box, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetChildAt_ReturnValue, class UOptionsMenuButtonWidget_C* K2Node_DynamicCast_AsOptions_Menu_Button_Widget, bool K2Node_DynamicCast_bSuccess_1, class UOptionsSliderWidget_C* K2Node_DynamicCast_AsOptions_Slider_Widget, bool K2Node_DynamicCast_bSuccess_2, class UOptionsSwitchWidget_C* K2Node_DynamicCast_AsOptions_Switch_Widget, bool K2Node_DynamicCast_bSuccess_3, class UOptionsComboWidget_C* K2Node_DynamicCast_AsOptions_Combo_Widget, bool K2Node_DynamicCast_bSuccess_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "CheckValidOptionSelection");

	Params::UCombinedOptionsMenuWidget_C_CheckValidOptionSelection_Params Parms{};

	Parms.Widget = Widget;
	Parms.WidgetToCheck = WidgetToCheck;
	Parms.K2Node_DynamicCast_AsScale_Box = K2Node_DynamicCast_AsScale_Box;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsOptions_Menu_Button_Widget = K2Node_DynamicCast_AsOptions_Menu_Button_Widget;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsOptions_Slider_Widget = K2Node_DynamicCast_AsOptions_Slider_Widget;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsOptions_Switch_Widget = K2Node_DynamicCast_AsOptions_Switch_Widget;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsOptions_Combo_Widget = K2Node_DynamicCast_AsOptions_Combo_Widget;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	if (OutWidget != nullptr)
		*OutWidget = Parms.OutWidget;

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.InitNavButtons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCombinedOptionsMenuWidget_C::InitNavButtons(bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "InitNavButtons");

	Params::UCombinedOptionsMenuWidget_C_InitNavButtons_Params Parms{};

	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue = CallFunc_IsUsingMouseAndKeyboard_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.ChangeValueLeftRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsRight                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               GoRight                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOptionsSliderWidget_C*      K2Node_DynamicCast_AsOptions_Slider_Widget                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOptionsComboWidget_C*       K2Node_DynamicCast_AsOptions_Combo_Widget                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCombinedOptionsMenuWidget_C::ChangeValueLeftRight(bool IsRight, bool GoRight, bool CallFunc_IsValid_ReturnValue, class UOptionsSliderWidget_C* K2Node_DynamicCast_AsOptions_Slider_Widget, bool K2Node_DynamicCast_bSuccess, class UOptionsComboWidget_C* K2Node_DynamicCast_AsOptions_Combo_Widget, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "ChangeValueLeftRight");

	Params::UCombinedOptionsMenuWidget_C_ChangeValueLeftRight_Params Parms{};

	Parms.IsRight = IsRight;
	Parms.GoRight = GoRight;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsOptions_Slider_Widget = K2Node_DynamicCast_AsOptions_Slider_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsOptions_Combo_Widget = K2Node_DynamicCast_AsOptions_Combo_Widget;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.UnlockSelection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOptionsComboWidget_C*       K2Node_DynamicCast_AsOptions_Combo_Widget                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOptionsSwitchWidget_C*      K2Node_DynamicCast_AsOptions_Switch_Widget                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOptionsSliderWidget_C*      K2Node_DynamicCast_AsOptions_Slider_Widget                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCombinedOptionsMenuWidget_C::UnlockSelection(class UOptionsComboWidget_C* K2Node_DynamicCast_AsOptions_Combo_Widget, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UOptionsSwitchWidget_C* K2Node_DynamicCast_AsOptions_Switch_Widget, bool K2Node_DynamicCast_bSuccess_1, class UOptionsSliderWidget_C* K2Node_DynamicCast_AsOptions_Slider_Widget, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "UnlockSelection");

	Params::UCombinedOptionsMenuWidget_C_UnlockSelection_Params Parms{};

	Parms.K2Node_DynamicCast_AsOptions_Combo_Widget = K2Node_DynamicCast_AsOptions_Combo_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsOptions_Switch_Widget = K2Node_DynamicCast_AsOptions_Switch_Widget;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsOptions_Slider_Widget = K2Node_DynamicCast_AsOptions_Slider_Widget;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.ClickSelection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOptionsMenuButtonWidget_C*  K2Node_DynamicCast_AsOptions_Menu_Button_Widget                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOptionsSwitchWidget_C*      K2Node_DynamicCast_AsOptions_Switch_Widget                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOptionsComboWidget_C*       K2Node_DynamicCast_AsOptions_Combo_Widget                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCombinedOptionsMenuWidget_C::ClickSelection(bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UOptionsMenuButtonWidget_C* K2Node_DynamicCast_AsOptions_Menu_Button_Widget, bool K2Node_DynamicCast_bSuccess, class UOptionsSwitchWidget_C* K2Node_DynamicCast_AsOptions_Switch_Widget, bool K2Node_DynamicCast_bSuccess_1, class UOptionsComboWidget_C* K2Node_DynamicCast_AsOptions_Combo_Widget, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "ClickSelection");

	Params::UCombinedOptionsMenuWidget_C_ClickSelection_Params Parms{};

	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue = CallFunc_IsUsingMouseAndKeyboard_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsOptions_Menu_Button_Widget = K2Node_DynamicCast_AsOptions_Menu_Button_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsOptions_Switch_Widget = K2Node_DynamicCast_AsOptions_Switch_Widget;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsOptions_Combo_Widget = K2Node_DynamicCast_AsOptions_Combo_Widget;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.HandleSelectionChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 User_Widget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsSelected                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOptionsMenuButtonWidget_C*  K2Node_DynamicCast_AsOptions_Menu_Button_Widget                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOptionsSliderWidget_C*      K2Node_DynamicCast_AsOptions_Slider_Widget                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOptionsSwitchWidget_C*      K2Node_DynamicCast_AsOptions_Switch_Widget                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOptionsComboWidget_C*       K2Node_DynamicCast_AsOptions_Combo_Widget                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCombinedOptionsMenuWidget_C::HandleSelectionChange(class UUserWidget* User_Widget, bool Selected, bool IsSelected, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UOptionsMenuButtonWidget_C* K2Node_DynamicCast_AsOptions_Menu_Button_Widget, bool K2Node_DynamicCast_bSuccess, class UOptionsSliderWidget_C* K2Node_DynamicCast_AsOptions_Slider_Widget, bool K2Node_DynamicCast_bSuccess_1, class UOptionsSwitchWidget_C* K2Node_DynamicCast_AsOptions_Switch_Widget, bool K2Node_DynamicCast_bSuccess_2, class UOptionsComboWidget_C* K2Node_DynamicCast_AsOptions_Combo_Widget, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "HandleSelectionChange");

	Params::UCombinedOptionsMenuWidget_C_HandleSelectionChange_Params Parms{};

	Parms.User_Widget = User_Widget;
	Parms.Selected = Selected;
	Parms.IsSelected = IsSelected;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue = CallFunc_IsUsingMouseAndKeyboard_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_DynamicCast_AsOptions_Menu_Button_Widget = K2Node_DynamicCast_AsOptions_Menu_Button_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsOptions_Slider_Widget = K2Node_DynamicCast_AsOptions_Slider_Widget;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsOptions_Switch_Widget = K2Node_DynamicCast_AsOptions_Switch_Widget;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsOptions_Combo_Widget = K2Node_DynamicCast_AsOptions_Combo_Widget;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.ResetAudioValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetDefaultAudioMasterVolume_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDefaultAudioAmbienceVolume_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDefaultAudioSpeechVolume_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDefaultAudioSFXVolume_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDefaultAudioMusicVolume_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCombinedOptionsMenuWidget_C::ResetAudioValues(float CallFunc_GetDefaultAudioMasterVolume_ReturnValue, float CallFunc_GetDefaultAudioAmbienceVolume_ReturnValue, float CallFunc_GetDefaultAudioSpeechVolume_ReturnValue, float CallFunc_GetDefaultAudioSFXVolume_ReturnValue, float CallFunc_GetDefaultAudioMusicVolume_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "ResetAudioValues");

	Params::UCombinedOptionsMenuWidget_C_ResetAudioValues_Params Parms{};

	Parms.CallFunc_GetDefaultAudioMasterVolume_ReturnValue = CallFunc_GetDefaultAudioMasterVolume_ReturnValue;
	Parms.CallFunc_GetDefaultAudioAmbienceVolume_ReturnValue = CallFunc_GetDefaultAudioAmbienceVolume_ReturnValue;
	Parms.CallFunc_GetDefaultAudioSpeechVolume_ReturnValue = CallFunc_GetDefaultAudioSpeechVolume_ReturnValue;
	Parms.CallFunc_GetDefaultAudioSFXVolume_ReturnValue = CallFunc_GetDefaultAudioSFXVolume_ReturnValue;
	Parms.CallFunc_GetDefaultAudioMusicVolume_ReturnValue = CallFunc_GetDefaultAudioMusicVolume_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.ResetVideoValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LOCAL_benchmarkAntiAliasingQuality                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LOCAL_benchmarkFogQuality                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LOCAL_benchmarkShadowQuality                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LOCAL_benchmarkTextureQuality                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RunBenchmark_WindowsOnly_outTextureQuality              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RunBenchmark_WindowsOnly_outShadowQuality               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RunBenchmark_WindowsOnly_outFogQuality                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RunBenchmark_WindowsOnly_outAntiAliasingQuality         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDefaultGammaRatio_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDefaultFOVScaleRatio_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScaledValue_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScaledFOV_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCombinedOptionsMenuWidget_C::ResetVideoValues(int32 LOCAL_benchmarkAntiAliasingQuality, int32 LOCAL_benchmarkFogQuality, int32 LOCAL_benchmarkShadowQuality, int32 LOCAL_benchmarkTextureQuality, int32 CallFunc_RunBenchmark_WindowsOnly_outTextureQuality, int32 CallFunc_RunBenchmark_WindowsOnly_outShadowQuality, int32 CallFunc_RunBenchmark_WindowsOnly_outFogQuality, int32 CallFunc_RunBenchmark_WindowsOnly_outAntiAliasingQuality, float CallFunc_GetDefaultGammaRatio_ReturnValue, float CallFunc_GetDefaultFOVScaleRatio_ReturnValue, float CallFunc_GetScaledValue_ReturnValue, float CallFunc_GetScaledFOV_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "ResetVideoValues");

	Params::UCombinedOptionsMenuWidget_C_ResetVideoValues_Params Parms{};

	Parms.LOCAL_benchmarkAntiAliasingQuality = LOCAL_benchmarkAntiAliasingQuality;
	Parms.LOCAL_benchmarkFogQuality = LOCAL_benchmarkFogQuality;
	Parms.LOCAL_benchmarkShadowQuality = LOCAL_benchmarkShadowQuality;
	Parms.LOCAL_benchmarkTextureQuality = LOCAL_benchmarkTextureQuality;
	Parms.CallFunc_RunBenchmark_WindowsOnly_outTextureQuality = CallFunc_RunBenchmark_WindowsOnly_outTextureQuality;
	Parms.CallFunc_RunBenchmark_WindowsOnly_outShadowQuality = CallFunc_RunBenchmark_WindowsOnly_outShadowQuality;
	Parms.CallFunc_RunBenchmark_WindowsOnly_outFogQuality = CallFunc_RunBenchmark_WindowsOnly_outFogQuality;
	Parms.CallFunc_RunBenchmark_WindowsOnly_outAntiAliasingQuality = CallFunc_RunBenchmark_WindowsOnly_outAntiAliasingQuality;
	Parms.CallFunc_GetDefaultGammaRatio_ReturnValue = CallFunc_GetDefaultGammaRatio_ReturnValue;
	Parms.CallFunc_GetDefaultFOVScaleRatio_ReturnValue = CallFunc_GetDefaultFOVScaleRatio_ReturnValue;
	Parms.CallFunc_GetScaledValue_ReturnValue = CallFunc_GetScaledValue_ReturnValue;
	Parms.CallFunc_GetScaledFOV_ReturnValue = CallFunc_GetScaledFOV_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.ResetControlsValues
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                GamepadGlyphStyles                                               (Edit, BlueprintVisible)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnPlatform            CallFunc_GetPlatform_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDefaultForceFeedback_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetDefaultInvertCameraY_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetDefaultInvertCameraY_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetDefaultStickAimSpeedRatio_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDefaultMouseAimSpeedRatio_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnPlatform            CallFunc_GetPlatform_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDefaultGamepadIndexBasedOnPlatform_ReturnIndex       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDefaultGyroSensitivity_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDefaultGyroAiming_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetDefaultStickLookSpeedRatio_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDefaultMouseLookSpeedRatio_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCombinedOptionsMenuWidget_C::ResetControlsValues(const TArray<class FText>& GamepadGlyphStyles, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, enum class EQtnPlatform CallFunc_GetPlatform_ReturnValue, bool CallFunc_GetDefaultForceFeedback_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_GetDefaultInvertCameraY_ReturnValue, bool CallFunc_GetDefaultInvertCameraY_ReturnValue_1, float CallFunc_GetDefaultStickAimSpeedRatio_ReturnValue, float CallFunc_GetDefaultMouseAimSpeedRatio_ReturnValue, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, enum class EQtnPlatform CallFunc_GetPlatform_ReturnValue_1, int32 CallFunc_GetDefaultGamepadIndexBasedOnPlatform_ReturnIndex, float CallFunc_GetDefaultGyroSensitivity_ReturnValue, bool CallFunc_GetDefaultGyroAiming_ReturnValue, float CallFunc_GetDefaultStickLookSpeedRatio_ReturnValue, float CallFunc_GetDefaultMouseLookSpeedRatio_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "ResetControlsValues");

	Params::UCombinedOptionsMenuWidget_C_ResetControlsValues_Params Parms{};

	Parms.GamepadGlyphStyles = GamepadGlyphStyles;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_GetPlatform_ReturnValue = CallFunc_GetPlatform_ReturnValue;
	Parms.CallFunc_GetDefaultForceFeedback_ReturnValue = CallFunc_GetDefaultForceFeedback_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetDefaultInvertCameraY_ReturnValue = CallFunc_GetDefaultInvertCameraY_ReturnValue;
	Parms.CallFunc_GetDefaultInvertCameraY_ReturnValue_1 = CallFunc_GetDefaultInvertCameraY_ReturnValue_1;
	Parms.CallFunc_GetDefaultStickAimSpeedRatio_ReturnValue = CallFunc_GetDefaultStickAimSpeedRatio_ReturnValue;
	Parms.CallFunc_GetDefaultMouseAimSpeedRatio_ReturnValue = CallFunc_GetDefaultMouseAimSpeedRatio_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetPlatform_ReturnValue_1 = CallFunc_GetPlatform_ReturnValue_1;
	Parms.CallFunc_GetDefaultGamepadIndexBasedOnPlatform_ReturnIndex = CallFunc_GetDefaultGamepadIndexBasedOnPlatform_ReturnIndex;
	Parms.CallFunc_GetDefaultGyroSensitivity_ReturnValue = CallFunc_GetDefaultGyroSensitivity_ReturnValue;
	Parms.CallFunc_GetDefaultGyroAiming_ReturnValue = CallFunc_GetDefaultGyroAiming_ReturnValue;
	Parms.CallFunc_GetDefaultStickLookSpeedRatio_ReturnValue = CallFunc_GetDefaultStickLookSpeedRatio_ReturnValue;
	Parms.CallFunc_GetDefaultMouseLookSpeedRatio_ReturnValue = CallFunc_GetDefaultMouseLookSpeedRatio_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.SwitchActiveTab
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EOptionsMenuTab         ClickedCategory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class EOptionsMenuTab, class UOptionsTopNav_Widget_C*>LOCAL_CategoriesToTopNav                                         (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              LOCAL_Index                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UOptionsTopNav_Widget_C*>LOCAL_TopNav                                                     (Edit, BlueprintVisible, ContainsInstancedReference)
// class UBorder*                     BorderToColor                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     PanelToShow                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     PanelToHide                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UOptionsTopNav_Widget_C*>CallFunc_Map_Values_Values                                       (ReferenceParm, ContainsInstancedReference)
// class UOptionsTopNav_Widget_C*     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<enum class EOptionsMenuTab, class UOptionsTopNav_Widget_C*>K2Node_MakeVariable_MakeVariableOutput                           (ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCombinedOptionsMenuWidget_C::SwitchActiveTab(enum class EOptionsMenuTab ClickedCategory, TMap<enum class EOptionsMenuTab, class UOptionsTopNav_Widget_C*> LOCAL_CategoriesToTopNav, int32 LOCAL_Index, const TArray<class UOptionsTopNav_Widget_C*>& LOCAL_TopNav, class UBorder* BorderToColor, class UWidget* PanelToShow, class UWidget* PanelToHide, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UOptionsTopNav_Widget_C*>& CallFunc_Map_Values_Values, class UOptionsTopNav_Widget_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TMap<enum class EOptionsMenuTab, class UOptionsTopNav_Widget_C*> K2Node_MakeVariable_MakeVariableOutput, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "SwitchActiveTab");

	Params::UCombinedOptionsMenuWidget_C_SwitchActiveTab_Params Parms{};

	Parms.ClickedCategory = ClickedCategory;
	Parms.LOCAL_CategoriesToTopNav = LOCAL_CategoriesToTopNav;
	Parms.LOCAL_Index = LOCAL_Index;
	Parms.LOCAL_TopNav = LOCAL_TopNav;
	Parms.BorderToColor = BorderToColor;
	Parms.PanelToShow = PanelToShow;
	Parms.PanelToHide = PanelToHide;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.InitNavigation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnPlatform            CallFunc_GetPlatform_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_DynamicCast_AsUser_Widget                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCombinedOptionsMenuWidget_C::InitNavigation(bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, bool Temp_bool_Variable, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue, enum class EQtnPlatform CallFunc_GetPlatform_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UUserWidget* K2Node_DynamicCast_AsUser_Widget, bool K2Node_DynamicCast_bSuccess, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "InitNavigation");

	Params::UCombinedOptionsMenuWidget_C_InitNavigation_Params Parms{};

	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue = CallFunc_IsUsingMouseAndKeyboard_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue_1 = CallFunc_IsUsingMouseAndKeyboard_ReturnValue_1;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_GetPlatform_ReturnValue = CallFunc_GetPlatform_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_DynamicCast_AsUser_Widget = K2Node_DynamicCast_AsUser_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue_2 = CallFunc_IsUsingMouseAndKeyboard_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.SetupSliders
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EQtnPlatform            CallFunc_GetPlatform_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOptionsDataBag_C*           CallFunc_GetCustomDataBag_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatingHealthBarsScale_OutScale                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGammaRatio_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSubtitleBackgroundOpacity_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetColorBlindStrength_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAudioAmbienceVolume_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetStickAimSpeedRatio_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetResolutionScale_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMouseAimSpeedRatio_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetStickLookSpeedRatio_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMouseLookSpeedRatio_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAudioSpeechVolume_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAudioSFXVolume_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAudioMusicVolume_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAudioMasterVolume_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFOVScaleRatio_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScaledValue_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScaledFOV_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCombinedOptionsMenuWidget_C::SetupSliders(enum class EQtnPlatform CallFunc_GetPlatform_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UOptionsDataBag_C* CallFunc_GetCustomDataBag_ReturnValue, float CallFunc_GetFloatingHealthBarsScale_OutScale, float CallFunc_GetGammaRatio_ReturnValue, float CallFunc_GetSubtitleBackgroundOpacity_ReturnValue, int32 CallFunc_GetColorBlindStrength_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetAudioAmbienceVolume_ReturnValue, float CallFunc_GetStickAimSpeedRatio_ReturnValue, float CallFunc_GetResolutionScale_ReturnValue, float CallFunc_GetMouseAimSpeedRatio_ReturnValue, float CallFunc_GetStickLookSpeedRatio_ReturnValue, float CallFunc_GetMouseLookSpeedRatio_ReturnValue, float CallFunc_GetAudioSpeechVolume_ReturnValue, float CallFunc_GetAudioSFXVolume_ReturnValue, float CallFunc_GetAudioMusicVolume_ReturnValue, float CallFunc_GetAudioMasterVolume_ReturnValue, float CallFunc_GetFOVScaleRatio_ReturnValue, float CallFunc_GetScaledValue_ReturnValue, float CallFunc_GetScaledFOV_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "SetupSliders");

	Params::UCombinedOptionsMenuWidget_C_SetupSliders_Params Parms{};

	Parms.CallFunc_GetPlatform_ReturnValue = CallFunc_GetPlatform_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetCustomDataBag_ReturnValue = CallFunc_GetCustomDataBag_ReturnValue;
	Parms.CallFunc_GetFloatingHealthBarsScale_OutScale = CallFunc_GetFloatingHealthBarsScale_OutScale;
	Parms.CallFunc_GetGammaRatio_ReturnValue = CallFunc_GetGammaRatio_ReturnValue;
	Parms.CallFunc_GetSubtitleBackgroundOpacity_ReturnValue = CallFunc_GetSubtitleBackgroundOpacity_ReturnValue;
	Parms.CallFunc_GetColorBlindStrength_ReturnValue = CallFunc_GetColorBlindStrength_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_GetAudioAmbienceVolume_ReturnValue = CallFunc_GetAudioAmbienceVolume_ReturnValue;
	Parms.CallFunc_GetStickAimSpeedRatio_ReturnValue = CallFunc_GetStickAimSpeedRatio_ReturnValue;
	Parms.CallFunc_GetResolutionScale_ReturnValue = CallFunc_GetResolutionScale_ReturnValue;
	Parms.CallFunc_GetMouseAimSpeedRatio_ReturnValue = CallFunc_GetMouseAimSpeedRatio_ReturnValue;
	Parms.CallFunc_GetStickLookSpeedRatio_ReturnValue = CallFunc_GetStickLookSpeedRatio_ReturnValue;
	Parms.CallFunc_GetMouseLookSpeedRatio_ReturnValue = CallFunc_GetMouseLookSpeedRatio_ReturnValue;
	Parms.CallFunc_GetAudioSpeechVolume_ReturnValue = CallFunc_GetAudioSpeechVolume_ReturnValue;
	Parms.CallFunc_GetAudioSFXVolume_ReturnValue = CallFunc_GetAudioSFXVolume_ReturnValue;
	Parms.CallFunc_GetAudioMusicVolume_ReturnValue = CallFunc_GetAudioMusicVolume_ReturnValue;
	Parms.CallFunc_GetAudioMasterVolume_ReturnValue = CallFunc_GetAudioMasterVolume_ReturnValue;
	Parms.CallFunc_GetFOVScaleRatio_ReturnValue = CallFunc_GetFOVScaleRatio_ReturnValue;
	Parms.CallFunc_GetScaledValue_ReturnValue = CallFunc_GetScaledValue_ReturnValue;
	Parms.CallFunc_GetScaledFOV_ReturnValue = CallFunc_GetScaledFOV_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.Set Up Bool Switches
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EQtnPlatform            CallFunc_GetPlatform_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSubtitleCategoryEnabled_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSmoothFramerate_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetVSync_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOptionsDataBag_C*           CallFunc_GetCustomDataBag_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFloatingHealthBarsEnabled_IsEnabled_                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AreSubtitlesEnabled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetForceFeedback_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCombinedOptionsMenuWidget_C::Set_Up_Bool_Switches(enum class EQtnPlatform CallFunc_GetPlatform_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsSubtitleCategoryEnabled_ReturnValue, bool CallFunc_GetSmoothFramerate_ReturnValue, bool CallFunc_GetVSync_ReturnValue, class UOptionsDataBag_C* CallFunc_GetCustomDataBag_ReturnValue, bool CallFunc_GetFloatingHealthBarsEnabled_IsEnabled_, bool CallFunc_AreSubtitlesEnabled_ReturnValue, bool CallFunc_GetForceFeedback_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "Set Up Bool Switches");

	Params::UCombinedOptionsMenuWidget_C_Set_Up_Bool_Switches_Params Parms{};

	Parms.CallFunc_GetPlatform_ReturnValue = CallFunc_GetPlatform_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsSubtitleCategoryEnabled_ReturnValue = CallFunc_IsSubtitleCategoryEnabled_ReturnValue;
	Parms.CallFunc_GetSmoothFramerate_ReturnValue = CallFunc_GetSmoothFramerate_ReturnValue;
	Parms.CallFunc_GetVSync_ReturnValue = CallFunc_GetVSync_ReturnValue;
	Parms.CallFunc_GetCustomDataBag_ReturnValue = CallFunc_GetCustomDataBag_ReturnValue;
	Parms.CallFunc_GetFloatingHealthBarsEnabled_IsEnabled_ = CallFunc_GetFloatingHealthBarsEnabled_IsEnabled_;
	Parms.CallFunc_AreSubtitlesEnabled_ReturnValue = CallFunc_AreSubtitlesEnabled_ReturnValue;
	Parms.CallFunc_GetForceFeedback_ReturnValue = CallFunc_GetForceFeedback_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.ConvertArrayTextToString
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class FText>                InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class FString>              OutString                                                        (Parm, OutParm)
// TArray<class FString>              StringArray                                                      (Edit, BlueprintVisible)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Array_Get_Item                                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCombinedOptionsMenuWidget_C::ConvertArrayTextToString(TArray<class FText>& InText, TArray<class FString>* OutString, const TArray<class FString>& StringArray, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class FText CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "ConvertArrayTextToString");

	Params::UCombinedOptionsMenuWidget_C_ConvertArrayTextToString_Params Parms{};

	Parms.InText = InText;
	Parms.StringArray = StringArray;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutString != nullptr)
		*OutString = std::move(Parms.OutString);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.SetupMotionBlur
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCombinedOptionsMenuWidget_C::SetupMotionBlur()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "SetupMotionBlur");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.DEPRECATED_Navigate Panel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EQtnUIScreenActionEnum  UIAction                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     SelectedWidget                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBox*              Hbox                                                             (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              DirectionInc                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCombinedOptionsMenuWidget_C::DEPRECATED_Navigate_Panel(enum class EQtnUIScreenActionEnum UIAction, class UWidget* SelectedWidget, class UHorizontalBox* Hbox, int32 DirectionInc, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "DEPRECATED_Navigate Panel");

	Params::UCombinedOptionsMenuWidget_C_DEPRECATED_Navigate_Panel_Params Parms{};

	Parms.UIAction = UIAction;
	Parms.SelectedWidget = SelectedWidget;
	Parms.Hbox = Hbox;
	Parms.DirectionInc = DirectionInc;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.ConditionalApplyPendingResolution
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCombinedOptionsMenuWidget_C::ConditionalApplyPendingResolution(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "ConditionalApplyPendingResolution");

	Params::UCombinedOptionsMenuWidget_C_ConditionalApplyPendingResolution_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.SetCurrentSelection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ThisWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOptionsComboWidget_C*       K2Node_DynamicCast_AsOptions_Combo_Widget                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOptionsComboWidget_C*       K2Node_DynamicCast_AsOptions_Combo_Widget_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCombinedOptionsMenuWidget_C::SetCurrentSelection(class UWidget* ThisWidget, class UOptionsComboWidget_C* K2Node_DynamicCast_AsOptions_Combo_Widget, bool K2Node_DynamicCast_bSuccess, class UOptionsComboWidget_C* K2Node_DynamicCast_AsOptions_Combo_Widget_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "SetCurrentSelection");

	Params::UCombinedOptionsMenuWidget_C_SetCurrentSelection_Params Parms{};

	Parms.ThisWidget = ThisWidget;
	Parms.K2Node_DynamicCast_AsOptions_Combo_Widget = K2Node_DynamicCast_AsOptions_Combo_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsOptions_Combo_Widget_1 = K2Node_DynamicCast_AsOptions_Combo_Widget_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.SetUpGamepadComboBoxes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                LOCAL_SubtitleSizes                                              (Edit, BlueprintVisible)
// TArray<class FText>                GamepadGlyphStyles                                               (Edit, BlueprintVisible)
// TArray<class FText>                PrivacyTypes                                                     (Edit, BlueprintVisible)
// TArray<class FText>                VOLanguages                                                      (Edit, BlueprintVisible)
// TArray<class FText>                Languages                                                        (Edit, BlueprintVisible)
// TArray<class FText>                VoiceModes                                                       (Edit, BlueprintVisible)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnUtilitiesSwitchQualityCallFunc_BranchUseSwitchQuality_Branch                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Map_Find_Value_1                                        (None)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                CallFunc_GetVOLanguage_ReturnValue                               (NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Get_VOLanguage_Text_from_Tag_languageText               (None)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        CallFunc_GetAvailableLocalizedAudioLanguages_ReturnValue         (ReferenceParm)
// struct FGameplayTag                CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Get_VOLanguage_Text_from_Tag_languageText_1             (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnPlatform            CallFunc_GetPlatform_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDefaultGamepadIndexBasedOnPlatform_ReturnIndex       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnPlatform            CallFunc_GetPlatform_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDefaultGamepadIndexBasedOnPlatform_ReturnIndex_1     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EColorBlindMode         CallFunc_GetColorBlindMode_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubtitleFontSize       CallFunc_GetSubtitleSize_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnPlatform            CallFunc_GetPlatform_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnGamepadGlyphStyle   CallFunc_GetGamepadGlyphStyle_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Map_Find_Value_2                                        (None)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetLanguage_ReturnValue                                 (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELanguageOptions        CallFunc_ConvertLocaleToLanguageEnum_language                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAntiAliasingQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetFogQuality_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShadowQuality_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTextureQuality_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCombinedOptionsMenuWidget_C::SetUpGamepadComboBoxes(const TArray<class FText>& LOCAL_SubtitleSizes, const TArray<class FText>& GamepadGlyphStyles, const TArray<class FText>& PrivacyTypes, const TArray<class FText>& VOLanguages, const TArray<class FText>& Languages, const TArray<class FText>& VoiceModes, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, uint8 CallFunc_Conv_IntToByte_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue_1, uint8 CallFunc_Conv_IntToByte_ReturnValue_3, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, int32 Temp_int_Variable_4, int32 Temp_int_Variable_5, uint8 CallFunc_Conv_IntToByte_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_2, uint8 CallFunc_GetValidValue_ReturnValue_2, uint8 CallFunc_Conv_IntToByte_ReturnValue_5, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue_2, int32 CallFunc_Conv_ByteToInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable, enum class EQtnUtilitiesSwitchQuality CallFunc_BranchUseSwitchQuality_Branch, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FText CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FGameplayTag& CallFunc_GetVOLanguage_ReturnValue, class FText CallFunc_Get_VOLanguage_Text_from_Tag_languageText, int32 CallFunc_Array_Find_ReturnValue, TArray<struct FGameplayTag>& CallFunc_GetAvailableLocalizedAudioLanguages_ReturnValue, const struct FGameplayTag& CallFunc_Array_Get_Item, class FText CallFunc_Get_VOLanguage_Text_from_Tag_languageText_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, enum class EQtnPlatform CallFunc_GetPlatform_ReturnValue, int32 CallFunc_Array_Find_ReturnValue_1, int32 CallFunc_GetDefaultGamepadIndexBasedOnPlatform_ReturnIndex, enum class EQtnPlatform CallFunc_GetPlatform_ReturnValue_1, int32 CallFunc_GetDefaultGamepadIndexBasedOnPlatform_ReturnIndex_1, int32 CallFunc_MakeLiteralInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, enum class EColorBlindMode CallFunc_GetColorBlindMode_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_3, enum class ESubtitleFontSize CallFunc_GetSubtitleSize_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_4, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_MakeLiteralInt_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_4, enum class EQtnPlatform CallFunc_GetPlatform_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_1, enum class EQtnGamepadGlyphStyle CallFunc_GetGamepadGlyphStyle_ReturnValue, class FText CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, int32 CallFunc_Conv_ByteToInt_ReturnValue_5, int32 CallFunc_Array_Add_ReturnValue_3, const class FString& CallFunc_GetLanguage_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_4, enum class ELanguageOptions CallFunc_ConvertLocaleToLanguageEnum_language, int32 CallFunc_Array_Find_ReturnValue_2, int32 CallFunc_GetAntiAliasingQuality_ReturnValue, int32 CallFunc_GetFogQuality_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, int32 CallFunc_GetTextureQuality_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "SetUpGamepadComboBoxes");

	Params::UCombinedOptionsMenuWidget_C_SetUpGamepadComboBoxes_Params Parms{};

	Parms.LOCAL_SubtitleSizes = LOCAL_SubtitleSizes;
	Parms.GamepadGlyphStyles = GamepadGlyphStyles;
	Parms.PrivacyTypes = PrivacyTypes;
	Parms.VOLanguages = VOLanguages;
	Parms.Languages = Languages;
	Parms.VoiceModes = VoiceModes;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_2 = CallFunc_Conv_IntToByte_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetValidValue_ReturnValue_1 = CallFunc_GetValidValue_ReturnValue_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_3 = CallFunc_Conv_IntToByte_ReturnValue_3;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1 = CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.Temp_int_Variable_5 = Temp_int_Variable_5;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_4 = CallFunc_Conv_IntToByte_ReturnValue_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_GetValidValue_ReturnValue_2 = CallFunc_GetValidValue_ReturnValue_2;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_5 = CallFunc_Conv_IntToByte_ReturnValue_5;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue_2 = CallFunc_GetEnumeratorValueFromIndex_ReturnValue_2;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_2 = CallFunc_Conv_ByteToInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_BranchUseSwitchQuality_Branch = CallFunc_BranchUseSwitchQuality_Branch;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetVOLanguage_ReturnValue = CallFunc_GetVOLanguage_ReturnValue;
	Parms.CallFunc_Get_VOLanguage_Text_from_Tag_languageText = CallFunc_Get_VOLanguage_Text_from_Tag_languageText;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_GetAvailableLocalizedAudioLanguages_ReturnValue = CallFunc_GetAvailableLocalizedAudioLanguages_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Get_VOLanguage_Text_from_Tag_languageText_1 = CallFunc_Get_VOLanguage_Text_from_Tag_languageText_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetPlatform_ReturnValue = CallFunc_GetPlatform_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue_1 = CallFunc_Array_Find_ReturnValue_1;
	Parms.CallFunc_GetDefaultGamepadIndexBasedOnPlatform_ReturnIndex = CallFunc_GetDefaultGamepadIndexBasedOnPlatform_ReturnIndex;
	Parms.CallFunc_GetPlatform_ReturnValue_1 = CallFunc_GetPlatform_ReturnValue_1;
	Parms.CallFunc_GetDefaultGamepadIndexBasedOnPlatform_ReturnIndex_1 = CallFunc_GetDefaultGamepadIndexBasedOnPlatform_ReturnIndex_1;
	Parms.CallFunc_MakeLiteralInt_ReturnValue_1 = CallFunc_MakeLiteralInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_GetColorBlindMode_ReturnValue = CallFunc_GetColorBlindMode_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_3 = CallFunc_Conv_ByteToInt_ReturnValue_3;
	Parms.CallFunc_GetSubtitleSize_ReturnValue = CallFunc_GetSubtitleSize_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_4 = CallFunc_Conv_ByteToInt_ReturnValue_4;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_MakeLiteralInt_ReturnValue_2 = CallFunc_MakeLiteralInt_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_GetPlatform_ReturnValue_2 = CallFunc_GetPlatform_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetGamepadGlyphStyle_ReturnValue = CallFunc_GetGamepadGlyphStyle_ReturnValue;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_5 = CallFunc_Conv_ByteToInt_ReturnValue_5;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.CallFunc_GetLanguage_ReturnValue = CallFunc_GetLanguage_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_4 = CallFunc_Array_Add_ReturnValue_4;
	Parms.CallFunc_ConvertLocaleToLanguageEnum_language = CallFunc_ConvertLocaleToLanguageEnum_language;
	Parms.CallFunc_Array_Find_ReturnValue_2 = CallFunc_Array_Find_ReturnValue_2;
	Parms.CallFunc_GetAntiAliasingQuality_ReturnValue = CallFunc_GetAntiAliasingQuality_ReturnValue;
	Parms.CallFunc_GetFogQuality_ReturnValue = CallFunc_GetFogQuality_ReturnValue;
	Parms.CallFunc_GetShadowQuality_ReturnValue = CallFunc_GetShadowQuality_ReturnValue;
	Parms.CallFunc_GetTextureQuality_ReturnValue = CallFunc_GetTextureQuality_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.ConvertStringToWindowMode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Label                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class EWindowMode             WindowMode                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCombinedOptionsMenuWidget_C::ConvertStringToWindowMode(const class FString& Label, enum class EWindowMode* WindowMode, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "ConvertStringToWindowMode");

	Params::UCombinedOptionsMenuWidget_C_ConvertStringToWindowMode_Params Parms{};

	Parms.Label = Label;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (WindowMode != nullptr)
		*WindowMode = Parms.WindowMode;

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.ConvertStringToResolution
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Label                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              X                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Y                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_LeftS                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_RightS                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Split_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCombinedOptionsMenuWidget_C::ConvertStringToResolution(const class FString& Label, int32* X, int32* Y, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "ConvertStringToResolution");

	Params::UCombinedOptionsMenuWidget_C_ConvertStringToResolution_Params Parms{};

	Parms.Label = Label;
	Parms.CallFunc_Split_LeftS = CallFunc_Split_LeftS;
	Parms.CallFunc_Split_RightS = CallFunc_Split_RightS;
	Parms.CallFunc_Split_ReturnValue = CallFunc_Split_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_1 = CallFunc_Conv_StringToInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (X != nullptr)
		*X = Parms.X;

	if (Y != nullptr)
		*Y = Parms.Y;

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.Convert Resolution to Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              X                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Y                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Label                                                            (Parm, OutParm)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UCombinedOptionsMenuWidget_C::Convert_Resolution_to_Text(int32 X, int32 Y, class FText* Label, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "Convert Resolution to Text");

	Params::UCombinedOptionsMenuWidget_C_Convert_Resolution_to_Text_Params Parms{};

	Parms.X = X;
	Parms.Y = Y;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Label != nullptr)
		*Label = Parms.Label;

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.SetupWindowModes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                WindowModeArray                                                  (Edit, BlueprintVisible)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWindowMode             CallFunc_GetFullscreenMode_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Map_Find_Value_1                                        (None)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCombinedOptionsMenuWidget_C::SetupWindowModes(const TArray<class FText>& WindowModeArray, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, enum class EWindowMode CallFunc_GetFullscreenMode_ReturnValue, class FText CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, int32 CallFunc_Array_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "SetupWindowModes");

	Params::UCombinedOptionsMenuWidget_C_SetupWindowModes_Params Parms{};

	Parms.WindowModeArray = WindowModeArray;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetFullscreenMode_ReturnValue = CallFunc_GetFullscreenMode_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.SetupResolutions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ResolutionIndex                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                ResolutionArray                                                  (Edit, BlueprintVisible)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWindowMode             CallFunc_GetFullscreenMode_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FIntPoint>           CallFunc_GetConvenientWindowedResolutions_Resolutions            (ReferenceParm)
// bool                               CallFunc_GetConvenientWindowedResolutions_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FIntPoint                   CallFunc_GetScreenResolution_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Convert_Resolution_to_Text_label                        (None)
// class FText                        CallFunc_Convert_Resolution_to_Text_label_1                      (None)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FIntPoint>           CallFunc_GetSupportedFullscreenResolutions_Resolutions           (ReferenceParm)
// bool                               CallFunc_GetSupportedFullscreenResolutions_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FIntPoint                   CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Convert_Resolution_to_Text_label_2                      (None)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCombinedOptionsMenuWidget_C::SetupResolutions(int32 ResolutionIndex, const TArray<class FText>& ResolutionArray, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Array_LastIndex_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, enum class EWindowMode CallFunc_GetFullscreenMode_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, TArray<struct FIntPoint>& CallFunc_GetConvenientWindowedResolutions_Resolutions, bool CallFunc_GetConvenientWindowedResolutions_ReturnValue, const struct FIntPoint& CallFunc_GetScreenResolution_ReturnValue, const struct FIntPoint& CallFunc_Array_Get_Item, class FText CallFunc_Convert_Resolution_to_Text_label, class FText CallFunc_Convert_Resolution_to_Text_label_1, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FIntPoint>& CallFunc_GetSupportedFullscreenResolutions_Resolutions, bool CallFunc_GetSupportedFullscreenResolutions_ReturnValue, const struct FIntPoint& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class FText CallFunc_Convert_Resolution_to_Text_label_2, int32 CallFunc_Array_Add_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "SetupResolutions");

	Params::UCombinedOptionsMenuWidget_C_SetupResolutions_Params Parms{};

	Parms.ResolutionIndex = ResolutionIndex;
	Parms.ResolutionArray = ResolutionArray;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetFullscreenMode_ReturnValue = CallFunc_GetFullscreenMode_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_1 = CallFunc_GetGameUserSettings_ReturnValue_1;
	Parms.CallFunc_GetConvenientWindowedResolutions_Resolutions = CallFunc_GetConvenientWindowedResolutions_Resolutions;
	Parms.CallFunc_GetConvenientWindowedResolutions_ReturnValue = CallFunc_GetConvenientWindowedResolutions_ReturnValue;
	Parms.CallFunc_GetScreenResolution_ReturnValue = CallFunc_GetScreenResolution_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Convert_Resolution_to_Text_label = CallFunc_Convert_Resolution_to_Text_label;
	Parms.CallFunc_Convert_Resolution_to_Text_label_1 = CallFunc_Convert_Resolution_to_Text_label_1;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetSupportedFullscreenResolutions_Resolutions = CallFunc_GetSupportedFullscreenResolutions_Resolutions;
	Parms.CallFunc_GetSupportedFullscreenResolutions_ReturnValue = CallFunc_GetSupportedFullscreenResolutions_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Convert_Resolution_to_Text_label_2 = CallFunc_Convert_Resolution_to_Text_label_2;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.OnQtnWidgetResumed
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UQtnScreen*                  PreviousScreen                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCombinedOptionsMenuWidget_C::OnQtnWidgetResumed(class UQtnScreen* PreviousScreen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "OnQtnWidgetResumed");

	Params::UCombinedOptionsMenuWidget_C_OnQtnWidgetResumed_Params Parms{};

	Parms.PreviousScreen = PreviousScreen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.OnUIScreenActionPressed
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EQtnUIScreenActionEnum  ScreenAction                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCombinedOptionsMenuWidget_C::OnUIScreenActionPressed(enum class EQtnUIScreenActionEnum ScreenAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "OnUIScreenActionPressed");

	Params::UCombinedOptionsMenuWidget_C_OnUIScreenActionPressed_Params Parms{};

	Parms.ScreenAction = ScreenAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.ExitOptions
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCombinedOptionsMenuWidget_C::ExitOptions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "ExitOptions");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.OnInputUsageChange
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               IsUsingMouseAndKeyboard                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCombinedOptionsMenuWidget_C::OnInputUsageChange(bool IsUsingMouseAndKeyboard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "OnInputUsageChange");

	Params::UCombinedOptionsMenuWidget_C_OnInputUsageChange_Params Parms{};

	Parms.IsUsingMouseAndKeyboard = IsUsingMouseAndKeyboard;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.Event_ResetSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCombinedOptionsMenuWidget_C::Event_ResetSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "Event_ResetSettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.Event_ActivateWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCombinedOptionsMenuWidget_C::Event_ActivateWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "Event_ActivateWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.OnQtnWidgetInitialized
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCombinedOptionsMenuWidget_C::OnQtnWidgetInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "OnQtnWidgetInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.OnQtnWidgetPaused
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCombinedOptionsMenuWidget_C::OnQtnWidgetPaused()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "OnQtnWidgetPaused");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.OnQtnWidgetStarted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCombinedOptionsMenuWidget_C::OnQtnWidgetStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "OnQtnWidgetStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.BndEvt__OGCW_Resolution_K2Node_ComponentBoundEvent_3_ComboSelectionChangedDispatch__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              SelectedIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCombinedOptionsMenuWidget_C::BndEvt__OGCW_Resolution_K2Node_ComponentBoundEvent_3_ComboSelectionChangedDispatch__DelegateSignature(int32 SelectedIndex, const class FString& Selection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "BndEvt__OGCW_Resolution_K2Node_ComponentBoundEvent_3_ComboSelectionChangedDispatch__DelegateSignature");

	Params::UCombinedOptionsMenuWidget_C_BndEvt__OGCW_Resolution_K2Node_ComponentBoundEvent_3_ComboSelectionChangedDispatch__DelegateSignature_Params Parms{};

	Parms.SelectedIndex = SelectedIndex;
	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.BndEvt__OGCW_WindowMode_K2Node_ComponentBoundEvent_4_ComboSelectionChangedDispatch__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              SelectedIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCombinedOptionsMenuWidget_C::BndEvt__OGCW_WindowMode_K2Node_ComponentBoundEvent_4_ComboSelectionChangedDispatch__DelegateSignature(int32 SelectedIndex, const class FString& Selection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "BndEvt__OGCW_WindowMode_K2Node_ComponentBoundEvent_4_ComboSelectionChangedDispatch__DelegateSignature");

	Params::UCombinedOptionsMenuWidget_C_BndEvt__OGCW_WindowMode_K2Node_ComponentBoundEvent_4_ComboSelectionChangedDispatch__DelegateSignature_Params Parms{};

	Parms.SelectedIndex = SelectedIndex;
	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.InitializeOptions
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCombinedOptionsMenuWidget_C::InitializeOptions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "InitializeOptions");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.BndEvt__OGCW_AntiAliasingQuality_K2Node_ComponentBoundEvent_5_ComboSelectionChangedDispatch__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              SelectedIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCombinedOptionsMenuWidget_C::BndEvt__OGCW_AntiAliasingQuality_K2Node_ComponentBoundEvent_5_ComboSelectionChangedDispatch__DelegateSignature(int32 SelectedIndex, const class FString& Selection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "BndEvt__OGCW_AntiAliasingQuality_K2Node_ComponentBoundEvent_5_ComboSelectionChangedDispatch__DelegateSignature");

	Params::UCombinedOptionsMenuWidget_C_BndEvt__OGCW_AntiAliasingQuality_K2Node_ComponentBoundEvent_5_ComboSelectionChangedDispatch__DelegateSignature_Params Parms{};

	Parms.SelectedIndex = SelectedIndex;
	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.BndEvt__OGCW_VolumetricLighting_K2Node_ComponentBoundEvent_9_ComboSelectionChangedDispatch__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              SelectedIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCombinedOptionsMenuWidget_C::BndEvt__OGCW_VolumetricLighting_K2Node_ComponentBoundEvent_9_ComboSelectionChangedDispatch__DelegateSignature(int32 SelectedIndex, const class FString& Selection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "BndEvt__OGCW_VolumetricLighting_K2Node_ComponentBoundEvent_9_ComboSelectionChangedDispatch__DelegateSignature");

	Params::UCombinedOptionsMenuWidget_C_BndEvt__OGCW_VolumetricLighting_K2Node_ComponentBoundEvent_9_ComboSelectionChangedDispatch__DelegateSignature_Params Parms{};

	Parms.SelectedIndex = SelectedIndex;
	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.BndEvt__OGCW_ShadowQuality_K2Node_ComponentBoundEvent_10_ComboSelectionChangedDispatch__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              SelectedIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCombinedOptionsMenuWidget_C::BndEvt__OGCW_ShadowQuality_K2Node_ComponentBoundEvent_10_ComboSelectionChangedDispatch__DelegateSignature(int32 SelectedIndex, const class FString& Selection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "BndEvt__OGCW_ShadowQuality_K2Node_ComponentBoundEvent_10_ComboSelectionChangedDispatch__DelegateSignature");

	Params::UCombinedOptionsMenuWidget_C_BndEvt__OGCW_ShadowQuality_K2Node_ComponentBoundEvent_10_ComboSelectionChangedDispatch__DelegateSignature_Params Parms{};

	Parms.SelectedIndex = SelectedIndex;
	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.BndEvt__OGCW_TextureDetail_K2Node_ComponentBoundEvent_13_ComboSelectionChangedDispatch__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              SelectedIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCombinedOptionsMenuWidget_C::BndEvt__OGCW_TextureDetail_K2Node_ComponentBoundEvent_13_ComboSelectionChangedDispatch__DelegateSignature(int32 SelectedIndex, const class FString& Selection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "BndEvt__OGCW_TextureDetail_K2Node_ComponentBoundEvent_13_ComboSelectionChangedDispatch__DelegateSignature");

	Params::UCombinedOptionsMenuWidget_C_BndEvt__OGCW_TextureDetail_K2Node_ComponentBoundEvent_13_ComboSelectionChangedDispatch__DelegateSignature_Params Parms{};

	Parms.SelectedIndex = SelectedIndex;
	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.BndEvt__OGSW_ResolutionScale_K2Node_ComponentBoundEvent_15_SliderValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCombinedOptionsMenuWidget_C::BndEvt__OGSW_ResolutionScale_K2Node_ComponentBoundEvent_15_SliderValueChanged__DelegateSignature(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "BndEvt__OGSW_ResolutionScale_K2Node_ComponentBoundEvent_15_SliderValueChanged__DelegateSignature");

	Params::UCombinedOptionsMenuWidget_C_BndEvt__OGSW_ResolutionScale_K2Node_ComponentBoundEvent_15_SliderValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.BndEvt__OGSW_FOV_K2Node_ComponentBoundEvent_16_SliderValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCombinedOptionsMenuWidget_C::BndEvt__OGSW_FOV_K2Node_ComponentBoundEvent_16_SliderValueChanged__DelegateSignature(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "BndEvt__OGSW_FOV_K2Node_ComponentBoundEvent_16_SliderValueChanged__DelegateSignature");

	Params::UCombinedOptionsMenuWidget_C_BndEvt__OGSW_FOV_K2Node_ComponentBoundEvent_16_SliderValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.BndEvt__Slider_GamepadSensitivity_K2Node_ComponentBoundEvent_8_SliderValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCombinedOptionsMenuWidget_C::BndEvt__Slider_GamepadSensitivity_K2Node_ComponentBoundEvent_8_SliderValueChanged__DelegateSignature(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "BndEvt__Slider_GamepadSensitivity_K2Node_ComponentBoundEvent_8_SliderValueChanged__DelegateSignature");

	Params::UCombinedOptionsMenuWidget_C_BndEvt__Slider_GamepadSensitivity_K2Node_ComponentBoundEvent_8_SliderValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.BndEvt__Slider_MouseSensitivity_K2Node_ComponentBoundEvent_12_SliderValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCombinedOptionsMenuWidget_C::BndEvt__Slider_MouseSensitivity_K2Node_ComponentBoundEvent_12_SliderValueChanged__DelegateSignature(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "BndEvt__Slider_MouseSensitivity_K2Node_ComponentBoundEvent_12_SliderValueChanged__DelegateSignature");

	Params::UCombinedOptionsMenuWidget_C_BndEvt__Slider_MouseSensitivity_K2Node_ComponentBoundEvent_12_SliderValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.BndEvt__Slider_VolumeDialogue_K2Node_ComponentBoundEvent_25_SliderValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCombinedOptionsMenuWidget_C::BndEvt__Slider_VolumeDialogue_K2Node_ComponentBoundEvent_25_SliderValueChanged__DelegateSignature(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "BndEvt__Slider_VolumeDialogue_K2Node_ComponentBoundEvent_25_SliderValueChanged__DelegateSignature");

	Params::UCombinedOptionsMenuWidget_C_BndEvt__Slider_VolumeDialogue_K2Node_ComponentBoundEvent_25_SliderValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.BndEvt__Slider_VolumeMaster_K2Node_ComponentBoundEvent_26_SliderValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCombinedOptionsMenuWidget_C::BndEvt__Slider_VolumeMaster_K2Node_ComponentBoundEvent_26_SliderValueChanged__DelegateSignature(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "BndEvt__Slider_VolumeMaster_K2Node_ComponentBoundEvent_26_SliderValueChanged__DelegateSignature");

	Params::UCombinedOptionsMenuWidget_C_BndEvt__Slider_VolumeMaster_K2Node_ComponentBoundEvent_26_SliderValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.BndEvt__Slider_VolumeMusic_K2Node_ComponentBoundEvent_27_SliderValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCombinedOptionsMenuWidget_C::BndEvt__Slider_VolumeMusic_K2Node_ComponentBoundEvent_27_SliderValueChanged__DelegateSignature(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "BndEvt__Slider_VolumeMusic_K2Node_ComponentBoundEvent_27_SliderValueChanged__DelegateSignature");

	Params::UCombinedOptionsMenuWidget_C_BndEvt__Slider_VolumeMusic_K2Node_ComponentBoundEvent_27_SliderValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.BndEvt__Slider_VolumeSFX_K2Node_ComponentBoundEvent_28_SliderValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCombinedOptionsMenuWidget_C::BndEvt__Slider_VolumeSFX_K2Node_ComponentBoundEvent_28_SliderValueChanged__DelegateSignature(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "BndEvt__Slider_VolumeSFX_K2Node_ComponentBoundEvent_28_SliderValueChanged__DelegateSignature");

	Params::UCombinedOptionsMenuWidget_C_BndEvt__Slider_VolumeSFX_K2Node_ComponentBoundEvent_28_SliderValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.TopNavCycle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Right                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCombinedOptionsMenuWidget_C::TopNavCycle(bool Right)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "TopNavCycle");

	Params::UCombinedOptionsMenuWidget_C_TopNavCycle_Params Parms{};

	Parms.Right = Right;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.OnQtnWidgetStopped
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCombinedOptionsMenuWidget_C::OnQtnWidgetStopped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "OnQtnWidgetStopped");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.BndEvt__Combo_Language_K2Node_ComponentBoundEvent_11_ComboSelectionChangedDispatch__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              SelectedIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCombinedOptionsMenuWidget_C::BndEvt__Combo_Language_K2Node_ComponentBoundEvent_11_ComboSelectionChangedDispatch__DelegateSignature(int32 SelectedIndex, const class FString& Selection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "BndEvt__Combo_Language_K2Node_ComponentBoundEvent_11_ComboSelectionChangedDispatch__DelegateSignature");

	Params::UCombinedOptionsMenuWidget_C_BndEvt__Combo_Language_K2Node_ComponentBoundEvent_11_ComboSelectionChangedDispatch__DelegateSignature_Params Parms{};

	Parms.SelectedIndex = SelectedIndex;
	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.ChangeSelectionGamepad
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     CurrentSelection                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     NewSelection                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCombinedOptionsMenuWidget_C::ChangeSelectionGamepad(class UWidget* CurrentSelection, class UWidget* NewSelection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "ChangeSelectionGamepad");

	Params::UCombinedOptionsMenuWidget_C_ChangeSelectionGamepad_Params Parms{};

	Parms.CurrentSelection = CurrentSelection;
	Parms.NewSelection = NewSelection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.OnUIScreenActionReleased
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EQtnUIScreenActionEnum  ScreenAction                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCombinedOptionsMenuWidget_C::OnUIScreenActionReleased(enum class EQtnUIScreenActionEnum ScreenAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "OnUIScreenActionReleased");

	Params::UCombinedOptionsMenuWidget_C_OnUIScreenActionReleased_Params Parms{};

	Parms.ScreenAction = ScreenAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.BndEvt__Combo_GamepadGlyphStyle_K2Node_ComponentBoundEvent_38_ComboSelectionChangedDispatch__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              SelectedIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCombinedOptionsMenuWidget_C::BndEvt__Combo_GamepadGlyphStyle_K2Node_ComponentBoundEvent_38_ComboSelectionChangedDispatch__DelegateSignature(int32 SelectedIndex, const class FString& Selection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "BndEvt__Combo_GamepadGlyphStyle_K2Node_ComponentBoundEvent_38_ComboSelectionChangedDispatch__DelegateSignature");

	Params::UCombinedOptionsMenuWidget_C_BndEvt__Combo_GamepadGlyphStyle_K2Node_ComponentBoundEvent_38_ComboSelectionChangedDispatch__DelegateSignature_Params Parms{};

	Parms.SelectedIndex = SelectedIndex;
	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.BndEvt__Slider_VolumeAmbience_K2Node_ComponentBoundEvent_39_SliderValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCombinedOptionsMenuWidget_C::BndEvt__Slider_VolumeAmbience_K2Node_ComponentBoundEvent_39_SliderValueChanged__DelegateSignature(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "BndEvt__Slider_VolumeAmbience_K2Node_ComponentBoundEvent_39_SliderValueChanged__DelegateSignature");

	Params::UCombinedOptionsMenuWidget_C_BndEvt__Slider_VolumeAmbience_K2Node_ComponentBoundEvent_39_SliderValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.BndEvt__CombinedOptionsMenuWidget_OGSW_ColorBlindStrength_K2Node_ComponentBoundEvent_23_SliderValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCombinedOptionsMenuWidget_C::BndEvt__CombinedOptionsMenuWidget_OGSW_ColorBlindStrength_K2Node_ComponentBoundEvent_23_SliderValueChanged__DelegateSignature(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "BndEvt__CombinedOptionsMenuWidget_OGSW_ColorBlindStrength_K2Node_ComponentBoundEvent_23_SliderValueChanged__DelegateSignature");

	Params::UCombinedOptionsMenuWidget_C_BndEvt__CombinedOptionsMenuWidget_OGSW_ColorBlindStrength_K2Node_ComponentBoundEvent_23_SliderValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.BndEvt__CombinedOptionsMenuWidget_OGCW_SubtitleSize_K2Node_ComponentBoundEvent_24_ComboSelectionChangedDispatch__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              SelectedIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCombinedOptionsMenuWidget_C::BndEvt__CombinedOptionsMenuWidget_OGCW_SubtitleSize_K2Node_ComponentBoundEvent_24_ComboSelectionChangedDispatch__DelegateSignature(int32 SelectedIndex, const class FString& Selection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "BndEvt__CombinedOptionsMenuWidget_OGCW_SubtitleSize_K2Node_ComponentBoundEvent_24_ComboSelectionChangedDispatch__DelegateSignature");

	Params::UCombinedOptionsMenuWidget_C_BndEvt__CombinedOptionsMenuWidget_OGCW_SubtitleSize_K2Node_ComponentBoundEvent_24_ComboSelectionChangedDispatch__DelegateSignature_Params Parms{};

	Parms.SelectedIndex = SelectedIndex;
	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.BndEvt__CombinedOptionsMenuWidget_Slider_SubtitleBGOpacity_K2Node_ComponentBoundEvent_29_SliderValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCombinedOptionsMenuWidget_C::BndEvt__CombinedOptionsMenuWidget_Slider_SubtitleBGOpacity_K2Node_ComponentBoundEvent_29_SliderValueChanged__DelegateSignature(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "BndEvt__CombinedOptionsMenuWidget_Slider_SubtitleBGOpacity_K2Node_ComponentBoundEvent_29_SliderValueChanged__DelegateSignature");

	Params::UCombinedOptionsMenuWidget_C_BndEvt__CombinedOptionsMenuWidget_Slider_SubtitleBGOpacity_K2Node_ComponentBoundEvent_29_SliderValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCombinedOptionsMenuWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "PreConstruct");

	Params::UCombinedOptionsMenuWidget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.BndEvt__CombinedOptionsMenuWidget_OGCW_ColorBlindModeAcc_K2Node_ComponentBoundEvent_40_ComboSelectionChangedDispatch__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              SelectedIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCombinedOptionsMenuWidget_C::BndEvt__CombinedOptionsMenuWidget_OGCW_ColorBlindModeAcc_K2Node_ComponentBoundEvent_40_ComboSelectionChangedDispatch__DelegateSignature(int32 SelectedIndex, const class FString& Selection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "BndEvt__CombinedOptionsMenuWidget_OGCW_ColorBlindModeAcc_K2Node_ComponentBoundEvent_40_ComboSelectionChangedDispatch__DelegateSignature");

	Params::UCombinedOptionsMenuWidget_C_BndEvt__CombinedOptionsMenuWidget_OGCW_ColorBlindModeAcc_K2Node_ComponentBoundEvent_40_ComboSelectionChangedDispatch__DelegateSignature_Params Parms{};

	Parms.SelectedIndex = SelectedIndex;
	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.BndEvt__CombinedOptionsMenuWidget_TopNav_Accessibility_K2Node_ComponentBoundEvent_20_TopNavButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class EOptionsMenuTab         ClickedCategory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCombinedOptionsMenuWidget_C::BndEvt__CombinedOptionsMenuWidget_TopNav_Accessibility_K2Node_ComponentBoundEvent_20_TopNavButtonClicked__DelegateSignature(enum class EOptionsMenuTab ClickedCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "BndEvt__CombinedOptionsMenuWidget_TopNav_Accessibility_K2Node_ComponentBoundEvent_20_TopNavButtonClicked__DelegateSignature");

	Params::UCombinedOptionsMenuWidget_C_BndEvt__CombinedOptionsMenuWidget_TopNav_Accessibility_K2Node_ComponentBoundEvent_20_TopNavButtonClicked__DelegateSignature_Params Parms{};

	Parms.ClickedCategory = ClickedCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.BndEvt__CombinedOptionsMenuWidget_TopNav_Audio_K2Node_ComponentBoundEvent_36_TopNavButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class EOptionsMenuTab         ClickedCategory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCombinedOptionsMenuWidget_C::BndEvt__CombinedOptionsMenuWidget_TopNav_Audio_K2Node_ComponentBoundEvent_36_TopNavButtonClicked__DelegateSignature(enum class EOptionsMenuTab ClickedCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "BndEvt__CombinedOptionsMenuWidget_TopNav_Audio_K2Node_ComponentBoundEvent_36_TopNavButtonClicked__DelegateSignature");

	Params::UCombinedOptionsMenuWidget_C_BndEvt__CombinedOptionsMenuWidget_TopNav_Audio_K2Node_ComponentBoundEvent_36_TopNavButtonClicked__DelegateSignature_Params Parms{};

	Parms.ClickedCategory = ClickedCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.BndEvt__CombinedOptionsMenuWidget_TopNav_Controls_K2Node_ComponentBoundEvent_41_TopNavButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class EOptionsMenuTab         ClickedCategory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCombinedOptionsMenuWidget_C::BndEvt__CombinedOptionsMenuWidget_TopNav_Controls_K2Node_ComponentBoundEvent_41_TopNavButtonClicked__DelegateSignature(enum class EOptionsMenuTab ClickedCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "BndEvt__CombinedOptionsMenuWidget_TopNav_Controls_K2Node_ComponentBoundEvent_41_TopNavButtonClicked__DelegateSignature");

	Params::UCombinedOptionsMenuWidget_C_BndEvt__CombinedOptionsMenuWidget_TopNav_Controls_K2Node_ComponentBoundEvent_41_TopNavButtonClicked__DelegateSignature_Params Parms{};

	Parms.ClickedCategory = ClickedCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.BndEvt__CombinedOptionsMenuWidget_TopNav_Video_K2Node_ComponentBoundEvent_42_TopNavButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class EOptionsMenuTab         ClickedCategory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCombinedOptionsMenuWidget_C::BndEvt__CombinedOptionsMenuWidget_TopNav_Video_K2Node_ComponentBoundEvent_42_TopNavButtonClicked__DelegateSignature(enum class EOptionsMenuTab ClickedCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "BndEvt__CombinedOptionsMenuWidget_TopNav_Video_K2Node_ComponentBoundEvent_42_TopNavButtonClicked__DelegateSignature");

	Params::UCombinedOptionsMenuWidget_C_BndEvt__CombinedOptionsMenuWidget_TopNav_Video_K2Node_ComponentBoundEvent_42_TopNavButtonClicked__DelegateSignature_Params Parms{};

	Parms.ClickedCategory = ClickedCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.BndEvt__CombinedOptionsMenuWidget_OGSW_Gamma_K2Node_ComponentBoundEvent_34_SliderValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCombinedOptionsMenuWidget_C::BndEvt__CombinedOptionsMenuWidget_OGSW_Gamma_K2Node_ComponentBoundEvent_34_SliderValueChanged__DelegateSignature(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "BndEvt__CombinedOptionsMenuWidget_OGSW_Gamma_K2Node_ComponentBoundEvent_34_SliderValueChanged__DelegateSignature");

	Params::UCombinedOptionsMenuWidget_C_BndEvt__CombinedOptionsMenuWidget_OGSW_Gamma_K2Node_ComponentBoundEvent_34_SliderValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.BndEvt__CombinedOptionsMenuWidget_Btn_Reset_K2Node_ComponentBoundEvent_44_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCombinedOptionsMenuWidget_C::BndEvt__CombinedOptionsMenuWidget_Btn_Reset_K2Node_ComponentBoundEvent_44_ButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "BndEvt__CombinedOptionsMenuWidget_Btn_Reset_K2Node_ComponentBoundEvent_44_ButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.BndEvt__CombinedOptionsMenuWidget_OGSW_FloatingHealthBarScale_K2Node_ComponentBoundEvent_31_SliderValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCombinedOptionsMenuWidget_C::BndEvt__CombinedOptionsMenuWidget_OGSW_FloatingHealthBarScale_K2Node_ComponentBoundEvent_31_SliderValueChanged__DelegateSignature(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "BndEvt__CombinedOptionsMenuWidget_OGSW_FloatingHealthBarScale_K2Node_ComponentBoundEvent_31_SliderValueChanged__DelegateSignature");

	Params::UCombinedOptionsMenuWidget_C_BndEvt__CombinedOptionsMenuWidget_OGSW_FloatingHealthBarScale_K2Node_ComponentBoundEvent_31_SliderValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.BndEvt__CombinedOptionsMenuWidget_Slider_GyroSensitivity_K2Node_ComponentBoundEvent_30_SliderValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCombinedOptionsMenuWidget_C::BndEvt__CombinedOptionsMenuWidget_Slider_GyroSensitivity_K2Node_ComponentBoundEvent_30_SliderValueChanged__DelegateSignature(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "BndEvt__CombinedOptionsMenuWidget_Slider_GyroSensitivity_K2Node_ComponentBoundEvent_30_SliderValueChanged__DelegateSignature");

	Params::UCombinedOptionsMenuWidget_C_BndEvt__CombinedOptionsMenuWidget_Slider_GyroSensitivity_K2Node_ComponentBoundEvent_30_SliderValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.BndEvt__CombinedOptionsMenuWidget_Slider_GamepadAimSensitivity_K2Node_ComponentBoundEvent_17_SliderValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCombinedOptionsMenuWidget_C::BndEvt__CombinedOptionsMenuWidget_Slider_GamepadAimSensitivity_K2Node_ComponentBoundEvent_17_SliderValueChanged__DelegateSignature(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "BndEvt__CombinedOptionsMenuWidget_Slider_GamepadAimSensitivity_K2Node_ComponentBoundEvent_17_SliderValueChanged__DelegateSignature");

	Params::UCombinedOptionsMenuWidget_C_BndEvt__CombinedOptionsMenuWidget_Slider_GamepadAimSensitivity_K2Node_ComponentBoundEvent_17_SliderValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.BndEvt__CombinedOptionsMenuWidget_Slider_MouseAimSensitivity_K2Node_ComponentBoundEvent_43_SliderValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCombinedOptionsMenuWidget_C::BndEvt__CombinedOptionsMenuWidget_Slider_MouseAimSensitivity_K2Node_ComponentBoundEvent_43_SliderValueChanged__DelegateSignature(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "BndEvt__CombinedOptionsMenuWidget_Slider_MouseAimSensitivity_K2Node_ComponentBoundEvent_43_SliderValueChanged__DelegateSignature");

	Params::UCombinedOptionsMenuWidget_C_BndEvt__CombinedOptionsMenuWidget_Slider_MouseAimSensitivity_K2Node_ComponentBoundEvent_43_SliderValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.BndEvt__CombinedOptionsMenuWidget_Combo_VOLanguage_K2Node_ComponentBoundEvent_33_ComboSelectionChangedDispatch__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              SelectedIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCombinedOptionsMenuWidget_C::BndEvt__CombinedOptionsMenuWidget_Combo_VOLanguage_K2Node_ComponentBoundEvent_33_ComboSelectionChangedDispatch__DelegateSignature(int32 SelectedIndex, const class FString& Selection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "BndEvt__CombinedOptionsMenuWidget_Combo_VOLanguage_K2Node_ComponentBoundEvent_33_ComboSelectionChangedDispatch__DelegateSignature");

	Params::UCombinedOptionsMenuWidget_C_BndEvt__CombinedOptionsMenuWidget_Combo_VOLanguage_K2Node_ComponentBoundEvent_33_ComboSelectionChangedDispatch__DelegateSignature_Params Parms{};

	Parms.SelectedIndex = SelectedIndex;
	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.BndEvt__CombinedOptionsMenuWidget_OSW_SubtitlesCombat_K2Node_ComponentBoundEvent_47_SwitchValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCombinedOptionsMenuWidget_C::BndEvt__CombinedOptionsMenuWidget_OSW_SubtitlesCombat_K2Node_ComponentBoundEvent_47_SwitchValueChanged__DelegateSignature(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "BndEvt__CombinedOptionsMenuWidget_OSW_SubtitlesCombat_K2Node_ComponentBoundEvent_47_SwitchValueChanged__DelegateSignature");

	Params::UCombinedOptionsMenuWidget_C_BndEvt__CombinedOptionsMenuWidget_OSW_SubtitlesCombat_K2Node_ComponentBoundEvent_47_SwitchValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.BndEvt__CombinedOptionsMenuWidget_OSW_SubtitlesAcc_K2Node_ComponentBoundEvent_49_SwitchValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCombinedOptionsMenuWidget_C::BndEvt__CombinedOptionsMenuWidget_OSW_SubtitlesAcc_K2Node_ComponentBoundEvent_49_SwitchValueChanged__DelegateSignature(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "BndEvt__CombinedOptionsMenuWidget_OSW_SubtitlesAcc_K2Node_ComponentBoundEvent_49_SwitchValueChanged__DelegateSignature");

	Params::UCombinedOptionsMenuWidget_C_BndEvt__CombinedOptionsMenuWidget_OSW_SubtitlesAcc_K2Node_ComponentBoundEvent_49_SwitchValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.BndEvt__CombinedOptionsMenuWidget_OSW_MouseInvertY_K2Node_ComponentBoundEvent_52_SwitchValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCombinedOptionsMenuWidget_C::BndEvt__CombinedOptionsMenuWidget_OSW_MouseInvertY_K2Node_ComponentBoundEvent_52_SwitchValueChanged__DelegateSignature(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "BndEvt__CombinedOptionsMenuWidget_OSW_MouseInvertY_K2Node_ComponentBoundEvent_52_SwitchValueChanged__DelegateSignature");

	Params::UCombinedOptionsMenuWidget_C_BndEvt__CombinedOptionsMenuWidget_OSW_MouseInvertY_K2Node_ComponentBoundEvent_52_SwitchValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.BndEvt__CombinedOptionsMenuWidget_OSW_GamepadInvertY_K2Node_ComponentBoundEvent_54_SwitchValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCombinedOptionsMenuWidget_C::BndEvt__CombinedOptionsMenuWidget_OSW_GamepadInvertY_K2Node_ComponentBoundEvent_54_SwitchValueChanged__DelegateSignature(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "BndEvt__CombinedOptionsMenuWidget_OSW_GamepadInvertY_K2Node_ComponentBoundEvent_54_SwitchValueChanged__DelegateSignature");

	Params::UCombinedOptionsMenuWidget_C_BndEvt__CombinedOptionsMenuWidget_OSW_GamepadInvertY_K2Node_ComponentBoundEvent_54_SwitchValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.BndEvt__CombinedOptionsMenuWidget_OSW_ForceFeedback_K2Node_ComponentBoundEvent_56_SwitchValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCombinedOptionsMenuWidget_C::BndEvt__CombinedOptionsMenuWidget_OSW_ForceFeedback_K2Node_ComponentBoundEvent_56_SwitchValueChanged__DelegateSignature(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "BndEvt__CombinedOptionsMenuWidget_OSW_ForceFeedback_K2Node_ComponentBoundEvent_56_SwitchValueChanged__DelegateSignature");

	Params::UCombinedOptionsMenuWidget_C_BndEvt__CombinedOptionsMenuWidget_OSW_ForceFeedback_K2Node_ComponentBoundEvent_56_SwitchValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.BndEvt__CombinedOptionsMenuWidget_OSW_FrameSmooth_K2Node_ComponentBoundEvent_0_SwitchValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCombinedOptionsMenuWidget_C::BndEvt__CombinedOptionsMenuWidget_OSW_FrameSmooth_K2Node_ComponentBoundEvent_0_SwitchValueChanged__DelegateSignature(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "BndEvt__CombinedOptionsMenuWidget_OSW_FrameSmooth_K2Node_ComponentBoundEvent_0_SwitchValueChanged__DelegateSignature");

	Params::UCombinedOptionsMenuWidget_C_BndEvt__CombinedOptionsMenuWidget_OSW_FrameSmooth_K2Node_ComponentBoundEvent_0_SwitchValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.BndEvt__CombinedOptionsMenuWidget_OSW_VSync_K2Node_ComponentBoundEvent_18_SwitchValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCombinedOptionsMenuWidget_C::BndEvt__CombinedOptionsMenuWidget_OSW_VSync_K2Node_ComponentBoundEvent_18_SwitchValueChanged__DelegateSignature(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "BndEvt__CombinedOptionsMenuWidget_OSW_VSync_K2Node_ComponentBoundEvent_18_SwitchValueChanged__DelegateSignature");

	Params::UCombinedOptionsMenuWidget_C_BndEvt__CombinedOptionsMenuWidget_OSW_VSync_K2Node_ComponentBoundEvent_18_SwitchValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.BndEvt__CombinedOptionsMenuWidget_OSW_MotionBlur_K2Node_ComponentBoundEvent_35_SwitchValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCombinedOptionsMenuWidget_C::BndEvt__CombinedOptionsMenuWidget_OSW_MotionBlur_K2Node_ComponentBoundEvent_35_SwitchValueChanged__DelegateSignature(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "BndEvt__CombinedOptionsMenuWidget_OSW_MotionBlur_K2Node_ComponentBoundEvent_35_SwitchValueChanged__DelegateSignature");

	Params::UCombinedOptionsMenuWidget_C_BndEvt__CombinedOptionsMenuWidget_OSW_MotionBlur_K2Node_ComponentBoundEvent_35_SwitchValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.BndEvt__CombinedOptionsMenuWidget_OSW_ButtonMash_K2Node_ComponentBoundEvent_46_SwitchValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCombinedOptionsMenuWidget_C::BndEvt__CombinedOptionsMenuWidget_OSW_ButtonMash_K2Node_ComponentBoundEvent_46_SwitchValueChanged__DelegateSignature(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "BndEvt__CombinedOptionsMenuWidget_OSW_ButtonMash_K2Node_ComponentBoundEvent_46_SwitchValueChanged__DelegateSignature");

	Params::UCombinedOptionsMenuWidget_C_BndEvt__CombinedOptionsMenuWidget_OSW_ButtonMash_K2Node_ComponentBoundEvent_46_SwitchValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.BndEvt__CombinedOptionsMenuWidget_OSW_FloatingHealthBar_K2Node_ComponentBoundEvent_50_SwitchValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCombinedOptionsMenuWidget_C::BndEvt__CombinedOptionsMenuWidget_OSW_FloatingHealthBar_K2Node_ComponentBoundEvent_50_SwitchValueChanged__DelegateSignature(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "BndEvt__CombinedOptionsMenuWidget_OSW_FloatingHealthBar_K2Node_ComponentBoundEvent_50_SwitchValueChanged__DelegateSignature");

	Params::UCombinedOptionsMenuWidget_C_BndEvt__CombinedOptionsMenuWidget_OSW_FloatingHealthBar_K2Node_ComponentBoundEvent_50_SwitchValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.BndEvt__CombinedOptionsMenuWidget_OSW_Gyro_K2Node_ComponentBoundEvent_55_SwitchValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCombinedOptionsMenuWidget_C::BndEvt__CombinedOptionsMenuWidget_OSW_Gyro_K2Node_ComponentBoundEvent_55_SwitchValueChanged__DelegateSignature(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "BndEvt__CombinedOptionsMenuWidget_OSW_Gyro_K2Node_ComponentBoundEvent_55_SwitchValueChanged__DelegateSignature");

	Params::UCombinedOptionsMenuWidget_C_BndEvt__CombinedOptionsMenuWidget_OSW_Gyro_K2Node_ComponentBoundEvent_55_SwitchValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.OnUIScroll
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              ScrollDelta                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FromStick                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCombinedOptionsMenuWidget_C::OnUIScroll(float ScrollDelta, bool FromStick)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "OnUIScroll");

	Params::UCombinedOptionsMenuWidget_C_OnUIScroll_Params Parms{};

	Parms.ScrollDelta = ScrollDelta;
	Parms.FromStick = FromStick;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.ShowTooltip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        TooltipToShow                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UCombinedOptionsMenuWidget_C::ShowTooltip(class FText TooltipToShow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "ShowTooltip");

	Params::UCombinedOptionsMenuWidget_C_ShowTooltip_Params Parms{};

	Parms.TooltipToShow = TooltipToShow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCombinedOptionsMenuWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "Tick");

	Params::UCombinedOptionsMenuWidget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CombinedOptionsMenuWidget.CombinedOptionsMenuWidget_C.ExecuteUbergraph_CombinedOptionsMenuWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isUsingMouseAndKeyboard                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_SelectedIndex_10                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_Selection_10                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_ConvertStringToResolution_x                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ConvertStringToResolution_y                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_SelectedIndex_9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_Selection_9                           (ZeroConstructor, HasGetValueTypeHash)
// struct FIntPoint                   K2Node_MakeStruct_IntPoint                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_SelectedIndex_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_Selection_8                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_SelectedIndex_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_Selection_7                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_SelectedIndex_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_Selection_6                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_SelectedIndex_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_Selection_5                           (ZeroConstructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewValue_26                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewValue_25                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewValue_24                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewValue_23                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnUIScreenActionEnum  K2Node_Event_screenAction_1                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnScreen*                  K2Node_Event_previousScreen                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewValue_22                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewValue_21                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewValue_20                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewValue_19                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnScreen*                  CallFunc_GetScreenThatOwnsThisWidget_ReturnValue                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_right                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_SelectedIndex_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_Selection_4                           (ZeroConstructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_CustomEvent_currentSelection                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_CustomEvent_newSelection                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 K2Node_DynamicCast_AsUser_Widget                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 K2Node_DynamicCast_AsUser_Widget_1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnUIScreenActionEnum  K2Node_Event_screenAction                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_SelectedIndex_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_Selection_3                           (ZeroConstructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnPlatform            CallFunc_GetPlatform_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_ComponentBoundEvent_NewValue_18                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewValue_17                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELanguageOptions        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Map_Find_Value                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_SelectedIndex_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_Selection_2                           (ZeroConstructor, HasGetValueTypeHash)
// enum class ESubtitleFontSize       CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IOptionsAnalog_BPI_C>K2Node_DynamicCast_AsOptions_Analog_BPI                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewValue_16                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue_4                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_SelectedIndex_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_Selection_1                           (ZeroConstructor, HasGetValueTypeHash)
// enum class EOptionsMenuTab         K2Node_ComponentBoundEvent_ClickedCategory_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOptionsMenuTab         K2Node_ComponentBoundEvent_ClickedCategory_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOptionsMenuTab         K2Node_ComponentBoundEvent_ClickedCategory_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOptionsMenuTab         K2Node_ComponentBoundEvent_ClickedCategory                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOptionsTopNav_Widget_C*     K2Node_DynamicCast_AsOptions_Top_Nav_Widget                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_ComponentBoundEvent_NewValue_15                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewValue_14                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnPlatform            CallFunc_GetPlatform_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_ComponentBoundEvent_NewValue_13                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewValue_12                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewValue_11                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_SelectedIndex                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_Selection                             (ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        CallFunc_GetAvailableLocalizedAudioLanguages_ReturnValue         (ReferenceParm)
// class UOptionsDataBag_C*           CallFunc_GetCustomDataBag_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EColorBlindMode         Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EColorBlindMode         Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_NewValue_10                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_NewValue_9                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_NewValue_8                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_NewValue_7                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_NewValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_NewValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_NewValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_NewValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_NewValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_NewValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_NewValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EColorBlindMode         Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_scrollDelta                                         (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_fromStick                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScrollOffsetOfEnd_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScrollOffset_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_TooltipToShow                                       (None)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue_5                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnLocalOptionsSaveData*    CallFunc_GetSaveLoadDataBP_localOptionsSaveData                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCloudOptionsSaveData*    CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnProgressSaveData*        CallFunc_GetSaveLoadDataBP_progressSaveData                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetSaveLoadDataBP_outputPin                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScaledValue_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScaledFOV_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnGamepadGlyphStyle   CallFunc_GetGamepadGlyphStyle_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EColorBlindMode         Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFullGameInstalled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerUI_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_QueueSimpleModalDialog_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EColorBlindMode         K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCombinedOptionsMenuWidget_C::ExecuteUbergraph_CombinedOptionsMenuWidget(int32 EntryPoint, bool K2Node_Event_isUsingMouseAndKeyboard, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 K2Node_ComponentBoundEvent_SelectedIndex_10, const class FString& K2Node_ComponentBoundEvent_Selection_10, int32 CallFunc_ConvertStringToResolution_x, int32 CallFunc_ConvertStringToResolution_y, int32 K2Node_ComponentBoundEvent_SelectedIndex_9, const class FString& K2Node_ComponentBoundEvent_Selection_9, const struct FIntPoint& K2Node_MakeStruct_IntPoint, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, int32 K2Node_ComponentBoundEvent_SelectedIndex_8, const class FString& K2Node_ComponentBoundEvent_Selection_8, int32 K2Node_ComponentBoundEvent_SelectedIndex_7, const class FString& K2Node_ComponentBoundEvent_Selection_7, int32 K2Node_ComponentBoundEvent_SelectedIndex_6, const class FString& K2Node_ComponentBoundEvent_Selection_6, int32 K2Node_ComponentBoundEvent_SelectedIndex_5, const class FString& K2Node_ComponentBoundEvent_Selection_5, float K2Node_ComponentBoundEvent_NewValue_26, float K2Node_ComponentBoundEvent_NewValue_25, float K2Node_ComponentBoundEvent_NewValue_24, float K2Node_ComponentBoundEvent_NewValue_23, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, enum class EQtnUIScreenActionEnum K2Node_Event_screenAction_1, bool K2Node_SwitchEnum_CmpSuccess, class UQtnScreen* K2Node_Event_previousScreen, float K2Node_ComponentBoundEvent_NewValue_22, float K2Node_ComponentBoundEvent_NewValue_21, float K2Node_ComponentBoundEvent_NewValue_20, float K2Node_ComponentBoundEvent_NewValue_19, class UQtnScreen* CallFunc_GetScreenThatOwnsThisWidget_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_CustomEvent_right, bool K2Node_SwitchEnum_CmpSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_3, class AQtnPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, int32 K2Node_ComponentBoundEvent_SelectedIndex_4, const class FString& K2Node_ComponentBoundEvent_Selection_4, class UWidget* K2Node_CustomEvent_currentSelection, class UWidget* K2Node_CustomEvent_newSelection, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue_1, class UUserWidget* K2Node_DynamicCast_AsUser_Widget, bool K2Node_DynamicCast_bSuccess, class UUserWidget* K2Node_DynamicCast_AsUser_Widget_1, bool K2Node_DynamicCast_bSuccess_1, class AQtnPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, enum class EQtnUIScreenActionEnum K2Node_Event_screenAction, bool K2Node_SwitchEnum_CmpSuccess_4, class AQtnPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_2, int32 K2Node_ComponentBoundEvent_SelectedIndex_3, const class FString& K2Node_ComponentBoundEvent_Selection_3, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, enum class EQtnPlatform CallFunc_GetPlatform_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_5, float K2Node_ComponentBoundEvent_NewValue_18, float K2Node_ComponentBoundEvent_NewValue_17, enum class ELanguageOptions CallFunc_Array_Get_Item, float CallFunc_Multiply_FloatFloat_ReturnValue, const class FString& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Round_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 K2Node_ComponentBoundEvent_SelectedIndex_2, const class FString& K2Node_ComponentBoundEvent_Selection_2, enum class ESubtitleFontSize CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IOptionsAnalog_BPI_C> K2Node_DynamicCast_AsOptions_Analog_BPI, bool K2Node_DynamicCast_bSuccess_2, class AQtnPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_3, float K2Node_ComponentBoundEvent_NewValue_16, class AQtnPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_4, bool K2Node_Event_IsDesignTime, int32 K2Node_ComponentBoundEvent_SelectedIndex_1, const class FString& K2Node_ComponentBoundEvent_Selection_1, enum class EOptionsMenuTab K2Node_ComponentBoundEvent_ClickedCategory_3, enum class EOptionsMenuTab K2Node_ComponentBoundEvent_ClickedCategory_2, enum class EOptionsMenuTab K2Node_ComponentBoundEvent_ClickedCategory_1, enum class EOptionsMenuTab K2Node_ComponentBoundEvent_ClickedCategory, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UOptionsTopNav_Widget_C* K2Node_DynamicCast_AsOptions_Top_Nav_Widget, bool K2Node_DynamicCast_bSuccess_3, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, float K2Node_ComponentBoundEvent_NewValue_15, float K2Node_ComponentBoundEvent_NewValue_14, enum class EQtnPlatform CallFunc_GetPlatform_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_6, float K2Node_ComponentBoundEvent_NewValue_13, float K2Node_ComponentBoundEvent_NewValue_12, float K2Node_ComponentBoundEvent_NewValue_11, int32 K2Node_ComponentBoundEvent_SelectedIndex, const class FString& K2Node_ComponentBoundEvent_Selection, TArray<struct FGameplayTag>& CallFunc_GetAvailableLocalizedAudioLanguages_ReturnValue, class UOptionsDataBag_C* CallFunc_GetCustomDataBag_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue_1, enum class EColorBlindMode Temp_byte_Variable, enum class EColorBlindMode Temp_byte_Variable_1, bool K2Node_ComponentBoundEvent_NewValue_10, bool K2Node_ComponentBoundEvent_NewValue_9, bool K2Node_ComponentBoundEvent_NewValue_8, bool K2Node_ComponentBoundEvent_NewValue_7, bool K2Node_ComponentBoundEvent_NewValue_6, bool K2Node_ComponentBoundEvent_NewValue_5, bool K2Node_ComponentBoundEvent_NewValue_4, bool K2Node_ComponentBoundEvent_NewValue_3, bool K2Node_ComponentBoundEvent_NewValue_2, bool K2Node_ComponentBoundEvent_NewValue_1, bool K2Node_ComponentBoundEvent_NewValue, enum class EColorBlindMode Temp_byte_Variable_2, float K2Node_Event_scrollDelta, bool K2Node_Event_fromStick, float CallFunc_SelectFloat_ReturnValue, float CallFunc_GetScrollOffsetOfEnd_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_GetScrollOffset_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class FText K2Node_Event_TooltipToShow, float CallFunc_FClamp_ReturnValue, class AQtnPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_5, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess_7, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_GetScaledValue_ReturnValue, float CallFunc_GetScaledFOV_ReturnValue, enum class EQtnGamepadGlyphStyle CallFunc_GetGamepadGlyphStyle_ReturnValue, enum class EColorBlindMode Temp_byte_Variable_3, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_IsFullGameInstalled_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnPlayerUI* CallFunc_GetLocalPlayerUI_ReturnValue, int32 Temp_int_Variable_1, class UUserWidget* CallFunc_QueueSimpleModalDialog_ReturnValue, enum class EColorBlindMode K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CombinedOptionsMenuWidget_C", "ExecuteUbergraph_CombinedOptionsMenuWidget");

	Params::UCombinedOptionsMenuWidget_C_ExecuteUbergraph_CombinedOptionsMenuWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_isUsingMouseAndKeyboard = K2Node_Event_isUsingMouseAndKeyboard;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue = CallFunc_IsUsingMouseAndKeyboard_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_SelectedIndex_10 = K2Node_ComponentBoundEvent_SelectedIndex_10;
	Parms.K2Node_ComponentBoundEvent_Selection_10 = K2Node_ComponentBoundEvent_Selection_10;
	Parms.CallFunc_ConvertStringToResolution_x = CallFunc_ConvertStringToResolution_x;
	Parms.CallFunc_ConvertStringToResolution_y = CallFunc_ConvertStringToResolution_y;
	Parms.K2Node_ComponentBoundEvent_SelectedIndex_9 = K2Node_ComponentBoundEvent_SelectedIndex_9;
	Parms.K2Node_ComponentBoundEvent_Selection_9 = K2Node_ComponentBoundEvent_Selection_9;
	Parms.K2Node_MakeStruct_IntPoint = K2Node_MakeStruct_IntPoint;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_SelectedIndex_8 = K2Node_ComponentBoundEvent_SelectedIndex_8;
	Parms.K2Node_ComponentBoundEvent_Selection_8 = K2Node_ComponentBoundEvent_Selection_8;
	Parms.K2Node_ComponentBoundEvent_SelectedIndex_7 = K2Node_ComponentBoundEvent_SelectedIndex_7;
	Parms.K2Node_ComponentBoundEvent_Selection_7 = K2Node_ComponentBoundEvent_Selection_7;
	Parms.K2Node_ComponentBoundEvent_SelectedIndex_6 = K2Node_ComponentBoundEvent_SelectedIndex_6;
	Parms.K2Node_ComponentBoundEvent_Selection_6 = K2Node_ComponentBoundEvent_Selection_6;
	Parms.K2Node_ComponentBoundEvent_SelectedIndex_5 = K2Node_ComponentBoundEvent_SelectedIndex_5;
	Parms.K2Node_ComponentBoundEvent_Selection_5 = K2Node_ComponentBoundEvent_Selection_5;
	Parms.K2Node_ComponentBoundEvent_NewValue_26 = K2Node_ComponentBoundEvent_NewValue_26;
	Parms.K2Node_ComponentBoundEvent_NewValue_25 = K2Node_ComponentBoundEvent_NewValue_25;
	Parms.K2Node_ComponentBoundEvent_NewValue_24 = K2Node_ComponentBoundEvent_NewValue_24;
	Parms.K2Node_ComponentBoundEvent_NewValue_23 = K2Node_ComponentBoundEvent_NewValue_23;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_1 = CallFunc_GetGameUserSettings_ReturnValue_1;
	Parms.K2Node_Event_screenAction_1 = K2Node_Event_screenAction_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Event_previousScreen = K2Node_Event_previousScreen;
	Parms.K2Node_ComponentBoundEvent_NewValue_22 = K2Node_ComponentBoundEvent_NewValue_22;
	Parms.K2Node_ComponentBoundEvent_NewValue_21 = K2Node_ComponentBoundEvent_NewValue_21;
	Parms.K2Node_ComponentBoundEvent_NewValue_20 = K2Node_ComponentBoundEvent_NewValue_20;
	Parms.K2Node_ComponentBoundEvent_NewValue_19 = K2Node_ComponentBoundEvent_NewValue_19;
	Parms.CallFunc_GetScreenThatOwnsThisWidget_ReturnValue = CallFunc_GetScreenThatOwnsThisWidget_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_CustomEvent_right = K2Node_CustomEvent_right;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_SelectedIndex_4 = K2Node_ComponentBoundEvent_SelectedIndex_4;
	Parms.K2Node_ComponentBoundEvent_Selection_4 = K2Node_ComponentBoundEvent_Selection_4;
	Parms.K2Node_CustomEvent_currentSelection = K2Node_CustomEvent_currentSelection;
	Parms.K2Node_CustomEvent_newSelection = K2Node_CustomEvent_newSelection;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue_1 = CallFunc_IsUsingMouseAndKeyboard_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsUser_Widget = K2Node_DynamicCast_AsUser_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsUser_Widget_1 = K2Node_DynamicCast_AsUser_Widget_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_1 = CallFunc_GetOwningPlayerController_ReturnValue_1;
	Parms.K2Node_Event_screenAction = K2Node_Event_screenAction;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_2 = CallFunc_GetOwningPlayerController_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_SelectedIndex_3 = K2Node_ComponentBoundEvent_SelectedIndex_3;
	Parms.K2Node_ComponentBoundEvent_Selection_3 = K2Node_ComponentBoundEvent_Selection_3;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetPlatform_ReturnValue = CallFunc_GetPlatform_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue_1 = CallFunc_GetValidValue_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_5 = K2Node_SwitchEnum_CmpSuccess_5;
	Parms.K2Node_ComponentBoundEvent_NewValue_18 = K2Node_ComponentBoundEvent_NewValue_18;
	Parms.K2Node_ComponentBoundEvent_NewValue_17 = K2Node_ComponentBoundEvent_NewValue_17;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_SelectedIndex_2 = K2Node_ComponentBoundEvent_SelectedIndex_2;
	Parms.K2Node_ComponentBoundEvent_Selection_2 = K2Node_ComponentBoundEvent_Selection_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsOptions_Analog_BPI = K2Node_DynamicCast_AsOptions_Analog_BPI;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_3 = CallFunc_GetOwningPlayerController_ReturnValue_3;
	Parms.K2Node_ComponentBoundEvent_NewValue_16 = K2Node_ComponentBoundEvent_NewValue_16;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_4 = CallFunc_GetOwningPlayerController_ReturnValue_4;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_ComponentBoundEvent_SelectedIndex_1 = K2Node_ComponentBoundEvent_SelectedIndex_1;
	Parms.K2Node_ComponentBoundEvent_Selection_1 = K2Node_ComponentBoundEvent_Selection_1;
	Parms.K2Node_ComponentBoundEvent_ClickedCategory_3 = K2Node_ComponentBoundEvent_ClickedCategory_3;
	Parms.K2Node_ComponentBoundEvent_ClickedCategory_2 = K2Node_ComponentBoundEvent_ClickedCategory_2;
	Parms.K2Node_ComponentBoundEvent_ClickedCategory_1 = K2Node_ComponentBoundEvent_ClickedCategory_1;
	Parms.K2Node_ComponentBoundEvent_ClickedCategory = K2Node_ComponentBoundEvent_ClickedCategory;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.K2Node_DynamicCast_AsOptions_Top_Nav_Widget = K2Node_DynamicCast_AsOptions_Top_Nav_Widget;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewValue_15 = K2Node_ComponentBoundEvent_NewValue_15;
	Parms.K2Node_ComponentBoundEvent_NewValue_14 = K2Node_ComponentBoundEvent_NewValue_14;
	Parms.CallFunc_GetPlatform_ReturnValue_1 = CallFunc_GetPlatform_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_6 = K2Node_SwitchEnum_CmpSuccess_6;
	Parms.K2Node_ComponentBoundEvent_NewValue_13 = K2Node_ComponentBoundEvent_NewValue_13;
	Parms.K2Node_ComponentBoundEvent_NewValue_12 = K2Node_ComponentBoundEvent_NewValue_12;
	Parms.K2Node_ComponentBoundEvent_NewValue_11 = K2Node_ComponentBoundEvent_NewValue_11;
	Parms.K2Node_ComponentBoundEvent_SelectedIndex = K2Node_ComponentBoundEvent_SelectedIndex;
	Parms.K2Node_ComponentBoundEvent_Selection = K2Node_ComponentBoundEvent_Selection;
	Parms.CallFunc_GetAvailableLocalizedAudioLanguages_ReturnValue = CallFunc_GetAvailableLocalizedAudioLanguages_ReturnValue;
	Parms.CallFunc_GetCustomDataBag_ReturnValue = CallFunc_GetCustomDataBag_ReturnValue;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_1 = CallFunc_Array_IsValidIndex_ReturnValue_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_ComponentBoundEvent_NewValue_10 = K2Node_ComponentBoundEvent_NewValue_10;
	Parms.K2Node_ComponentBoundEvent_NewValue_9 = K2Node_ComponentBoundEvent_NewValue_9;
	Parms.K2Node_ComponentBoundEvent_NewValue_8 = K2Node_ComponentBoundEvent_NewValue_8;
	Parms.K2Node_ComponentBoundEvent_NewValue_7 = K2Node_ComponentBoundEvent_NewValue_7;
	Parms.K2Node_ComponentBoundEvent_NewValue_6 = K2Node_ComponentBoundEvent_NewValue_6;
	Parms.K2Node_ComponentBoundEvent_NewValue_5 = K2Node_ComponentBoundEvent_NewValue_5;
	Parms.K2Node_ComponentBoundEvent_NewValue_4 = K2Node_ComponentBoundEvent_NewValue_4;
	Parms.K2Node_ComponentBoundEvent_NewValue_3 = K2Node_ComponentBoundEvent_NewValue_3;
	Parms.K2Node_ComponentBoundEvent_NewValue_2 = K2Node_ComponentBoundEvent_NewValue_2;
	Parms.K2Node_ComponentBoundEvent_NewValue_1 = K2Node_ComponentBoundEvent_NewValue_1;
	Parms.K2Node_ComponentBoundEvent_NewValue = K2Node_ComponentBoundEvent_NewValue;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.K2Node_Event_scrollDelta = K2Node_Event_scrollDelta;
	Parms.K2Node_Event_fromStick = K2Node_Event_fromStick;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_GetScrollOffsetOfEnd_ReturnValue = CallFunc_GetScrollOffsetOfEnd_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetScrollOffset_ReturnValue = CallFunc_GetScrollOffset_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_Event_TooltipToShow = K2Node_Event_TooltipToShow;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_5 = CallFunc_GetOwningPlayerController_ReturnValue_5;
	Parms.CallFunc_GetSaveLoadDataBP_localOptionsSaveData = CallFunc_GetSaveLoadDataBP_localOptionsSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData = CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_progressSaveData = CallFunc_GetSaveLoadDataBP_progressSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_outputPin = CallFunc_GetSaveLoadDataBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess_7 = K2Node_SwitchEnum_CmpSuccess_7;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetScaledValue_ReturnValue = CallFunc_GetScaledValue_ReturnValue;
	Parms.CallFunc_GetScaledFOV_ReturnValue = CallFunc_GetScaledFOV_ReturnValue;
	Parms.CallFunc_GetGamepadGlyphStyle_ReturnValue = CallFunc_GetGamepadGlyphStyle_ReturnValue;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_IsFullGameInstalled_ReturnValue = CallFunc_IsFullGameInstalled_ReturnValue;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.CallFunc_GetLocalPlayerUI_ReturnValue = CallFunc_GetLocalPlayerUI_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_QueueSimpleModalDialog_ReturnValue = CallFunc_QueueSimpleModalDialog_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


