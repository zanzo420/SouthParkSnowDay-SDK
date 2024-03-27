#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Projectile_FireOrb_BulletHell.Projectile_FireOrb_BulletHell_C
// (Actor)

class UClass* AProjectile_FireOrb_BulletHell_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Projectile_FireOrb_BulletHell_C");

	return Clss;
}


// Projectile_FireOrb_BulletHell_C Projectile_FireOrb_BulletHell.Default__Projectile_FireOrb_BulletHell_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AProjectile_FireOrb_BulletHell_C* AProjectile_FireOrb_BulletHell_C::GetDefaultObj()
{
	static class AProjectile_FireOrb_BulletHell_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AProjectile_FireOrb_BulletHell_C*>(AProjectile_FireOrb_BulletHell_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Projectile_FireOrb_BulletHell.Projectile_FireOrb_BulletHell_C.Secondary Behavior
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AProjectile_FireOrb_BulletHell_C::Secondary_Behavior()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_FireOrb_BulletHell_C", "Secondary Behavior");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Projectile_FireOrb_BulletHell.Projectile_FireOrb_BulletHell_C.ExecuteUbergraph_Projectile_FireOrb_BulletHell
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProjectile_FireOrb_BulletHell_C::ExecuteUbergraph_Projectile_FireOrb_BulletHell(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_Multiply_IntFloat_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_FireOrb_BulletHell_C", "ExecuteUbergraph_Projectile_FireOrb_BulletHell");

	Params::AProjectile_FireOrb_BulletHell_C_ExecuteUbergraph_Projectile_FireOrb_BulletHell_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue = CallFunc_Conv_RotatorToVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


