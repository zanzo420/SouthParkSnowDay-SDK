#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SkirmishWithGoalEvent.SkirmishWithGoalEvent_C
// (Actor)

class UClass* ASkirmishWithGoalEvent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SkirmishWithGoalEvent_C");

	return Clss;
}


// SkirmishWithGoalEvent_C SkirmishWithGoalEvent.Default__SkirmishWithGoalEvent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASkirmishWithGoalEvent_C* ASkirmishWithGoalEvent_C::GetDefaultObj()
{
	static class ASkirmishWithGoalEvent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASkirmishWithGoalEvent_C*>(ASkirmishWithGoalEvent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SkirmishWithGoalEvent.SkirmishWithGoalEvent_C.SkirmishGoalSpawnedEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    Spawned_Goal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASkirmishWithGoalEvent_C::SkirmishGoalSpawnedEvent__DelegateSignature(class FName Tag, class UQtnGoal* Spawned_Goal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkirmishWithGoalEvent_C", "SkirmishGoalSpawnedEvent__DelegateSignature");

	Params::ASkirmishWithGoalEvent_C_SkirmishGoalSpawnedEvent__DelegateSignature_Params Parms{};

	Parms.Tag = Tag;
	Parms.Spawned_Goal = Spawned_Goal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SkirmishWithGoalEvent.SkirmishWithGoalEvent_C.SkirmishGoalStartEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    QTN_goal_calling_event                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASkirmishWithGoalEvent_C::SkirmishGoalStartEvent__DelegateSignature(class FName Tag, class UQtnGoal* QTN_goal_calling_event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkirmishWithGoalEvent_C", "SkirmishGoalStartEvent__DelegateSignature");

	Params::ASkirmishWithGoalEvent_C_SkirmishGoalStartEvent__DelegateSignature_Params Parms{};

	Parms.Tag = Tag;
	Parms.QTN_goal_calling_event = QTN_goal_calling_event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SkirmishWithGoalEvent.SkirmishWithGoalEvent_C.SkirmishGoalEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASubGoalArchetype_C*         Goal_calling_event                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    QTN_goal_calling_event                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASkirmishWithGoalEvent_C::SkirmishGoalEvent__DelegateSignature(class ASubGoalArchetype_C* Goal_calling_event, class UQtnGoal* QTN_goal_calling_event, class FName Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkirmishWithGoalEvent_C", "SkirmishGoalEvent__DelegateSignature");

	Params::ASkirmishWithGoalEvent_C_SkirmishGoalEvent__DelegateSignature_Params Parms{};

	Parms.Goal_calling_event = Goal_calling_event;
	Parms.QTN_goal_calling_event = QTN_goal_calling_event;
	Parms.Tag = Tag;

	UObject::ProcessEvent(Func, &Parms);

}

}


