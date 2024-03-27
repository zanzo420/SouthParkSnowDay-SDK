#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyPawnAIRangedChaff_FTUX.BodyPawnAIRangedChaff_FTUX_C
// (Actor, Pawn)

class UClass* ABodyPawnAIRangedChaff_FTUX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyPawnAIRangedChaff_FTUX_C");

	return Clss;
}


// BodyPawnAIRangedChaff_FTUX_C BodyPawnAIRangedChaff_FTUX.Default__BodyPawnAIRangedChaff_FTUX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyPawnAIRangedChaff_FTUX_C* ABodyPawnAIRangedChaff_FTUX_C::GetDefaultObj()
{
	static class ABodyPawnAIRangedChaff_FTUX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyPawnAIRangedChaff_FTUX_C*>(ABodyPawnAIRangedChaff_FTUX_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BodyPawnAIRangedChaff_FTUX.BodyPawnAIRangedChaff_FTUX_C.CreateIndicatorData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABodyPawnAIRangedChaff_FTUX_C::CreateIndicatorData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawnAIRangedChaff_FTUX_C", "CreateIndicatorData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BodyPawnAIRangedChaff_FTUX.BodyPawnAIRangedChaff_FTUX_C.GetIndicatorData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIndicatorData              IndicatorData                                                    (Parm, OutParm, HasGetValueTypeHash)

void ABodyPawnAIRangedChaff_FTUX_C::GetIndicatorData(struct FIndicatorData* IndicatorData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawnAIRangedChaff_FTUX_C", "GetIndicatorData");

	Params::ABodyPawnAIRangedChaff_FTUX_C_GetIndicatorData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IndicatorData != nullptr)
		*IndicatorData = std::move(Parms.IndicatorData);

}


// Function BodyPawnAIRangedChaff_FTUX.BodyPawnAIRangedChaff_FTUX_C.CanAcceptEnemyUpgrades
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               Accept                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABodyPawnAIRangedChaff_FTUX_C::CanAcceptEnemyUpgrades(bool* Accept)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawnAIRangedChaff_FTUX_C", "CanAcceptEnemyUpgrades");

	Params::ABodyPawnAIRangedChaff_FTUX_C_CanAcceptEnemyUpgrades_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Accept != nullptr)
		*Accept = Parms.Accept;

}


// Function BodyPawnAIRangedChaff_FTUX.BodyPawnAIRangedChaff_FTUX_C.HandleDeath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABodyPawnAIRangedChaff_FTUX_C::HandleDeath(bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawnAIRangedChaff_FTUX_C", "HandleDeath");

	Params::ABodyPawnAIRangedChaff_FTUX_C_HandleDeath_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyPawnAIRangedChaff_FTUX.BodyPawnAIRangedChaff_FTUX_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABodyPawnAIRangedChaff_FTUX_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawnAIRangedChaff_FTUX_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BodyPawnAIRangedChaff_FTUX.BodyPawnAIRangedChaff_FTUX_C.BndEvt__BodyPawnAIRangedChaff_FTUX_DamageReceptorBodyPawn_K2Node_ComponentBoundEvent_0_QtnIncomingDamageEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UQtnDamageReceptorComponent* DamagedReceptor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnDamageInfo              DamageInfo                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FQtnHitReactionInfo         HitReactionInfo                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               IsServer                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABodyPawnAIRangedChaff_FTUX_C::BndEvt__BodyPawnAIRangedChaff_FTUX_DamageReceptorBodyPawn_K2Node_ComponentBoundEvent_0_QtnIncomingDamageEvent__DelegateSignature(class UQtnDamageReceptorComponent* DamagedReceptor, struct FQtnDamageInfo& DamageInfo, struct FQtnHitReactionInfo& HitReactionInfo, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawnAIRangedChaff_FTUX_C", "BndEvt__BodyPawnAIRangedChaff_FTUX_DamageReceptorBodyPawn_K2Node_ComponentBoundEvent_0_QtnIncomingDamageEvent__DelegateSignature");

	Params::ABodyPawnAIRangedChaff_FTUX_C_BndEvt__BodyPawnAIRangedChaff_FTUX_DamageReceptorBodyPawn_K2Node_ComponentBoundEvent_0_QtnIncomingDamageEvent__DelegateSignature_Params Parms{};

	Parms.DamagedReceptor = DamagedReceptor;
	Parms.DamageInfo = DamageInfo;
	Parms.HitReactionInfo = HitReactionInfo;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyPawnAIRangedChaff_FTUX.BodyPawnAIRangedChaff_FTUX_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABodyPawnAIRangedChaff_FTUX_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawnAIRangedChaff_FTUX_C", "ReceiveEndPlay");

	Params::ABodyPawnAIRangedChaff_FTUX_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyPawnAIRangedChaff_FTUX.BodyPawnAIRangedChaff_FTUX_C.ExecuteUbergraph_BodyPawnAIRangedChaff_FTUX
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnDamageReceptorComponent* K2Node_ComponentBoundEvent_damagedReceptor                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnDamageInfo              K2Node_ComponentBoundEvent_damageInfo                            (ConstParm, ContainsInstancedReference)
// struct FQtnHitReactionInfo         K2Node_ComponentBoundEvent_hitReactionInfo                       (ConstParm)
// bool                               K2Node_ComponentBoundEvent_isServer                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABodyPawnAIRangedChaff_FTUX_C::ExecuteUbergraph_BodyPawnAIRangedChaff_FTUX(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, class UQtnDamageReceptorComponent* K2Node_ComponentBoundEvent_damagedReceptor, const struct FQtnDamageInfo& K2Node_ComponentBoundEvent_damageInfo, const struct FQtnHitReactionInfo& K2Node_ComponentBoundEvent_hitReactionInfo, bool K2Node_ComponentBoundEvent_isServer, enum class EEndPlayReason K2Node_Event_EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawnAIRangedChaff_FTUX_C", "ExecuteUbergraph_BodyPawnAIRangedChaff_FTUX");

	Params::ABodyPawnAIRangedChaff_FTUX_C_ExecuteUbergraph_BodyPawnAIRangedChaff_FTUX_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_damagedReceptor = K2Node_ComponentBoundEvent_damagedReceptor;
	Parms.K2Node_ComponentBoundEvent_damageInfo = K2Node_ComponentBoundEvent_damageInfo;
	Parms.K2Node_ComponentBoundEvent_hitReactionInfo = K2Node_ComponentBoundEvent_hitReactionInfo;
	Parms.K2Node_ComponentBoundEvent_isServer = K2Node_ComponentBoundEvent_isServer;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}

}


