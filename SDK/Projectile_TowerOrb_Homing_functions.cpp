#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Projectile_TowerOrb_Homing.Projectile_TowerOrb_Homing_C
// (Actor)

class UClass* AProjectile_TowerOrb_Homing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Projectile_TowerOrb_Homing_C");

	return Clss;
}


// Projectile_TowerOrb_Homing_C Projectile_TowerOrb_Homing.Default__Projectile_TowerOrb_Homing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AProjectile_TowerOrb_Homing_C* AProjectile_TowerOrb_Homing_C::GetDefaultObj()
{
	static class AProjectile_TowerOrb_Homing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AProjectile_TowerOrb_Homing_C*>(AProjectile_TowerOrb_Homing_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Projectile_TowerOrb_Homing.Projectile_TowerOrb_Homing_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProjectile_TowerOrb_Homing_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_TowerOrb_Homing_C", "ReceiveTick");

	Params::AProjectile_TowerOrb_Homing_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Projectile_TowerOrb_Homing.Projectile_TowerOrb_Homing_C.ExecuteUbergraph_Projectile_TowerOrb_Homing
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnProjectileMovementComponent*CallFunc_GetProjectileMovement_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProjectile_TowerOrb_Homing_C::ExecuteUbergraph_Projectile_TowerOrb_Homing(int32 EntryPoint, class UQtnProjectileMovementComponent* CallFunc_GetProjectileMovement_ReturnValue, float K2Node_Event_DeltaSeconds, float CallFunc_Add_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_TowerOrb_Homing_C", "ExecuteUbergraph_Projectile_TowerOrb_Homing");

	Params::AProjectile_TowerOrb_Homing_C_ExecuteUbergraph_Projectile_TowerOrb_Homing_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetProjectileMovement_ReturnValue = CallFunc_GetProjectileMovement_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


