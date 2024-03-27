#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ClericWeapon.ClericWeapon_C
// (Actor)

class UClass* AClericWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClericWeapon_C");

	return Clss;
}


// ClericWeapon_C ClericWeapon.Default__ClericWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AClericWeapon_C* AClericWeapon_C::GetDefaultObj()
{
	static class AClericWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AClericWeapon_C*>(AClericWeapon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ClericWeapon.ClericWeapon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AClericWeapon_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClericWeapon_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ClericWeapon.ClericWeapon_C.HealingPulseFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Radius                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AClericWeapon_C::HealingPulseFX(float Radius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClericWeapon_C", "HealingPulseFX");

	Params::AClericWeapon_C_HealingPulseFX_Params Parms{};

	Parms.Radius = Radius;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ClericWeapon.ClericWeapon_C.ToggleFlame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               On                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AClericWeapon_C::ToggleFlame(bool On)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClericWeapon_C", "ToggleFlame");

	Params::AClericWeapon_C_ToggleFlame_Params Parms{};

	Parms.On = On;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ClericWeapon.ClericWeapon_C.AttachClericWeaponFlame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*             ComponentToAttachTo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  FlameTransform                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// class FName                        SocketName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              FlameNiagaraSystem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  LightTransform                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)

void AClericWeapon_C::AttachClericWeaponFlame(class USceneComponent* ComponentToAttachTo, const struct FTransform& FlameTransform, class FName SocketName, class UNiagaraSystem* FlameNiagaraSystem, const struct FTransform& LightTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClericWeapon_C", "AttachClericWeaponFlame");

	Params::AClericWeapon_C_AttachClericWeaponFlame_Params Parms{};

	Parms.ComponentToAttachTo = ComponentToAttachTo;
	Parms.FlameTransform = FlameTransform;
	Parms.SocketName = SocketName;
	Parms.FlameNiagaraSystem = FlameNiagaraSystem;
	Parms.LightTransform = LightTransform;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ClericWeapon.ClericWeapon_C.HandleClericFX_Derived
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AClericWeapon_C::HandleClericFX_Derived()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClericWeapon_C", "HandleClericFX_Derived");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ClericWeapon.ClericWeapon_C.ExecuteUbergraph_ClericWeapon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// struct FTransform                  Temp_struct_Variable_1                                           (ConstParm, IsPlainOldData, NoDestructor)
// class UNiagaraComponent*           CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPointLightComponent*        CallFunc_AddComponent_ReturnValue_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_radius                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_On                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*             K2Node_CustomEvent_ComponentToAttachTo                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  K2Node_CustomEvent_FlameTransform                                (IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_SocketName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              K2Node_CustomEvent_FlameNiagaraSystem                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  K2Node_CustomEvent_LightTransform                                (IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult_1                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnFXActor*                 CallFunc_BP_BeginEffect_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_GetNiagaraComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AClericWeapon_C::ExecuteUbergraph_ClericWeapon(int32 EntryPoint, const struct FTransform& Temp_struct_Variable, const struct FTransform& Temp_struct_Variable_1, class UNiagaraComponent* CallFunc_AddComponent_ReturnValue, class UPointLightComponent* CallFunc_AddComponent_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, float K2Node_CustomEvent_radius, bool K2Node_CustomEvent_On, class USceneComponent* K2Node_CustomEvent_ComponentToAttachTo, const struct FTransform& K2Node_CustomEvent_FlameTransform, class FName K2Node_CustomEvent_SocketName, class UNiagaraSystem* K2Node_CustomEvent_FlameNiagaraSystem, const struct FTransform& K2Node_CustomEvent_LightTransform, bool CallFunc_Not_PreBool_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, bool CallFunc_K2_AttachToComponent_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult_1, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, class UNiagaraComponent* CallFunc_GetNiagaraComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClericWeapon_C", "ExecuteUbergraph_ClericWeapon");

	Params::AClericWeapon_C_ExecuteUbergraph_ClericWeapon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue_1 = CallFunc_AddComponent_ReturnValue_1;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.K2Node_CustomEvent_radius = K2Node_CustomEvent_radius;
	Parms.K2Node_CustomEvent_On = K2Node_CustomEvent_On;
	Parms.K2Node_CustomEvent_ComponentToAttachTo = K2Node_CustomEvent_ComponentToAttachTo;
	Parms.K2Node_CustomEvent_FlameTransform = K2Node_CustomEvent_FlameTransform;
	Parms.K2Node_CustomEvent_SocketName = K2Node_CustomEvent_SocketName;
	Parms.K2Node_CustomEvent_FlameNiagaraSystem = K2Node_CustomEvent_FlameNiagaraSystem;
	Parms.K2Node_CustomEvent_LightTransform = K2Node_CustomEvent_LightTransform;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_K2_SetRelativeTransform_SweepHitResult = CallFunc_K2_SetRelativeTransform_SweepHitResult;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_1 = CallFunc_K2_AttachToComponent_ReturnValue_1;
	Parms.CallFunc_K2_SetRelativeTransform_SweepHitResult_1 = CallFunc_K2_SetRelativeTransform_SweepHitResult_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_BP_BeginEffect_ReturnValue = CallFunc_BP_BeginEffect_ReturnValue;
	Parms.CallFunc_GetNiagaraComponent_ReturnValue = CallFunc_GetNiagaraComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


