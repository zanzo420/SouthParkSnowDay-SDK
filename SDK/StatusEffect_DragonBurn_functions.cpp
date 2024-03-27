#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StatusEffect_DragonBurn.StatusEffect_DragonBurn_C
// (None)

class UClass* UStatusEffect_DragonBurn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StatusEffect_DragonBurn_C");

	return Clss;
}


// StatusEffect_DragonBurn_C StatusEffect_DragonBurn.Default__StatusEffect_DragonBurn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStatusEffect_DragonBurn_C* UStatusEffect_DragonBurn_C::GetDefaultObj()
{
	static class UStatusEffect_DragonBurn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStatusEffect_DragonBurn_C*>(UStatusEffect_DragonBurn_C::StaticClass()->DefaultObject);

	return Default;
}


// Function StatusEffect_DragonBurn.StatusEffect_DragonBurn_C.OnStatusEffectBegin
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      AffectedActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusEffect_DragonBurn_C::OnStatusEffectBegin(class AActor* AffectedActor, class AQtnPawn* Instigator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatusEffect_DragonBurn_C", "OnStatusEffectBegin");

	Params::UStatusEffect_DragonBurn_C_OnStatusEffectBegin_Params Parms{};

	Parms.AffectedActor = AffectedActor;
	Parms.Instigator = Instigator;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusEffect_DragonBurn.StatusEffect_DragonBurn_C.ExecuteUbergraph_StatusEffect_DragonBurn
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_affectedActor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    K2Node_Event_instigator                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusEffect_DragonBurn_C::ExecuteUbergraph_StatusEffect_DragonBurn(int32 EntryPoint, class AActor* K2Node_Event_affectedActor, class AQtnPawn* K2Node_Event_instigator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatusEffect_DragonBurn_C", "ExecuteUbergraph_StatusEffect_DragonBurn");

	Params::UStatusEffect_DragonBurn_C_ExecuteUbergraph_StatusEffect_DragonBurn_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_affectedActor = K2Node_Event_affectedActor;
	Parms.K2Node_Event_instigator = K2Node_Event_instigator;

	UObject::ProcessEvent(Func, &Parms);

}

}


