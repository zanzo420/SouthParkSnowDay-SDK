#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LaserSwordStatChanges.LaserSwordStatChanges_C
// (None)

class UClass* ULaserSwordStatChanges_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LaserSwordStatChanges_C");

	return Clss;
}


// LaserSwordStatChanges_C LaserSwordStatChanges.Default__LaserSwordStatChanges_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULaserSwordStatChanges_C* ULaserSwordStatChanges_C::GetDefaultObj()
{
	static class ULaserSwordStatChanges_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULaserSwordStatChanges_C*>(ULaserSwordStatChanges_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LaserSwordStatChanges.LaserSwordStatChanges_C.OnStatusEffectBegin
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      AffectedActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULaserSwordStatChanges_C::OnStatusEffectBegin(class AActor* AffectedActor, class AQtnPawn* Instigator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LaserSwordStatChanges_C", "OnStatusEffectBegin");

	Params::ULaserSwordStatChanges_C_OnStatusEffectBegin_Params Parms{};

	Parms.AffectedActor = AffectedActor;
	Parms.Instigator = Instigator;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LaserSwordStatChanges.LaserSwordStatChanges_C.ExecuteUbergraph_LaserSwordStatChanges
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_affectedActor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    K2Node_Event_instigator                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULaserSwordStatChanges_C::ExecuteUbergraph_LaserSwordStatChanges(int32 EntryPoint, class AActor* K2Node_Event_affectedActor, class AQtnPawn* K2Node_Event_instigator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LaserSwordStatChanges_C", "ExecuteUbergraph_LaserSwordStatChanges");

	Params::ULaserSwordStatChanges_C_ExecuteUbergraph_LaserSwordStatChanges_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_affectedActor = K2Node_Event_affectedActor;
	Parms.K2Node_Event_instigator = K2Node_Event_instigator;

	UObject::ProcessEvent(Func, &Parms);

}

}


