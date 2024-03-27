#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_BullshitCardSmall_Widget.UI_BullshitCardSmall_Widget_C
// (None)

class UClass* UUI_BullshitCardSmall_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_BullshitCardSmall_Widget_C");

	return Clss;
}


// UI_BullshitCardSmall_Widget_C UI_BullshitCardSmall_Widget.Default__UI_BullshitCardSmall_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_BullshitCardSmall_Widget_C* UUI_BullshitCardSmall_Widget_C::GetDefaultObj()
{
	static class UUI_BullshitCardSmall_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_BullshitCardSmall_Widget_C*>(UUI_BullshitCardSmall_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_BullshitCardSmall_Widget.UI_BullshitCardSmall_Widget_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UUI_BullshitCardSmall_Widget_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BullshitCardSmall_Widget_C", "OnFocusReceived");

	Params::UUI_BullshitCardSmall_Widget_C_OnFocusReceived_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_BullshitCardSmall_Widget.UI_BullshitCardSmall_Widget_C.MakeEnemyUpgrade
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnUpgradeSettings         UpgradeSettings                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FQtnRolledUpgradeData       QtnRolledUpgradeData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<class UClass*>              RulebookRules                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UTexture2D*>          LOCAL_RarityTextures                                             (Edit, BlueprintVisible)
// TArray<class UClass*>              LOCAL_RulebookRules                                              (Edit, BlueprintVisible)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckEnemyUpgradeForRulebook_IsRulebookUpgrade          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UTexture2D*>          K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// class FText                        CallFunc_Format_Upgrade_Value_OutFormattedValue                  (None)
// class FText                        CallFunc_Format_Upgrade_Value_OutFormattedValue_1                (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// class FText                        CallFunc_Format_Upgrade_Value_OutFormattedValue_2                (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUI_Card_Struct             K2Node_MakeStruct_UI_Card_Struct                                 (HasGetValueTypeHash)

void UUI_BullshitCardSmall_Widget_C::MakeEnemyUpgrade(const struct FQtnUpgradeSettings& UpgradeSettings, const struct FQtnRolledUpgradeData& QtnRolledUpgradeData, TArray<class UClass*>& RulebookRules, const TArray<class UTexture2D*>& LOCAL_RarityTextures, const TArray<class UClass*>& LOCAL_RulebookRules, class UTexture2D* Temp_object_Variable, bool CallFunc_CheckEnemyUpgradeForRulebook_IsRulebookUpgrade, TArray<class UTexture2D*>& K2Node_MakeArray_Array, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_Format_Upgrade_Value_OutFormattedValue, class FText CallFunc_Format_Upgrade_Value_OutFormattedValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Format_Upgrade_Value_OutFormattedValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class UTexture2D* Temp_object_Variable_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, bool Temp_bool_Variable, class UTexture2D* K2Node_Select_Default, const struct FUI_Card_Struct& K2Node_MakeStruct_UI_Card_Struct)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BullshitCardSmall_Widget_C", "MakeEnemyUpgrade");

	Params::UUI_BullshitCardSmall_Widget_C_MakeEnemyUpgrade_Params Parms{};

	Parms.UpgradeSettings = UpgradeSettings;
	Parms.QtnRolledUpgradeData = QtnRolledUpgradeData;
	Parms.RulebookRules = RulebookRules;
	Parms.LOCAL_RarityTextures = LOCAL_RarityTextures;
	Parms.LOCAL_RulebookRules = LOCAL_RulebookRules;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_CheckEnemyUpgradeForRulebook_IsRulebookUpgrade = CallFunc_CheckEnemyUpgradeForRulebook_IsRulebookUpgrade;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_Format_Upgrade_Value_OutFormattedValue = CallFunc_Format_Upgrade_Value_OutFormattedValue;
	Parms.CallFunc_Format_Upgrade_Value_OutFormattedValue_1 = CallFunc_Format_Upgrade_Value_OutFormattedValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Format_Upgrade_Value_OutFormattedValue_2 = CallFunc_Format_Upgrade_Value_OutFormattedValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_UI_Card_Struct = K2Node_MakeStruct_UI_Card_Struct;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_BullshitCardSmall_Widget.UI_BullshitCardSmall_Widget_C.CheckEnemyUpgradeForRulebook
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>              RulebookUpgrades                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               IsRulebookUpgrade                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UClass*>              LOCAL_RulebookUpgrades                                           (Edit, BlueprintVisible)
// TSubclassOf<class UQtnUpgrade>     CallFunc_SyncLoadUpgradeClass_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_BullshitCardSmall_Widget_C::CheckEnemyUpgradeForRulebook(TArray<class UClass*>& RulebookUpgrades, bool* IsRulebookUpgrade, const TArray<class UClass*>& LOCAL_RulebookUpgrades, TSubclassOf<class UQtnUpgrade> CallFunc_SyncLoadUpgradeClass_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BullshitCardSmall_Widget_C", "CheckEnemyUpgradeForRulebook");

	Params::UUI_BullshitCardSmall_Widget_C_CheckEnemyUpgradeForRulebook_Params Parms{};

	Parms.RulebookUpgrades = RulebookUpgrades;
	Parms.LOCAL_RulebookUpgrades = LOCAL_RulebookUpgrades;
	Parms.CallFunc_SyncLoadUpgradeClass_ReturnValue = CallFunc_SyncLoadUpgradeClass_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsRulebookUpgrade != nullptr)
		*IsRulebookUpgrade = Parms.IsRulebookUpgrade;

}


// Function UI_BullshitCardSmall_Widget.UI_BullshitCardSmall_Widget_C.MakeEnemyBullshitCard
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      EnemyBullshitBPBase                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetClassDisplayName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class UQtnBullshitBPBaseArchetype_C*CallFunc_GetBullshitArchetype_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// class FText                        Temp_text_Variable                                               (None)
// struct FUI_Card_Struct             K2Node_MakeStruct_UI_Card_Struct                                 (HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)
// struct FUI_Card_Struct             K2Node_MakeStruct_UI_Card_Struct_1                               (HasGetValueTypeHash)

void UUI_BullshitCardSmall_Widget_C::MakeEnemyBullshitCard(class UClass* EnemyBullshitBPBase, const class FString& CallFunc_GetClassDisplayName_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class UQtnBullshitBPBaseArchetype_C* CallFunc_GetBullshitArchetype_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, class FText Temp_text_Variable, const struct FUI_Card_Struct& K2Node_MakeStruct_UI_Card_Struct, bool Temp_bool_Variable, class FText K2Node_Select_Default, const struct FUI_Card_Struct& K2Node_MakeStruct_UI_Card_Struct_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BullshitCardSmall_Widget_C", "MakeEnemyBullshitCard");

	Params::UUI_BullshitCardSmall_Widget_C_MakeEnemyBullshitCard_Params Parms{};

	Parms.EnemyBullshitBPBase = EnemyBullshitBPBase;
	Parms.CallFunc_GetClassDisplayName_ReturnValue = CallFunc_GetClassDisplayName_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetBullshitArchetype_ReturnValue = CallFunc_GetBullshitArchetype_ReturnValue;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.K2Node_MakeStruct_UI_Card_Struct = K2Node_MakeStruct_UI_Card_Struct;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_UI_Card_Struct_1 = K2Node_MakeStruct_UI_Card_Struct_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_BullshitCardSmall_Widget.UI_BullshitCardSmall_Widget_C.Make Player Upgrade Card
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnUpgradeSettings         UpgradeSettings                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FQtnRolledUpgradeData       QtnRolledUpgradeData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<class UTexture2D*>          LOCAL_RarityTextures                                             (Edit, BlueprintVisible)
// TArray<class UClass*>              LOCAL_RulebookRules                                              (Edit, BlueprintVisible)
// TArray<struct FGameplayTag>        Local_RarityTags                                                 (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        LOCAL_RarityColors                                               (Edit, BlueprintVisible)
// TMap<struct FGameplayTag, class FText>LOCAL_TagToText                                                  (Edit, BlueprintVisible)
// struct FQtnRolledUpgradeData       LOCAL_RolledUpgradeData                                          (Edit, BlueprintVisible)
// TArray<class UTexture2D*>          K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<struct FGameplayTag>        K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FName                        CallFunc_GetTagName_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_RightChop_ReturnValue                                   (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_ToUpper_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Format_Upgrade_Value_OutFormattedValue                  (None)
// class FText                        CallFunc_Format_Upgrade_Value_OutFormattedValue_1                (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// class FText                        CallFunc_Format_Upgrade_Value_OutFormattedValue_2                (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FUI_Card_Struct             K2Node_MakeStruct_UI_Card_Struct                                 (HasGetValueTypeHash)

void UUI_BullshitCardSmall_Widget_C::Make_Player_Upgrade_Card(const struct FQtnUpgradeSettings& UpgradeSettings, const struct FQtnRolledUpgradeData& QtnRolledUpgradeData, const TArray<class UTexture2D*>& LOCAL_RarityTextures, const TArray<class UClass*>& LOCAL_RulebookRules, const TArray<struct FGameplayTag>& Local_RarityTags, const TArray<struct FLinearColor>& LOCAL_RarityColors, TMap<struct FGameplayTag, class FText> LOCAL_TagToText, const struct FQtnRolledUpgradeData& LOCAL_RolledUpgradeData, TArray<class UTexture2D*>& K2Node_MakeArray_Array, TArray<struct FGameplayTag>& K2Node_MakeArray_Array_1, class FName CallFunc_GetTagName_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, class UTexture2D* CallFunc_Array_Get_Item, const class FString& CallFunc_RightChop_ReturnValue, const class FString& CallFunc_ToUpper_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Format_Upgrade_Value_OutFormattedValue, class FText CallFunc_Format_Upgrade_Value_OutFormattedValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Format_Upgrade_Value_OutFormattedValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue, const struct FUI_Card_Struct& K2Node_MakeStruct_UI_Card_Struct)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BullshitCardSmall_Widget_C", "Make Player Upgrade Card");

	Params::UUI_BullshitCardSmall_Widget_C_Make_Player_Upgrade_Card_Params Parms{};

	Parms.UpgradeSettings = UpgradeSettings;
	Parms.QtnRolledUpgradeData = QtnRolledUpgradeData;
	Parms.LOCAL_RarityTextures = LOCAL_RarityTextures;
	Parms.LOCAL_RulebookRules = LOCAL_RulebookRules;
	Parms.Local_RarityTags = Local_RarityTags;
	Parms.LOCAL_RarityColors = LOCAL_RarityColors;
	Parms.LOCAL_TagToText = LOCAL_TagToText;
	Parms.LOCAL_RolledUpgradeData = LOCAL_RolledUpgradeData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_GetTagName_ReturnValue = CallFunc_GetTagName_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_RightChop_ReturnValue = CallFunc_RightChop_ReturnValue;
	Parms.CallFunc_ToUpper_ReturnValue = CallFunc_ToUpper_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Format_Upgrade_Value_OutFormattedValue = CallFunc_Format_Upgrade_Value_OutFormattedValue;
	Parms.CallFunc_Format_Upgrade_Value_OutFormattedValue_1 = CallFunc_Format_Upgrade_Value_OutFormattedValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Format_Upgrade_Value_OutFormattedValue_2 = CallFunc_Format_Upgrade_Value_OutFormattedValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_UI_Card_Struct = K2Node_MakeStruct_UI_Card_Struct;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_BullshitCardSmall_Widget.UI_BullshitCardSmall_Widget_C.Format Upgrade Value
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

void UUI_BullshitCardSmall_Widget_C::Format_Upgrade_Value(struct FQtnUpgradeSettings& UpgradeSettings, struct FQtnRolledUpgradeData& RolledData, int32 Index, class FText* OutFormattedValue, TSubclassOf<class UQtnUpgrade> CallFunc_SyncLoadUpgradeClass_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UQtnUpgrade* CallFunc_GetClassDefaultObject_ReturnValue, class FText CallFunc_GetFormattedValueAtIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BullshitCardSmall_Widget_C", "Format Upgrade Value");

	Params::UUI_BullshitCardSmall_Widget_C_Format_Upgrade_Value_Params Parms{};

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


// Function UI_BullshitCardSmall_Widget.UI_BullshitCardSmall_Widget_C.SetupRarity
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

void UUI_BullshitCardSmall_Widget_C::SetupRarity(TArray<struct FLinearColor>& RarityColors, const struct FGameplayTag& RarityTag, struct FLinearColor* CardBackgroundColor, struct FSlateColor* RarityFontColor, class FText* RarityText, TMap<struct FGameplayTag, class FText> LOCAL_TagToText, const TArray<struct FLinearColor>& LOCAL_RarityColors, TMap<struct FGameplayTag, class FText> K2Node_MakeVariable_MakeVariableOutput, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<struct FGameplayTag>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Find_ReturnValue, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BullshitCardSmall_Widget_C", "SetupRarity");

	Params::UUI_BullshitCardSmall_Widget_C_SetupRarity_Params Parms{};

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


// Function UI_BullshitCardSmall_Widget.UI_BullshitCardSmall_Widget_C.BndEvt__UI_BullshitCard_Widget_Button_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_BullshitCardSmall_Widget_C::BndEvt__UI_BullshitCard_Widget_Button_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BullshitCardSmall_Widget_C", "BndEvt__UI_BullshitCard_Widget_Button_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_BullshitCardSmall_Widget.UI_BullshitCardSmall_Widget_C.BndEvt__UI_BullshitCard_Widget_Button_1_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_BullshitCardSmall_Widget_C::BndEvt__UI_BullshitCard_Widget_Button_1_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BullshitCardSmall_Widget_C", "BndEvt__UI_BullshitCard_Widget_Button_1_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_BullshitCardSmall_Widget.UI_BullshitCardSmall_Widget_C.BndEvt__UI_BullshitCard_Widget_Button_1_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_BullshitCardSmall_Widget_C::BndEvt__UI_BullshitCard_Widget_Button_1_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BullshitCardSmall_Widget_C", "BndEvt__UI_BullshitCard_Widget_Button_1_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_BullshitCardSmall_Widget.UI_BullshitCardSmall_Widget_C.MakePlayerBullshitCard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtn_CheatVerb_Archetype_C*  As_Qtn_Cheat_Verb_Archetype                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_BullshitCardSmall_Widget_C::MakePlayerBullshitCard(class UQtn_CheatVerb_Archetype_C* As_Qtn_Cheat_Verb_Archetype)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BullshitCardSmall_Widget_C", "MakePlayerBullshitCard");

	Params::UUI_BullshitCardSmall_Widget_C_MakePlayerBullshitCard_Params Parms{};

	Parms.As_Qtn_Cheat_Verb_Archetype = As_Qtn_Cheat_Verb_Archetype;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_BullshitCardSmall_Widget.UI_BullshitCardSmall_Widget_C.MakeCardFromStruct
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUI_Card_Struct             MyCardInfo                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               IsRulebook                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_BullshitCardSmall_Widget_C::MakeCardFromStruct(const struct FUI_Card_Struct& MyCardInfo, bool IsRulebook)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BullshitCardSmall_Widget_C", "MakeCardFromStruct");

	Params::UUI_BullshitCardSmall_Widget_C_MakeCardFromStruct_Params Parms{};

	Parms.MyCardInfo = MyCardInfo;
	Parms.IsRulebook = IsRulebook;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_BullshitCardSmall_Widget.UI_BullshitCardSmall_Widget_C.BndEvt__UI_BullshitCard_Widget_Button_1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_BullshitCardSmall_Widget_C::BndEvt__UI_BullshitCard_Widget_Button_1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BullshitCardSmall_Widget_C", "BndEvt__UI_BullshitCard_Widget_Button_1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_BullshitCardSmall_Widget.UI_BullshitCardSmall_Widget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_BullshitCardSmall_Widget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BullshitCardSmall_Widget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_BullshitCardSmall_Widget.UI_BullshitCardSmall_Widget_C.ExecuteUbergraph_UI_BullshitCardSmall_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// TArray<struct FLinearColor>        K2Node_MakeArray_Array                                           (ReferenceParm)
// class UQtn_CheatVerb_Archetype_C*  K2Node_CustomEvent_As_Qtn_Cheat_Verb_Archetype                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUI_Card_Struct             K2Node_CustomEvent_MyCardInfo                                    (HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsRulebook                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (UObjectWrapper, HasGetValueTypeHash)
// struct FUI_Card_Struct             K2Node_MakeStruct_UI_Card_Struct                                 (HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_BullshitCardSmall_Widget_C::ExecuteUbergraph_UI_BullshitCardSmall_Widget(int32 EntryPoint, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, TArray<struct FLinearColor>& K2Node_MakeArray_Array, class UQtn_CheatVerb_Archetype_C* K2Node_CustomEvent_As_Qtn_Cheat_Verb_Archetype, const struct FUI_Card_Struct& K2Node_CustomEvent_MyCardInfo, bool K2Node_CustomEvent_IsRulebook, TSoftObjectPtr<class UTexture2D> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, const struct FUI_Card_Struct& K2Node_MakeStruct_UI_Card_Struct, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, int32 CallFunc_Max_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_Conv_IntToText_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_1, bool K2Node_DynamicCast_bSuccess_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BullshitCardSmall_Widget_C", "ExecuteUbergraph_UI_BullshitCardSmall_Widget");

	Params::UUI_BullshitCardSmall_Widget_C_ExecuteUbergraph_UI_BullshitCardSmall_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_CustomEvent_As_Qtn_Cheat_Verb_Archetype = K2Node_CustomEvent_As_Qtn_Cheat_Verb_Archetype;
	Parms.K2Node_CustomEvent_MyCardInfo = K2Node_CustomEvent_MyCardInfo;
	Parms.K2Node_CustomEvent_IsRulebook = K2Node_CustomEvent_IsRulebook;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	Parms.K2Node_MakeStruct_UI_Card_Struct = K2Node_MakeStruct_UI_Card_Struct;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_1 = CallFunc_LoadAsset_Blocking_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsTexture_2D_1 = K2Node_DynamicCast_AsTexture_2D_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_BullshitCardSmall_Widget.UI_BullshitCardSmall_Widget_C.CardButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Pressed_                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_BullshitCardSmall_Widget_C::CardButtonPressed__DelegateSignature(bool Pressed_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BullshitCardSmall_Widget_C", "CardButtonPressed__DelegateSignature");

	Params::UUI_BullshitCardSmall_Widget_C_CardButtonPressed__DelegateSignature_Params Parms{};

	Parms.Pressed_ = Pressed_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_BullshitCardSmall_Widget.UI_BullshitCardSmall_Widget_C.CardButtonHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hovered_                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              HoveredIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUI_Card_Struct             CardInfo                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UUI_BullshitCardSmall_Widget_C::CardButtonHovered__DelegateSignature(bool Hovered_, int32 HoveredIndex, const struct FUI_Card_Struct& CardInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BullshitCardSmall_Widget_C", "CardButtonHovered__DelegateSignature");

	Params::UUI_BullshitCardSmall_Widget_C_CardButtonHovered__DelegateSignature_Params Parms{};

	Parms.Hovered_ = Hovered_;
	Parms.HoveredIndex = HoveredIndex;
	Parms.CardInfo = CardInfo;

	UObject::ProcessEvent(Func, &Parms);

}

}


