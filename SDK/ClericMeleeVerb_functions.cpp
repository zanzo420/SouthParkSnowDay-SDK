#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ClericMeleeVerb.ClericMeleeVerb_C
// (None)

class UClass* UClericMeleeVerb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClericMeleeVerb_C");

	return Clss;
}


// ClericMeleeVerb_C ClericMeleeVerb.Default__ClericMeleeVerb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UClericMeleeVerb_C* UClericMeleeVerb_C::GetDefaultObj()
{
	static class UClericMeleeVerb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UClericMeleeVerb_C*>(UClericMeleeVerb_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ClericMeleeVerb.ClericMeleeVerb_C.CanVerbStart
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     PotentialTarget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanVerbStart_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnBase_C*             K2Node_DynamicCast_AsBody_Pawn_Base                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsTouchingGround_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetHealthRatio_healthRatio                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UClericMeleeVerb_C::CanVerbStart(class UObject* PotentialTarget, bool CallFunc_CanVerbStart_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsTouchingGround_ReturnValue, float CallFunc_GetHealthRatio_healthRatio, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClericMeleeVerb_C", "CanVerbStart");

	Params::UClericMeleeVerb_C_CanVerbStart_Params Parms{};

	Parms.PotentialTarget = PotentialTarget;
	Parms.CallFunc_CanVerbStart_ReturnValue = CallFunc_CanVerbStart_ReturnValue;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue = CallFunc_GetOwningBodyPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Base = K2Node_DynamicCast_AsBody_Pawn_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsTouchingGround_ReturnValue = CallFunc_IsTouchingGround_ReturnValue;
	Parms.CallFunc_GetHealthRatio_healthRatio = CallFunc_GetHealthRatio_healthRatio;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ClericMeleeVerb.ClericMeleeVerb_C.OnVerbStop
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EQtnStopReason          StopReason                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UClericMeleeVerb_C::OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClericMeleeVerb_C", "OnVerbStop");

	Params::UClericMeleeVerb_C_OnVerbStop_Params Parms{};

	Parms.StopReason = StopReason;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ClericMeleeVerb.ClericMeleeVerb_C.ExecuteUbergraph_ClericMeleeVerb
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnStopReason          K2Node_Event_stopReason                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isServer                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UClericMeleeVerb_C::ExecuteUbergraph_ClericMeleeVerb(int32 EntryPoint, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClericMeleeVerb_C", "ExecuteUbergraph_ClericMeleeVerb");

	Params::UClericMeleeVerb_C_ExecuteUbergraph_ClericMeleeVerb_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_stopReason = K2Node_Event_stopReason;
	Parms.K2Node_Event_isServer = K2Node_Event_isServer;

	UObject::ProcessEvent(Func, &Parms);

}

}


