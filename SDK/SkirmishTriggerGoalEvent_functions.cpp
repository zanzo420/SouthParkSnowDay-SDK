#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SkirmishTriggerGoalEvent.SkirmishTriggerGoalEvent_C
// (None)

class UClass* USkirmishTriggerGoalEvent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SkirmishTriggerGoalEvent_C");

	return Clss;
}


// SkirmishTriggerGoalEvent_C SkirmishTriggerGoalEvent.Default__SkirmishTriggerGoalEvent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USkirmishTriggerGoalEvent_C* USkirmishTriggerGoalEvent_C::GetDefaultObj()
{
	static class USkirmishTriggerGoalEvent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USkirmishTriggerGoalEvent_C*>(USkirmishTriggerGoalEvent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SkirmishTriggerGoalEvent.SkirmishTriggerGoalEvent_C.fireEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnGoal*                    Goal_calling_event                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkirmishTriggerGoalEvent_C::FireEvent(class UQtnGoal* Goal_calling_event, class FName Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkirmishTriggerGoalEvent_C", "fireEvent");

	Params::USkirmishTriggerGoalEvent_C_FireEvent_Params Parms{};

	Parms.Goal_calling_event = Goal_calling_event;
	Parms.Tag = Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SkirmishTriggerGoalEvent.SkirmishTriggerGoalEvent_C.OnSkirmishInit
// (Event, Public, BlueprintEvent)
// Parameters:
// class AQtnSkirmish*                OwningSkirmish                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkirmishTriggerGoalEvent_C::OnSkirmishInit(class AQtnSkirmish* OwningSkirmish)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkirmishTriggerGoalEvent_C", "OnSkirmishInit");

	Params::USkirmishTriggerGoalEvent_C_OnSkirmishInit_Params Parms{};

	Parms.OwningSkirmish = OwningSkirmish;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SkirmishTriggerGoalEvent.SkirmishTriggerGoalEvent_C.FireGoalEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASubGoalArchetype_C*         Goal_calling_event                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    QTN_goal_calling_event                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkirmishTriggerGoalEvent_C::FireGoalEvent(class ASubGoalArchetype_C* Goal_calling_event, class UQtnGoal* QTN_goal_calling_event, class FName Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkirmishTriggerGoalEvent_C", "FireGoalEvent");

	Params::USkirmishTriggerGoalEvent_C_FireGoalEvent_Params Parms{};

	Parms.Goal_calling_event = Goal_calling_event;
	Parms.QTN_goal_calling_event = QTN_goal_calling_event;
	Parms.Tag = Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SkirmishTriggerGoalEvent.SkirmishTriggerGoalEvent_C.ExecuteUbergraph_SkirmishTriggerGoalEvent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UQtnGoal*                    K2Node_CustomEvent_goal_calling_event_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_Tag_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class AQtnSkirmish*                K2Node_Event_owningSkirmish                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASubGoalArchetype_C*         K2Node_CustomEvent_goal_calling_event                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    K2Node_CustomEvent_QTN_goal_calling_event                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_Tag                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASkirmishBase_C*             K2Node_DynamicCast_AsSkirmish_Base                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASkirmishWithGoalEvent_C*    K2Node_DynamicCast_AsSkirmish_with_Goal_Event                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void USkirmishTriggerGoalEvent_C::ExecuteUbergraph_SkirmishTriggerGoalEvent(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UQtnGoal* K2Node_CustomEvent_goal_calling_event_1, class FName K2Node_CustomEvent_Tag_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AQtnSkirmish* K2Node_Event_owningSkirmish, class ASubGoalArchetype_C* K2Node_CustomEvent_goal_calling_event, class UQtnGoal* K2Node_CustomEvent_QTN_goal_calling_event, class FName K2Node_CustomEvent_Tag, class ASkirmishBase_C* K2Node_DynamicCast_AsSkirmish_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_NameName_ReturnValue, class ASkirmishWithGoalEvent_C* K2Node_DynamicCast_AsSkirmish_with_Goal_Event, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_NameName_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkirmishTriggerGoalEvent_C", "ExecuteUbergraph_SkirmishTriggerGoalEvent");

	Params::USkirmishTriggerGoalEvent_C_ExecuteUbergraph_SkirmishTriggerGoalEvent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_goal_calling_event_1 = K2Node_CustomEvent_goal_calling_event_1;
	Parms.K2Node_CustomEvent_Tag_1 = K2Node_CustomEvent_Tag_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Event_owningSkirmish = K2Node_Event_owningSkirmish;
	Parms.K2Node_CustomEvent_goal_calling_event = K2Node_CustomEvent_goal_calling_event;
	Parms.K2Node_CustomEvent_QTN_goal_calling_event = K2Node_CustomEvent_QTN_goal_calling_event;
	Parms.K2Node_CustomEvent_Tag = K2Node_CustomEvent_Tag;
	Parms.K2Node_DynamicCast_AsSkirmish_Base = K2Node_DynamicCast_AsSkirmish_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.K2Node_DynamicCast_AsSkirmish_with_Goal_Event = K2Node_DynamicCast_AsSkirmish_with_Goal_Event;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


