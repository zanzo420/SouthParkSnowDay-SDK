#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DebugTargetFlag.BP_DebugTargetFlag_C
// (Actor)

class UClass* ABP_DebugTargetFlag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DebugTargetFlag_C");

	return Clss;
}


// BP_DebugTargetFlag_C BP_DebugTargetFlag.Default__BP_DebugTargetFlag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DebugTargetFlag_C* ABP_DebugTargetFlag_C::GetDefaultObj()
{
	static class ABP_DebugTargetFlag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DebugTargetFlag_C*>(ABP_DebugTargetFlag_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DebugTargetFlag.BP_DebugTargetFlag_C.ProcessStringForDisplay
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        Input                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Output                                                           (Parm, OutParm)

void ABP_DebugTargetFlag_C::ProcessStringForDisplay(class FText Input, class FText* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugTargetFlag_C", "ProcessStringForDisplay");

	Params::ABP_DebugTargetFlag_C_ProcessStringForDisplay_Params Parms{};

	Parms.Input = Input;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = Parms.Output;

}


// Function BP_DebugTargetFlag.BP_DebugTargetFlag_C.OnRep_DisplayString
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DebugTargetFlag_C::OnRep_DisplayString()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugTargetFlag_C", "OnRep_DisplayString");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugTargetFlag.BP_DebugTargetFlag_C.OnRep_ColorIndex
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DebugTargetFlag_C::OnRep_ColorIndex(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugTargetFlag_C", "OnRep_ColorIndex");

	Params::ABP_DebugTargetFlag_C_OnRep_ColorIndex_Params Parms{};

	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugTargetFlag.BP_DebugTargetFlag_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_DebugTargetFlag_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugTargetFlag_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugTargetFlag.BP_DebugTargetFlag_C.MulticastSetValues
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ColorIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DebugTargetFlag_C::MulticastSetValues(int32 ColorIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugTargetFlag_C", "MulticastSetValues");

	Params::ABP_DebugTargetFlag_C_MulticastSetValues_Params Parms{};

	Parms.ColorIndex = ColorIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugTargetFlag.BP_DebugTargetFlag_C.ExecuteUbergraph_BP_DebugTargetFlag
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_ProcessStringForDisplay_Output                          (None)
// int32                              K2Node_CustomEvent_ColorIndex                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_Array_Random_OutItem                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Random_OutIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DebugTargetFlag_C::ExecuteUbergraph_BP_DebugTargetFlag(int32 EntryPoint, class FText CallFunc_ProcessStringForDisplay_Output, int32 K2Node_CustomEvent_ColorIndex, bool CallFunc_IsServer_ReturnValue, const struct FLinearColor& CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugTargetFlag_C", "ExecuteUbergraph_BP_DebugTargetFlag");

	Params::ABP_DebugTargetFlag_C_ExecuteUbergraph_BP_DebugTargetFlag_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_ProcessStringForDisplay_Output = CallFunc_ProcessStringForDisplay_Output;
	Parms.K2Node_CustomEvent_ColorIndex = K2Node_CustomEvent_ColorIndex;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Array_Random_OutItem = CallFunc_Array_Random_OutItem;
	Parms.CallFunc_Array_Random_OutIndex = CallFunc_Array_Random_OutIndex;

	UObject::ProcessEvent(Func, &Parms);

}

}


