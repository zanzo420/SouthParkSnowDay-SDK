#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass InstantUpgradeAction_IncrementLevels.InstantUpgradeAction_IncrementLevels_C
// (None)

class UClass* UInstantUpgradeAction_IncrementLevels_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InstantUpgradeAction_IncrementLevels_C");

	return Clss;
}


// InstantUpgradeAction_IncrementLevels_C InstantUpgradeAction_IncrementLevels.Default__InstantUpgradeAction_IncrementLevels_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInstantUpgradeAction_IncrementLevels_C* UInstantUpgradeAction_IncrementLevels_C::GetDefaultObj()
{
	static class UInstantUpgradeAction_IncrementLevels_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInstantUpgradeAction_IncrementLevels_C*>(UInstantUpgradeAction_IncrementLevels_C::StaticClass()->DefaultObject);

	return Default;
}


// Function InstantUpgradeAction_IncrementLevels.InstantUpgradeAction_IncrementLevels_C.K2_ActivateUpgrade
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                TargetUser                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeResult     RolledUpgradeSettings                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UQtnUpgrade*>         CallFunc_GetCurrentUpgradesArray_ReturnValue                     (ReferenceParm)
// class UQtnUpgrade*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnUpgradeSettings         CallFunc_GetUpgradeSettings_ReturnValue                          (None)
// struct FQtnRolledUpgradeData       CallFunc_GetRolledUpgradeData_ReturnValue                        (ConstParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UpdateRolledData_ServerOnly_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UInstantUpgradeAction_IncrementLevels_C::K2_ActivateUpgrade(class AQtnBodyPawn* TargetUser, struct FQtnRolledUpgradeResult& RolledUpgradeSettings, int32 Temp_int_Array_Index_Variable, TArray<class UQtnUpgrade*>& CallFunc_GetCurrentUpgradesArray_ReturnValue, class UQtnUpgrade* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FQtnUpgradeSettings& CallFunc_GetUpgradeSettings_ReturnValue, const struct FQtnRolledUpgradeData& CallFunc_GetRolledUpgradeData_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_UpdateRolledData_ServerOnly_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InstantUpgradeAction_IncrementLevels_C", "K2_ActivateUpgrade");

	Params::UInstantUpgradeAction_IncrementLevels_C_K2_ActivateUpgrade_Params Parms{};

	Parms.TargetUser = TargetUser;
	Parms.RolledUpgradeSettings = RolledUpgradeSettings;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetCurrentUpgradesArray_ReturnValue = CallFunc_GetCurrentUpgradesArray_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetUpgradeSettings_ReturnValue = CallFunc_GetUpgradeSettings_ReturnValue;
	Parms.CallFunc_GetRolledUpgradeData_ReturnValue = CallFunc_GetRolledUpgradeData_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_UpdateRolledData_ServerOnly_ReturnValue = CallFunc_UpdateRolledData_ServerOnly_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


