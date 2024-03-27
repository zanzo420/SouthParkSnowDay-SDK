#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Verb_CartmanGolem_SpawnAdd.Verb_CartmanGolem_SpawnAdd_C
// (None)

class UClass* UVerb_CartmanGolem_SpawnAdd_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Verb_CartmanGolem_SpawnAdd_C");

	return Clss;
}


// Verb_CartmanGolem_SpawnAdd_C Verb_CartmanGolem_SpawnAdd.Default__Verb_CartmanGolem_SpawnAdd_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerb_CartmanGolem_SpawnAdd_C* UVerb_CartmanGolem_SpawnAdd_C::GetDefaultObj()
{
	static class UVerb_CartmanGolem_SpawnAdd_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerb_CartmanGolem_SpawnAdd_C*>(UVerb_CartmanGolem_SpawnAdd_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Verb_CartmanGolem_SpawnAdd.Verb_CartmanGolem_SpawnAdd_C.CanVerbStart
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     PotentialTarget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanVerbStart_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawn_CartmanGolem_C*    K2Node_DynamicCast_AsBody_Pawn_Cartman_Golem                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Are_Adds_Needed_Should_Spawn_Add                        (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UVerb_CartmanGolem_SpawnAdd_C::CanVerbStart(class UObject* PotentialTarget, bool CallFunc_CanVerbStart_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class ABodyPawn_CartmanGolem_C* K2Node_DynamicCast_AsBody_Pawn_Cartman_Golem, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Are_Adds_Needed_Should_Spawn_Add)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Verb_CartmanGolem_SpawnAdd_C", "CanVerbStart");

	Params::UVerb_CartmanGolem_SpawnAdd_C_CanVerbStart_Params Parms{};

	Parms.PotentialTarget = PotentialTarget;
	Parms.CallFunc_CanVerbStart_ReturnValue = CallFunc_CanVerbStart_ReturnValue;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue = CallFunc_GetOwningBodyPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Cartman_Golem = K2Node_DynamicCast_AsBody_Pawn_Cartman_Golem;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Are_Adds_Needed_Should_Spawn_Add = CallFunc_Are_Adds_Needed_Should_Spawn_Add;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Verb_CartmanGolem_SpawnAdd.Verb_CartmanGolem_SpawnAdd_C.OnVerbStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class UObject*                     IntendedTarget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UVerb_CartmanGolem_SpawnAdd_C::OnVerbStart(class UObject* IntendedTarget, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Verb_CartmanGolem_SpawnAdd_C", "OnVerbStart");

	Params::UVerb_CartmanGolem_SpawnAdd_C_OnVerbStart_Params Parms{};

	Parms.IntendedTarget = IntendedTarget;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Verb_CartmanGolem_SpawnAdd.Verb_CartmanGolem_SpawnAdd_C.ExecuteUbergraph_Verb_CartmanGolem_SpawnAdd
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_intendedTarget                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isServer                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawn_CartmanGolem_C*    K2Node_DynamicCast_AsBody_Pawn_Cartman_Golem                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UVerb_CartmanGolem_SpawnAdd_C::ExecuteUbergraph_Verb_CartmanGolem_SpawnAdd(int32 EntryPoint, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class ABodyPawn_CartmanGolem_C* K2Node_DynamicCast_AsBody_Pawn_Cartman_Golem, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Verb_CartmanGolem_SpawnAdd_C", "ExecuteUbergraph_Verb_CartmanGolem_SpawnAdd");

	Params::UVerb_CartmanGolem_SpawnAdd_C_ExecuteUbergraph_Verb_CartmanGolem_SpawnAdd_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_intendedTarget = K2Node_Event_intendedTarget;
	Parms.K2Node_Event_isServer = K2Node_Event_isServer;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue = CallFunc_GetOwningBodyPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Cartman_Golem = K2Node_DynamicCast_AsBody_Pawn_Cartman_Golem;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


