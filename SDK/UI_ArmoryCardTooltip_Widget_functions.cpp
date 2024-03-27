#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_ArmoryCardTooltip_Widget.UI_ArmoryCardTooltip_Widget_C
// (None)

class UClass* UUI_ArmoryCardTooltip_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_ArmoryCardTooltip_Widget_C");

	return Clss;
}


// UI_ArmoryCardTooltip_Widget_C UI_ArmoryCardTooltip_Widget.Default__UI_ArmoryCardTooltip_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_ArmoryCardTooltip_Widget_C* UUI_ArmoryCardTooltip_Widget_C::GetDefaultObj()
{
	static class UUI_ArmoryCardTooltip_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_ArmoryCardTooltip_Widget_C*>(UUI_ArmoryCardTooltip_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_ArmoryCardTooltip_Widget.UI_ArmoryCardTooltip_Widget_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UUI_ArmoryCardTooltip_Widget_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ArmoryCardTooltip_Widget_C", "OnFocusReceived");

	Params::UUI_ArmoryCardTooltip_Widget_C_OnFocusReceived_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ArmoryCardTooltip_Widget.UI_ArmoryCardTooltip_Widget_C.AnimSeq_Hover
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHovered                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ArmoryCardTooltip_Widget_C::AnimSeq_Hover(bool IsHovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ArmoryCardTooltip_Widget_C", "AnimSeq_Hover");

	Params::UUI_ArmoryCardTooltip_Widget_C_AnimSeq_Hover_Params Parms{};

	Parms.IsHovered = IsHovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ArmoryCardTooltip_Widget.UI_ArmoryCardTooltip_Widget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_ArmoryCardTooltip_Widget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ArmoryCardTooltip_Widget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ArmoryCardTooltip_Widget.UI_ArmoryCardTooltip_Widget_C.BndEvt__UI_BullshitCard_Widget_Button_1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ArmoryCardTooltip_Widget_C::BndEvt__UI_BullshitCard_Widget_Button_1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ArmoryCardTooltip_Widget_C", "BndEvt__UI_BullshitCard_Widget_Button_1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ArmoryCardTooltip_Widget.UI_ArmoryCardTooltip_Widget_C.BndEvt__UI_BullshitCard_Widget_Button_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ArmoryCardTooltip_Widget_C::BndEvt__UI_BullshitCard_Widget_Button_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ArmoryCardTooltip_Widget_C", "BndEvt__UI_BullshitCard_Widget_Button_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ArmoryCardTooltip_Widget.UI_ArmoryCardTooltip_Widget_C.BndEvt__UI_BullshitCard_Widget_Button_1_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ArmoryCardTooltip_Widget_C::BndEvt__UI_BullshitCard_Widget_Button_1_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ArmoryCardTooltip_Widget_C", "BndEvt__UI_BullshitCard_Widget_Button_1_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ArmoryCardTooltip_Widget.UI_ArmoryCardTooltip_Widget_C.BndEvt__UI_BullshitCard_Widget_Button_1_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ArmoryCardTooltip_Widget_C::BndEvt__UI_BullshitCard_Widget_Button_1_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ArmoryCardTooltip_Widget_C", "BndEvt__UI_BullshitCard_Widget_Button_1_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ArmoryCardTooltip_Widget.UI_ArmoryCardTooltip_Widget_C.MakeArmoryCardFromStruct
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUI_Card_Struct             MyCardInfo                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UUI_ArmoryCardTooltip_Widget_C::MakeArmoryCardFromStruct(const struct FUI_Card_Struct& MyCardInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ArmoryCardTooltip_Widget_C", "MakeArmoryCardFromStruct");

	Params::UUI_ArmoryCardTooltip_Widget_C_MakeArmoryCardFromStruct_Params Parms{};

	Parms.MyCardInfo = MyCardInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ArmoryCardTooltip_Widget.UI_ArmoryCardTooltip_Widget_C.RefreshHover
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHovered                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ArmoryCardTooltip_Widget_C::RefreshHover(bool IsHovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ArmoryCardTooltip_Widget_C", "RefreshHover");

	Params::UUI_ArmoryCardTooltip_Widget_C_RefreshHover_Params Parms{};

	Parms.IsHovered = IsHovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ArmoryCardTooltip_Widget.UI_ArmoryCardTooltip_Widget_C.ToggleInteractiveUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WantInteractive                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ArmoryCardTooltip_Widget_C::ToggleInteractiveUI(bool WantInteractive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ArmoryCardTooltip_Widget_C", "ToggleInteractiveUI");

	Params::UUI_ArmoryCardTooltip_Widget_C_ToggleInteractiveUI_Params Parms{};

	Parms.WantInteractive = WantInteractive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ArmoryCardTooltip_Widget.UI_ArmoryCardTooltip_Widget_C.RefreshAffordanceInputChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ArmoryCardTooltip_Widget_C::RefreshAffordanceInputChange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ArmoryCardTooltip_Widget_C", "RefreshAffordanceInputChange");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ArmoryCardTooltip_Widget.UI_ArmoryCardTooltip_Widget_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_ArmoryCardTooltip_Widget_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ArmoryCardTooltip_Widget_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ArmoryCardTooltip_Widget.UI_ArmoryCardTooltip_Widget_C.ExecuteUbergraph_UI_ArmoryCardTooltip_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtn_EquipmentCategory  Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnUIBodyActionEnum    Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnUIBodyActionEnum    Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnUIBodyActionEnum    Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsHovered_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_6                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_7                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUI_Card_Struct             K2Node_CustomEvent_MyCardInfo                                    (HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               K2Node_CustomEvent_IsHovered                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_WantInteractive                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnUIBodyActionEnum    K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetButtonGlyphFromBodyAction_ReturnValue                (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentCulture_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ArmoryCardTooltip_Widget_C::ExecuteUbergraph_UI_ArmoryCardTooltip_Widget(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class EQtn_EquipmentCategory Temp_byte_Variable_2, enum class EQtnUIBodyActionEnum Temp_byte_Variable_3, enum class EQtnUIBodyActionEnum Temp_byte_Variable_4, enum class EQtnUIBodyActionEnum Temp_byte_Variable_5, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool K2Node_CustomEvent_IsHovered_1, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_1, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_6, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable_7, bool Temp_bool_Variable_1, const struct FUI_Card_Struct& K2Node_CustomEvent_MyCardInfo, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool K2Node_CustomEvent_IsHovered, bool K2Node_CustomEvent_WantInteractive, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, enum class EQtnUIBodyActionEnum K2Node_Select_Default_2, const class FString& CallFunc_GetButtonGlyphFromBodyAction_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, const class FString& CallFunc_GetCurrentCulture_ReturnValue, bool K2Node_SwitchString_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ArmoryCardTooltip_Widget_C", "ExecuteUbergraph_UI_ArmoryCardTooltip_Widget");

	Params::UUI_ArmoryCardTooltip_Widget_C_ExecuteUbergraph_UI_ArmoryCardTooltip_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.K2Node_CustomEvent_IsHovered_1 = K2Node_CustomEvent_IsHovered_1;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_LinearColorLerp_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;
	Parms.CallFunc_LinearColorLerp_ReturnValue_1 = CallFunc_LinearColorLerp_ReturnValue_1;
	Parms.CallFunc_LinearColorLerp_ReturnValue_2 = CallFunc_LinearColorLerp_ReturnValue_2;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_CustomEvent_MyCardInfo = K2Node_CustomEvent_MyCardInfo;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_CustomEvent_IsHovered = K2Node_CustomEvent_IsHovered;
	Parms.K2Node_CustomEvent_WantInteractive = K2Node_CustomEvent_WantInteractive;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_GetButtonGlyphFromBodyAction_ReturnValue = CallFunc_GetButtonGlyphFromBodyAction_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_2 = CallFunc_GetDynamicMaterial_ReturnValue_2;
	Parms.CallFunc_GetCurrentCulture_ReturnValue = CallFunc_GetCurrentCulture_ReturnValue;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ArmoryCardTooltip_Widget.UI_ArmoryCardTooltip_Widget_C.CardButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Pressed_                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtn_EquipmentCategory  CategoryToSwap                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ArmoryCardTooltip_Widget_C::CardButtonPressed__DelegateSignature(bool Pressed_, enum class EQtn_EquipmentCategory CategoryToSwap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ArmoryCardTooltip_Widget_C", "CardButtonPressed__DelegateSignature");

	Params::UUI_ArmoryCardTooltip_Widget_C_CardButtonPressed__DelegateSignature_Params Parms{};

	Parms.Pressed_ = Pressed_;
	Parms.CategoryToSwap = CategoryToSwap;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ArmoryCardTooltip_Widget.UI_ArmoryCardTooltip_Widget_C.CardButtonHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hovered_                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtn_EquipmentCategory  MySlot                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ArmoryCardTooltip_Widget_C::CardButtonHovered__DelegateSignature(bool Hovered_, enum class EQtn_EquipmentCategory MySlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ArmoryCardTooltip_Widget_C", "CardButtonHovered__DelegateSignature");

	Params::UUI_ArmoryCardTooltip_Widget_C_CardButtonHovered__DelegateSignature_Params Parms{};

	Parms.Hovered_ = Hovered_;
	Parms.MySlot = MySlot;

	UObject::ProcessEvent(Func, &Parms);

}

}


