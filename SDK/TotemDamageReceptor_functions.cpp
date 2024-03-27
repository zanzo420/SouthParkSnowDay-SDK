#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TotemDamageReceptor.TotemDamageReceptor_C
// (None)

class UClass* UTotemDamageReceptor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TotemDamageReceptor_C");

	return Clss;
}


// TotemDamageReceptor_C TotemDamageReceptor.Default__TotemDamageReceptor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTotemDamageReceptor_C* UTotemDamageReceptor_C::GetDefaultObj()
{
	static class UTotemDamageReceptor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTotemDamageReceptor_C*>(UTotemDamageReceptor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TotemDamageReceptor.TotemDamageReceptor_C.ShouldAttractAimAssist
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AQtnPawn*                    AttackingPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FromCollateralDamage                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanHarmThisTotem_canHarm                                (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UTotemDamageReceptor_C::ShouldAttractAimAssist(class AQtnPawn* AttackingPawn, bool FromCollateralDamage, bool CallFunc_CanHarmThisTotem_canHarm)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TotemDamageReceptor_C", "ShouldAttractAimAssist");

	Params::UTotemDamageReceptor_C_ShouldAttractAimAssist_Params Parms{};

	Parms.AttackingPawn = AttackingPawn;
	Parms.FromCollateralDamage = FromCollateralDamage;
	Parms.CallFunc_CanHarmThisTotem_canHarm = CallFunc_CanHarmThisTotem_canHarm;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TotemDamageReceptor.TotemDamageReceptor_C.CanHarmThisTotem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AQtnPawn*                    Culprit                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CanHarm                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAlly_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTotemDamageReceptor_C::CanHarmThisTotem(class AQtnPawn*& Culprit, bool* CanHarm, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsAlly_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TotemDamageReceptor_C", "CanHarmThisTotem");

	Params::UTotemDamageReceptor_C_CanHarmThisTotem_Params Parms{};

	Parms.Culprit = Culprit;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsAlly_ReturnValue = CallFunc_IsAlly_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CanHarm != nullptr)
		*CanHarm = Parms.CanHarm;

}


// Function TotemDamageReceptor.TotemDamageReceptor_C.PreProcessIncomingDamage
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnDamageInfo              IncomingDamageInfo                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FQtnHitReactionInfo         DamageSuggestedHitReact                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FQtnDamageInfo              OutgoingDamageInfo                                               (Parm, OutParm, ContainsInstancedReference)
// struct FQtnHitReactionInfo         ActualHitReact                                                   (Parm, OutParm)
// TScriptInterface<class IQtnAttributeContainerInterface>K2Node_DynamicCast_AsQtn_Attribute_Container_Interface           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanHarmThisTotem_canHarm                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTotemDamageReceptor_C::PreProcessIncomingDamage(struct FQtnDamageInfo& IncomingDamageInfo, struct FQtnHitReactionInfo& DamageSuggestedHitReact, struct FQtnDamageInfo* OutgoingDamageInfo, struct FQtnHitReactionInfo* ActualHitReact, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanHarmThisTotem_canHarm, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TotemDamageReceptor_C", "PreProcessIncomingDamage");

	Params::UTotemDamageReceptor_C_PreProcessIncomingDamage_Params Parms{};

	Parms.IncomingDamageInfo = IncomingDamageInfo;
	Parms.DamageSuggestedHitReact = DamageSuggestedHitReact;
	Parms.K2Node_DynamicCast_AsQtn_Attribute_Container_Interface = K2Node_DynamicCast_AsQtn_Attribute_Container_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CanHarmThisTotem_canHarm = CallFunc_CanHarmThisTotem_canHarm;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutgoingDamageInfo != nullptr)
		*OutgoingDamageInfo = std::move(Parms.OutgoingDamageInfo);

	if (ActualHitReact != nullptr)
		*ActualHitReact = std::move(Parms.ActualHitReact);

}


// Function TotemDamageReceptor.TotemDamageReceptor_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UTotemDamageReceptor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TotemDamageReceptor_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TotemDamageReceptor.TotemDamageReceptor_C.ExecuteUbergraph_TotemDamageReceptor
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATotemBase_C*                K2Node_DynamicCast_AsTotem_Base                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTotemDamageReceptor_C::ExecuteUbergraph_TotemDamageReceptor(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class ATotemBase_C* K2Node_DynamicCast_AsTotem_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TotemDamageReceptor_C", "ExecuteUbergraph_TotemDamageReceptor");

	Params::UTotemDamageReceptor_C_ExecuteUbergraph_TotemDamageReceptor_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsTotem_Base = K2Node_DynamicCast_AsTotem_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


