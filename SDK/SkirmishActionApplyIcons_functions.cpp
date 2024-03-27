#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SkirmishActionApplyIcons.SkirmishActionApplyIcons_C
// (None)

class UClass* USkirmishActionApplyIcons_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SkirmishActionApplyIcons_C");

	return Clss;
}


// SkirmishActionApplyIcons_C SkirmishActionApplyIcons.Default__SkirmishActionApplyIcons_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USkirmishActionApplyIcons_C* USkirmishActionApplyIcons_C::GetDefaultObj()
{
	static class USkirmishActionApplyIcons_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USkirmishActionApplyIcons_C*>(USkirmishActionApplyIcons_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SkirmishActionApplyIcons.SkirmishActionApplyIcons_C.ExecuteSkirmishAction
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AQtnSkirmish*                OwningSkirmish                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnSkirmishTrigger*         OwningTrigger                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASkirmishBase_C*             K2Node_DynamicCast_AsSkirmish_Base                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void USkirmishActionApplyIcons_C::ExecuteSkirmishAction(class AQtnSkirmish* OwningSkirmish, class UQtnSkirmishTrigger* OwningTrigger, class ASkirmishBase_C* K2Node_DynamicCast_AsSkirmish_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkirmishActionApplyIcons_C", "ExecuteSkirmishAction");

	Params::USkirmishActionApplyIcons_C_ExecuteSkirmishAction_Params Parms{};

	Parms.OwningSkirmish = OwningSkirmish;
	Parms.OwningTrigger = OwningTrigger;
	Parms.K2Node_DynamicCast_AsSkirmish_Base = K2Node_DynamicCast_AsSkirmish_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


