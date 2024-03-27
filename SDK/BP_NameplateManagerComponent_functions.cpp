#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_NameplateManagerComponent.BP_NameplateManagerComponent_C
// (None)

class UClass* UBP_NameplateManagerComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_NameplateManagerComponent_C");

	return Clss;
}


// BP_NameplateManagerComponent_C BP_NameplateManagerComponent.Default__BP_NameplateManagerComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_NameplateManagerComponent_C* UBP_NameplateManagerComponent_C::GetDefaultObj()
{
	static class UBP_NameplateManagerComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_NameplateManagerComponent_C*>(UBP_NameplateManagerComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_NameplateManagerComponent.BP_NameplateManagerComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_NameplateManagerComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NameplateManagerComponent_C", "ReceiveTick");

	Params::UBP_NameplateManagerComponent_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NameplateManagerComponent.BP_NameplateManagerComponent_C.ExecuteUbergraph_BP_NameplateManagerComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_NameplateManagerComponent_C::ExecuteUbergraph_BP_NameplateManagerComponent(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NameplateManagerComponent_C", "ExecuteUbergraph_BP_NameplateManagerComponent");

	Params::UBP_NameplateManagerComponent_C_ExecuteUbergraph_BP_NameplateManagerComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


