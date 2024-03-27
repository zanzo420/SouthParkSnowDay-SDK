#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyDamageReaction_Charmed.BodyDamageReaction_Charmed_C
// (None)

class UClass* UBodyDamageReaction_Charmed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyDamageReaction_Charmed_C");

	return Clss;
}


// BodyDamageReaction_Charmed_C BodyDamageReaction_Charmed.Default__BodyDamageReaction_Charmed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBodyDamageReaction_Charmed_C* UBodyDamageReaction_Charmed_C::GetDefaultObj()
{
	static class UBodyDamageReaction_Charmed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBodyDamageReaction_Charmed_C*>(UBodyDamageReaction_Charmed_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BodyDamageReaction_Charmed.BodyDamageReaction_Charmed_C.HandleOtherDamage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnDamageInfo              OtherDamageInfo                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FQtnHitReactionInfo         OtherReactInfo                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               AllowNewReaction                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBodyDamageReaction_Charmed_C::HandleOtherDamage(struct FQtnDamageInfo& OtherDamageInfo, struct FQtnHitReactionInfo& OtherReactInfo, bool* AllowNewReaction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReaction_Charmed_C", "HandleOtherDamage");

	Params::UBodyDamageReaction_Charmed_C_HandleOtherDamage_Params Parms{};

	Parms.OtherDamageInfo = OtherDamageInfo;
	Parms.OtherReactInfo = OtherReactInfo;

	UObject::ProcessEvent(Func, &Parms);

	if (AllowNewReaction != nullptr)
		*AllowNewReaction = Parms.AllowNewReaction;

}


// Function BodyDamageReaction_Charmed.BodyDamageReaction_Charmed_C.IsReactionFinished
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBodyDamageReaction_Charmed_C::IsReactionFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReaction_Charmed_C", "IsReactionFinished");

	Params::UBodyDamageReaction_Charmed_C_IsReactionFinished_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BodyDamageReaction_Charmed.BodyDamageReaction_Charmed_C.OnEnterReaction
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBodyDamageReaction_Charmed_C::OnEnterReaction(bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReaction_Charmed_C", "OnEnterReaction");

	Params::UBodyDamageReaction_Charmed_C_OnEnterReaction_Params Parms{};

	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyDamageReaction_Charmed.BodyDamageReaction_Charmed_C.OnExitReaction
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBodyDamageReaction_Charmed_C::OnExitReaction(bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReaction_Charmed_C", "OnExitReaction");

	Params::UBodyDamageReaction_Charmed_C_OnExitReaction_Params Parms{};

	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyDamageReaction_Charmed.BodyDamageReaction_Charmed_C.OnReactionMontageDone
// (Event, Public, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Interrupted                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBodyDamageReaction_Charmed_C::OnReactionMontageDone(class UAnimMontage* Montage, bool Interrupted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReaction_Charmed_C", "OnReactionMontageDone");

	Params::UBodyDamageReaction_Charmed_C_OnReactionMontageDone_Params Parms{};

	Parms.Montage = Montage;
	Parms.Interrupted = Interrupted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyDamageReaction_Charmed.BodyDamageReaction_Charmed_C.ExecuteUbergraph_BodyDamageReaction_Charmed
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isServer_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_isServer                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnFullBodyStateHitReaction*CallFunc_GetOwningHitReaction_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnPawnMontage             K2Node_MakeStruct_QtnPawnMontage                                 (NoDestructor)
// float                              CallFunc_PlayReactionMontage_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_Event_montage                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_interrupted                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetVictimBody_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetVictimBody_ReturnValue_1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnMovementComponent*       CallFunc_GetQtnMovementComponent_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnMovementComponent*       CallFunc_GetQtnMovementComponent_ReturnValue_1                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBodyDamageReaction_Charmed_C::ExecuteUbergraph_BodyDamageReaction_Charmed(int32 EntryPoint, bool K2Node_Event_isServer_1, bool K2Node_Event_isServer, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage, float CallFunc_PlayReactionMontage_ReturnValue, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_interrupted, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue_1, class UQtnMovementComponent* CallFunc_GetQtnMovementComponent_ReturnValue, class UQtnMovementComponent* CallFunc_GetQtnMovementComponent_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReaction_Charmed_C", "ExecuteUbergraph_BodyDamageReaction_Charmed");

	Params::UBodyDamageReaction_Charmed_C_ExecuteUbergraph_BodyDamageReaction_Charmed_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_isServer_1 = K2Node_Event_isServer_1;
	Parms.K2Node_Event_isServer = K2Node_Event_isServer;
	Parms.CallFunc_GetOwningHitReaction_ReturnValue = CallFunc_GetOwningHitReaction_ReturnValue;
	Parms.K2Node_MakeStruct_QtnPawnMontage = K2Node_MakeStruct_QtnPawnMontage;
	Parms.CallFunc_PlayReactionMontage_ReturnValue = CallFunc_PlayReactionMontage_ReturnValue;
	Parms.K2Node_Event_montage = K2Node_Event_montage;
	Parms.K2Node_Event_interrupted = K2Node_Event_interrupted;
	Parms.CallFunc_GetVictimBody_ReturnValue = CallFunc_GetVictimBody_ReturnValue;
	Parms.CallFunc_GetVictimBody_ReturnValue_1 = CallFunc_GetVictimBody_ReturnValue_1;
	Parms.CallFunc_GetQtnMovementComponent_ReturnValue = CallFunc_GetQtnMovementComponent_ReturnValue;
	Parms.CallFunc_GetQtnMovementComponent_ReturnValue_1 = CallFunc_GetQtnMovementComponent_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


