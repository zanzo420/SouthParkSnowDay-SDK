#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass StoreSelectedItemWidget.StoreSelectedItemWidget_C
// (None)

class UClass* UStoreSelectedItemWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StoreSelectedItemWidget_C");

	return Clss;
}


// StoreSelectedItemWidget_C StoreSelectedItemWidget.Default__StoreSelectedItemWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStoreSelectedItemWidget_C* UStoreSelectedItemWidget_C::GetDefaultObj()
{
	static class UStoreSelectedItemWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStoreSelectedItemWidget_C*>(UStoreSelectedItemWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function StoreSelectedItemWidget.StoreSelectedItemWidget_C.DEPRECATED Update Affordance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Equipped_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Owned_                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsUsingMKB                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CanAfford                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               LOCAL_IsUsingMKB                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

void UStoreSelectedItemWidget_C::DEPRECATED_Update_Affordance(bool Equipped_, bool Owned_, bool IsUsingMKB, bool CanAfford, bool LOCAL_IsUsingMKB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreSelectedItemWidget_C", "DEPRECATED Update Affordance");

	Params::UStoreSelectedItemWidget_C_DEPRECATED_Update_Affordance_Params Parms{};

	Parms.Equipped_ = Equipped_;
	Parms.Owned_ = Owned_;
	Parms.IsUsingMKB = IsUsingMKB;
	Parms.CanAfford = CanAfford;
	Parms.LOCAL_IsUsingMKB = LOCAL_IsUsingMKB;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreSelectedItemWidget.StoreSelectedItemWidget_C.Refresh Hovered Item Build
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnPerkSettings            PerkSettings                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class AQtnBodyPawn*                My_Body                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnPerk*                    LOCAL_PerkCDO                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      LOCAL_PerkClass                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPerkSlot_Widget_C*          LOCAL_PerkSlot                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LOCAL_IsUsingMKB                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               LOCAL_CanAfford                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              LOCAL_CostOrRefund                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UQtnPerk>        CallFunc_SyncLoadPerkClass_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetPerkInstanceCount_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_GetFormattedValueAtIndexAtInstanceCount_ReturnValue     (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class UQtnPerk*                    CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStoreSelectedItemWidget_C::Refresh_Hovered_Item_Build(const struct FQtnPerkSettings& PerkSettings, class AQtnBodyPawn* My_Body, class UQtnPerk* LOCAL_PerkCDO, class UClass* LOCAL_PerkClass, class UPerkSlot_Widget_C* LOCAL_PerkSlot, bool LOCAL_IsUsingMKB, bool LOCAL_CanAfford, int32 LOCAL_CostOrRefund, TSubclassOf<class UQtnPerk> CallFunc_SyncLoadPerkClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetPerkInstanceCount_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_GetFormattedValueAtIndexAtInstanceCount_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_Format_ReturnValue_1, class UQtnPerk* CallFunc_GetClassDefaultObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreSelectedItemWidget_C", "Refresh Hovered Item Build");

	Params::UStoreSelectedItemWidget_C_Refresh_Hovered_Item_Build_Params Parms{};

	Parms.PerkSettings = PerkSettings;
	Parms.My_Body = My_Body;
	Parms.LOCAL_PerkCDO = LOCAL_PerkCDO;
	Parms.LOCAL_PerkClass = LOCAL_PerkClass;
	Parms.LOCAL_PerkSlot = LOCAL_PerkSlot;
	Parms.LOCAL_IsUsingMKB = LOCAL_IsUsingMKB;
	Parms.LOCAL_CanAfford = LOCAL_CanAfford;
	Parms.LOCAL_CostOrRefund = LOCAL_CostOrRefund;
	Parms.CallFunc_SyncLoadPerkClass_ReturnValue = CallFunc_SyncLoadPerkClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPerkInstanceCount_ReturnValue = CallFunc_GetPerkInstanceCount_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetFormattedValueAtIndexAtInstanceCount_ReturnValue = CallFunc_GetFormattedValueAtIndexAtInstanceCount_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreSelectedItemWidget.StoreSelectedItemWidget_C.DEPRECATED_UpdateHoveredItem_Cosmetics
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFQtnStoreItem              ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               CanUserAfford                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               WasDealFound                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      LOCAL_ButtonPriceString                                          (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)

void UStoreSelectedItemWidget_C::DEPRECATED_UpdateHoveredItem_Cosmetics(const struct FFQtnStoreItem& ItemData, bool CanUserAfford, bool WasDealFound, const class FString& LOCAL_ButtonPriceString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreSelectedItemWidget_C", "DEPRECATED_UpdateHoveredItem_Cosmetics");

	Params::UStoreSelectedItemWidget_C_DEPRECATED_UpdateHoveredItem_Cosmetics_Params Parms{};

	Parms.ItemData = ItemData;
	Parms.CanUserAfford = CanUserAfford;
	Parms.WasDealFound = WasDealFound;
	Parms.LOCAL_ButtonPriceString = LOCAL_ButtonPriceString;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreSelectedItemWidget.StoreSelectedItemWidget_C.SetupOwningWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     OwningWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMenuStore_Widget_C*         K2Node_DynamicCast_AsMenu_Store_Widget                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UStoreSelectedItemWidget_C::SetupOwningWidget(class UWidget* OwningWidget, class UMenuStore_Widget_C* K2Node_DynamicCast_AsMenu_Store_Widget, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreSelectedItemWidget_C", "SetupOwningWidget");

	Params::UStoreSelectedItemWidget_C_SetupOwningWidget_Params Parms{};

	Parms.OwningWidget = OwningWidget;
	Parms.K2Node_DynamicCast_AsMenu_Store_Widget = K2Node_DynamicCast_AsMenu_Store_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreSelectedItemWidget.StoreSelectedItemWidget_C.DoesPlayerOwnItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FString                      ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               IsOwned                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UStoreSelectedItemWidget_C::DoesPlayerOwnItem(const class FString& ItemId, bool* IsOwned, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreSelectedItemWidget_C", "DoesPlayerOwnItem");

	Params::UStoreSelectedItemWidget_C_DoesPlayerOwnItem_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsOwned != nullptr)
		*IsOwned = Parms.IsOwned;

}


// Function StoreSelectedItemWidget.StoreSelectedItemWidget_C.Format Currency String
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              CatalogPriceToFormat                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              StorePriceToFormat                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CurrencyCode                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      OutFormattedString                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_2                          (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_1                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_10                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_11                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_12                            (ZeroConstructor, HasGetValueTypeHash)

void UStoreSelectedItemWidget_C::Format_Currency_String(int32 CatalogPriceToFormat, int32 StorePriceToFormat, const class FString& CurrencyCode, class FString* OutFormattedString, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, float CallFunc_Conv_IntToFloat_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, const class FString& CallFunc_Concat_StrStr_ReturnValue_12)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreSelectedItemWidget_C", "Format Currency String");

	Params::UStoreSelectedItemWidget_C_Format_Currency_String_Params Parms{};

	Parms.CatalogPriceToFormat = CatalogPriceToFormat;
	Parms.StorePriceToFormat = StorePriceToFormat;
	Parms.CurrencyCode = CurrencyCode;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue_2 = CallFunc_Conv_IntToString_ReturnValue_2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_1 = CallFunc_Conv_FloatToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;
	Parms.CallFunc_Concat_StrStr_ReturnValue_10 = CallFunc_Concat_StrStr_ReturnValue_10;
	Parms.CallFunc_Concat_StrStr_ReturnValue_11 = CallFunc_Concat_StrStr_ReturnValue_11;
	Parms.CallFunc_Concat_StrStr_ReturnValue_12 = CallFunc_Concat_StrStr_ReturnValue_12;

	UObject::ProcessEvent(Func, &Parms);

	if (OutFormattedString != nullptr)
		*OutFormattedString = std::move(Parms.OutFormattedString);

}


// Function StoreSelectedItemWidget.StoreSelectedItemWidget_C.BindToWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     OwningWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStoreSelectedItemWidget_C::BindToWidget(class UWidget* OwningWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreSelectedItemWidget_C", "BindToWidget");

	Params::UStoreSelectedItemWidget_C_BindToWidget_Params Parms{};

	Parms.OwningWidget = OwningWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreSelectedItemWidget.StoreSelectedItemWidget_C.TryToPurchaseItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UStoreSelectedItemWidget_C::TryToPurchaseItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreSelectedItemWidget_C", "TryToPurchaseItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreSelectedItemWidget.StoreSelectedItemWidget_C.DEPRECATED_UpdatePurchaseTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              PercentFilled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStoreSelectedItemWidget_C::DEPRECATED_UpdatePurchaseTick(float PercentFilled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreSelectedItemWidget_C", "DEPRECATED_UpdatePurchaseTick");

	Params::UStoreSelectedItemWidget_C_DEPRECATED_UpdatePurchaseTick_Params Parms{};

	Parms.PercentFilled = PercentFilled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreSelectedItemWidget.StoreSelectedItemWidget_C.HandleFadeIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UStoreSelectedItemWidget_C::HandleFadeIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreSelectedItemWidget_C", "HandleFadeIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreSelectedItemWidget.StoreSelectedItemWidget_C.HandleFadeOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UStoreSelectedItemWidget_C::HandleFadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreSelectedItemWidget_C", "HandleFadeOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreSelectedItemWidget.StoreSelectedItemWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UStoreSelectedItemWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreSelectedItemWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreSelectedItemWidget.StoreSelectedItemWidget_C.ExecuteUbergraph_StoreSelectedItemWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_CustomEvent_owningWidget                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_PercentFilled                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStoreSelectedItemWidget_C::ExecuteUbergraph_StoreSelectedItemWidget(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, class UWidget* K2Node_CustomEvent_owningWidget, float K2Node_CustomEvent_PercentFilled, bool Temp_bool_IsClosed_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreSelectedItemWidget_C", "ExecuteUbergraph_StoreSelectedItemWidget");

	Params::UStoreSelectedItemWidget_C_ExecuteUbergraph_StoreSelectedItemWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.K2Node_CustomEvent_owningWidget = K2Node_CustomEvent_owningWidget;
	Parms.K2Node_CustomEvent_PercentFilled = K2Node_CustomEvent_PercentFilled;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


