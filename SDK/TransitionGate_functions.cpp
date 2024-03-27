#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TransitionGate.TransitionGate_C
// (Actor)

class UClass* ATransitionGate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TransitionGate_C");

	return Clss;
}


// TransitionGate_C TransitionGate.Default__TransitionGate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATransitionGate_C* ATransitionGate_C::GetDefaultObj()
{
	static class ATransitionGate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATransitionGate_C*>(ATransitionGate_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TransitionGate.TransitionGate_C.OnRep_open
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATransitionGate_C::OnRep_open()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TransitionGate_C", "OnRep_open");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TransitionGate.TransitionGate_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ATransitionGate_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TransitionGate_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TransitionGate.TransitionGate_C.MeltDrift
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATransitionGate_C::MeltDrift()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TransitionGate_C", "MeltDrift");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TransitionGate.TransitionGate_C.CloseDrift
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Arena_Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADirector_C*                 Director_Sending_Event                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATransitionGate_C::CloseDrift(int32 Arena_Index, class ADirector_C* Director_Sending_Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TransitionGate_C", "CloseDrift");

	Params::ATransitionGate_C_CloseDrift_Params Parms{};

	Parms.Arena_Index = Arena_Index;
	Parms.Director_Sending_Event = Director_Sending_Event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TransitionGate.TransitionGate_C.freezeDriftVisuals
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATransitionGate_C::FreezeDriftVisuals()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TransitionGate_C", "freezeDriftVisuals");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TransitionGate.TransitionGate_C.server_setUpDirectors
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATransitionGate_C::Server_setUpDirectors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TransitionGate_C", "server_setUpDirectors");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TransitionGate.TransitionGate_C.meltDriftVisuals
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATransitionGate_C::MeltDriftVisuals()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TransitionGate_C", "meltDriftVisuals");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TransitionGate.TransitionGate_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATransitionGate_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TransitionGate_C", "ReceiveTick");

	Params::ATransitionGate_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TransitionGate.TransitionGate_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ATransitionGate_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TransitionGate_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TransitionGate.TransitionGate_C.ExecuteUbergraph_TransitionGate
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsReadyForGameplay_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Arena_Index                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADirector_C*                 K2Node_CustomEvent_Director_Sending_Event                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentScale_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)

void ATransitionGate_C::ExecuteUbergraph_TransitionGate(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, bool CallFunc_IsReadyForGameplay_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, int32 K2Node_CustomEvent_Arena_Index, class ADirector_C* K2Node_CustomEvent_Director_Sending_Event, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, float K2Node_Event_DeltaSeconds, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TransitionGate_C", "ExecuteUbergraph_TransitionGate");

	Params::ATransitionGate_C_ExecuteUbergraph_TransitionGate_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.CallFunc_IsReadyForGameplay_ReturnValue = CallFunc_IsReadyForGameplay_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_CustomEvent_Arena_Index = K2Node_CustomEvent_Arena_Index;
	Parms.K2Node_CustomEvent_Director_Sending_Event = K2Node_CustomEvent_Director_Sending_Event;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_GetComponentScale_ReturnValue = CallFunc_K2_GetComponentScale_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_IsServer_ReturnValue_2 = CallFunc_IsServer_ReturnValue_2;
	Parms.CallFunc_IsServer_ReturnValue_3 = CallFunc_IsServer_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


