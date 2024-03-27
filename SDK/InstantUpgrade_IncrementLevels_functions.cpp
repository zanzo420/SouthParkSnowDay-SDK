#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass InstantUpgrade_IncrementLevels.InstantUpgrade_IncrementLevels_C
// (None)

class UClass* UInstantUpgrade_IncrementLevels_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InstantUpgrade_IncrementLevels_C");

	return Clss;
}


// InstantUpgrade_IncrementLevels_C InstantUpgrade_IncrementLevels.Default__InstantUpgrade_IncrementLevels_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInstantUpgrade_IncrementLevels_C* UInstantUpgrade_IncrementLevels_C::GetDefaultObj()
{
	static class UInstantUpgrade_IncrementLevels_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInstantUpgrade_IncrementLevels_C*>(UInstantUpgrade_IncrementLevels_C::StaticClass()->DefaultObject);

	return Default;
}


// Function InstantUpgrade_IncrementLevels.InstantUpgrade_IncrementLevels_C.CDO_GenerateTextValueForDisplay
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FQtnUpgradeSettings         InUpgradeSettings                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FQtnRolledUpgradeData       RolledUpgradeData                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              ArrayIndex                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FQtnUpgradeSettings         CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

class FText UInstantUpgrade_IncrementLevels_C::CDO_GenerateTextValueForDisplay(struct FQtnUpgradeSettings& InUpgradeSettings, struct FQtnRolledUpgradeData& RolledUpgradeData, int32 ArrayIndex, const struct FQtnUpgradeSettings& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InstantUpgrade_IncrementLevels_C", "CDO_GenerateTextValueForDisplay");

	Params::UInstantUpgrade_IncrementLevels_C_CDO_GenerateTextValueForDisplay_Params Parms{};

	Parms.InUpgradeSettings = InUpgradeSettings;
	Parms.RolledUpgradeData = RolledUpgradeData;
	Parms.ArrayIndex = ArrayIndex;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function InstantUpgrade_IncrementLevels.InstantUpgrade_IncrementLevels_C.CDO_GenerateTargetModifiableIdentity
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AQtnBodyPawn*                TargetPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnUpgradeSettings         InUpgradeSettings                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FQtnRolledUpgradeData       RolledUpgradeData                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                OutRarityTag                                                     (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// int32                              OutLevel                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UQtnUpgrade*>         Valid_Upgrades                                                   (Edit, BlueprintVisible)
// TArray<class UQtnUpgrade*>         Unmaxxed_Upgrades                                                (Edit, BlueprintVisible)

class FName UInstantUpgrade_IncrementLevels_C::CDO_GenerateTargetModifiableIdentity(class AQtnBodyPawn* TargetPawn, struct FQtnUpgradeSettings& InUpgradeSettings, struct FQtnRolledUpgradeData& RolledUpgradeData, struct FGameplayTag* OutRarityTag, int32* OutLevel, const TArray<class UQtnUpgrade*>& Valid_Upgrades, const TArray<class UQtnUpgrade*>& Unmaxxed_Upgrades)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InstantUpgrade_IncrementLevels_C", "CDO_GenerateTargetModifiableIdentity");

	Params::UInstantUpgrade_IncrementLevels_C_CDO_GenerateTargetModifiableIdentity_Params Parms{};

	Parms.TargetPawn = TargetPawn;
	Parms.InUpgradeSettings = InUpgradeSettings;
	Parms.RolledUpgradeData = RolledUpgradeData;
	Parms.Valid_Upgrades = Valid_Upgrades;
	Parms.Unmaxxed_Upgrades = Unmaxxed_Upgrades;

	UObject::ProcessEvent(Func, &Parms);

	if (OutRarityTag != nullptr)
		*OutRarityTag = std::move(Parms.OutRarityTag);

	if (OutLevel != nullptr)
		*OutLevel = Parms.OutLevel;

	return Parms.ReturnValue;

}


// Function InstantUpgrade_IncrementLevels.InstantUpgrade_IncrementLevels_C.CanUpgradeBeRolled
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AQtnBodyPawn*                TargetBodyPawn                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TArray<class UQtnUpgrade*>         CallFunc_GetCurrentUpgradesArray_ReturnValue                     (ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnUpgrade*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnUpgradeSettings         CallFunc_GetUpgradeSettings_ReturnValue                          (None)
// struct FQtnRolledUpgradeData       CallFunc_GetRolledUpgradeData_ReturnValue                        (ConstParm)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UInstantUpgrade_IncrementLevels_C::CanUpgradeBeRolled(class AQtnBodyPawn* TargetBodyPawn, TArray<class UQtnUpgrade*>& CallFunc_GetCurrentUpgradesArray_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UQtnUpgrade* CallFunc_Array_Get_Item, const struct FQtnUpgradeSettings& CallFunc_GetUpgradeSettings_ReturnValue, const struct FQtnRolledUpgradeData& CallFunc_GetRolledUpgradeData_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InstantUpgrade_IncrementLevels_C", "CanUpgradeBeRolled");

	Params::UInstantUpgrade_IncrementLevels_C_CanUpgradeBeRolled_Params Parms{};

	Parms.TargetBodyPawn = TargetBodyPawn;
	Parms.CallFunc_GetCurrentUpgradesArray_ReturnValue = CallFunc_GetCurrentUpgradesArray_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetUpgradeSettings_ReturnValue = CallFunc_GetUpgradeSettings_ReturnValue;
	Parms.CallFunc_GetRolledUpgradeData_ReturnValue = CallFunc_GetRolledUpgradeData_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


