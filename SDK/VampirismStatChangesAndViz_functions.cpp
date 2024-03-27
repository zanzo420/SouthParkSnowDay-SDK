#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VampirismStatChangesAndViz.VampirismStatChangesAndViz_C
// (None)

class UClass* UVampirismStatChangesAndViz_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VampirismStatChangesAndViz_C");

	return Clss;
}


// VampirismStatChangesAndViz_C VampirismStatChangesAndViz.Default__VampirismStatChangesAndViz_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVampirismStatChangesAndViz_C* UVampirismStatChangesAndViz_C::GetDefaultObj()
{
	static class UVampirismStatChangesAndViz_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVampirismStatChangesAndViz_C*>(UVampirismStatChangesAndViz_C::StaticClass()->DefaultObject);

	return Default;
}


// Function VampirismStatChangesAndViz.VampirismStatChangesAndViz_C.OnStatusEffectBegin
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      AffectedActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVampirismStatChangesAndViz_C::OnStatusEffectBegin(class AActor* AffectedActor, class AQtnPawn* Instigator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VampirismStatChangesAndViz_C", "OnStatusEffectBegin");

	Params::UVampirismStatChangesAndViz_C_OnStatusEffectBegin_Params Parms{};

	Parms.AffectedActor = AffectedActor;
	Parms.Instigator = Instigator;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VampirismStatChangesAndViz.VampirismStatChangesAndViz_C.Start VFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UVampirismStatChangesAndViz_C::Start_VFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VampirismStatChangesAndViz_C", "Start VFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VampirismStatChangesAndViz.VampirismStatChangesAndViz_C.End VFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UVampirismStatChangesAndViz_C::End_VFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VampirismStatChangesAndViz_C", "End VFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VampirismStatChangesAndViz.VampirismStatChangesAndViz_C.OnStatusEffectEnd
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      AffectedActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsActorBeingDestroyed                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UVampirismStatChangesAndViz_C::OnStatusEffectEnd(class AActor* AffectedActor, class AQtnPawn* Instigator, bool IsActorBeingDestroyed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VampirismStatChangesAndViz_C", "OnStatusEffectEnd");

	Params::UVampirismStatChangesAndViz_C_OnStatusEffectEnd_Params Parms{};

	Parms.AffectedActor = AffectedActor;
	Parms.Instigator = Instigator;
	Parms.IsActorBeingDestroyed = IsActorBeingDestroyed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VampirismStatChangesAndViz.VampirismStatChangesAndViz_C.ExecuteUbergraph_VampirismStatChangesAndViz
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetAffectedBody_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetAffectedBody_ReturnValue_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_affectedActor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    K2Node_Event_instigator                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isActorBeingDestroyed                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetAffectedBody_ReturnValue_2                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_affectedActor_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    K2Node_Event_instigator_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnBase_C*             K2Node_DynamicCast_AsBody_Pawn_Base                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnFXActor*                 CallFunc_BP_BeginEffect_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnBase_C*             K2Node_DynamicCast_AsBody_Pawn_Base_1                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetAffectedBody_ReturnValue_3                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetAffectedBody_ReturnValue_4                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVampirismStatChangesAndViz_C::ExecuteUbergraph_VampirismStatChangesAndViz(int32 EntryPoint, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, class AActor* K2Node_Event_affectedActor, class AQtnPawn* K2Node_Event_instigator, bool K2Node_Event_isActorBeingDestroyed, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_2, class AActor* K2Node_Event_affectedActor_1, class AQtnPawn* K2Node_Event_instigator_1, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsServer_ReturnValue, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_3, bool CallFunc_IsServer_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VampirismStatChangesAndViz_C", "ExecuteUbergraph_VampirismStatChangesAndViz");

	Params::UVampirismStatChangesAndViz_C_ExecuteUbergraph_VampirismStatChangesAndViz_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAffectedBody_ReturnValue = CallFunc_GetAffectedBody_ReturnValue;
	Parms.CallFunc_GetAffectedBody_ReturnValue_1 = CallFunc_GetAffectedBody_ReturnValue_1;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_Event_affectedActor = K2Node_Event_affectedActor;
	Parms.K2Node_Event_instigator = K2Node_Event_instigator;
	Parms.K2Node_Event_isActorBeingDestroyed = K2Node_Event_isActorBeingDestroyed;
	Parms.CallFunc_GetAffectedBody_ReturnValue_2 = CallFunc_GetAffectedBody_ReturnValue_2;
	Parms.K2Node_Event_affectedActor_1 = K2Node_Event_affectedActor_1;
	Parms.K2Node_Event_instigator_1 = K2Node_Event_instigator_1;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Base = K2Node_DynamicCast_AsBody_Pawn_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BP_BeginEffect_ReturnValue = CallFunc_BP_BeginEffect_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Base_1 = K2Node_DynamicCast_AsBody_Pawn_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetAffectedBody_ReturnValue_3 = CallFunc_GetAffectedBody_ReturnValue_3;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_GetAffectedBody_ReturnValue_4 = CallFunc_GetAffectedBody_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}

}


