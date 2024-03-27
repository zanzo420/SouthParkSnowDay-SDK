#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BS_Spawn_MonsterCloset_Snow.BS_Spawn_MonsterCloset_Snow_C
// (Actor)

class UClass* ABS_Spawn_MonsterCloset_Snow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BS_Spawn_MonsterCloset_Snow_C");

	return Clss;
}


// BS_Spawn_MonsterCloset_Snow_C BS_Spawn_MonsterCloset_Snow.Default__BS_Spawn_MonsterCloset_Snow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABS_Spawn_MonsterCloset_Snow_C* ABS_Spawn_MonsterCloset_Snow_C::GetDefaultObj()
{
	static class ABS_Spawn_MonsterCloset_Snow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABS_Spawn_MonsterCloset_Snow_C*>(ABS_Spawn_MonsterCloset_Snow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BS_Spawn_MonsterCloset_Snow.BS_Spawn_MonsterCloset_Snow_C.GetSpawnTransformComponent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TSubclassOf<class AActor>          DesiredClassToSpawn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class USceneComponent*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USceneComponent* ABS_Spawn_MonsterCloset_Snow_C::GetSpawnTransformComponent(TSubclassOf<class AActor> DesiredClassToSpawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Spawn_MonsterCloset_Snow_C", "GetSpawnTransformComponent");

	Params::ABS_Spawn_MonsterCloset_Snow_C_GetSpawnTransformComponent_Params Parms{};

	Parms.DesiredClassToSpawn = DesiredClassToSpawn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BS_Spawn_MonsterCloset_Snow.BS_Spawn_MonsterCloset_Snow_C.InitCurrentFaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManagerBase_C*       K2Node_DynamicCast_AsQtn_Goal_Manager_Base                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentArc_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABS_Spawn_MonsterCloset_Snow_C::InitCurrentFaction(const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManagerBase_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue, int32 CallFunc_GetCurrentArc_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Spawn_MonsterCloset_Snow_C", "InitCurrentFaction");

	Params::ABS_Spawn_MonsterCloset_Snow_C_InitCurrentFaction_Params Parms{};

	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Base = K2Node_DynamicCast_AsQtn_Goal_Manager_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetCurrentArc_ReturnValue = CallFunc_GetCurrentArc_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BS_Spawn_MonsterCloset_Snow.BS_Spawn_MonsterCloset_Snow_C.OnRep_CurrentFaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABS_Spawn_MonsterCloset_Snow_C::OnRep_CurrentFaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Spawn_MonsterCloset_Snow_C", "OnRep_CurrentFaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BS_Spawn_MonsterCloset_Snow.BS_Spawn_MonsterCloset_Snow_C.LOCAL_UpdateDecoration
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     L_BannerLocation                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RandomBoolFromStream_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_RandomBoolFromStream_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABS_Spawn_MonsterCloset_Snow_C::LOCAL_UpdateDecoration(const struct FVector& L_BannerLocation, class UMaterialInstance* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_RandomBoolFromStream_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, bool CallFunc_RandomBoolFromStream_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, int32 CallFunc_FFloor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Spawn_MonsterCloset_Snow_C", "LOCAL_UpdateDecoration");

	Params::ABS_Spawn_MonsterCloset_Snow_C_LOCAL_UpdateDecoration_Params Parms{};

	Parms.L_BannerLocation = L_BannerLocation;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_RandomBoolFromStream_ReturnValue = CallFunc_RandomBoolFromStream_ReturnValue;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;
	Parms.CallFunc_RandomBoolFromStream_ReturnValue_1 = CallFunc_RandomBoolFromStream_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BS_Spawn_MonsterCloset_Snow.BS_Spawn_MonsterCloset_Snow_C.SpawnTelegraph
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Starting                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABS_Spawn_MonsterCloset_Snow_C::SpawnTelegraph(bool Starting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Spawn_MonsterCloset_Snow_C", "SpawnTelegraph");

	Params::ABS_Spawn_MonsterCloset_Snow_C_SpawnTelegraph_Params Parms{};

	Parms.Starting = Starting;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BS_Spawn_MonsterCloset_Snow.BS_Spawn_MonsterCloset_Snow_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABS_Spawn_MonsterCloset_Snow_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Spawn_MonsterCloset_Snow_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BS_Spawn_MonsterCloset_Snow.BS_Spawn_MonsterCloset_Snow_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABS_Spawn_MonsterCloset_Snow_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Spawn_MonsterCloset_Snow_C", "ReceiveTick");

	Params::ABS_Spawn_MonsterCloset_Snow_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BS_Spawn_MonsterCloset_Snow.BS_Spawn_MonsterCloset_Snow_C.SpawnPresentationStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABS_Spawn_MonsterCloset_Snow_C::SpawnPresentationStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Spawn_MonsterCloset_Snow_C", "SpawnPresentationStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BS_Spawn_MonsterCloset_Snow.BS_Spawn_MonsterCloset_Snow_C.SpawnTelegraph_client
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Starting                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABS_Spawn_MonsterCloset_Snow_C::SpawnTelegraph_client(bool Starting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Spawn_MonsterCloset_Snow_C", "SpawnTelegraph_client");

	Params::ABS_Spawn_MonsterCloset_Snow_C_SpawnTelegraph_client_Params Parms{};

	Parms.Starting = Starting;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BS_Spawn_MonsterCloset_Snow.BS_Spawn_MonsterCloset_Snow_C.SpawnPresentationStop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABS_Spawn_MonsterCloset_Snow_C::SpawnPresentationStop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Spawn_MonsterCloset_Snow_C", "SpawnPresentationStop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BS_Spawn_MonsterCloset_Snow.BS_Spawn_MonsterCloset_Snow_C.PerAISpawn_Spawner
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      SpawnedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABS_Spawn_MonsterCloset_Snow_C::PerAISpawn_Spawner(class AActor* SpawnedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Spawn_MonsterCloset_Snow_C", "PerAISpawn_Spawner");

	Params::ABS_Spawn_MonsterCloset_Snow_C_PerAISpawn_Spawner_Params Parms{};

	Parms.SpawnedActor = SpawnedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BS_Spawn_MonsterCloset_Snow.BS_Spawn_MonsterCloset_Snow_C.OnArcChangeEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewArc                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABS_Spawn_MonsterCloset_Snow_C::OnArcChangeEvent(int32 NewArc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Spawn_MonsterCloset_Snow_C", "OnArcChangeEvent");

	Params::ABS_Spawn_MonsterCloset_Snow_C_OnArcChangeEvent_Params Parms{};

	Parms.NewArc = NewArc;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BS_Spawn_MonsterCloset_Snow.BS_Spawn_MonsterCloset_Snow_C.OnQtnReadyForGameplay
// (Event, Public, BlueprintEvent)
// Parameters:

void ABS_Spawn_MonsterCloset_Snow_C::OnQtnReadyForGameplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Spawn_MonsterCloset_Snow_C", "OnQtnReadyForGameplay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BS_Spawn_MonsterCloset_Snow.BS_Spawn_MonsterCloset_Snow_C.ExecuteUbergraph_BS_Spawn_MonsterCloset_Snow
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_starting                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_spawnedActor                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManagerBase_C*       K2Node_DynamicCast_AsQtn_Goal_Manager_Base                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_NewArc                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABS_Spawn_MonsterCloset_Snow_C::ExecuteUbergraph_BS_Spawn_MonsterCloset_Snow(int32 EntryPoint, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, float K2Node_Event_DeltaSeconds, bool K2Node_CustomEvent_starting, class AActor* K2Node_Event_spawnedActor, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManagerBase_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Base, bool K2Node_DynamicCast_bSuccess, int32 K2Node_CustomEvent_NewArc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Spawn_MonsterCloset_Snow_C", "ExecuteUbergraph_BS_Spawn_MonsterCloset_Snow");

	Params::ABS_Spawn_MonsterCloset_Snow_C_ExecuteUbergraph_BS_Spawn_MonsterCloset_Snow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_CustomEvent_starting = K2Node_CustomEvent_starting;
	Parms.K2Node_Event_spawnedActor = K2Node_Event_spawnedActor;
	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Base = K2Node_DynamicCast_AsQtn_Goal_Manager_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_NewArc = K2Node_CustomEvent_NewArc;

	UObject::ProcessEvent(Func, &Parms);

}

}


