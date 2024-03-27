#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SkirmishTriggerDeath.SkirmishTriggerDeath_C
// (None)

class UClass* USkirmishTriggerDeath_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SkirmishTriggerDeath_C");

	return Clss;
}


// SkirmishTriggerDeath_C SkirmishTriggerDeath.Default__SkirmishTriggerDeath_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USkirmishTriggerDeath_C* USkirmishTriggerDeath_C::GetDefaultObj()
{
	static class USkirmishTriggerDeath_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USkirmishTriggerDeath_C*>(USkirmishTriggerDeath_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SkirmishTriggerDeath.SkirmishTriggerDeath_C.OnSkirmishInit
// (Event, Public, BlueprintEvent)
// Parameters:
// class AQtnSkirmish*                OwningSkirmish                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkirmishTriggerDeath_C::OnSkirmishInit(class AQtnSkirmish* OwningSkirmish)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkirmishTriggerDeath_C", "OnSkirmishInit");

	Params::USkirmishTriggerDeath_C_OnSkirmishInit_Params Parms{};

	Parms.OwningSkirmish = OwningSkirmish;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SkirmishTriggerDeath.SkirmishTriggerDeath_C.SkirmishDeathEvent_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnSkirmish*                Skirmish                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    SkirmishPawn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkirmishTriggerDeath_C::SkirmishDeathEvent_Event_0(class AQtnSkirmish* Skirmish, class AQtnPawn* SkirmishPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkirmishTriggerDeath_C", "SkirmishDeathEvent_Event_0");

	Params::USkirmishTriggerDeath_C_SkirmishDeathEvent_Event_0_Params Parms{};

	Parms.Skirmish = Skirmish;
	Parms.SkirmishPawn = SkirmishPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SkirmishTriggerDeath.SkirmishTriggerDeath_C.ExecuteUbergraph_SkirmishTriggerDeath
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AQtnSkirmish*                K2Node_Event_owningSkirmish                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnSkirmish*                K2Node_CustomEvent_Skirmish                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    K2Node_CustomEvent_skirmishPawn                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkirmishTriggerDeath_C::ExecuteUbergraph_SkirmishTriggerDeath(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AQtnSkirmish* K2Node_Event_owningSkirmish, class AQtnSkirmish* K2Node_CustomEvent_Skirmish, class AQtnPawn* K2Node_CustomEvent_skirmishPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkirmishTriggerDeath_C", "ExecuteUbergraph_SkirmishTriggerDeath");

	Params::USkirmishTriggerDeath_C_ExecuteUbergraph_SkirmishTriggerDeath_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_owningSkirmish = K2Node_Event_owningSkirmish;
	Parms.K2Node_CustomEvent_Skirmish = K2Node_CustomEvent_Skirmish;
	Parms.K2Node_CustomEvent_skirmishPawn = K2Node_CustomEvent_skirmishPawn;

	UObject::ProcessEvent(Func, &Parms);

}

}


