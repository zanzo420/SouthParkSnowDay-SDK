#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SkirmishActionSpawnGroup.SkirmishActionSpawnGroup_C
// (None)

class UClass* USkirmishActionSpawnGroup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SkirmishActionSpawnGroup_C");

	return Clss;
}


// SkirmishActionSpawnGroup_C SkirmishActionSpawnGroup.Default__SkirmishActionSpawnGroup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USkirmishActionSpawnGroup_C* USkirmishActionSpawnGroup_C::GetDefaultObj()
{
	static class USkirmishActionSpawnGroup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USkirmishActionSpawnGroup_C*>(USkirmishActionSpawnGroup_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SkirmishActionSpawnGroup.SkirmishActionSpawnGroup_C.ExecuteSkirmishAction
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AQtnSkirmish*                OwningSkirmish                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnSkirmishTrigger*         OwningTrigger                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASkirmishBase_C*             K2Node_DynamicCast_AsSkirmish_Base                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnSkirmishRequestSpawnParamsK2Node_MakeStruct_QtnSkirmishRequestSpawnParams                  (NoDestructor)
// bool                               CallFunc_RequestSpawnGroup_ServerOnly_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)

void USkirmishActionSpawnGroup_C::ExecuteSkirmishAction(class AQtnSkirmish* OwningSkirmish, class UQtnSkirmishTrigger* OwningTrigger, class ASkirmishBase_C* K2Node_DynamicCast_AsSkirmish_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, const struct FQtnSkirmishRequestSpawnParams& K2Node_MakeStruct_QtnSkirmishRequestSpawnParams, bool CallFunc_RequestSpawnGroup_ServerOnly_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkirmishActionSpawnGroup_C", "ExecuteSkirmishAction");

	Params::USkirmishActionSpawnGroup_C_ExecuteSkirmishAction_Params Parms{};

	Parms.OwningSkirmish = OwningSkirmish;
	Parms.OwningTrigger = OwningTrigger;
	Parms.K2Node_DynamicCast_AsSkirmish_Base = K2Node_DynamicCast_AsSkirmish_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_MakeStruct_QtnSkirmishRequestSpawnParams = K2Node_MakeStruct_QtnSkirmishRequestSpawnParams;
	Parms.CallFunc_RequestSpawnGroup_ServerOnly_ReturnValue = CallFunc_RequestSpawnGroup_ServerOnly_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


