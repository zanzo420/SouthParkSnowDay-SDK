#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Adult_Brute_Melee.Adult_Brute_Melee_C
// (None)

class UClass* UAdult_Brute_Melee_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Adult_Brute_Melee_C");

	return Clss;
}


// Adult_Brute_Melee_C Adult_Brute_Melee.Default__Adult_Brute_Melee_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAdult_Brute_Melee_C* UAdult_Brute_Melee_C::GetDefaultObj()
{
	static class UAdult_Brute_Melee_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAdult_Brute_Melee_C*>(UAdult_Brute_Melee_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Adult_Brute_Melee.Adult_Brute_Melee_C.IsVerbFinished
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UAdult_Brute_Melee_C::IsVerbFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Adult_Brute_Melee_C", "IsVerbFinished");

	Params::UAdult_Brute_Melee_C_IsVerbFinished_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Adult_Brute_Melee.Adult_Brute_Melee_C.OnVerbStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class UObject*                     IntendedTarget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAdult_Brute_Melee_C::OnVerbStart(class UObject* IntendedTarget, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Adult_Brute_Melee_C", "OnVerbStart");

	Params::UAdult_Brute_Melee_C_OnVerbStart_Params Parms{};

	Parms.IntendedTarget = IntendedTarget;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Adult_Brute_Melee.Adult_Brute_Melee_C.OnMontageBlendingOut
// (Event, Public, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Interrupted                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAdult_Brute_Melee_C::OnMontageBlendingOut(class UAnimMontage* Montage, bool Interrupted, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Adult_Brute_Melee_C", "OnMontageBlendingOut");

	Params::UAdult_Brute_Melee_C_OnMontageBlendingOut_Params Parms{};

	Parms.Montage = Montage;
	Parms.Interrupted = Interrupted;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Adult_Brute_Melee.Adult_Brute_Melee_C.OnMontageEnded
// (Event, Public, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Interrupted                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAdult_Brute_Melee_C::OnMontageEnded(class UAnimMontage* Montage, bool Interrupted, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Adult_Brute_Melee_C", "OnMontageEnded");

	Params::UAdult_Brute_Melee_C_OnMontageEnded_Params Parms{};

	Parms.Montage = Montage;
	Parms.Interrupted = Interrupted;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Adult_Brute_Melee.Adult_Brute_Melee_C.OnVerbStop
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EQtnStopReason          StopReason                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAdult_Brute_Melee_C::OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Adult_Brute_Melee_C", "OnVerbStop");

	Params::UAdult_Brute_Melee_C_OnVerbStop_Params Parms{};

	Parms.StopReason = StopReason;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Adult_Brute_Melee.Adult_Brute_Melee_C.ExecuteUbergraph_Adult_Brute_Melee
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_intendedTarget                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isServer_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UAnimMontage*>        K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// class UAnimMontage*                K2Node_Event_montage_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_interrupted_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_isServer_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*                CallFunc_Array_Random_OutItem                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Random_OutIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_Event_montage                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_interrupted                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_isServer_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnPawnMontage             K2Node_MakeStruct_QtnPawnMontage                                 (NoDestructor)
// float                              CallFunc_StartVerbAction_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnStopReason          K2Node_Event_stopReason                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isServer                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasStatusEffect_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAdult_Brute_Melee_C::ExecuteUbergraph_Adult_Brute_Melee(int32 EntryPoint, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer_3, TArray<class UAnimMontage*>& K2Node_MakeArray_Array, class UAnimMontage* K2Node_Event_montage_1, bool K2Node_Event_interrupted_1, bool K2Node_Event_isServer_2, class UAnimMontage* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_interrupted, bool K2Node_Event_isServer_1, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage, float CallFunc_StartVerbAction_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer, bool CallFunc_HasStatusEffect_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Adult_Brute_Melee_C", "ExecuteUbergraph_Adult_Brute_Melee");

	Params::UAdult_Brute_Melee_C_ExecuteUbergraph_Adult_Brute_Melee_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_intendedTarget = K2Node_Event_intendedTarget;
	Parms.K2Node_Event_isServer_3 = K2Node_Event_isServer_3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_Event_montage_1 = K2Node_Event_montage_1;
	Parms.K2Node_Event_interrupted_1 = K2Node_Event_interrupted_1;
	Parms.K2Node_Event_isServer_2 = K2Node_Event_isServer_2;
	Parms.CallFunc_Array_Random_OutItem = CallFunc_Array_Random_OutItem;
	Parms.CallFunc_Array_Random_OutIndex = CallFunc_Array_Random_OutIndex;
	Parms.K2Node_Event_montage = K2Node_Event_montage;
	Parms.K2Node_Event_interrupted = K2Node_Event_interrupted;
	Parms.K2Node_Event_isServer_1 = K2Node_Event_isServer_1;
	Parms.K2Node_MakeStruct_QtnPawnMontage = K2Node_MakeStruct_QtnPawnMontage;
	Parms.CallFunc_StartVerbAction_ReturnValue = CallFunc_StartVerbAction_ReturnValue;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue = CallFunc_GetOwningBodyPawn_ReturnValue;
	Parms.K2Node_Event_stopReason = K2Node_Event_stopReason;
	Parms.K2Node_Event_isServer = K2Node_Event_isServer;
	Parms.CallFunc_HasStatusEffect_ReturnValue = CallFunc_HasStatusEffect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


