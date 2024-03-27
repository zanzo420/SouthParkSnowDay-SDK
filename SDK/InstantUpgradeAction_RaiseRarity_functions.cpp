#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass InstantUpgradeAction_RaiseRarity.InstantUpgradeAction_RaiseRarity_C
// (None)

class UClass* UInstantUpgradeAction_RaiseRarity_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InstantUpgradeAction_RaiseRarity_C");

	return Clss;
}


// InstantUpgradeAction_RaiseRarity_C InstantUpgradeAction_RaiseRarity.Default__InstantUpgradeAction_RaiseRarity_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInstantUpgradeAction_RaiseRarity_C* UInstantUpgradeAction_RaiseRarity_C::GetDefaultObj()
{
	static class UInstantUpgradeAction_RaiseRarity_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInstantUpgradeAction_RaiseRarity_C*>(UInstantUpgradeAction_RaiseRarity_C::StaticClass()->DefaultObject);

	return Default;
}


// Function InstantUpgradeAction_RaiseRarity.InstantUpgradeAction_RaiseRarity_C.Increment Rarity
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnRolledUpgradeData       Existing_Data                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UClass*                      UpgradeClass                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeData       Adjusted_Data                                                    (Parm, OutParm)
// bool                               FoundValue                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                Old_Rarity                                                       (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                New_Rarity                                                       (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FQtnUpgradeSettings         CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnRolledUpgradeData       K2Node_SetFieldsInStruct_StructOut                               (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FGameplayTag>        K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInstantUpgradeAction_RaiseRarity_C::Increment_Rarity(const struct FQtnRolledUpgradeData& Existing_Data, class UClass* UpgradeClass, struct FQtnRolledUpgradeData* Adjusted_Data, bool FoundValue, const struct FGameplayTag& Old_Rarity, const struct FGameplayTag& New_Rarity, const struct FQtnUpgradeSettings& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, const struct FQtnRolledUpgradeData& K2Node_SetFieldsInStruct_StructOut, bool CallFunc_Not_PreBool_ReturnValue, TArray<struct FGameplayTag>& K2Node_MakeArray_Array, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_HasTag_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InstantUpgradeAction_RaiseRarity_C", "Increment Rarity");

	Params::UInstantUpgradeAction_RaiseRarity_C_Increment_Rarity_Params Parms{};

	Parms.Existing_Data = Existing_Data;
	Parms.UpgradeClass = UpgradeClass;
	Parms.FoundValue = FoundValue;
	Parms.Old_Rarity = Old_Rarity;
	Parms.New_Rarity = New_Rarity;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Adjusted_Data != nullptr)
		*Adjusted_Data = std::move(Parms.Adjusted_Data);

}


// Function InstantUpgradeAction_RaiseRarity.InstantUpgradeAction_RaiseRarity_C.K2_ActivateUpgrade
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                TargetUser                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeResult     RolledUpgradeSettings                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FQtnUpgradeSettings         CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UQtnUpgrade>     CallFunc_SyncLoadUpgradeClass_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UQtnUpgradeSlot*             CallFunc_FindUpgrade_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeData       CallFunc_GetRolledUpgradeData_ReturnValue                        (ConstParm)
// struct FQtnRolledUpgradeData       CallFunc_Increment_Rarity_Adjusted_Data                          (None)
// bool                               CallFunc_UpdateRolledData_ServerOnly_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UInstantUpgradeAction_RaiseRarity_C::K2_ActivateUpgrade(class AQtnBodyPawn* TargetUser, struct FQtnRolledUpgradeResult& RolledUpgradeSettings, const struct FQtnUpgradeSettings& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, TSubclassOf<class UQtnUpgrade> CallFunc_SyncLoadUpgradeClass_ReturnValue, class UQtnUpgradeSlot* CallFunc_FindUpgrade_ReturnValue, const struct FQtnRolledUpgradeData& CallFunc_GetRolledUpgradeData_ReturnValue, const struct FQtnRolledUpgradeData& CallFunc_Increment_Rarity_Adjusted_Data, bool CallFunc_UpdateRolledData_ServerOnly_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InstantUpgradeAction_RaiseRarity_C", "K2_ActivateUpgrade");

	Params::UInstantUpgradeAction_RaiseRarity_C_K2_ActivateUpgrade_Params Parms{};

	Parms.TargetUser = TargetUser;
	Parms.RolledUpgradeSettings = RolledUpgradeSettings;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_SyncLoadUpgradeClass_ReturnValue = CallFunc_SyncLoadUpgradeClass_ReturnValue;
	Parms.CallFunc_FindUpgrade_ReturnValue = CallFunc_FindUpgrade_ReturnValue;
	Parms.CallFunc_GetRolledUpgradeData_ReturnValue = CallFunc_GetRolledUpgradeData_ReturnValue;
	Parms.CallFunc_Increment_Rarity_Adjusted_Data = CallFunc_Increment_Rarity_Adjusted_Data;
	Parms.CallFunc_UpdateRolledData_ServerOnly_ReturnValue = CallFunc_UpdateRolledData_ServerOnly_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


