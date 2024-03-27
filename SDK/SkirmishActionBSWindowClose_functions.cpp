#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SkirmishActionBSWindowClose.SkirmishActionBSWindowClose_C
// (None)

class UClass* USkirmishActionBSWindowClose_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SkirmishActionBSWindowClose_C");

	return Clss;
}


// SkirmishActionBSWindowClose_C SkirmishActionBSWindowClose.Default__SkirmishActionBSWindowClose_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USkirmishActionBSWindowClose_C* USkirmishActionBSWindowClose_C::GetDefaultObj()
{
	static class USkirmishActionBSWindowClose_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USkirmishActionBSWindowClose_C*>(USkirmishActionBSWindowClose_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SkirmishActionBSWindowClose.SkirmishActionBSWindowClose_C.ExecuteSkirmishAction
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AQtnSkirmish*                OwningSkirmish                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnSkirmishTrigger*         OwningTrigger                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASkirmishBase_C*             K2Node_DynamicCast_AsSkirmish_Base                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void USkirmishActionBSWindowClose_C::ExecuteSkirmishAction(class AQtnSkirmish* OwningSkirmish, class UQtnSkirmishTrigger* OwningTrigger, class ASkirmishBase_C* K2Node_DynamicCast_AsSkirmish_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkirmishActionBSWindowClose_C", "ExecuteSkirmishAction");

	Params::USkirmishActionBSWindowClose_C_ExecuteSkirmishAction_Params Parms{};

	Parms.OwningSkirmish = OwningSkirmish;
	Parms.OwningTrigger = OwningTrigger;
	Parms.K2Node_DynamicCast_AsSkirmish_Base = K2Node_DynamicCast_AsSkirmish_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


