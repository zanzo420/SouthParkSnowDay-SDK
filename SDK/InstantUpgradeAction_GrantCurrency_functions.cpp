#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass InstantUpgradeAction_GrantCurrency.InstantUpgradeAction_GrantCurrency_C
// (None)

class UClass* UInstantUpgradeAction_GrantCurrency_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InstantUpgradeAction_GrantCurrency_C");

	return Clss;
}


// InstantUpgradeAction_GrantCurrency_C InstantUpgradeAction_GrantCurrency.Default__InstantUpgradeAction_GrantCurrency_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInstantUpgradeAction_GrantCurrency_C* UInstantUpgradeAction_GrantCurrency_C::GetDefaultObj()
{
	static class UInstantUpgradeAction_GrantCurrency_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInstantUpgradeAction_GrantCurrency_C*>(UInstantUpgradeAction_GrantCurrency_C::StaticClass()->DefaultObject);

	return Default;
}


// Function InstantUpgradeAction_GrantCurrency.InstantUpgradeAction_GrantCurrency_C.K2_ActivateUpgrade
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                TargetUser                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeResult     RolledUpgradeSettings                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UQtnInventoryComponent*      CallFunc_GetBodyInventory_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UQtnUpgrade>     CallFunc_SyncLoadUpgradeClass_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UQtnUpgrade*                 CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfUpgradeWithSettings_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UInstantUpgradeAction_GrantCurrency_C::K2_ActivateUpgrade(class AQtnBodyPawn* TargetUser, struct FQtnRolledUpgradeResult& RolledUpgradeSettings, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, TSubclassOf<class UQtnUpgrade> CallFunc_SyncLoadUpgradeClass_ReturnValue, class UQtnUpgrade* CallFunc_GetClassDefaultObject_ReturnValue, float CallFunc_GetValueOfUpgradeWithSettings_ReturnValue, int32 CallFunc_FTrunc_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InstantUpgradeAction_GrantCurrency_C", "K2_ActivateUpgrade");

	Params::UInstantUpgradeAction_GrantCurrency_C_K2_ActivateUpgrade_Params Parms{};

	Parms.TargetUser = TargetUser;
	Parms.RolledUpgradeSettings = RolledUpgradeSettings;
	Parms.CallFunc_GetBodyInventory_ReturnValue = CallFunc_GetBodyInventory_ReturnValue;
	Parms.CallFunc_SyncLoadUpgradeClass_ReturnValue = CallFunc_SyncLoadUpgradeClass_ReturnValue;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.CallFunc_GetValueOfUpgradeWithSettings_ReturnValue = CallFunc_GetValueOfUpgradeWithSettings_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


