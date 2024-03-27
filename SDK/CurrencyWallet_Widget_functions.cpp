#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CurrencyWallet_Widget.CurrencyWallet_Widget_C
// (None)

class UClass* UCurrencyWallet_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CurrencyWallet_Widget_C");

	return Clss;
}


// CurrencyWallet_Widget_C CurrencyWallet_Widget.Default__CurrencyWallet_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCurrencyWallet_Widget_C* UCurrencyWallet_Widget_C::GetDefaultObj()
{
	static class UCurrencyWallet_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCurrencyWallet_Widget_C*>(UCurrencyWallet_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CurrencyWallet_Widget.CurrencyWallet_Widget_C.RequestCurrencyVisibilities
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowTP                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShowDM                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShowPP                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCurrencyWallet_Widget_C::RequestCurrencyVisibilities(bool* ShowTP, bool* ShowDM, bool* ShowPP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CurrencyWallet_Widget_C", "RequestCurrencyVisibilities");

	Params::UCurrencyWallet_Widget_C_RequestCurrencyVisibilities_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ShowTP != nullptr)
		*ShowTP = Parms.ShowTP;

	if (ShowDM != nullptr)
		*ShowDM = Parms.ShowDM;

	if (ShowPP != nullptr)
		*ShowPP = Parms.ShowPP;

}


// Function CurrencyWallet_Widget.CurrencyWallet_Widget_C.CreateCurrencyTagToWidgetMap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class URewardsCurrency_Widget_C*>CallFunc_Map_Values_Values                                       (ReferenceParm, ContainsInstancedReference)
// TMap<struct FGameplayTag, class URewardsCurrency_Widget_C*>K2Node_MakeMap_Map                                               (ContainsInstancedReference)

void UCurrencyWallet_Widget_C::CreateCurrencyTagToWidgetMap(TArray<class URewardsCurrency_Widget_C*>& CallFunc_Map_Values_Values, TMap<struct FGameplayTag, class URewardsCurrency_Widget_C*> K2Node_MakeMap_Map)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CurrencyWallet_Widget_C", "CreateCurrencyTagToWidgetMap");

	Params::UCurrencyWallet_Widget_C_CreateCurrencyTagToWidgetMap_Params Parms{};

	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.K2Node_MakeMap_Map = K2Node_MakeMap_Map;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CurrencyWallet_Widget.CurrencyWallet_Widget_C.RefreshVisibilities
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class URewardsCurrency_Widget_C*   CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCurrencyWallet_Widget_C::RefreshVisibilities(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, class URewardsCurrency_Widget_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CurrencyWallet_Widget_C", "RefreshVisibilities");

	Params::UCurrencyWallet_Widget_C_RefreshVisibilities_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CurrencyWallet_Widget.CurrencyWallet_Widget_C.InitAllCurrencies
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<struct FGameplayTag, class URewardsCurrency_Widget_C*>CurrencyTagWidgetMap                                             (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// TMap<struct FGameplayTag, enum class EQtn_CurrencyTypes_Enum>LOCAL_KeysEnum                                                   (Edit, BlueprintVisible)
// TArray<class URewardsCurrency_Widget_C*>LOCAL_ValuesWidgets                                              (Edit, BlueprintVisible, ContainsInstancedReference)
// TArray<struct FGameplayTag>        LOCAL_KeysCurrencyTags                                           (Edit, BlueprintVisible)
// TArray<class URewardsCurrency_Widget_C*>CallFunc_Map_Values_Values                                       (ReferenceParm, ContainsInstancedReference)
// TArray<struct FGameplayTag>        CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnInventoryComponent*      CallFunc_GetBodyInventory_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// class URewardsCurrency_Widget_C*   CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrencyQuantity_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnCurrencyEntry           K2Node_MakeStruct_QtnCurrencyEntry                               (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCurrencyWallet_Widget_C::InitAllCurrencies(TMap<struct FGameplayTag, class URewardsCurrency_Widget_C*> CurrencyTagWidgetMap, TMap<struct FGameplayTag, enum class EQtn_CurrencyTypes_Enum> LOCAL_KeysEnum, const TArray<class URewardsCurrency_Widget_C*>& LOCAL_ValuesWidgets, const TArray<struct FGameplayTag>& LOCAL_KeysCurrencyTags, TArray<class URewardsCurrency_Widget_C*>& CallFunc_Map_Values_Values, TArray<struct FGameplayTag>& CallFunc_Map_Keys_Keys, int32 Temp_int_Array_Index_Variable, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGameplayTag& CallFunc_Array_Get_Item, class URewardsCurrency_Widget_C* CallFunc_Array_Get_Item_1, int32 CallFunc_GetCurrencyQuantity_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FQtnCurrencyEntry& K2Node_MakeStruct_QtnCurrencyEntry, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CurrencyWallet_Widget_C", "InitAllCurrencies");

	Params::UCurrencyWallet_Widget_C_InitAllCurrencies_Params Parms{};

	Parms.CurrencyTagWidgetMap = CurrencyTagWidgetMap;
	Parms.LOCAL_KeysEnum = LOCAL_KeysEnum;
	Parms.LOCAL_ValuesWidgets = LOCAL_ValuesWidgets;
	Parms.LOCAL_KeysCurrencyTags = LOCAL_KeysCurrencyTags;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetBodyInventory_ReturnValue = CallFunc_GetBodyInventory_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetCurrencyQuantity_ReturnValue = CallFunc_GetCurrencyQuantity_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_MakeStruct_QtnCurrencyEntry = K2Node_MakeStruct_QtnCurrencyEntry;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CurrencyWallet_Widget.CurrencyWallet_Widget_C.Ensure Body Pawn Player
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerController*        LOCAL_PlayerController                                           (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerControllerBP_localPlayerController        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerControllerBP_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOccupiedBodyPawn_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCurrencyWallet_Widget_C::Ensure_Body_Pawn_Player(class AQtnPlayerController* LOCAL_PlayerController, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CurrencyWallet_Widget_C", "Ensure Body Pawn Player");

	Params::UCurrencyWallet_Widget_C_Ensure_Body_Pawn_Player_Params Parms{};

	Parms.LOCAL_PlayerController = LOCAL_PlayerController;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetLocalPlayerControllerBP_localPlayerController = CallFunc_GetLocalPlayerControllerBP_localPlayerController;
	Parms.CallFunc_GetLocalPlayerControllerBP_outputPin = CallFunc_GetLocalPlayerControllerBP_outputPin;
	Parms.CallFunc_GetOccupiedBodyPawn_ReturnValue = CallFunc_GetOccupiedBodyPawn_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CurrencyWallet_Widget.CurrencyWallet_Widget_C.Finished_5634731E40D3212DCF518E8CD70D0F49
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCurrencyWallet_Widget_C::Finished_5634731E40D3212DCF518E8CD70D0F49()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CurrencyWallet_Widget_C", "Finished_5634731E40D3212DCF518E8CD70D0F49");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CurrencyWallet_Widget.CurrencyWallet_Widget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCurrencyWallet_Widget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CurrencyWallet_Widget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CurrencyWallet_Widget.CurrencyWallet_Widget_C.RefreshAllCurrencies
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCurrencyWallet_Widget_C::RefreshAllCurrencies()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CurrencyWallet_Widget_C", "RefreshAllCurrencies");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CurrencyWallet_Widget.CurrencyWallet_Widget_C.InitWallet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowTP                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShowDM                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShowFC                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCurrencyWallet_Widget_C::InitWallet(bool ShowTP, bool ShowDM, bool ShowFC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CurrencyWallet_Widget_C", "InitWallet");

	Params::UCurrencyWallet_Widget_C_InitWallet_Params Parms{};

	Parms.ShowTP = ShowTP;
	Parms.ShowDM = ShowDM;
	Parms.ShowFC = ShowFC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CurrencyWallet_Widget.CurrencyWallet_Widget_C.CurrencyPickupAndFade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                CurrencyPickedUp                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UCurrencyWallet_Widget_C::CurrencyPickupAndFade(const struct FGameplayTag& CurrencyPickedUp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CurrencyWallet_Widget_C", "CurrencyPickupAndFade");

	Params::UCurrencyWallet_Widget_C_CurrencyPickupAndFade_Params Parms{};

	Parms.CurrencyPickedUp = CurrencyPickedUp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CurrencyWallet_Widget.CurrencyWallet_Widget_C.RemoveWallet
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCurrencyWallet_Widget_C::RemoveWallet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CurrencyWallet_Widget_C", "RemoveWallet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CurrencyWallet_Widget.CurrencyWallet_Widget_C.UpdateCurrency
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                CurrencyTag                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              OldQuantity                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCurrencyWallet_Widget_C::UpdateCurrency(const struct FGameplayTag& CurrencyTag, int32 OldQuantity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CurrencyWallet_Widget_C", "UpdateCurrency");

	Params::UCurrencyWallet_Widget_C_UpdateCurrency_Params Parms{};

	Parms.CurrencyTag = CurrencyTag;
	Parms.OldQuantity = OldQuantity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CurrencyWallet_Widget.CurrencyWallet_Widget_C.ExecuteUbergraph_CurrencyWallet_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_ShowTP                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_ShowDM                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_ShowFC                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                K2Node_CustomEvent_CurrencyPickedUp                              (ConstParm, NoDestructor, HasGetValueTypeHash)
// class URewardsCurrency_Widget_C*   CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URewardsCurrency_Widget_C*   CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UQtnInventoryComponent*      CallFunc_GetBodyInventory_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class URewardsCurrency_Widget_C*, bool>K2Node_MakeMap_Map                                               (ContainsInstancedReference)
// enum class EQtnOutputYesNoEnum     CallFunc_DoesThisMapSpawnBodiesBP_outputPin                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                K2Node_CustomEvent_CurrencyTag                                   (NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_OldQuantity                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerUIBP_localPlayerUI                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerUIBP_outputPin                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnScreen*                  CallFunc_GetActiveScreen_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCurrencyWallet_Widget_C::ExecuteUbergraph_CurrencyWallet_Widget(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, bool K2Node_CustomEvent_ShowTP, bool K2Node_CustomEvent_ShowDM, bool K2Node_CustomEvent_ShowFC, const struct FGameplayTag& K2Node_CustomEvent_CurrencyPickedUp, class URewardsCurrency_Widget_C* CallFunc_Array_Get_Item, bool CallFunc_IsGameplayTagValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class URewardsCurrency_Widget_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, TMap<class URewardsCurrency_Widget_C*, bool> K2Node_MakeMap_Map, enum class EQtnOutputYesNoEnum CallFunc_DoesThisMapSpawnBodiesBP_outputPin, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTag& K2Node_CustomEvent_CurrencyTag, int32 K2Node_CustomEvent_OldQuantity, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Loop_Counter_Variable, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess_1, class UQtnScreen* CallFunc_GetActiveScreen_ReturnValue, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool K2Node_SwitchEnum_CmpSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CurrencyWallet_Widget_C", "ExecuteUbergraph_CurrencyWallet_Widget");

	Params::UCurrencyWallet_Widget_C_ExecuteUbergraph_CurrencyWallet_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CustomEvent_ShowTP = K2Node_CustomEvent_ShowTP;
	Parms.K2Node_CustomEvent_ShowDM = K2Node_CustomEvent_ShowDM;
	Parms.K2Node_CustomEvent_ShowFC = K2Node_CustomEvent_ShowFC;
	Parms.K2Node_CustomEvent_CurrencyPickedUp = K2Node_CustomEvent_CurrencyPickedUp;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetBodyInventory_ReturnValue = CallFunc_GetBodyInventory_ReturnValue;
	Parms.K2Node_MakeMap_Map = K2Node_MakeMap_Map;
	Parms.CallFunc_DoesThisMapSpawnBodiesBP_outputPin = CallFunc_DoesThisMapSpawnBodiesBP_outputPin;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_CurrencyTag = K2Node_CustomEvent_CurrencyTag;
	Parms.K2Node_CustomEvent_OldQuantity = K2Node_CustomEvent_OldQuantity;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetLocalPlayerUIBP_localPlayerUI = CallFunc_GetLocalPlayerUIBP_localPlayerUI;
	Parms.CallFunc_GetLocalPlayerUIBP_outputPin = CallFunc_GetLocalPlayerUIBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetActiveScreen_ReturnValue = CallFunc_GetActiveScreen_ReturnValue;
	Parms.CallFunc_IsObjectOfType_outputPin = CallFunc_IsObjectOfType_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


