#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FloorPatch.BP_FloorPatch_C
// (Actor)

class UClass* ABP_FloorPatch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FloorPatch_C");

	return Clss;
}


// BP_FloorPatch_C BP_FloorPatch.Default__BP_FloorPatch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FloorPatch_C* ABP_FloorPatch_C::GetDefaultObj()
{
	static class ABP_FloorPatch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FloorPatch_C*>(ABP_FloorPatch_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_FloorPatch.BP_FloorPatch_C.OnRep_active
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_FloorPatch_C::OnRep_active()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FloorPatch_C", "OnRep_active");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FloorPatch.BP_FloorPatch_C.activateFloorPatch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPhysicalMaterial*           FloorType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FloorPatch_C::ActivateFloorPatch(class UPhysicalMaterial* FloorType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FloorPatch_C", "activateFloorPatch");

	Params::ABP_FloorPatch_C_ActivateFloorPatch_Params Parms{};

	Parms.FloorType = FloorType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FloorPatch.BP_FloorPatch_C.deactivateFloorPatch
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_FloorPatch_C::DeactivateFloorPatch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FloorPatch_C", "deactivateFloorPatch");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FloorPatch.BP_FloorPatch_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_FloorPatch_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FloorPatch_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FloorPatch.BP_FloorPatch_C.ExecuteUbergraph_BP_FloorPatch
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           K2Node_CustomEvent_floorType                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FloorPatch_C::ExecuteUbergraph_BP_FloorPatch(int32 EntryPoint, class UPhysicalMaterial* K2Node_CustomEvent_floorType, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FloorPatch_C", "ExecuteUbergraph_BP_FloorPatch");

	Params::ABP_FloorPatch_C_ExecuteUbergraph_BP_FloorPatch_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_floorType = K2Node_CustomEvent_floorType;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


