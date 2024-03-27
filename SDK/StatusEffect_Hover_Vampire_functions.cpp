#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StatusEffect_Hover_Vampire.StatusEffect_Hover_Vampire_C
// (None)

class UClass* UStatusEffect_Hover_Vampire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StatusEffect_Hover_Vampire_C");

	return Clss;
}


// StatusEffect_Hover_Vampire_C StatusEffect_Hover_Vampire.Default__StatusEffect_Hover_Vampire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStatusEffect_Hover_Vampire_C* UStatusEffect_Hover_Vampire_C::GetDefaultObj()
{
	static class UStatusEffect_Hover_Vampire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStatusEffect_Hover_Vampire_C*>(UStatusEffect_Hover_Vampire_C::StaticClass()->DefaultObject);

	return Default;
}


// Function StatusEffect_Hover_Vampire.StatusEffect_Hover_Vampire_C.OnStatusEffectTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusEffect_Hover_Vampire_C::OnStatusEffectTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatusEffect_Hover_Vampire_C", "OnStatusEffectTick");

	Params::UStatusEffect_Hover_Vampire_C_OnStatusEffectTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusEffect_Hover_Vampire.StatusEffect_Hover_Vampire_C.OnStatusEffectBegin
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      AffectedActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusEffect_Hover_Vampire_C::OnStatusEffectBegin(class AActor* AffectedActor, class AQtnPawn* Instigator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatusEffect_Hover_Vampire_C", "OnStatusEffectBegin");

	Params::UStatusEffect_Hover_Vampire_C_OnStatusEffectBegin_Params Parms{};

	Parms.AffectedActor = AffectedActor;
	Parms.Instigator = Instigator;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusEffect_Hover_Vampire.StatusEffect_Hover_Vampire_C.ExecuteUbergraph_StatusEffect_Hover_Vampire
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRandomValue_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetAffectedBody_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHitReactingOrKnockedDown_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_affectedActor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    K2Node_Event_instigator                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetAffectedBody_ReturnValue_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnMovementComponent*       CallFunc_GetQtnMovementComponent_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusEffect_Hover_Vampire_C::ExecuteUbergraph_StatusEffect_Hover_Vampire(int32 EntryPoint, float CallFunc_GetRandomValue_ReturnValue, float K2Node_Event_DeltaSeconds, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsHitReactingOrKnockedDown_ReturnValue, class AActor* K2Node_Event_affectedActor, class AQtnPawn* K2Node_Event_instigator, bool CallFunc_IsServer_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_1, class UQtnMovementComponent* CallFunc_GetQtnMovementComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatusEffect_Hover_Vampire_C", "ExecuteUbergraph_StatusEffect_Hover_Vampire");

	Params::UStatusEffect_Hover_Vampire_C_ExecuteUbergraph_StatusEffect_Hover_Vampire_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetRandomValue_ReturnValue = CallFunc_GetRandomValue_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetAffectedBody_ReturnValue = CallFunc_GetAffectedBody_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsHitReactingOrKnockedDown_ReturnValue = CallFunc_IsHitReactingOrKnockedDown_ReturnValue;
	Parms.K2Node_Event_affectedActor = K2Node_Event_affectedActor;
	Parms.K2Node_Event_instigator = K2Node_Event_instigator;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_GetAffectedBody_ReturnValue_1 = CallFunc_GetAffectedBody_ReturnValue_1;
	Parms.CallFunc_GetQtnMovementComponent_ReturnValue = CallFunc_GetQtnMovementComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


