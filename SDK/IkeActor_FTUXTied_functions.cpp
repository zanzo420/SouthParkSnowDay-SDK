#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IkeActor_FTUXTied.IkeActor_FTUXTied_C
// (Actor)

class UClass* AIkeActor_FTUXTied_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IkeActor_FTUXTied_C");

	return Clss;
}


// IkeActor_FTUXTied_C IkeActor_FTUXTied.Default__IkeActor_FTUXTied_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AIkeActor_FTUXTied_C* AIkeActor_FTUXTied_C::GetDefaultObj()
{
	static class AIkeActor_FTUXTied_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AIkeActor_FTUXTied_C*>(AIkeActor_FTUXTied_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IkeActor_FTUXTied.IkeActor_FTUXTied_C.BndEvt__IkeActor_FTUXTied_DamageReceptorSmashable_K2Node_ComponentBoundEvent_0_QtnIncomingDamageEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UQtnDamageReceptorComponent* DamagedReceptor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnDamageInfo              DamageInfo                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FQtnHitReactionInfo         HitReactionInfo                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               IsServer                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AIkeActor_FTUXTied_C::BndEvt__IkeActor_FTUXTied_DamageReceptorSmashable_K2Node_ComponentBoundEvent_0_QtnIncomingDamageEvent__DelegateSignature(class UQtnDamageReceptorComponent* DamagedReceptor, struct FQtnDamageInfo& DamageInfo, struct FQtnHitReactionInfo& HitReactionInfo, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IkeActor_FTUXTied_C", "BndEvt__IkeActor_FTUXTied_DamageReceptorSmashable_K2Node_ComponentBoundEvent_0_QtnIncomingDamageEvent__DelegateSignature");

	Params::AIkeActor_FTUXTied_C_BndEvt__IkeActor_FTUXTied_DamageReceptorSmashable_K2Node_ComponentBoundEvent_0_QtnIncomingDamageEvent__DelegateSignature_Params Parms{};

	Parms.DamagedReceptor = DamagedReceptor;
	Parms.DamageInfo = DamageInfo;
	Parms.HitReactionInfo = HitReactionInfo;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IkeActor_FTUXTied.IkeActor_FTUXTied_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AIkeActor_FTUXTied_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IkeActor_FTUXTied_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IkeActor_FTUXTied.IkeActor_FTUXTied_C.BndEvt__IkeActor_FTUXTied_DamageReceptorSmashable_K2Node_ComponentBoundEvent_1_QtnIncomingTootFartEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// struct FQtnDamageInfo              DamageInfo                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               IsServer                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AIkeActor_FTUXTied_C::BndEvt__IkeActor_FTUXTied_DamageReceptorSmashable_K2Node_ComponentBoundEvent_1_QtnIncomingTootFartEvent__DelegateSignature(struct FQtnDamageInfo& DamageInfo, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IkeActor_FTUXTied_C", "BndEvt__IkeActor_FTUXTied_DamageReceptorSmashable_K2Node_ComponentBoundEvent_1_QtnIncomingTootFartEvent__DelegateSignature");

	Params::AIkeActor_FTUXTied_C_BndEvt__IkeActor_FTUXTied_DamageReceptorSmashable_K2Node_ComponentBoundEvent_1_QtnIncomingTootFartEvent__DelegateSignature_Params Parms{};

	Parms.DamageInfo = DamageInfo;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IkeActor_FTUXTied.IkeActor_FTUXTied_C.ExecuteUbergraph_IkeActor_FTUXTied
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnDamageInfo              K2Node_ComponentBoundEvent_damageInfo                            (ConstParm, ContainsInstancedReference)
// bool                               K2Node_ComponentBoundEvent_isServer                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnDamageReceptorComponent* K2Node_ComponentBoundEvent_damagedReceptor                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnDamageInfo              K2Node_ComponentBoundEvent_damageInfo_1                          (ConstParm, ContainsInstancedReference)
// struct FQtnHitReactionInfo         K2Node_ComponentBoundEvent_hitReactionInfo                       (ConstParm)
// bool                               K2Node_ComponentBoundEvent_isServer_1                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIkeRopes_RIG_Skeleton_AnimBlueprint_C*K2Node_DynamicCast_AsIke_Ropes_RIG_Skeleton_Anim_Blueprint       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void AIkeActor_FTUXTied_C::ExecuteUbergraph_IkeActor_FTUXTied(int32 EntryPoint, const struct FQtnDamageInfo& K2Node_ComponentBoundEvent_damageInfo, bool K2Node_ComponentBoundEvent_isServer, class UQtnDamageReceptorComponent* K2Node_ComponentBoundEvent_damagedReceptor, const struct FQtnDamageInfo& K2Node_ComponentBoundEvent_damageInfo_1, const struct FQtnHitReactionInfo& K2Node_ComponentBoundEvent_hitReactionInfo, bool K2Node_ComponentBoundEvent_isServer_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UIkeRopes_RIG_Skeleton_AnimBlueprint_C* K2Node_DynamicCast_AsIke_Ropes_RIG_Skeleton_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ClassClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IkeActor_FTUXTied_C", "ExecuteUbergraph_IkeActor_FTUXTied");

	Params::AIkeActor_FTUXTied_C_ExecuteUbergraph_IkeActor_FTUXTied_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_damageInfo = K2Node_ComponentBoundEvent_damageInfo;
	Parms.K2Node_ComponentBoundEvent_isServer = K2Node_ComponentBoundEvent_isServer;
	Parms.K2Node_ComponentBoundEvent_damagedReceptor = K2Node_ComponentBoundEvent_damagedReceptor;
	Parms.K2Node_ComponentBoundEvent_damageInfo_1 = K2Node_ComponentBoundEvent_damageInfo_1;
	Parms.K2Node_ComponentBoundEvent_hitReactionInfo = K2Node_ComponentBoundEvent_hitReactionInfo;
	Parms.K2Node_ComponentBoundEvent_isServer_1 = K2Node_ComponentBoundEvent_isServer_1;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsIke_Ropes_RIG_Skeleton_Anim_Blueprint = K2Node_DynamicCast_AsIke_Ropes_RIG_Skeleton_Anim_Blueprint;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IkeActor_FTUXTied.IkeActor_FTUXTied_C.IkeFartedOn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AIkeActor_FTUXTied_C::IkeFartedOn__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IkeActor_FTUXTied_C", "IkeFartedOn__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


