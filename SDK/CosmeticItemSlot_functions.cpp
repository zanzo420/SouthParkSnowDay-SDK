#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CosmeticItemSlot.CosmeticItemSlot_C
// (None)

class UClass* UCosmeticItemSlot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CosmeticItemSlot_C");

	return Clss;
}


// CosmeticItemSlot_C CosmeticItemSlot.Default__CosmeticItemSlot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCosmeticItemSlot_C* UCosmeticItemSlot_C::GetDefaultObj()
{
	static class UCosmeticItemSlot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCosmeticItemSlot_C*>(UCosmeticItemSlot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CosmeticItemSlot.CosmeticItemSlot_C.OnListEntryPressed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCosmeticItemSlot_C*         CosmeticItemSlot                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFQtnStoreItem              QtnStoreItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               AllowHold                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCosmeticItemSlot_C::OnListEntryPressed(bool IsPressed, class UCosmeticItemSlot_C* CosmeticItemSlot, const struct FFQtnStoreItem& QtnStoreItem, bool* AllowHold)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CosmeticItemSlot_C", "OnListEntryPressed");

	Params::UCosmeticItemSlot_C_OnListEntryPressed_Params Parms{};

	Parms.IsPressed = IsPressed;
	Parms.CosmeticItemSlot = CosmeticItemSlot;
	Parms.QtnStoreItem = QtnStoreItem;

	UObject::ProcessEvent(Func, &Parms);

	if (AllowHold != nullptr)
		*AllowHold = Parms.AllowHold;

}


// Function CosmeticItemSlot.CosmeticItemSlot_C.RefreshPrice
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMenuStore_Widget_C*         ManagingStoreMenu                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// int32                              CallFunc_GetPlayerCurrencyAmount_OutCurrencyAmount               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UCosmeticItemSlot_C::RefreshPrice(class UMenuStore_Widget_C* ManagingStoreMenu, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, int32 CallFunc_GetPlayerCurrencyAmount_OutCurrencyAmount, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CosmeticItemSlot_C", "RefreshPrice");

	Params::UCosmeticItemSlot_C_RefreshPrice_Params Parms{};

	Parms.ManagingStoreMenu = ManagingStoreMenu;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_GetPlayerCurrencyAmount_OutCurrencyAmount = CallFunc_GetPlayerCurrencyAmount_OutCurrencyAmount;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CosmeticItemSlot.CosmeticItemSlot_C.Emote_GetVerbClass
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UQtnVerb>        EmoteClass                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnCosmeticCatalogueEntry  CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCosmeticItemSlot_C::Emote_GetVerbClass(TSubclassOf<class UQtnVerb>* EmoteClass, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FQtnCosmeticCatalogueEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CosmeticItemSlot_C", "Emote_GetVerbClass");

	Params::UCosmeticItemSlot_C_Emote_GetVerbClass_Params Parms{};

	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EmoteClass != nullptr)
		*EmoteClass = Parms.EmoteClass;

}


// Function CosmeticItemSlot.CosmeticItemSlot_C.Emote Check if Equipped in Focused Slot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      EquippedEmote                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               EmoteFound                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               LOCAL_EmoteFound                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      LOCAL_EmoteInSlot                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UQtnVerb>        CallFunc_Emote_GetVerbClass_EmoteClass                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCosmeticItemSlot_C::Emote_Check_if_Equipped_in_Focused_Slot(class UClass* EquippedEmote, bool* EmoteFound, bool LOCAL_EmoteFound, class UClass* LOCAL_EmoteInSlot, TSubclassOf<class UQtnVerb> CallFunc_Emote_GetVerbClass_EmoteClass, bool CallFunc_EqualEqual_ClassClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CosmeticItemSlot_C", "Emote Check if Equipped in Focused Slot");

	Params::UCosmeticItemSlot_C_Emote_Check_if_Equipped_in_Focused_Slot_Params Parms{};

	Parms.EquippedEmote = EquippedEmote;
	Parms.LOCAL_EmoteFound = LOCAL_EmoteFound;
	Parms.LOCAL_EmoteInSlot = LOCAL_EmoteInSlot;
	Parms.CallFunc_Emote_GetVerbClass_EmoteClass = CallFunc_Emote_GetVerbClass_EmoteClass;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EmoteFound != nullptr)
		*EmoteFound = Parms.EmoteFound;

}


// Function CosmeticItemSlot.CosmeticItemSlot_C.CheckBodyIfEquipped
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UQtnVerb>        CallFunc_Emote_GetVerbClass_EmoteClass                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerOriginalBody_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOriginalBody_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCharacterAppearanceComponent*CallFunc_GetBodyAppearanceComponent_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<TSubclassOf<class UQtnVerb>>CallFunc_GetEquippedEmotes_ReturnValue                           (ConstParm, ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerOriginalBody_outputPin_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOriginalBody_ReturnValue_1                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCharacterAppearanceComponent*CallFunc_GetBodyAppearanceComponent_ReturnValue_1                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetEquippedCosmetics_ReturnValue                        (ReferenceParm)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCosmeticItemSlot_C::CheckBodyIfEquipped(TSubclassOf<class UQtnVerb> CallFunc_Emote_GetVerbClass_EmoteClass, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOriginalBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOriginalBody_ReturnValue, class UQtnCharacterAppearanceComponent* CallFunc_GetBodyAppearanceComponent_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, TArray<TSubclassOf<class UQtnVerb>>& CallFunc_GetEquippedEmotes_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOriginalBody_outputPin_1, class AQtnBodyPawn* CallFunc_GetLocalPlayerOriginalBody_ReturnValue_1, class UQtnCharacterAppearanceComponent* CallFunc_GetBodyAppearanceComponent_ReturnValue_1, TArray<class FString>& CallFunc_GetEquippedCosmetics_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_Array_Contains_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CosmeticItemSlot_C", "CheckBodyIfEquipped");

	Params::UCosmeticItemSlot_C_CheckBodyIfEquipped_Params Parms{};

	Parms.CallFunc_Emote_GetVerbClass_EmoteClass = CallFunc_Emote_GetVerbClass_EmoteClass;
	Parms.CallFunc_GetLocalPlayerOriginalBody_outputPin = CallFunc_GetLocalPlayerOriginalBody_outputPin;
	Parms.CallFunc_GetLocalPlayerOriginalBody_ReturnValue = CallFunc_GetLocalPlayerOriginalBody_ReturnValue;
	Parms.CallFunc_GetBodyAppearanceComponent_ReturnValue = CallFunc_GetBodyAppearanceComponent_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_GetEquippedEmotes_ReturnValue = CallFunc_GetEquippedEmotes_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetLocalPlayerOriginalBody_outputPin_1 = CallFunc_GetLocalPlayerOriginalBody_outputPin_1;
	Parms.CallFunc_GetLocalPlayerOriginalBody_ReturnValue_1 = CallFunc_GetLocalPlayerOriginalBody_ReturnValue_1;
	Parms.CallFunc_GetBodyAppearanceComponent_ReturnValue_1 = CallFunc_GetBodyAppearanceComponent_ReturnValue_1;
	Parms.CallFunc_GetEquippedCosmetics_ReturnValue = CallFunc_GetEquippedCosmetics_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CosmeticItemSlot.CosmeticItemSlot_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UCosmeticItemSlot_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CosmeticItemSlot_C", "OnFocusReceived");

	Params::UCosmeticItemSlot_C_OnFocusReceived_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CosmeticItemSlot.CosmeticItemSlot_C.SetImageFromRender
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Render                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Icon                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCosmeticItemSlot_C::SetImageFromRender(class UTexture2D* Render, class UTexture2D* Icon, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CosmeticItemSlot_C", "SetImageFromRender");

	Params::UCosmeticItemSlot_C_SetImageFromRender_Params Parms{};

	Parms.Render = Render;
	Parms.Icon = Icon;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CosmeticItemSlot.CosmeticItemSlot_C.ResetHoldUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCosmeticItemSlot_C::ResetHoldUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CosmeticItemSlot_C", "ResetHoldUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CosmeticItemSlot.CosmeticItemSlot_C.Hide Store UI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCosmeticItemSlot_C::Hide_Store_UI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CosmeticItemSlot_C", "Hide Store UI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CosmeticItemSlot.CosmeticItemSlot_C.Refresh Store UI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFQtnCurrencyCodeValuePair>LOCAL_NonzeroCurrencyStructs                                     (Edit, BlueprintVisible)
// TArray<class FString>              LOCAL_NonzeroCurrencies                                          (Edit, BlueprintVisible)
// class UMenuStore_Widget_C*         K2Node_DynamicCast_AsMenu_Store_Widget                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFQtnCurrencyCodeValuePair>CallFunc_Get_All_Non_Zero_Currency_Codes_OutPriceCodes           (ReferenceParm)
// struct FFQtnCurrencyCodeValuePair  CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)

void UCosmeticItemSlot_C::Refresh_Store_UI(const TArray<struct FFQtnCurrencyCodeValuePair>& LOCAL_NonzeroCurrencyStructs, const TArray<class FString>& LOCAL_NonzeroCurrencies, class UMenuStore_Widget_C* K2Node_DynamicCast_AsMenu_Store_Widget, bool K2Node_DynamicCast_bSuccess, TArray<struct FFQtnCurrencyCodeValuePair>& CallFunc_Get_All_Non_Zero_Currency_Codes_OutPriceCodes, const struct FFQtnCurrencyCodeValuePair& CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CosmeticItemSlot_C", "Refresh Store UI");

	Params::UCosmeticItemSlot_C_Refresh_Store_UI_Params Parms{};

	Parms.LOCAL_NonzeroCurrencyStructs = LOCAL_NonzeroCurrencyStructs;
	Parms.LOCAL_NonzeroCurrencies = LOCAL_NonzeroCurrencies;
	Parms.K2Node_DynamicCast_AsMenu_Store_Widget = K2Node_DynamicCast_AsMenu_Store_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Get_All_Non_Zero_Currency_Codes_OutPriceCodes = CallFunc_Get_All_Non_Zero_Currency_Codes_OutPriceCodes;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CosmeticItemSlot.CosmeticItemSlot_C.UpdateEquippedUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEquipped                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCosmeticItemSlot_C::UpdateEquippedUI(bool IsEquipped, float CallFunc_Conv_BoolToFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CosmeticItemSlot_C", "UpdateEquippedUI");

	Params::UCosmeticItemSlot_C_UpdateEquippedUI_Params Parms{};

	Parms.IsEquipped = IsEquipped;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CosmeticItemSlot.CosmeticItemSlot_C.DEPRECATED_Initialize Emote
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnUserWidget*              OwningMenu                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCosmeticItemSlot_C::DEPRECATED_Initialize_Emote(class UQtnUserWidget* OwningMenu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CosmeticItemSlot_C", "DEPRECATED_Initialize Emote");

	Params::UCosmeticItemSlot_C_DEPRECATED_Initialize_Emote_Params Parms{};

	Parms.OwningMenu = OwningMenu;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CosmeticItemSlot.CosmeticItemSlot_C.DEPRECATED_Initialize Item Slot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnUserWidget*              OwningMenu                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCosmeticItemSlot_C::DEPRECATED_Initialize_Item_Slot(class UQtnUserWidget* OwningMenu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CosmeticItemSlot_C", "DEPRECATED_Initialize Item Slot");

	Params::UCosmeticItemSlot_C_DEPRECATED_Initialize_Item_Slot_Params Parms{};

	Parms.OwningMenu = OwningMenu;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CosmeticItemSlot.CosmeticItemSlot_C.GetButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton*                     Button                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCosmeticItemSlot_C::GetButton(class UButton** Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CosmeticItemSlot_C", "GetButton");

	Params::UCosmeticItemSlot_C_GetButton_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Button != nullptr)
		*Button = Parms.Button;

}


// Function CosmeticItemSlot.CosmeticItemSlot_C.Completed_BC5D3D48466EEA08363AEB8FC78E384A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCosmeticItemSlot_C::Completed_BC5D3D48466EEA08363AEB8FC78E384A(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CosmeticItemSlot_C", "Completed_BC5D3D48466EEA08363AEB8FC78E384A");

	Params::UCosmeticItemSlot_C_Completed_BC5D3D48466EEA08363AEB8FC78E384A_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CosmeticItemSlot.CosmeticItemSlot_C.Tick_BC5D3D48466EEA08363AEB8FC78E384A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCosmeticItemSlot_C::Tick_BC5D3D48466EEA08363AEB8FC78E384A(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CosmeticItemSlot_C", "Tick_BC5D3D48466EEA08363AEB8FC78E384A");

	Params::UCosmeticItemSlot_C_Tick_BC5D3D48466EEA08363AEB8FC78E384A_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CosmeticItemSlot.CosmeticItemSlot_C.Completed_D2FBDF984F1EB13BA019CEA0DBB0D913
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCosmeticItemSlot_C::Completed_D2FBDF984F1EB13BA019CEA0DBB0D913(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CosmeticItemSlot_C", "Completed_D2FBDF984F1EB13BA019CEA0DBB0D913");

	Params::UCosmeticItemSlot_C_Completed_D2FBDF984F1EB13BA019CEA0DBB0D913_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CosmeticItemSlot.CosmeticItemSlot_C.Tick_D2FBDF984F1EB13BA019CEA0DBB0D913
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCosmeticItemSlot_C::Tick_D2FBDF984F1EB13BA019CEA0DBB0D913(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CosmeticItemSlot_C", "Tick_D2FBDF984F1EB13BA019CEA0DBB0D913");

	Params::UCosmeticItemSlot_C_Tick_D2FBDF984F1EB13BA019CEA0DBB0D913_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CosmeticItemSlot.CosmeticItemSlot_C.OnListEntryHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHovered                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCosmeticItemSlot_C*         CosmeticItemSlot                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFQtnStoreItem              QtnStoreItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UCosmeticItemSlot_C::OnListEntryHovered(bool IsHovered, class UCosmeticItemSlot_C* CosmeticItemSlot, const struct FFQtnStoreItem& QtnStoreItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CosmeticItemSlot_C", "OnListEntryHovered");

	Params::UCosmeticItemSlot_C_OnListEntryHovered_Params Parms{};

	Parms.IsHovered = IsHovered;
	Parms.CosmeticItemSlot = CosmeticItemSlot;
	Parms.QtnStoreItem = QtnStoreItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CosmeticItemSlot.CosmeticItemSlot_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCosmeticItemSlot_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CosmeticItemSlot_C", "BP_OnEntryReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CosmeticItemSlot.CosmeticItemSlot_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCosmeticItemSlot_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CosmeticItemSlot_C", "BP_OnItemExpansionChanged");

	Params::UCosmeticItemSlot_C_BP_OnItemExpansionChanged_Params Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CosmeticItemSlot.CosmeticItemSlot_C.AnimSeq_Hover
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHovered                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCosmeticItemSlot_C::AnimSeq_Hover(bool IsHovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CosmeticItemSlot_C", "AnimSeq_Hover");

	Params::UCosmeticItemSlot_C_AnimSeq_Hover_Params Parms{};

	Parms.IsHovered = IsHovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CosmeticItemSlot.CosmeticItemSlot_C.BndEvt__CosmeticItemSlot_Button_Item_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCosmeticItemSlot_C::BndEvt__CosmeticItemSlot_Button_Item_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CosmeticItemSlot_C", "BndEvt__CosmeticItemSlot_Button_Item_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CosmeticItemSlot.CosmeticItemSlot_C.BndEvt__CosmeticItemSlot_Button_Item_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCosmeticItemSlot_C::BndEvt__CosmeticItemSlot_Button_Item_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CosmeticItemSlot_C", "BndEvt__CosmeticItemSlot_Button_Item_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CosmeticItemSlot.CosmeticItemSlot_C.BndEvt__CosmeticItemSlot_Button_Item_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCosmeticItemSlot_C::BndEvt__CosmeticItemSlot_Button_Item_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CosmeticItemSlot_C", "BndEvt__CosmeticItemSlot_Button_Item_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CosmeticItemSlot.CosmeticItemSlot_C.BndEvt__CosmeticItemSlot_Button_Item_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCosmeticItemSlot_C::BndEvt__CosmeticItemSlot_Button_Item_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CosmeticItemSlot_C", "BndEvt__CosmeticItemSlot_Button_Item_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CosmeticItemSlot.CosmeticItemSlot_C.TickHoldButton_Cosmetic
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DTime                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCosmeticItemSlot_C::TickHoldButton_Cosmetic(float DTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CosmeticItemSlot_C", "TickHoldButton_Cosmetic");

	Params::UCosmeticItemSlot_C_TickHoldButton_Cosmetic_Params Parms{};

	Parms.DTime = DTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CosmeticItemSlot.CosmeticItemSlot_C.AnimGlint
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCosmeticItemSlot_C::AnimGlint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CosmeticItemSlot_C", "AnimGlint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CosmeticItemSlot.CosmeticItemSlot_C.ForceRelease
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCosmeticItemSlot_C::ForceRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CosmeticItemSlot_C", "ForceRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CosmeticItemSlot.CosmeticItemSlot_C.ForceUnhover
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCosmeticItemSlot_C::ForceUnhover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CosmeticItemSlot_C", "ForceUnhover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CosmeticItemSlot.CosmeticItemSlot_C.StartTrainingHighlight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCosmeticItemSlot_C::StartTrainingHighlight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CosmeticItemSlot_C", "StartTrainingHighlight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CosmeticItemSlot.CosmeticItemSlot_C.PauseTrainingHighlight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCosmeticItemSlot_C::PauseTrainingHighlight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CosmeticItemSlot_C", "PauseTrainingHighlight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CosmeticItemSlot.CosmeticItemSlot_C.ResumeTrainingHighlight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCosmeticItemSlot_C::ResumeTrainingHighlight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CosmeticItemSlot_C", "ResumeTrainingHighlight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CosmeticItemSlot.CosmeticItemSlot_C.UnbindTrainingEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCosmeticItemSlot_C::UnbindTrainingEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CosmeticItemSlot_C", "UnbindTrainingEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CosmeticItemSlot.CosmeticItemSlot_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCosmeticItemSlot_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CosmeticItemSlot_C", "Tick");

	Params::UCosmeticItemSlot_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CosmeticItemSlot.CosmeticItemSlot_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCosmeticItemSlot_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CosmeticItemSlot_C", "OnListItemObjectSet");

	Params::UCosmeticItemSlot_C_OnListItemObjectSet_Params Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CosmeticItemSlot.CosmeticItemSlot_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCosmeticItemSlot_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CosmeticItemSlot_C", "BP_OnItemSelectionChanged");

	Params::UCosmeticItemSlot_C_BP_OnItemSelectionChanged_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CosmeticItemSlot.CosmeticItemSlot_C.UpdateThumbnail
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Thumb                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCosmeticItemSlot_C::UpdateThumbnail(class UTexture2D* Thumb)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CosmeticItemSlot_C", "UpdateThumbnail");

	Params::UCosmeticItemSlot_C_UpdateThumbnail_Params Parms{};

	Parms.Thumb = Thumb;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CosmeticItemSlot.CosmeticItemSlot_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCosmeticItemSlot_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CosmeticItemSlot_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CosmeticItemSlot.CosmeticItemSlot_C.ExecuteUbergraph_CosmeticItemSlot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Value_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// float                              K2Node_CustomEvent_Value_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsHovered                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCosmeticItemSlot_C*         K2Node_Event_CosmeticItemSlot                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFQtnStoreItem              K2Node_Event_QtnStoreItem                                        (HasGetValueTypeHash)
// bool                               K2Node_Event_bIsExpanded                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_IsHovered                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnAsyncInterpolateValue*   CallFunc_AsyncInterpolateValue_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnAsyncInterpolateValue*   CallFunc_AsyncInterpolateValue_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Ease_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_DTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Value_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Sin_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_ListItemObject                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCosmeticData_O_C*           K2Node_DynamicCast_AsCosmetic_Data_O                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IQtnObjectListEntry_BPI_C>K2Node_DynamicCast_AsQtn_Object_List_Entry_BPI                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_CustomEvent_Thumb                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnObjectListEntry_BPI_C>K2Node_DynamicCast_AsQtn_Object_List_Entry_BPI_1                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OnListEntryPressed_AllowHold                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCosmeticItemSlot_C::ExecuteUbergraph_CosmeticItemSlot(int32 EntryPoint, float K2Node_CustomEvent_Value_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_CustomEvent_Value, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float Temp_float_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, float K2Node_CustomEvent_Value_3, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool K2Node_Event_IsHovered, class UCosmeticItemSlot_C* K2Node_Event_CosmeticItemSlot, const struct FFQtnStoreItem& K2Node_Event_QtnStoreItem, bool K2Node_Event_bIsExpanded, bool K2Node_CustomEvent_IsHovered, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool Temp_bool_IsClosed_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, float Temp_float_Variable_1, class UQtnAsyncInterpolateValue* CallFunc_AsyncInterpolateValue_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UQtnAsyncInterpolateValue* CallFunc_AsyncInterpolateValue_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Ease_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float K2Node_CustomEvent_DTime, float CallFunc_Add_FloatFloat_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, float K2Node_CustomEvent_Value_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Sin_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, class UObject* K2Node_Event_ListItemObject, class UCosmeticData_O_C* K2Node_DynamicCast_AsCosmetic_Data_O, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IQtnObjectListEntry_BPI_C> K2Node_DynamicCast_AsQtn_Object_List_Entry_BPI, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool K2Node_Event_bIsSelected, class UTexture2D* K2Node_CustomEvent_Thumb, TScriptInterface<class IQtnObjectListEntry_BPI_C> K2Node_DynamicCast_AsQtn_Object_List_Entry_BPI_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_OnListEntryPressed_AllowHold, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CosmeticItemSlot_C", "ExecuteUbergraph_CosmeticItemSlot");

	Params::UCosmeticItemSlot_C_ExecuteUbergraph_CosmeticItemSlot_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Value_1 = K2Node_CustomEvent_Value_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_Value_3 = K2Node_CustomEvent_Value_3;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_Event_IsHovered = K2Node_Event_IsHovered;
	Parms.K2Node_Event_CosmeticItemSlot = K2Node_Event_CosmeticItemSlot;
	Parms.K2Node_Event_QtnStoreItem = K2Node_Event_QtnStoreItem;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;
	Parms.K2Node_CustomEvent_IsHovered = K2Node_CustomEvent_IsHovered;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.CallFunc_AsyncInterpolateValue_ReturnValue = CallFunc_AsyncInterpolateValue_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_AsyncInterpolateValue_ReturnValue_1 = CallFunc_AsyncInterpolateValue_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Ease_ReturnValue = CallFunc_Ease_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_DTime = K2Node_CustomEvent_DTime;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.K2Node_CustomEvent_Value_2 = K2Node_CustomEvent_Value_2;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Sin_ReturnValue = CallFunc_Sin_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_2 = CallFunc_Add_FloatFloat_ReturnValue_2;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.K2Node_Event_ListItemObject = K2Node_Event_ListItemObject;
	Parms.K2Node_DynamicCast_AsCosmetic_Data_O = K2Node_DynamicCast_AsCosmetic_Data_O;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsQtn_Object_List_Entry_BPI = K2Node_DynamicCast_AsQtn_Object_List_Entry_BPI;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;
	Parms.K2Node_CustomEvent_Thumb = K2Node_CustomEvent_Thumb;
	Parms.K2Node_DynamicCast_AsQtn_Object_List_Entry_BPI_1 = K2Node_DynamicCast_AsQtn_Object_List_Entry_BPI_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_OnListEntryPressed_AllowHold = CallFunc_OnListEntryPressed_AllowHold;
	Parms.CallFunc_IsObjectOfType_outputPin = CallFunc_IsObjectOfType_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_2 = CallFunc_GetDynamicMaterial_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


