#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Projectile_FireOrb_BulletHellUntargeted.Projectile_FireOrb_BulletHellUntargeted_C
// (Actor)

class UClass* AProjectile_FireOrb_BulletHellUntargeted_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Projectile_FireOrb_BulletHellUntargeted_C");

	return Clss;
}


// Projectile_FireOrb_BulletHellUntargeted_C Projectile_FireOrb_BulletHellUntargeted.Default__Projectile_FireOrb_BulletHellUntargeted_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AProjectile_FireOrb_BulletHellUntargeted_C* AProjectile_FireOrb_BulletHellUntargeted_C::GetDefaultObj()
{
	static class AProjectile_FireOrb_BulletHellUntargeted_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AProjectile_FireOrb_BulletHellUntargeted_C*>(AProjectile_FireOrb_BulletHellUntargeted_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Projectile_FireOrb_BulletHellUntargeted.Projectile_FireOrb_BulletHellUntargeted_C.Secondary Behavior
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Aim_Direction                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorRightVector_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorRightVector_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProjectile_FireOrb_BulletHellUntargeted_C::Secondary_Behavior(const struct FVector& Aim_Direction, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_Add_VectorInt_ReturnValue, const struct FVector& CallFunc_GetActorRightVector_ReturnValue_1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_FireOrb_BulletHellUntargeted_C", "Secondary Behavior");

	Params::AProjectile_FireOrb_BulletHellUntargeted_C_Secondary_Behavior_Params Parms{};

	Parms.Aim_Direction = Aim_Direction;
	Parms.CallFunc_GetActorRightVector_ReturnValue = CallFunc_GetActorRightVector_ReturnValue;
	Parms.CallFunc_Add_VectorInt_ReturnValue = CallFunc_Add_VectorInt_ReturnValue;
	Parms.CallFunc_GetActorRightVector_ReturnValue_1 = CallFunc_GetActorRightVector_ReturnValue_1;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Projectile_FireOrb_BulletHellUntargeted.Projectile_FireOrb_BulletHellUntargeted_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UNiagaraSystem*              Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnUtilitiesSwitchQualityCallFunc_BranchUseSwitchQuality_Branch                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnProjectileMovementComponent*CallFunc_GetProjectileMovement_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlatform_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AProjectile_FireOrb_BulletHellUntargeted_C::UserConstructionScript(bool Temp_bool_Variable, class UNiagaraSystem* Temp_object_Variable, class UNiagaraSystem* Temp_object_Variable_1, class UNiagaraSystem* K2Node_Select_Default, enum class EQtnUtilitiesSwitchQuality CallFunc_BranchUseSwitchQuality_Branch, bool K2Node_SwitchEnum_CmpSuccess, class UQtnProjectileMovementComponent* CallFunc_GetProjectileMovement_ReturnValue, bool CallFunc_IsPlatform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_FireOrb_BulletHellUntargeted_C", "UserConstructionScript");

	Params::AProjectile_FireOrb_BulletHellUntargeted_C_UserConstructionScript_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BranchUseSwitchQuality_Branch = CallFunc_BranchUseSwitchQuality_Branch;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetProjectileMovement_ReturnValue = CallFunc_GetProjectileMovement_ReturnValue;
	Parms.CallFunc_IsPlatform_ReturnValue = CallFunc_IsPlatform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Projectile_FireOrb_BulletHellUntargeted.Projectile_FireOrb_BulletHellUntargeted_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AProjectile_FireOrb_BulletHellUntargeted_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_FireOrb_BulletHellUntargeted_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Projectile_FireOrb_BulletHellUntargeted.Projectile_FireOrb_BulletHellUntargeted_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProjectile_FireOrb_BulletHellUntargeted_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_FireOrb_BulletHellUntargeted_C", "ReceiveTick");

	Params::AProjectile_FireOrb_BulletHellUntargeted_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Projectile_FireOrb_BulletHellUntargeted.Projectile_FireOrb_BulletHellUntargeted_C.ExecuteUbergraph_Projectile_FireOrb_BulletHellUntargeted
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProjectile_FireOrb_BulletHellUntargeted_C::ExecuteUbergraph_Projectile_FireOrb_BulletHellUntargeted(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_FireOrb_BulletHellUntargeted_C", "ExecuteUbergraph_Projectile_FireOrb_BulletHellUntargeted");

	Params::AProjectile_FireOrb_BulletHellUntargeted_C_ExecuteUbergraph_Projectile_FireOrb_BulletHellUntargeted_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


