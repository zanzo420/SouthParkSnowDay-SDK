#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Effigy.BP_Effigy_C
// (Actor)

class UClass* ABP_Effigy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Effigy_C");

	return Clss;
}


// BP_Effigy_C BP_Effigy.Default__BP_Effigy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Effigy_C* ABP_Effigy_C::GetDefaultObj()
{
	static class ABP_Effigy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Effigy_C*>(ABP_Effigy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Effigy.BP_Effigy_C.EnsureDynamicMaterial
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    MaterialInstance                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Effigy_C::EnsureDynamicMaterial(class UMaterialInstanceDynamic** MaterialInstance, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Effigy_C", "EnsureDynamicMaterial");

	Params::ABP_Effigy_C_EnsureDynamicMaterial_Params Parms{};

	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (MaterialInstance != nullptr)
		*MaterialInstance = Parms.MaterialInstance;

}


// Function BP_Effigy.BP_Effigy_C.HandleHealthChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ChangeAmount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAttribute_Health_C*         HealthAttribute                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Effigy_C::HandleHealthChange(float ChangeAmount, class UAttribute_Health_C* HealthAttribute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Effigy_C", "HandleHealthChange");

	Params::ABP_Effigy_C_HandleHealthChange_Params Parms{};

	Parms.ChangeAmount = ChangeAmount;
	Parms.HealthAttribute = HealthAttribute;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Effigy.BP_Effigy_C.PresentDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_EnsureDynamicMaterial_materialInstance                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetPostProcessInstance_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnAttributeContainerInterface>CallFunc_GetAttribute_self_CastInput                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnAttribute*               CallFunc_GetAttribute_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEffigy_AnimBlueprint_C*     K2Node_DynamicCast_AsEffigy_Anim_Blueprint                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentValue_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Effigy_C::PresentDamage(class UMaterialInstanceDynamic* CallFunc_EnsureDynamicMaterial_materialInstance, class UAnimInstance* CallFunc_GetPostProcessInstance_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttribute_self_CastInput, class UQtnAttribute* CallFunc_GetAttribute_ReturnValue, class UEffigy_AnimBlueprint_C* K2Node_DynamicCast_AsEffigy_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_GetCurrentValue_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, float CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Effigy_C", "PresentDamage");

	Params::ABP_Effigy_C_PresentDamage_Params Parms{};

	Parms.CallFunc_EnsureDynamicMaterial_materialInstance = CallFunc_EnsureDynamicMaterial_materialInstance;
	Parms.CallFunc_GetPostProcessInstance_ReturnValue = CallFunc_GetPostProcessInstance_ReturnValue;
	Parms.CallFunc_GetAttribute_self_CastInput = CallFunc_GetAttribute_self_CastInput;
	Parms.CallFunc_GetAttribute_ReturnValue = CallFunc_GetAttribute_ReturnValue;
	Parms.K2Node_DynamicCast_AsEffigy_Anim_Blueprint = K2Node_DynamicCast_AsEffigy_Anim_Blueprint;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_GetCurrentValue_ReturnValue = CallFunc_GetCurrentValue_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Effigy.BP_Effigy_C.PlaySmackSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAtLocation_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Effigy_C::PlaySmackSound(const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Effigy_C", "PlaySmackSound");

	Params::ABP_Effigy_C_PlaySmackSound_Params Parms{};

	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_SpawnSoundAtLocation_ReturnValue = CallFunc_SpawnSoundAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Effigy.BP_Effigy_C.ShouldAllowDamageFromCulprit
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AQtnPawn*                    Culprit                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnVerb*                    SourceVerb                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShouldAllow                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Effigy_C::ShouldAllowDamageFromCulprit(class AQtnPawn* Culprit, class UQtnVerb* SourceVerb, bool* ShouldAllow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Effigy_C", "ShouldAllowDamageFromCulprit");

	Params::ABP_Effigy_C_ShouldAllowDamageFromCulprit_Params Parms{};

	Parms.Culprit = Culprit;
	Parms.SourceVerb = SourceVerb;

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldAllow != nullptr)
		*ShouldAllow = Parms.ShouldAllow;

}


// Function BP_Effigy.BP_Effigy_C.HandleDeath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Effigy_C::HandleDeath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Effigy_C", "HandleDeath");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Effigy.BP_Effigy_C.HandleDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnDamageInfo              Damage_Info                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// bool                               Is_Server                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorUpVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldAllowDamageFromCulprit_shouldAllow                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotFromZX_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Effigy_C::HandleDamage(const struct FQtnDamageInfo& Damage_Info, bool Is_Server, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_GetActorUpVector_ReturnValue, bool CallFunc_ShouldAllowDamageFromCulprit_shouldAllow, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FRotator& CallFunc_MakeRotFromZX_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Effigy_C", "HandleDamage");

	Params::ABP_Effigy_C_HandleDamage_Params Parms{};

	Parms.Damage_Info = Damage_Info;
	Parms.Is_Server = Is_Server;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_GetActorUpVector_ReturnValue = CallFunc_GetActorUpVector_ReturnValue;
	Parms.CallFunc_ShouldAllowDamageFromCulprit_shouldAllow = CallFunc_ShouldAllowDamageFromCulprit_shouldAllow;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_MakeRotFromZX_ReturnValue = CallFunc_MakeRotFromZX_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Effigy.BP_Effigy_C.SmackedTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Effigy_C::SmackedTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Effigy_C", "SmackedTimeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Effigy.BP_Effigy_C.SmackedTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Effigy_C::SmackedTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Effigy_C", "SmackedTimeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Effigy.BP_Effigy_C.Smacked
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Effigy_C::Smacked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Effigy_C", "Smacked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Effigy.BP_Effigy_C.multicast_DeathVFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Effigy_C::Multicast_DeathVFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Effigy_C", "multicast_DeathVFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Effigy.BP_Effigy_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Effigy_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Effigy_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Effigy.BP_Effigy_C.SetLevelFeatureSpawner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALevelFeatureSpawner_C*      LevelFeatureSpawner                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Effigy_C::SetLevelFeatureSpawner(class ALevelFeatureSpawner_C* LevelFeatureSpawner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Effigy_C", "SetLevelFeatureSpawner");

	Params::ABP_Effigy_C_SetLevelFeatureSpawner_Params Parms{};

	Parms.LevelFeatureSpawner = LevelFeatureSpawner;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Effigy.BP_Effigy_C.ExecuteUbergraph_BP_Effigy
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_RLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult_1                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnFXActor*                 CallFunc_BP_BeginEffect_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAtLocation_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALevelFeatureSpawner_C*      K2Node_Event_levelFeatureSpawner                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Effigy_C::ExecuteUbergraph_BP_Effigy(int32 EntryPoint, const struct FRotator& CallFunc_RLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult_1, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, class ALevelFeatureSpawner_C* K2Node_Event_levelFeatureSpawner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Effigy_C", "ExecuteUbergraph_BP_Effigy");

	Params::ABP_Effigy_C_ExecuteUbergraph_BP_Effigy_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_RLerp_ReturnValue = CallFunc_RLerp_ReturnValue;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult = CallFunc_K2_SetWorldRotation_SweepHitResult;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult_1 = CallFunc_K2_SetWorldRotation_SweepHitResult_1;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_BP_BeginEffect_ReturnValue = CallFunc_BP_BeginEffect_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_SpawnSoundAtLocation_ReturnValue = CallFunc_SpawnSoundAtLocation_ReturnValue;
	Parms.K2Node_Event_levelFeatureSpawner = K2Node_Event_levelFeatureSpawner;

	UObject::ProcessEvent(Func, &Parms);

}

}


