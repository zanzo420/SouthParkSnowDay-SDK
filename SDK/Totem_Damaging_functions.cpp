#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Totem_Damaging.Totem_Damaging_C
// (Actor)

class UClass* ATotem_Damaging_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Totem_Damaging_C");

	return Clss;
}


// Totem_Damaging_C Totem_Damaging.Default__Totem_Damaging_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATotem_Damaging_C* ATotem_Damaging_C::GetDefaultObj()
{
	static class ATotem_Damaging_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATotem_Damaging_C*>(ATotem_Damaging_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Totem_Damaging.Totem_Damaging_C.Apply Totem Pulse Effects to Pawn_ServerOnly
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPawn*                    Affected_Pawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnDamageInfo              K2Node_MakeStruct_QtnDamageInfo                                  (ContainsInstancedReference)

void ATotem_Damaging_C::Apply_Totem_Pulse_Effects_to_Pawn_ServerOnly(class AQtnPawn* Affected_Pawn, bool CallFunc_IsValid_ReturnValue, const struct FQtnDamageInfo& K2Node_MakeStruct_QtnDamageInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Totem_Damaging_C", "Apply Totem Pulse Effects to Pawn_ServerOnly");

	Params::ATotem_Damaging_C_Apply_Totem_Pulse_Effects_to_Pawn_ServerOnly_Params Parms{};

	Parms.Affected_Pawn = Affected_Pawn;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_QtnDamageInfo = K2Node_MakeStruct_QtnDamageInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Totem_Damaging.Totem_Damaging_C.Fade__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ATotem_Damaging_C::Fade__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Totem_Damaging_C", "Fade__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Totem_Damaging.Totem_Damaging_C.Fade__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ATotem_Damaging_C::Fade__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Totem_Damaging_C", "Fade__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Totem_Damaging.Totem_Damaging_C.Pulse__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ATotem_Damaging_C::Pulse__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Totem_Damaging_C", "Pulse__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Totem_Damaging.Totem_Damaging_C.Pulse__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ATotem_Damaging_C::Pulse__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Totem_Damaging_C", "Pulse__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Totem_Damaging.Totem_Damaging_C.TotemBeamDamage_MULTI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPawn*                    Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATotem_Damaging_C::TotemBeamDamage_MULTI(class AQtnPawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Totem_Damaging_C", "TotemBeamDamage_MULTI");

	Params::ATotem_Damaging_C_TotemBeamDamage_MULTI_Params Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Totem_Damaging.Totem_Damaging_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ATotem_Damaging_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Totem_Damaging_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Totem_Damaging.Totem_Damaging_C.TotemDeath_MULTI
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ViolentDeath                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATotem_Damaging_C::TotemDeath_MULTI(bool ViolentDeath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Totem_Damaging_C", "TotemDeath_MULTI");

	Params::ATotem_Damaging_C_TotemDeath_MULTI_Params Parms{};

	Parms.ViolentDeath = ViolentDeath;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Totem_Damaging.Totem_Damaging_C.Pulse Effect
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Radius                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATotem_Damaging_C::Pulse_Effect(float Radius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Totem_Damaging_C", "Pulse Effect");

	Params::ATotem_Damaging_C_Pulse_Effect_Params Parms{};

	Parms.Radius = Radius;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Totem_Damaging.Totem_Damaging_C.ExecuteUbergraph_Totem_Damaging
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    K2Node_CustomEvent_pawn                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnFXActor*                 CallFunc_BP_BeginEffect_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_GetNiagaraComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_violentDeath                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_radius                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATotem_Damaging_C::ExecuteUbergraph_Totem_Damaging(int32 EntryPoint, class AQtnPawn* K2Node_CustomEvent_pawn, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UNiagaraComponent* CallFunc_GetNiagaraComponent_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool K2Node_Event_violentDeath, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, float K2Node_Event_radius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Totem_Damaging_C", "ExecuteUbergraph_Totem_Damaging");

	Params::ATotem_Damaging_C_ExecuteUbergraph_Totem_Damaging_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_pawn = K2Node_CustomEvent_pawn;
	Parms.CallFunc_BP_BeginEffect_ReturnValue = CallFunc_BP_BeginEffect_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_GetNiagaraComponent_ReturnValue = CallFunc_GetNiagaraComponent_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.K2Node_Event_violentDeath = K2Node_Event_violentDeath;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.K2Node_Event_radius = K2Node_Event_radius;

	UObject::ProcessEvent(Func, &Parms);

}

}


