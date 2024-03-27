#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnEmote_CartmanChurchChaseBored.QtnEmote_CartmanChurchChaseBored_C
// (None)

class UClass* UQtnEmote_CartmanChurchChaseBored_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnEmote_CartmanChurchChaseBored_C");

	return Clss;
}


// QtnEmote_CartmanChurchChaseBored_C QtnEmote_CartmanChurchChaseBored.Default__QtnEmote_CartmanChurchChaseBored_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnEmote_CartmanChurchChaseBored_C* UQtnEmote_CartmanChurchChaseBored_C::GetDefaultObj()
{
	static class UQtnEmote_CartmanChurchChaseBored_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnEmote_CartmanChurchChaseBored_C*>(UQtnEmote_CartmanChurchChaseBored_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QtnEmote_CartmanChurchChaseBored.QtnEmote_CartmanChurchChaseBored_C.OnVerbInit
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnEmote_CartmanChurchChaseBored_C::OnVerbInit(bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnEmote_CartmanChurchChaseBored_C", "OnVerbInit");

	Params::UQtnEmote_CartmanChurchChaseBored_C_OnVerbInit_Params Parms{};

	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnEmote_CartmanChurchChaseBored.QtnEmote_CartmanChurchChaseBored_C.OnVerbStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class UObject*                     IntendedTarget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnEmote_CartmanChurchChaseBored_C::OnVerbStart(class UObject* IntendedTarget, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnEmote_CartmanChurchChaseBored_C", "OnVerbStart");

	Params::UQtnEmote_CartmanChurchChaseBored_C_OnVerbStart_Params Parms{};

	Parms.IntendedTarget = IntendedTarget;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnEmote_CartmanChurchChaseBored.QtnEmote_CartmanChurchChaseBored_C.OnVerbStop
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EQtnStopReason          StopReason                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnEmote_CartmanChurchChaseBored_C::OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnEmote_CartmanChurchChaseBored_C", "OnVerbStop");

	Params::UQtnEmote_CartmanChurchChaseBored_C_OnVerbStop_Params Parms{};

	Parms.StopReason = StopReason;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnEmote_CartmanChurchChaseBored.QtnEmote_CartmanChurchChaseBored_C.ExecuteUbergraph_QtnEmote_CartmanChurchChaseBored
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isServer_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawn_Cartman_ChurchChase_C*K2Node_DynamicCast_AsBody_Pawn_Cartman_Church_Chase              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_Event_intendedTarget                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isServer_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnStopReason          K2Node_Event_stopReason                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isServer                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnEmote_CartmanChurchChaseBored_C::ExecuteUbergraph_QtnEmote_CartmanChurchChaseBored(int32 EntryPoint, bool K2Node_Event_isServer_2, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class ABodyPawn_Cartman_ChurchChase_C* K2Node_DynamicCast_AsBody_Pawn_Cartman_Church_Chase, bool K2Node_DynamicCast_bSuccess, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer_1, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnEmote_CartmanChurchChaseBored_C", "ExecuteUbergraph_QtnEmote_CartmanChurchChaseBored");

	Params::UQtnEmote_CartmanChurchChaseBored_C_ExecuteUbergraph_QtnEmote_CartmanChurchChaseBored_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_isServer_2 = K2Node_Event_isServer_2;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue = CallFunc_GetOwningBodyPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Cartman_Church_Chase = K2Node_DynamicCast_AsBody_Pawn_Cartman_Church_Chase;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_intendedTarget = K2Node_Event_intendedTarget;
	Parms.K2Node_Event_isServer_1 = K2Node_Event_isServer_1;
	Parms.K2Node_Event_stopReason = K2Node_Event_stopReason;
	Parms.K2Node_Event_isServer = K2Node_Event_isServer;

	UObject::ProcessEvent(Func, &Parms);

}

}


