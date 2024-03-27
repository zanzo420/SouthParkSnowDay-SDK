#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyDamageReaction_NecromancerReDying.BodyDamageReaction_NecromancerReDying_C
// (None)

class UClass* UBodyDamageReaction_NecromancerReDying_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyDamageReaction_NecromancerReDying_C");

	return Clss;
}


// BodyDamageReaction_NecromancerReDying_C BodyDamageReaction_NecromancerReDying.Default__BodyDamageReaction_NecromancerReDying_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBodyDamageReaction_NecromancerReDying_C* UBodyDamageReaction_NecromancerReDying_C::GetDefaultObj()
{
	static class UBodyDamageReaction_NecromancerReDying_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBodyDamageReaction_NecromancerReDying_C*>(UBodyDamageReaction_NecromancerReDying_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BodyDamageReaction_NecromancerReDying.BodyDamageReaction_NecromancerReDying_C.HandleOtherDamage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnDamageInfo              OtherDamageInfo                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FQtnHitReactionInfo         OtherReactInfo                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               AllowNewReaction                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBodyDamageReaction_NecromancerReDying_C::HandleOtherDamage(struct FQtnDamageInfo& OtherDamageInfo, struct FQtnHitReactionInfo& OtherReactInfo, bool* AllowNewReaction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReaction_NecromancerReDying_C", "HandleOtherDamage");

	Params::UBodyDamageReaction_NecromancerReDying_C_HandleOtherDamage_Params Parms{};

	Parms.OtherDamageInfo = OtherDamageInfo;
	Parms.OtherReactInfo = OtherReactInfo;

	UObject::ProcessEvent(Func, &Parms);

	if (AllowNewReaction != nullptr)
		*AllowNewReaction = Parms.AllowNewReaction;

}


// Function BodyDamageReaction_NecromancerReDying.BodyDamageReaction_NecromancerReDying_C.IsReactionFinished
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBodyDamageReaction_NecromancerReDying_C::IsReactionFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReaction_NecromancerReDying_C", "IsReactionFinished");

	Params::UBodyDamageReaction_NecromancerReDying_C_IsReactionFinished_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BodyDamageReaction_NecromancerReDying.BodyDamageReaction_NecromancerReDying_C.OnEnterReaction
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBodyDamageReaction_NecromancerReDying_C::OnEnterReaction(bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReaction_NecromancerReDying_C", "OnEnterReaction");

	Params::UBodyDamageReaction_NecromancerReDying_C_OnEnterReaction_Params Parms{};

	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyDamageReaction_NecromancerReDying.BodyDamageReaction_NecromancerReDying_C.OnExitReaction
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBodyDamageReaction_NecromancerReDying_C::OnExitReaction(bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReaction_NecromancerReDying_C", "OnExitReaction");

	Params::UBodyDamageReaction_NecromancerReDying_C_OnExitReaction_Params Parms{};

	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyDamageReaction_NecromancerReDying.BodyDamageReaction_NecromancerReDying_C.OnTickReaction
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBodyDamageReaction_NecromancerReDying_C::OnTickReaction(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReaction_NecromancerReDying_C", "OnTickReaction");

	Params::UBodyDamageReaction_NecromancerReDying_C_OnTickReaction_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyDamageReaction_NecromancerReDying.BodyDamageReaction_NecromancerReDying_C.OnReactionMontageDone
// (Event, Public, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Interrupted                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBodyDamageReaction_NecromancerReDying_C::OnReactionMontageDone(class UAnimMontage* Montage, bool Interrupted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReaction_NecromancerReDying_C", "OnReactionMontageDone");

	Params::UBodyDamageReaction_NecromancerReDying_C_OnReactionMontageDone_Params Parms{};

	Parms.Montage = Montage;
	Parms.Interrupted = Interrupted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyDamageReaction_NecromancerReDying.BodyDamageReaction_NecromancerReDying_C.ExecuteUbergraph_BodyDamageReaction_NecromancerReDying
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isServer_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_isServer                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnFullBodyStateHitReaction*CallFunc_GetOwningHitReaction_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_Event_montage                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_interrupted                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_Array_Random_OutItem                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Random_OutIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnPawnMontage             K2Node_MakeStruct_QtnPawnMontage                                 (NoDestructor)
// float                              CallFunc_PlayReactionMontage_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBodyDamageReaction_NecromancerReDying_C::ExecuteUbergraph_BodyDamageReaction_NecromancerReDying(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, bool K2Node_Event_isServer_1, bool K2Node_Event_isServer, float K2Node_Event_DeltaSeconds, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_interrupted, float CallFunc_RandomFloatInRange_ReturnValue_1, class UAnimMontage* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage, float CallFunc_PlayReactionMontage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReaction_NecromancerReDying_C", "ExecuteUbergraph_BodyDamageReaction_NecromancerReDying");

	Params::UBodyDamageReaction_NecromancerReDying_C_ExecuteUbergraph_BodyDamageReaction_NecromancerReDying_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.K2Node_Event_isServer_1 = K2Node_Event_isServer_1;
	Parms.K2Node_Event_isServer = K2Node_Event_isServer;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetOwningHitReaction_ReturnValue = CallFunc_GetOwningHitReaction_ReturnValue;
	Parms.K2Node_Event_montage = K2Node_Event_montage;
	Parms.K2Node_Event_interrupted = K2Node_Event_interrupted;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_Array_Random_OutItem = CallFunc_Array_Random_OutItem;
	Parms.CallFunc_Array_Random_OutIndex = CallFunc_Array_Random_OutIndex;
	Parms.K2Node_MakeStruct_QtnPawnMontage = K2Node_MakeStruct_QtnPawnMontage;
	Parms.CallFunc_PlayReactionMontage_ReturnValue = CallFunc_PlayReactionMontage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


