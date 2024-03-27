#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnUpgradePPRule_IncreaseLevels.QtnUpgradePPRule_IncreaseLevels_C
// (None)

class UClass* UQtnUpgradePPRule_IncreaseLevels_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnUpgradePPRule_IncreaseLevels_C");

	return Clss;
}


// QtnUpgradePPRule_IncreaseLevels_C QtnUpgradePPRule_IncreaseLevels.Default__QtnUpgradePPRule_IncreaseLevels_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnUpgradePPRule_IncreaseLevels_C* UQtnUpgradePPRule_IncreaseLevels_C::GetDefaultObj()
{
	static class UQtnUpgradePPRule_IncreaseLevels_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnUpgradePPRule_IncreaseLevels_C*>(UQtnUpgradePPRule_IncreaseLevels_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QtnUpgradePPRule_IncreaseLevels.QtnUpgradePPRule_IncreaseLevels_C.GetNextRarityValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                RarityTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                OutRarityTag                                                     (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// bool                               GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnUpgradePPRule_IncreaseLevels_C::GetNextRarityValue(const struct FGameplayTag& RarityTag, struct FGameplayTag* OutRarityTag, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnUpgradePPRule_IncreaseLevels_C", "GetNextRarityValue");

	Params::UQtnUpgradePPRule_IncreaseLevels_C_GetNextRarityValue_Params Parms{};

	Parms.RarityTag = RarityTag;
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (OutRarityTag != nullptr)
		*OutRarityTag = std::move(Parms.OutRarityTag);

}


// Function QtnUpgradePPRule_IncreaseLevels.QtnUpgradePPRule_IncreaseLevels_C.RunPostProcessingRule
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AQtnBodyPawn*                Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FQtnRolledUpgradeResult>CurrentLootArray                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              RarityIncreaseModifier                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnAttributeComponent*      CallFunc_GetAttributeComponent_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasUpgrade_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IQtnAttributeContainerInterface>K2Node_DynamicCast_AsQtn_Attribute_Container_Interface           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetAttributeValue_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeResult     CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetNextRarityValue_OutRarityTag                         (NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeData       K2Node_MakeStruct_QtnRolledUpgradeData                           (None)
// struct FQtnRolledUpgradeResult     K2Node_MakeStruct_QtnRolledUpgradeResult                         (None)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnUpgradePPRule_IncreaseLevels_C::RunPostProcessingRule(class AQtnBodyPawn* Pawn, TArray<struct FQtnRolledUpgradeResult>& CurrentLootArray, int32 RarityIncreaseModifier, int32 CallFunc_Array_Length_ReturnValue, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue, bool CallFunc_HasUpgrade_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetAttributeValue_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, float Temp_float_Variable, const struct FQtnRolledUpgradeResult& CallFunc_Array_Get_Item, int32 CallFunc_FTrunc_ReturnValue, const struct FGameplayTag& CallFunc_GetNextRarityValue_OutRarityTag, const struct FQtnRolledUpgradeData& K2Node_MakeStruct_QtnRolledUpgradeData, const struct FQtnRolledUpgradeResult& K2Node_MakeStruct_QtnRolledUpgradeResult, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnUpgradePPRule_IncreaseLevels_C", "RunPostProcessingRule");

	Params::UQtnUpgradePPRule_IncreaseLevels_C_RunPostProcessingRule_Params Parms{};

	Parms.Pawn = Pawn;
	Parms.CurrentLootArray = CurrentLootArray;
	Parms.RarityIncreaseModifier = RarityIncreaseModifier;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetAttributeComponent_ReturnValue = CallFunc_GetAttributeComponent_ReturnValue;
	Parms.CallFunc_HasUpgrade_ReturnValue = CallFunc_HasUpgrade_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Attribute_Container_Interface = K2Node_DynamicCast_AsQtn_Attribute_Container_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAttributeValue_ReturnValue = CallFunc_GetAttributeValue_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_GetNextRarityValue_OutRarityTag = CallFunc_GetNextRarityValue_OutRarityTag;
	Parms.K2Node_MakeStruct_QtnRolledUpgradeData = K2Node_MakeStruct_QtnRolledUpgradeData;
	Parms.K2Node_MakeStruct_QtnRolledUpgradeResult = K2Node_MakeStruct_QtnRolledUpgradeResult;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


