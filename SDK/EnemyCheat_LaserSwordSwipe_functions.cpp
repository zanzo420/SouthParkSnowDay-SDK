#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EnemyCheat_LaserSwordSwipe.EnemyCheat_LaserSwordSwipe_C
// (None)

class UClass* UEnemyCheat_LaserSwordSwipe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnemyCheat_LaserSwordSwipe_C");

	return Clss;
}


// EnemyCheat_LaserSwordSwipe_C EnemyCheat_LaserSwordSwipe.Default__EnemyCheat_LaserSwordSwipe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEnemyCheat_LaserSwordSwipe_C* UEnemyCheat_LaserSwordSwipe_C::GetDefaultObj()
{
	static class UEnemyCheat_LaserSwordSwipe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnemyCheat_LaserSwordSwipe_C*>(UEnemyCheat_LaserSwordSwipe_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EnemyCheat_LaserSwordSwipe.EnemyCheat_LaserSwordSwipe_C.AllowOtherVerbToInterrupt
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UQtnVerb*                    OtherVerb                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UEnemyCheat_LaserSwordSwipe_C::AllowOtherVerbToInterrupt(class UQtnVerb* OtherVerb, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCheat_LaserSwordSwipe_C", "AllowOtherVerbToInterrupt");

	Params::UEnemyCheat_LaserSwordSwipe_C_AllowOtherVerbToInterrupt_Params Parms{};

	Parms.OtherVerb = OtherVerb;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EnemyCheat_LaserSwordSwipe.EnemyCheat_LaserSwordSwipe_C.GetDamageValue
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      VictimActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              BaseDamage                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DamageMultiplier                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDamageValue_baseDamage                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDamageValue_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UEnemyCheat_LaserSwordSwipe_C::GetDamageValue(class AActor* VictimActor, float* BaseDamage, float DamageMultiplier, float CallFunc_GetDamageValue_baseDamage, float CallFunc_GetDamageValue_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCheat_LaserSwordSwipe_C", "GetDamageValue");

	Params::UEnemyCheat_LaserSwordSwipe_C_GetDamageValue_Params Parms{};

	Parms.VictimActor = VictimActor;
	Parms.DamageMultiplier = DamageMultiplier;
	Parms.CallFunc_GetDamageValue_baseDamage = CallFunc_GetDamageValue_baseDamage;
	Parms.CallFunc_GetDamageValue_ReturnValue = CallFunc_GetDamageValue_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (BaseDamage != nullptr)
		*BaseDamage = Parms.BaseDamage;

	return Parms.ReturnValue;

}


// Function EnemyCheat_LaserSwordSwipe.EnemyCheat_LaserSwordSwipe_C.OnAnimNotify
// (Event, Public, BlueprintEvent)
// Parameters:
// class UQtnAnimNotify*              AnimNotify                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEnemyCheat_LaserSwordSwipe_C::OnAnimNotify(class UQtnAnimNotify* AnimNotify, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCheat_LaserSwordSwipe_C", "OnAnimNotify");

	Params::UEnemyCheat_LaserSwordSwipe_C_OnAnimNotify_Params Parms{};

	Parms.AnimNotify = AnimNotify;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCheat_LaserSwordSwipe.EnemyCheat_LaserSwordSwipe_C.ExecuteUbergraph_EnemyCheat_LaserSwordSwipe
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnAnimNotify*              K2Node_Event_animNotify                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isServer                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimNotify_Custom1_C*       K2Node_DynamicCast_AsQtn_Anim_Notify_Custom_1                    (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEnemyCheat_LaserSwordSwipe_C::ExecuteUbergraph_EnemyCheat_LaserSwordSwipe(int32 EntryPoint, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class UQtnAnimNotify* K2Node_Event_animNotify, bool K2Node_Event_isServer, class UAnimNotify_Custom1_C* K2Node_DynamicCast_AsQtn_Anim_Notify_Custom_1, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCheat_LaserSwordSwipe_C", "ExecuteUbergraph_EnemyCheat_LaserSwordSwipe");

	Params::UEnemyCheat_LaserSwordSwipe_C_ExecuteUbergraph_EnemyCheat_LaserSwordSwipe_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue = CallFunc_GetOwningBodyPawn_ReturnValue;
	Parms.K2Node_Event_animNotify = K2Node_Event_animNotify;
	Parms.K2Node_Event_isServer = K2Node_Event_isServer;
	Parms.K2Node_DynamicCast_AsQtn_Anim_Notify_Custom_1 = K2Node_DynamicCast_AsQtn_Anim_Notify_Custom_1;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


