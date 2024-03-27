#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnGoal_SP_Day1_DeliverGas_Cabin.QtnGoal_SP_Day1_DeliverGas_Cabin_C
// (None)

class UClass* UQtnGoal_SP_Day1_DeliverGas_Cabin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnGoal_SP_Day1_DeliverGas_Cabin_C");

	return Clss;
}


// QtnGoal_SP_Day1_DeliverGas_Cabin_C QtnGoal_SP_Day1_DeliverGas_Cabin.Default__QtnGoal_SP_Day1_DeliverGas_Cabin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnGoal_SP_Day1_DeliverGas_Cabin_C* UQtnGoal_SP_Day1_DeliverGas_Cabin_C::GetDefaultObj()
{
	static class UQtnGoal_SP_Day1_DeliverGas_Cabin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnGoal_SP_Day1_DeliverGas_Cabin_C*>(UQtnGoal_SP_Day1_DeliverGas_Cabin_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QtnGoal_SP_Day1_DeliverGas_Cabin.QtnGoal_SP_Day1_DeliverGas_Cabin_C.DEBUGONLY Start Goal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_SP_Day1_DeliverGas_Cabin_C::DEBUGONLY_Start_Goal(bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_DeliverGas_Cabin_C", "DEBUGONLY Start Goal");

	Params::UQtnGoal_SP_Day1_DeliverGas_Cabin_C_DEBUGONLY_Start_Goal_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SP_Day1_DeliverGas_Cabin.QtnGoal_SP_Day1_DeliverGas_Cabin_C.VO Gas Holder Reminder
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_SP_Day1_DeliverGas_Cabin_C::VO_Gas_Holder_Reminder(bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_DeliverGas_Cabin_C", "VO Gas Holder Reminder");

	Params::UQtnGoal_SP_Day1_DeliverGas_Cabin_C_VO_Gas_Holder_Reminder_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SP_Day1_DeliverGas_Cabin.QtnGoal_SP_Day1_DeliverGas_Cabin_C.isThisAIAnEncroacher
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPawn*                    AI                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_encroacher                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputYesNoEnum     CallFunc_IsClassOfType_outputPin                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputYesNoEnum     CallFunc_IsClassOfType_outputPin_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_SP_Day1_DeliverGas_Cabin_C::IsThisAIAnEncroacher(class AQtnPawn* AI, bool* Is_encroacher, class UClass* CallFunc_GetObjectClass_ReturnValue, enum class EQtnOutputYesNoEnum CallFunc_IsClassOfType_outputPin, enum class EQtnOutputYesNoEnum CallFunc_IsClassOfType_outputPin_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_DeliverGas_Cabin_C", "isThisAIAnEncroacher");

	Params::UQtnGoal_SP_Day1_DeliverGas_Cabin_C_IsThisAIAnEncroacher_Params Parms{};

	Parms.AI = AI;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_IsClassOfType_outputPin = CallFunc_IsClassOfType_outputPin;
	Parms.CallFunc_IsClassOfType_outputPin_1 = CallFunc_IsClassOfType_outputPin_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_encroacher != nullptr)
		*Is_encroacher = Parms.Is_encroacher;

}


// Function QtnGoal_SP_Day1_DeliverGas_Cabin.QtnGoal_SP_Day1_DeliverGas_Cabin_C.ToggleScriptyBits
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_SP_Day1_DeliverGas_Cabin_C::ToggleScriptyBits()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_DeliverGas_Cabin_C", "ToggleScriptyBits");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_SP_Day1_DeliverGas_Cabin.QtnGoal_SP_Day1_DeliverGas_Cabin_C.getSkirmish
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_SP_Day1_DeliverGas_Cabin_C::GetSkirmish(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_DeliverGas_Cabin_C", "getSkirmish");

	Params::UQtnGoal_SP_Day1_DeliverGas_Cabin_C_GetSkirmish_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SP_Day1_DeliverGas_Cabin.QtnGoal_SP_Day1_DeliverGas_Cabin_C.Receive Skirmish Notify
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnSkirmish*                Skirmish_Sending_Event                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Final_skirmish_action                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Action_Tag                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsOnServer_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void UQtnGoal_SP_Day1_DeliverGas_Cabin_C::Receive_Skirmish_Notify(class AQtnSkirmish* Skirmish_Sending_Event, bool Final_skirmish_action, class FName Action_Tag, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsOnServer_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_DeliverGas_Cabin_C", "Receive Skirmish Notify");

	Params::UQtnGoal_SP_Day1_DeliverGas_Cabin_C_Receive_Skirmish_Notify_Params Parms{};

	Parms.Skirmish_Sending_Event = Skirmish_Sending_Event;
	Parms.Final_skirmish_action = Final_skirmish_action;
	Parms.Action_Tag = Action_Tag;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_2 = CallFunc_EqualEqual_NameName_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsOnServer_ReturnValue = CallFunc_IsOnServer_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SP_Day1_DeliverGas_Cabin.QtnGoal_SP_Day1_DeliverGas_Cabin_C.Pick Up Quest Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_GoalPickup_C*            Item_picked_up                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_SP_Day1_DeliverGas_Cabin_C::Pick_Up_Quest_Item(class ABP_GoalPickup_C* Item_picked_up, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_DeliverGas_Cabin_C", "Pick Up Quest Item");

	Params::UQtnGoal_SP_Day1_DeliverGas_Cabin_C_Pick_Up_Quest_Item_Params Parms{};

	Parms.Item_picked_up = Item_picked_up;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SP_Day1_DeliverGas_Cabin.QtnGoal_SP_Day1_DeliverGas_Cabin_C.OnGoalStart
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               WillEndImmediatelyFromLateJoin                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_SP_Day1_DeliverGas_Cabin_C::OnGoalStart(bool WillEndImmediatelyFromLateJoin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_DeliverGas_Cabin_C", "OnGoalStart");

	Params::UQtnGoal_SP_Day1_DeliverGas_Cabin_C_OnGoalStart_Params Parms{};

	Parms.WillEndImmediatelyFromLateJoin = WillEndImmediatelyFromLateJoin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SP_Day1_DeliverGas_Cabin.QtnGoal_SP_Day1_DeliverGas_Cabin_C.bindSkirmishSpawnEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_SP_Day1_DeliverGas_Cabin_C::bindSkirmishSpawnEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_DeliverGas_Cabin_C", "bindSkirmishSpawnEvents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_SP_Day1_DeliverGas_Cabin.QtnGoal_SP_Day1_DeliverGas_Cabin_C.OnSkirmishSpawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnSkirmish*                Skirmish                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    SkirmishPawn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoal_SP_Day1_DeliverGas_Cabin_C::OnSkirmishSpawn(class AQtnSkirmish* Skirmish, class AQtnPawn* SkirmishPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_DeliverGas_Cabin_C", "OnSkirmishSpawn");

	Params::UQtnGoal_SP_Day1_DeliverGas_Cabin_C_OnSkirmishSpawn_Params Parms{};

	Parms.Skirmish = Skirmish;
	Parms.SkirmishPawn = SkirmishPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SP_Day1_DeliverGas_Cabin.QtnGoal_SP_Day1_DeliverGas_Cabin_C.GasCarrierAIDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DeadAI                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoal_SP_Day1_DeliverGas_Cabin_C::GasCarrierAIDeath(class AActor* DeadAI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_DeliverGas_Cabin_C", "GasCarrierAIDeath");

	Params::UQtnGoal_SP_Day1_DeliverGas_Cabin_C_GasCarrierAIDeath_Params Parms{};

	Parms.DeadAI = DeadAI;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SP_Day1_DeliverGas_Cabin.QtnGoal_SP_Day1_DeliverGas_Cabin_C.Players arrived
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_SP_Day1_DeliverGas_Cabin_C::Players_arrived()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_DeliverGas_Cabin_C", "Players arrived");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_SP_Day1_DeliverGas_Cabin.QtnGoal_SP_Day1_DeliverGas_Cabin_C.bindPlayerArrival
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_SP_Day1_DeliverGas_Cabin_C::bindPlayerArrival()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_DeliverGas_Cabin_C", "bindPlayerArrival");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_SP_Day1_DeliverGas_Cabin.QtnGoal_SP_Day1_DeliverGas_Cabin_C.ExecuteUbergraph_QtnGoal_SP_Day1_DeliverGas_Cabin
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOnServer_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnSkirmish*                K2Node_CustomEvent_Skirmish                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    K2Node_CustomEvent_skirmishPawn                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOnServer_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnAI_C*               K2Node_DynamicCast_AsBody_Pawn_AI                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_isThisAIAnEncroacher_is_encroacher                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_willEndImmediatelyFromLateJoin                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_CustomEvent_deadAI                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOnServer_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_SP_Day1_DeliverGas_Cabin_C::ExecuteUbergraph_QtnGoal_SP_Day1_DeliverGas_Cabin(int32 EntryPoint, bool CallFunc_IsOnServer_ReturnValue, class AQtnSkirmish* K2Node_CustomEvent_Skirmish, class AQtnPawn* K2Node_CustomEvent_skirmishPawn, bool CallFunc_IsOnServer_ReturnValue_1, class ABodyPawnAI_C* K2Node_DynamicCast_AsBody_Pawn_AI, bool K2Node_DynamicCast_bSuccess, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool CallFunc_isThisAIAnEncroacher_is_encroacher, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_Event_willEndImmediatelyFromLateJoin, bool CallFunc_IsValid_ReturnValue, class AActor* K2Node_CustomEvent_deadAI, bool CallFunc_IsOnServer_ReturnValue_2, bool CallFunc_IsServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsServer_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_DeliverGas_Cabin_C", "ExecuteUbergraph_QtnGoal_SP_Day1_DeliverGas_Cabin");

	Params::UQtnGoal_SP_Day1_DeliverGas_Cabin_C_ExecuteUbergraph_QtnGoal_SP_Day1_DeliverGas_Cabin_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsOnServer_ReturnValue = CallFunc_IsOnServer_ReturnValue;
	Parms.K2Node_CustomEvent_Skirmish = K2Node_CustomEvent_Skirmish;
	Parms.K2Node_CustomEvent_skirmishPawn = K2Node_CustomEvent_skirmishPawn;
	Parms.CallFunc_IsOnServer_ReturnValue_1 = CallFunc_IsOnServer_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBody_Pawn_AI = K2Node_DynamicCast_AsBody_Pawn_AI;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsObjectOfType_outputPin = CallFunc_IsObjectOfType_outputPin;
	Parms.CallFunc_isThisAIAnEncroacher_is_encroacher = CallFunc_isThisAIAnEncroacher_is_encroacher;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Event_willEndImmediatelyFromLateJoin = K2Node_Event_willEndImmediatelyFromLateJoin;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_deadAI = K2Node_CustomEvent_deadAI;
	Parms.CallFunc_IsOnServer_ReturnValue_2 = CallFunc_IsOnServer_ReturnValue_2;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


