#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SkirmishTriggerReceiveSkirmishNotify.SkirmishTriggerReceiveSkirmishNotify_C
// (None)

class UClass* USkirmishTriggerReceiveSkirmishNotify_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SkirmishTriggerReceiveSkirmishNotify_C");

	return Clss;
}


// SkirmishTriggerReceiveSkirmishNotify_C SkirmishTriggerReceiveSkirmishNotify.Default__SkirmishTriggerReceiveSkirmishNotify_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USkirmishTriggerReceiveSkirmishNotify_C* USkirmishTriggerReceiveSkirmishNotify_C::GetDefaultObj()
{
	static class USkirmishTriggerReceiveSkirmishNotify_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USkirmishTriggerReceiveSkirmishNotify_C*>(USkirmishTriggerReceiveSkirmishNotify_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SkirmishTriggerReceiveSkirmishNotify.SkirmishTriggerReceiveSkirmishNotify_C.OnSkirmishInit
// (Event, Public, BlueprintEvent)
// Parameters:
// class AQtnSkirmish*                OwningSkirmish                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkirmishTriggerReceiveSkirmishNotify_C::OnSkirmishInit(class AQtnSkirmish* OwningSkirmish)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkirmishTriggerReceiveSkirmishNotify_C", "OnSkirmishInit");

	Params::USkirmishTriggerReceiveSkirmishNotify_C_OnSkirmishInit_Params Parms{};

	Parms.OwningSkirmish = OwningSkirmish;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SkirmishTriggerReceiveSkirmishNotify.SkirmishTriggerReceiveSkirmishNotify_C.RecieveEventFromAnotherSkirmish
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASkirmishBase_C*             Skirmish_Sending_Event                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkirmishTriggerReceiveSkirmishNotify_C::RecieveEventFromAnotherSkirmish(class ASkirmishBase_C* Skirmish_Sending_Event, class FName Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkirmishTriggerReceiveSkirmishNotify_C", "RecieveEventFromAnotherSkirmish");

	Params::USkirmishTriggerReceiveSkirmishNotify_C_RecieveEventFromAnotherSkirmish_Params Parms{};

	Parms.Skirmish_Sending_Event = Skirmish_Sending_Event;
	Parms.Tag = Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SkirmishTriggerReceiveSkirmishNotify.SkirmishTriggerReceiveSkirmishNotify_C.ExecuteUbergraph_SkirmishTriggerReceiveSkirmishNotify
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AQtnSkirmish*                K2Node_Event_owningSkirmish                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASkirmishBase_C*             K2Node_DynamicCast_AsSkirmish_Base                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASkirmishBase_C*             K2Node_CustomEvent_Skirmish_Sending_Event                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_Tag                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void USkirmishTriggerReceiveSkirmishNotify_C::ExecuteUbergraph_SkirmishTriggerReceiveSkirmishNotify(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AQtnSkirmish* K2Node_Event_owningSkirmish, class ASkirmishBase_C* K2Node_DynamicCast_AsSkirmish_Base, bool K2Node_DynamicCast_bSuccess, class ASkirmishBase_C* K2Node_CustomEvent_Skirmish_Sending_Event, class FName K2Node_CustomEvent_Tag, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkirmishTriggerReceiveSkirmishNotify_C", "ExecuteUbergraph_SkirmishTriggerReceiveSkirmishNotify");

	Params::USkirmishTriggerReceiveSkirmishNotify_C_ExecuteUbergraph_SkirmishTriggerReceiveSkirmishNotify_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_owningSkirmish = K2Node_Event_owningSkirmish;
	Parms.K2Node_DynamicCast_AsSkirmish_Base = K2Node_DynamicCast_AsSkirmish_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_Skirmish_Sending_Event = K2Node_CustomEvent_Skirmish_Sending_Event;
	Parms.K2Node_CustomEvent_Tag = K2Node_CustomEvent_Tag;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


