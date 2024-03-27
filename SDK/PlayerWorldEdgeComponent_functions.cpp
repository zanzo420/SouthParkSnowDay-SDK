#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerWorldEdgeComponent.PlayerWorldEdgeComponent_C
// (None)

class UClass* UPlayerWorldEdgeComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerWorldEdgeComponent_C");

	return Clss;
}


// PlayerWorldEdgeComponent_C PlayerWorldEdgeComponent.Default__PlayerWorldEdgeComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerWorldEdgeComponent_C* UPlayerWorldEdgeComponent_C::GetDefaultObj()
{
	static class UPlayerWorldEdgeComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerWorldEdgeComponent_C*>(UPlayerWorldEdgeComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerWorldEdgeComponent.PlayerWorldEdgeComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerWorldEdgeComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerWorldEdgeComponent_C", "ReceiveTick");

	Params::UPlayerWorldEdgeComponent_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerWorldEdgeComponent.PlayerWorldEdgeComponent_C.SetWorldStormStrength
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              StormStrength                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerWorldEdgeComponent_C::SetWorldStormStrength(float StormStrength)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerWorldEdgeComponent_C", "SetWorldStormStrength");

	Params::UPlayerWorldEdgeComponent_C_SetWorldStormStrength_Params Parms{};

	Parms.StormStrength = StormStrength;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerWorldEdgeComponent.PlayerWorldEdgeComponent_C.RegisterStormContributor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Removing                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerWorldEdgeComponent_C::RegisterStormContributor(bool Removing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerWorldEdgeComponent_C", "RegisterStormContributor");

	Params::UPlayerWorldEdgeComponent_C_RegisterStormContributor_Params Parms{};

	Parms.Removing = Removing;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerWorldEdgeComponent.PlayerWorldEdgeComponent_C.ExecuteUbergraph_PlayerWorldEdgeComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInstanceDynamic*>CallFunc_GetPostProcessMaterialInstances_ReturnValue             (ReferenceParm)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_StormStrength                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_removing                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnFXActor*                 CallFunc_BP_BeginEffect_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerWorldEdgeComponent_C::ExecuteUbergraph_PlayerWorldEdgeComponent(int32 EntryPoint, TArray<class UMaterialInstanceDynamic*>& CallFunc_GetPostProcessMaterialInstances_ReturnValue, int32 Temp_int_Variable, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, int32 CallFunc_Max_ReturnValue, float K2Node_Event_DeltaSeconds, float K2Node_CustomEvent_StormStrength, bool K2Node_CustomEvent_removing, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, int32 Temp_int_Variable_1, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerWorldEdgeComponent_C", "ExecuteUbergraph_PlayerWorldEdgeComponent");

	Params::UPlayerWorldEdgeComponent_C_ExecuteUbergraph_PlayerWorldEdgeComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPostProcessMaterialInstances_ReturnValue = CallFunc_GetPostProcessMaterialInstances_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_CustomEvent_StormStrength = K2Node_CustomEvent_StormStrength;
	Parms.K2Node_CustomEvent_removing = K2Node_CustomEvent_removing;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_BP_BeginEffect_ReturnValue = CallFunc_BP_BeginEffect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


