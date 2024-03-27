#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyDamageReactionFrozen.BodyDamageReactionFrozen_C
// (None)

class UClass* UBodyDamageReactionFrozen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyDamageReactionFrozen_C");

	return Clss;
}


// BodyDamageReactionFrozen_C BodyDamageReactionFrozen.Default__BodyDamageReactionFrozen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBodyDamageReactionFrozen_C* UBodyDamageReactionFrozen_C::GetDefaultObj()
{
	static class UBodyDamageReactionFrozen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBodyDamageReactionFrozen_C*>(UBodyDamageReactionFrozen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BodyDamageReactionFrozen.BodyDamageReactionFrozen_C.HandleOtherDamage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnDamageInfo              OtherDamageInfo                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FQtnHitReactionInfo         OtherReactInfo                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               AllowNewReaction                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBodyDamageReactionFrozen_C::HandleOtherDamage(struct FQtnDamageInfo& OtherDamageInfo, struct FQtnHitReactionInfo& OtherReactInfo, bool* AllowNewReaction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReactionFrozen_C", "HandleOtherDamage");

	Params::UBodyDamageReactionFrozen_C_HandleOtherDamage_Params Parms{};

	Parms.OtherDamageInfo = OtherDamageInfo;
	Parms.OtherReactInfo = OtherReactInfo;

	UObject::ProcessEvent(Func, &Parms);

	if (AllowNewReaction != nullptr)
		*AllowNewReaction = Parms.AllowNewReaction;

}


// Function BodyDamageReactionFrozen.BodyDamageReactionFrozen_C.IsReactionFinished
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBodyDamageReactionFrozen_C::IsReactionFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReactionFrozen_C", "IsReactionFinished");

	Params::UBodyDamageReactionFrozen_C_IsReactionFinished_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BodyDamageReactionFrozen.BodyDamageReactionFrozen_C.OnEnterReaction
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBodyDamageReactionFrozen_C::OnEnterReaction(bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReactionFrozen_C", "OnEnterReaction");

	Params::UBodyDamageReactionFrozen_C_OnEnterReaction_Params Parms{};

	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyDamageReactionFrozen.BodyDamageReactionFrozen_C.OnTickReaction
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBodyDamageReactionFrozen_C::OnTickReaction(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReactionFrozen_C", "OnTickReaction");

	Params::UBodyDamageReactionFrozen_C_OnTickReaction_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyDamageReactionFrozen.BodyDamageReactionFrozen_C.OnReactionMontageDone
// (Event, Public, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Interrupted                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBodyDamageReactionFrozen_C::OnReactionMontageDone(class UAnimMontage* Montage, bool Interrupted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReactionFrozen_C", "OnReactionMontageDone");

	Params::UBodyDamageReactionFrozen_C_OnReactionMontageDone_Params Parms{};

	Parms.Montage = Montage;
	Parms.Interrupted = Interrupted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyDamageReactionFrozen.BodyDamageReactionFrozen_C.ExecuteUbergraph_BodyDamageReactionFrozen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isServer                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    CallFunc_GetVictimPawn_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnFullBodyStateHitReaction*CallFunc_GetOwningHitReaction_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasStatusEffect_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_PlayReactionMontage_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_Event_montage                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_interrupted                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPawn*                    CallFunc_GetVictimPawn_ReturnValue_1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnFullBodyStateHitReaction*CallFunc_GetOwningHitReaction_ReturnValue_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnAI_AdultBase_C*     K2Node_DynamicCast_AsBody_Pawn_AI_Adult_Base                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_PlayReactionMontage_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBodyDamageReactionFrozen_C::ExecuteUbergraph_BodyDamageReactionFrozen(int32 EntryPoint, bool K2Node_Event_isServer, float K2Node_Event_DeltaSeconds, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue, bool CallFunc_HasStatusEffect_ReturnValue, float CallFunc_PlayReactionMontage_ReturnValue, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_interrupted, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue_1, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue_1, class ABodyPawnAI_AdultBase_C* K2Node_DynamicCast_AsBody_Pawn_AI_Adult_Base, bool K2Node_DynamicCast_bSuccess, float CallFunc_PlayReactionMontage_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReactionFrozen_C", "ExecuteUbergraph_BodyDamageReactionFrozen");

	Params::UBodyDamageReactionFrozen_C_ExecuteUbergraph_BodyDamageReactionFrozen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_isServer = K2Node_Event_isServer;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetVictimPawn_ReturnValue = CallFunc_GetVictimPawn_ReturnValue;
	Parms.CallFunc_GetDamageReceptor_ReturnValue = CallFunc_GetDamageReceptor_ReturnValue;
	Parms.CallFunc_GetOwningHitReaction_ReturnValue = CallFunc_GetOwningHitReaction_ReturnValue;
	Parms.CallFunc_HasStatusEffect_ReturnValue = CallFunc_HasStatusEffect_ReturnValue;
	Parms.CallFunc_PlayReactionMontage_ReturnValue = CallFunc_PlayReactionMontage_ReturnValue;
	Parms.K2Node_Event_montage = K2Node_Event_montage;
	Parms.K2Node_Event_interrupted = K2Node_Event_interrupted;
	Parms.CallFunc_GetVictimPawn_ReturnValue_1 = CallFunc_GetVictimPawn_ReturnValue_1;
	Parms.CallFunc_GetOwningHitReaction_ReturnValue_1 = CallFunc_GetOwningHitReaction_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBody_Pawn_AI_Adult_Base = K2Node_DynamicCast_AsBody_Pawn_AI_Adult_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_PlayReactionMontage_ReturnValue_1 = CallFunc_PlayReactionMontage_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


