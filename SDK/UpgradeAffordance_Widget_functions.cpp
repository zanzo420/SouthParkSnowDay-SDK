#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UpgradeAffordance_Widget.UpgradeAffordance_Widget_C
// (None)

class UClass* UUpgradeAffordance_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UpgradeAffordance_Widget_C");

	return Clss;
}


// UpgradeAffordance_Widget_C UpgradeAffordance_Widget.Default__UpgradeAffordance_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUpgradeAffordance_Widget_C* UUpgradeAffordance_Widget_C::GetDefaultObj()
{
	static class UUpgradeAffordance_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUpgradeAffordance_Widget_C*>(UUpgradeAffordance_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UpgradeAffordance_Widget.UpgradeAffordance_Widget_C.SearchForEnemyUpgrade
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                      EnemyUpgradeToFind                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UpgradeFound                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              LOCAL_UpgradeIndex                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      LOCAL_UpgradeClass                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TSubclassOf<class UQtnUpgrade>>CallFunc_GetCurrentEnemyUpgrades_ReturnValue                     (ConstParm, ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUpgradeAffordance_Widget_C::SearchForEnemyUpgrade(class UClass*& EnemyUpgradeToFind, bool* UpgradeFound, int32 LOCAL_UpgradeIndex, class UClass* LOCAL_UpgradeClass, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, TArray<TSubclassOf<class UQtnUpgrade>>& CallFunc_GetCurrentEnemyUpgrades_ReturnValue, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeAffordance_Widget_C", "SearchForEnemyUpgrade");

	Params::UUpgradeAffordance_Widget_C_SearchForEnemyUpgrade_Params Parms{};

	Parms.EnemyUpgradeToFind = EnemyUpgradeToFind;
	Parms.LOCAL_UpgradeIndex = LOCAL_UpgradeIndex;
	Parms.LOCAL_UpgradeClass = LOCAL_UpgradeClass;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.CallFunc_GetCurrentEnemyUpgrades_ReturnValue = CallFunc_GetCurrentEnemyUpgrades_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (UpgradeFound != nullptr)
		*UpgradeFound = Parms.UpgradeFound;

}


// Function UpgradeAffordance_Widget.UpgradeAffordance_Widget_C.FormatPriceAndIfAffordable
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        Result                                                           (Parm, OutParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UUpgradeAffordance_Widget_C::FormatPriceAndIfAffordable(class FText* Result, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeAffordance_Widget_C", "FormatPriceAndIfAffordable");

	Params::UUpgradeAffordance_Widget_C_FormatPriceAndIfAffordable_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function UpgradeAffordance_Widget.UpgradeAffordance_Widget_C.GetAffordanceWithString
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        Result                                                           (Parm, OutParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_StaticParseInputText_ReturnValue                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_StaticParseInputText_ReturnValue_1                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UUpgradeAffordance_Widget_C::GetAffordanceWithString(class FText* Result, bool Temp_bool_Variable, const class FString& CallFunc_StaticParseInputText_ReturnValue, const class FString& CallFunc_StaticParseInputText_ReturnValue_1, const class FString& K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeAffordance_Widget_C", "GetAffordanceWithString");

	Params::UUpgradeAffordance_Widget_C_GetAffordanceWithString_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_StaticParseInputText_ReturnValue = CallFunc_StaticParseInputText_ReturnValue;
	Parms.CallFunc_StaticParseInputText_ReturnValue_1 = CallFunc_StaticParseInputText_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function UpgradeAffordance_Widget.UpgradeAffordance_Widget_C.Cache Perk Component
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerOccupiedBody_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOccupiedBody_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUpgradeAffordance_Widget_C::Cache_Perk_Component(enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeAffordance_Widget_C", "Cache Perk Component");

	Params::UUpgradeAffordance_Widget_C_Cache_Perk_Component_Params Parms{};

	Parms.CallFunc_GetLocalPlayerOccupiedBody_outputPin = CallFunc_GetLocalPlayerOccupiedBody_outputPin;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_ReturnValue = CallFunc_GetLocalPlayerOccupiedBody_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeAffordance_Widget.UpgradeAffordance_Widget_C.GetAffordance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_StaticParseInputText_ReturnValue                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_StaticParseInputText_ReturnValue_1                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)

class FString UUpgradeAffordance_Widget_C::GetAffordance(bool Temp_bool_Variable, const class FString& CallFunc_StaticParseInputText_ReturnValue, const class FString& CallFunc_StaticParseInputText_ReturnValue_1, const class FString& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeAffordance_Widget_C", "GetAffordance");

	Params::UUpgradeAffordance_Widget_C_GetAffordance_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_StaticParseInputText_ReturnValue = CallFunc_StaticParseInputText_ReturnValue;
	Parms.CallFunc_StaticParseInputText_ReturnValue_1 = CallFunc_StaticParseInputText_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UpgradeAffordance_Widget.UpgradeAffordance_Widget_C.GetUpgradeRarity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                CurrentRarity                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               Upgradeable                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        NextUpgradeLevel                                                 (Parm, OutParm)
// bool                               GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUpgradeAffordance_Widget_C::GetUpgradeRarity(const struct FGameplayTag& CurrentRarity, bool* Upgradeable, class FText* NextUpgradeLevel, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeAffordance_Widget_C", "GetUpgradeRarity");

	Params::UUpgradeAffordance_Widget_C_GetUpgradeRarity_Params Parms{};

	Parms.CurrentRarity = CurrentRarity;
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Upgradeable != nullptr)
		*Upgradeable = Parms.Upgradeable;

	if (NextUpgradeLevel != nullptr)
		*NextUpgradeLevel = Parms.NextUpgradeLevel;

}


// Function UpgradeAffordance_Widget.UpgradeAffordance_Widget_C.InputChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUsingMouseAndKeyboard                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUpgradeAffordance_Widget_C::InputChange(bool IsUsingMouseAndKeyboard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeAffordance_Widget_C", "InputChange");

	Params::UUpgradeAffordance_Widget_C_InputChange_Params Parms{};

	Parms.IsUsingMouseAndKeyboard = IsUsingMouseAndKeyboard;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeAffordance_Widget.UpgradeAffordance_Widget_C.SetupAffordance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MouseKeyboard                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              UpgradeCost                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OriginalCost                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               WasCostModified                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CanAfford                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                CardRarity                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               IsJokerCard                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUpgradeAffordance_Widget_C::SetupAffordance(bool MouseKeyboard, int32 UpgradeCost, int32 OriginalCost, bool WasCostModified, bool CanAfford, const struct FGameplayTag& CardRarity, bool IsJokerCard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeAffordance_Widget_C", "SetupAffordance");

	Params::UUpgradeAffordance_Widget_C_SetupAffordance_Params Parms{};

	Parms.MouseKeyboard = MouseKeyboard;
	Parms.UpgradeCost = UpgradeCost;
	Parms.OriginalCost = OriginalCost;
	Parms.WasCostModified = WasCostModified;
	Parms.CanAfford = CanAfford;
	Parms.CardRarity = CardRarity;
	Parms.IsJokerCard = IsJokerCard;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeAffordance_Widget.UpgradeAffordance_Widget_C.UpdateFill
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FillAmount                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUpgradeAffordance_Widget_C::UpdateFill(float FillAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeAffordance_Widget_C", "UpdateFill");

	Params::UUpgradeAffordance_Widget_C_UpdateFill_Params Parms{};

	Parms.FillAmount = FillAmount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeAffordance_Widget.UpgradeAffordance_Widget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUpgradeAffordance_Widget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeAffordance_Widget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UpgradeAffordance_Widget.UpgradeAffordance_Widget_C.ExecuteUbergraph_UpgradeAffordance_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SearchForEnemyUpgrade_UpgradeFound                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// bool                               K2Node_CustomEvent_isUsingMouseAndKeyboard                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_mouseKeyboard                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_upgradeCost                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_OriginalCost                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_wasCostModified                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_CanAfford                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                K2Node_CustomEvent_CardRarity                                    (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsJokerCard                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_FillAmount                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetUpgradeRarity_Upgradeable                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetUpgradeRarity_NextUpgradeLevel                       (None)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_1                                             (None)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerUIBP_localPlayerUI                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerUIBP_outputPin                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// class FText                        K2Node_Select_Default                                            (None)
// bool                               CallFunc_IsPerkActive_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_1                                          (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// class FText                        CallFunc_GetAffordanceWithString_Result                          (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// class FText                        CallFunc_FormatPriceAndIfAffordable_Result                       (None)
// class FText                        CallFunc_GetAffordanceWithString_Result_1                        (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_5                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// class FText                        CallFunc_FormatPriceAndIfAffordable_Result_1                     (None)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_6                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_3                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_3                                    (None)

void UUpgradeAffordance_Widget_C::ExecuteUbergraph_UpgradeAffordance_Widget(int32 EntryPoint, bool CallFunc_SearchForEnemyUpgrade_UpgradeFound, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, class FText Temp_text_Variable, bool K2Node_CustomEvent_isUsingMouseAndKeyboard, bool K2Node_CustomEvent_mouseKeyboard, int32 K2Node_CustomEvent_upgradeCost, int32 K2Node_CustomEvent_OriginalCost, bool K2Node_CustomEvent_wasCostModified, bool K2Node_CustomEvent_CanAfford, const struct FGameplayTag& K2Node_CustomEvent_CardRarity, bool K2Node_CustomEvent_IsJokerCard, float K2Node_CustomEvent_FillAmount, bool CallFunc_GetUpgradeRarity_Upgradeable, class FText CallFunc_GetUpgradeRarity_NextUpgradeLevel, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class FText Temp_text_Variable_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue, bool Temp_bool_Variable_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText K2Node_Select_Default, bool CallFunc_IsPerkActive_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText K2Node_Select_Default_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText CallFunc_GetAffordanceWithString_Result, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, class FText CallFunc_FormatPriceAndIfAffordable_Result, class FText CallFunc_GetAffordanceWithString_Result_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_FormatPriceAndIfAffordable_Result_1, class FText CallFunc_Format_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_6, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_3, class FText CallFunc_Format_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeAffordance_Widget_C", "ExecuteUbergraph_UpgradeAffordance_Widget");

	Params::UUpgradeAffordance_Widget_C_ExecuteUbergraph_UpgradeAffordance_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_SearchForEnemyUpgrade_UpgradeFound = CallFunc_SearchForEnemyUpgrade_UpgradeFound;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.K2Node_CustomEvent_isUsingMouseAndKeyboard = K2Node_CustomEvent_isUsingMouseAndKeyboard;
	Parms.K2Node_CustomEvent_mouseKeyboard = K2Node_CustomEvent_mouseKeyboard;
	Parms.K2Node_CustomEvent_upgradeCost = K2Node_CustomEvent_upgradeCost;
	Parms.K2Node_CustomEvent_OriginalCost = K2Node_CustomEvent_OriginalCost;
	Parms.K2Node_CustomEvent_wasCostModified = K2Node_CustomEvent_wasCostModified;
	Parms.K2Node_CustomEvent_CanAfford = K2Node_CustomEvent_CanAfford;
	Parms.K2Node_CustomEvent_CardRarity = K2Node_CustomEvent_CardRarity;
	Parms.K2Node_CustomEvent_IsJokerCard = K2Node_CustomEvent_IsJokerCard;
	Parms.K2Node_CustomEvent_FillAmount = K2Node_CustomEvent_FillAmount;
	Parms.CallFunc_GetUpgradeRarity_Upgradeable = CallFunc_GetUpgradeRarity_Upgradeable;
	Parms.CallFunc_GetUpgradeRarity_NextUpgradeLevel = CallFunc_GetUpgradeRarity_NextUpgradeLevel;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.CallFunc_GetLocalPlayerUIBP_localPlayerUI = CallFunc_GetLocalPlayerUIBP_localPlayerUI;
	Parms.CallFunc_GetLocalPlayerUIBP_outputPin = CallFunc_GetLocalPlayerUIBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue = CallFunc_IsUsingMouseAndKeyboard_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsPerkActive_ReturnValue = CallFunc_IsPerkActive_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_GetAffordanceWithString_Result = CallFunc_GetAffordanceWithString_Result;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.CallFunc_FormatPriceAndIfAffordable_Result = CallFunc_FormatPriceAndIfAffordable_Result;
	Parms.CallFunc_GetAffordanceWithString_Result_1 = CallFunc_GetAffordanceWithString_Result_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.K2Node_MakeStruct_FormatArgumentData_5 = K2Node_MakeStruct_FormatArgumentData_5;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_FormatPriceAndIfAffordable_Result_1 = CallFunc_FormatPriceAndIfAffordable_Result_1;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_6 = K2Node_MakeStruct_FormatArgumentData_6;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_Format_ReturnValue_3 = CallFunc_Format_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


