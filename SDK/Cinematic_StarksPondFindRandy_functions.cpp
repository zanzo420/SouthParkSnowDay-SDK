#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Cinematic_StarksPondFindRandy.Cinematic_StarksPondFindRandy_C
// (Actor)

class UClass* ACinematic_StarksPondFindRandy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cinematic_StarksPondFindRandy_C");

	return Clss;
}


// Cinematic_StarksPondFindRandy_C Cinematic_StarksPondFindRandy.Default__Cinematic_StarksPondFindRandy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACinematic_StarksPondFindRandy_C* ACinematic_StarksPondFindRandy_C::GetDefaultObj()
{
	static class ACinematic_StarksPondFindRandy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACinematic_StarksPondFindRandy_C*>(ACinematic_StarksPondFindRandy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Cinematic_StarksPondFindRandy.Cinematic_StarksPondFindRandy_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ACinematic_StarksPondFindRandy_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cinematic_StarksPondFindRandy_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cinematic_StarksPondFindRandy.Cinematic_StarksPondFindRandy_C.PlayNextShot
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACinematic_StarksPondFindRandy_C::PlayNextShot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cinematic_StarksPondFindRandy_C", "PlayNextShot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cinematic_StarksPondFindRandy.Cinematic_StarksPondFindRandy_C.GoalEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      GoalClass                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              EventNum                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASubGoalManager_Archetype_C* Manager                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACinematic_StarksPondFindRandy_C::GoalEvent(class UClass* GoalClass, int32 EventNum, class ASubGoalManager_Archetype_C* Manager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cinematic_StarksPondFindRandy_C", "GoalEvent");

	Params::ACinematic_StarksPondFindRandy_C_GoalEvent_Params Parms{};

	Parms.GoalClass = GoalClass;
	Parms.EventNum = EventNum;
	Parms.Manager = Manager;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Cinematic_StarksPondFindRandy.Cinematic_StarksPondFindRandy_C.CleanUpCutscene
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACinematic_StarksPondFindRandy_C::CleanUpCutscene()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cinematic_StarksPondFindRandy_C", "CleanUpCutscene");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cinematic_StarksPondFindRandy.Cinematic_StarksPondFindRandy_C.ExecuteUbergraph_Cinematic_StarksPondFindRandy
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable_1                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_goalClass                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_EventNum                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASubGoalManager_Archetype_C* K2Node_CustomEvent_manager                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AScriptedSkeletalActor_Trial_C*CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AScriptedSkeletalActor_Trial_C*CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACinematic_StarksPondFindRandy_C::ExecuteUbergraph_Cinematic_StarksPondFindRandy(int32 EntryPoint, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable_1, class UClass* K2Node_CustomEvent_goalClass, int32 K2Node_CustomEvent_EventNum, class ASubGoalManager_Archetype_C* K2Node_CustomEvent_manager, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, class AScriptedSkeletalActor_Trial_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class AScriptedSkeletalActor_Trial_C* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cinematic_StarksPondFindRandy_C", "ExecuteUbergraph_Cinematic_StarksPondFindRandy");

	Params::ACinematic_StarksPondFindRandy_C_ExecuteUbergraph_Cinematic_StarksPondFindRandy_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_class_Variable_1 = Temp_class_Variable_1;
	Parms.K2Node_CustomEvent_goalClass = K2Node_CustomEvent_goalClass;
	Parms.K2Node_CustomEvent_EventNum = K2Node_CustomEvent_EventNum;
	Parms.K2Node_CustomEvent_manager = K2Node_CustomEvent_manager;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


