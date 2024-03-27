#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass InstantUpgrade_GrantDarkMatter.InstantUpgrade_GrantDarkMatter_C
// (None)

class UClass* UInstantUpgrade_GrantDarkMatter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InstantUpgrade_GrantDarkMatter_C");

	return Clss;
}


// InstantUpgrade_GrantDarkMatter_C InstantUpgrade_GrantDarkMatter.Default__InstantUpgrade_GrantDarkMatter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInstantUpgrade_GrantDarkMatter_C* UInstantUpgrade_GrantDarkMatter_C::GetDefaultObj()
{
	static class UInstantUpgrade_GrantDarkMatter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInstantUpgrade_GrantDarkMatter_C*>(UInstantUpgrade_GrantDarkMatter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function InstantUpgrade_GrantDarkMatter.InstantUpgrade_GrantDarkMatter_C.CDO_GenerateTextValueForDisplay
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FQtnUpgradeSettings         InUpgradeSettings                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FQtnRolledUpgradeData       RolledUpgradeData                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              ArrayIndex                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FQtnUpgradeSettings         CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

class FText UInstantUpgrade_GrantDarkMatter_C::CDO_GenerateTextValueForDisplay(struct FQtnUpgradeSettings& InUpgradeSettings, struct FQtnRolledUpgradeData& RolledUpgradeData, int32 ArrayIndex, const struct FQtnUpgradeSettings& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InstantUpgrade_GrantDarkMatter_C", "CDO_GenerateTextValueForDisplay");

	Params::UInstantUpgrade_GrantDarkMatter_C_CDO_GenerateTextValueForDisplay_Params Parms{};

	Parms.InUpgradeSettings = InUpgradeSettings;
	Parms.RolledUpgradeData = RolledUpgradeData;
	Parms.ArrayIndex = ArrayIndex;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function InstantUpgrade_GrantDarkMatter.InstantUpgrade_GrantDarkMatter_C.CDO_GenerateTargetModifiableIdentity
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AQtnBodyPawn*                TargetPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnUpgradeSettings         InUpgradeSettings                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FQtnRolledUpgradeData       RolledUpgradeData                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                OutRarityTag                                                     (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// int32                              OutLevel                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UQtnUpgrade*>         CallFunc_GetCurrentUpgradesArray_ReturnValue                     (ReferenceParm)
// class UQtnUpgrade*                 CallFunc_Array_Random_OutItem                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Random_OutIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

class FName UInstantUpgrade_GrantDarkMatter_C::CDO_GenerateTargetModifiableIdentity(class AQtnBodyPawn* TargetPawn, struct FQtnUpgradeSettings& InUpgradeSettings, struct FQtnRolledUpgradeData& RolledUpgradeData, struct FGameplayTag* OutRarityTag, int32* OutLevel, TArray<class UQtnUpgrade*>& CallFunc_GetCurrentUpgradesArray_ReturnValue, class UQtnUpgrade* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InstantUpgrade_GrantDarkMatter_C", "CDO_GenerateTargetModifiableIdentity");

	Params::UInstantUpgrade_GrantDarkMatter_C_CDO_GenerateTargetModifiableIdentity_Params Parms{};

	Parms.TargetPawn = TargetPawn;
	Parms.InUpgradeSettings = InUpgradeSettings;
	Parms.RolledUpgradeData = RolledUpgradeData;
	Parms.CallFunc_GetCurrentUpgradesArray_ReturnValue = CallFunc_GetCurrentUpgradesArray_ReturnValue;
	Parms.CallFunc_Array_Random_OutItem = CallFunc_Array_Random_OutItem;
	Parms.CallFunc_Array_Random_OutIndex = CallFunc_Array_Random_OutIndex;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutRarityTag != nullptr)
		*OutRarityTag = std::move(Parms.OutRarityTag);

	if (OutLevel != nullptr)
		*OutLevel = Parms.OutLevel;

	return Parms.ReturnValue;

}

}


