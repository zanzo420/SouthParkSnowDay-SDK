#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FullBodyHitReaction.FullBodyHitReaction_C
// (None)

class UClass* UFullBodyHitReaction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FullBodyHitReaction_C");

	return Clss;
}


// FullBodyHitReaction_C FullBodyHitReaction.Default__FullBodyHitReaction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFullBodyHitReaction_C* UFullBodyHitReaction_C::GetDefaultObj()
{
	static class UFullBodyHitReaction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFullBodyHitReaction_C*>(UFullBodyHitReaction_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FullBodyHitReaction.FullBodyHitReaction_C.HandleDamageReceived
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnDamageInfo              DamageInfo                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FQtnHitReactionInfo         HitReactInfo                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UFullBodyHitReaction_C::HandleDamageReceived(struct FQtnDamageInfo& DamageInfo, struct FQtnHitReactionInfo& HitReactInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FullBodyHitReaction_C", "HandleDamageReceived");

	Params::UFullBodyHitReaction_C_HandleDamageReceived_Params Parms{};

	Parms.DamageInfo = DamageInfo;
	Parms.HitReactInfo = HitReactInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullBodyHitReaction.FullBodyHitReaction_C.OnAnimWindowBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class UQtnAnimWindow*              AnimWindow                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TotalDuration                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFullBodyHitReaction_C::OnAnimWindowBegin(class UQtnAnimWindow* AnimWindow, float TotalDuration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FullBodyHitReaction_C", "OnAnimWindowBegin");

	Params::UFullBodyHitReaction_C_OnAnimWindowBegin_Params Parms{};

	Parms.AnimWindow = AnimWindow;
	Parms.TotalDuration = TotalDuration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullBodyHitReaction.FullBodyHitReaction_C.OnAnimWindowEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// class UQtnAnimWindow*              AnimWindow                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Interrupted                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFullBodyHitReaction_C::OnAnimWindowEnd(class UQtnAnimWindow* AnimWindow, bool Interrupted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FullBodyHitReaction_C", "OnAnimWindowEnd");

	Params::UFullBodyHitReaction_C_OnAnimWindowEnd_Params Parms{};

	Parms.AnimWindow = AnimWindow;
	Parms.Interrupted = Interrupted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullBodyHitReaction.FullBodyHitReaction_C.OnEnterBodyState
// (Event, Public, BlueprintEvent)
// Parameters:
// class UQtnBodyState*               PreviousBodyState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFullBodyHitReaction_C::OnEnterBodyState(class UQtnBodyState* PreviousBodyState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FullBodyHitReaction_C", "OnEnterBodyState");

	Params::UFullBodyHitReaction_C_OnEnterBodyState_Params Parms{};

	Parms.PreviousBodyState = PreviousBodyState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullBodyHitReaction.FullBodyHitReaction_C.OnTickBodyState
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFullBodyHitReaction_C::OnTickBodyState(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FullBodyHitReaction_C", "OnTickBodyState");

	Params::UFullBodyHitReaction_C_OnTickBodyState_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullBodyHitReaction.FullBodyHitReaction_C.ExecuteUbergraph_FullBodyHitReaction
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOwningPawn_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTouchingGround_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnDamageInfo              K2Node_Event_DamageInfo                                          (ConstParm, ContainsInstancedReference)
// struct FQtnHitReactionInfo         K2Node_Event_hitReactInfo                                        (ConstParm)
// class UQtnAnimWindow*              K2Node_Event_animWindow_1                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_totalDuration                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnAnimWindow*              K2Node_Event_animWindow                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_interrupted                                         (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnAnimWindowInput*         K2Node_DynamicCast_AsQtn_Anim_Window_Input                       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnAnimWindowInput*         K2Node_DynamicCast_AsQtn_Anim_Window_Input_1                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnBodyState*               K2Node_Event_previousBodyState                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFullBodyHitReaction_C::ExecuteUbergraph_FullBodyHitReaction(int32 EntryPoint, class AQtnBodyPawn* CallFunc_GetOwningPawn_ReturnValue, bool CallFunc_IsTouchingGround_ReturnValue, const struct FQtnDamageInfo& K2Node_Event_DamageInfo, const struct FQtnHitReactionInfo& K2Node_Event_hitReactInfo, class UQtnAnimWindow* K2Node_Event_animWindow_1, float K2Node_Event_totalDuration, class UQtnAnimWindow* K2Node_Event_animWindow, bool K2Node_Event_interrupted, class UQtnAnimWindowInput* K2Node_DynamicCast_AsQtn_Anim_Window_Input, bool K2Node_DynamicCast_bSuccess, class UQtnAnimWindowInput* K2Node_DynamicCast_AsQtn_Anim_Window_Input_1, bool K2Node_DynamicCast_bSuccess_1, class UQtnBodyState* K2Node_Event_previousBodyState, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FullBodyHitReaction_C", "ExecuteUbergraph_FullBodyHitReaction");

	Params::UFullBodyHitReaction_C_ExecuteUbergraph_FullBodyHitReaction_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPawn_ReturnValue = CallFunc_GetOwningPawn_ReturnValue;
	Parms.CallFunc_IsTouchingGround_ReturnValue = CallFunc_IsTouchingGround_ReturnValue;
	Parms.K2Node_Event_DamageInfo = K2Node_Event_DamageInfo;
	Parms.K2Node_Event_hitReactInfo = K2Node_Event_hitReactInfo;
	Parms.K2Node_Event_animWindow_1 = K2Node_Event_animWindow_1;
	Parms.K2Node_Event_totalDuration = K2Node_Event_totalDuration;
	Parms.K2Node_Event_animWindow = K2Node_Event_animWindow;
	Parms.K2Node_Event_interrupted = K2Node_Event_interrupted;
	Parms.K2Node_DynamicCast_AsQtn_Anim_Window_Input = K2Node_DynamicCast_AsQtn_Anim_Window_Input;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsQtn_Anim_Window_Input_1 = K2Node_DynamicCast_AsQtn_Anim_Window_Input_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Event_previousBodyState = K2Node_Event_previousBodyState;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


