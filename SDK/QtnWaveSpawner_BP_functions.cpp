#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnWaveSpawner_BP.QtnWaveSpawner_BP_C
// (Actor)

class UClass* AQtnWaveSpawner_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnWaveSpawner_BP_C");

	return Clss;
}


// QtnWaveSpawner_BP_C QtnWaveSpawner_BP.Default__QtnWaveSpawner_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AQtnWaveSpawner_BP_C* AQtnWaveSpawner_BP_C::GetDefaultObj()
{
	static class AQtnWaveSpawner_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AQtnWaveSpawner_BP_C*>(AQtnWaveSpawner_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QtnWaveSpawner_BP.QtnWaveSpawner_BP_C.SpawnFinished
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_DynamicCast_AsActor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ISpawningInterface_C>K2Node_DynamicCast_AsSpawning_Interface                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQtnWaveSpawner_BP_C::SpawnFinished(class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class ISpawningInterface_C> K2Node_DynamicCast_AsSpawning_Interface, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnWaveSpawner_BP_C", "SpawnFinished");

	Params::AQtnWaveSpawner_BP_C_SpawnFinished_Params Parms{};

	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsActor = K2Node_DynamicCast_AsActor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsSpawning_Interface = K2Node_DynamicCast_AsSpawning_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnWaveSpawner_BP.QtnWaveSpawner_BP_C.SpawnVisuals
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AQtnWaveSpawner_BP_C::SpawnVisuals()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnWaveSpawner_BP_C", "SpawnVisuals");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnWaveSpawner_BP.QtnWaveSpawner_BP_C.PostSpawnAIPresentation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                Body                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UAnimMontage*>        AnimArray_Local                                                  (Edit, BlueprintVisible)
// TScriptInterface<class ISpawningInterface_C>K2Node_DynamicCast_AsSpawning_Interface                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyController*          CallFunc_GetBodyController_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBodySpawnAnimArray         CallFunc_GetSpawnAnimsFromBody_AnimArrayStruct                   (HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnPawnMontage             K2Node_MakeStruct_QtnPawnMontage                                 (NoDestructor)
// struct FQtnActionIntention         K2Node_MakeStruct_QtnActionIntention                             (NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_DynamicCast_AsActor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ISpawningInterface_C>K2Node_DynamicCast_AsSpawning_Interface_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQtnWaveSpawner_BP_C::PostSpawnAIPresentation(class AQtnBodyPawn* Body, const TArray<class UAnimMontage*>& AnimArray_Local, TScriptInterface<class ISpawningInterface_C> K2Node_DynamicCast_AsSpawning_Interface, bool K2Node_DynamicCast_bSuccess, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue, const struct FBodySpawnAnimArray& CallFunc_GetSpawnAnimsFromBody_AnimArrayStruct, bool CallFunc_IsServer_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, class UAnimMontage* CallFunc_Array_Get_Item, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage, const struct FQtnActionIntention& K2Node_MakeStruct_QtnActionIntention, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class ISpawningInterface_C> K2Node_DynamicCast_AsSpawning_Interface_1, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnWaveSpawner_BP_C", "PostSpawnAIPresentation");

	Params::AQtnWaveSpawner_BP_C_PostSpawnAIPresentation_Params Parms{};

	Parms.Body = Body;
	Parms.AnimArray_Local = AnimArray_Local;
	Parms.K2Node_DynamicCast_AsSpawning_Interface = K2Node_DynamicCast_AsSpawning_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBodyController_ReturnValue = CallFunc_GetBodyController_ReturnValue;
	Parms.CallFunc_GetSpawnAnimsFromBody_AnimArrayStruct = CallFunc_GetSpawnAnimsFromBody_AnimArrayStruct;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_MakeStruct_QtnPawnMontage = K2Node_MakeStruct_QtnPawnMontage;
	Parms.K2Node_MakeStruct_QtnActionIntention = K2Node_MakeStruct_QtnActionIntention;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsActor = K2Node_DynamicCast_AsActor;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsSpawning_Interface_1 = K2Node_DynamicCast_AsSpawning_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnWaveSpawner_BP.QtnWaveSpawner_BP_C.SpawnTelegraph
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Starting                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AQtnWaveSpawner_BP_C::SpawnTelegraph(bool Starting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnWaveSpawner_BP_C", "SpawnTelegraph");

	Params::AQtnWaveSpawner_BP_C_SpawnTelegraph_Params Parms{};

	Parms.Starting = Starting;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnWaveSpawner_BP.QtnWaveSpawner_BP_C.SpawnWave
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSpawnGroupSpec             SpawnGroup                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FVector                     AttentionLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      AssociatedActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQtnWaveSpawner_BP_C::SpawnWave(const struct FSpawnGroupSpec& SpawnGroup, const struct FVector& AttentionLocation, class AActor* AssociatedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnWaveSpawner_BP_C", "SpawnWave");

	Params::AQtnWaveSpawner_BP_C_SpawnWave_Params Parms{};

	Parms.SpawnGroup = SpawnGroup;
	Parms.AttentionLocation = AttentionLocation;
	Parms.AssociatedActor = AssociatedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnWaveSpawner_BP.QtnWaveSpawner_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AQtnWaveSpawner_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnWaveSpawner_BP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnWaveSpawner_BP.QtnWaveSpawner_BP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQtnWaveSpawner_BP_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnWaveSpawner_BP_C", "ReceiveTick");

	Params::AQtnWaveSpawner_BP_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnWaveSpawner_BP.QtnWaveSpawner_BP_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void AQtnWaveSpawner_BP_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnWaveSpawner_BP_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnWaveSpawner_BP.QtnWaveSpawner_BP_C.SkirmishGroupTelegraphStart_ServerOnly
// (BlueprintAuthorityOnly, Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class AQtnSkirmish*                SpawningSkirmish                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnSkirmishRequestSpawnParamsSkirmishRequestSpawnParams                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void AQtnWaveSpawner_BP_C::SkirmishGroupTelegraphStart_ServerOnly(class AQtnSkirmish* SpawningSkirmish, struct FQtnSkirmishRequestSpawnParams& SkirmishRequestSpawnParams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnWaveSpawner_BP_C", "SkirmishGroupTelegraphStart_ServerOnly");

	Params::AQtnWaveSpawner_BP_C_SkirmishGroupTelegraphStart_ServerOnly_Params Parms{};

	Parms.SpawningSkirmish = SpawningSkirmish;
	Parms.SkirmishRequestSpawnParams = SkirmishRequestSpawnParams;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnWaveSpawner_BP.QtnWaveSpawner_BP_C.CallSpawnTelegraph_MULTI
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Starting                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AQtnWaveSpawner_BP_C::CallSpawnTelegraph_MULTI(bool Starting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnWaveSpawner_BP_C", "CallSpawnTelegraph_MULTI");

	Params::AQtnWaveSpawner_BP_C_CallSpawnTelegraph_MULTI_Params Parms{};

	Parms.Starting = Starting;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnWaveSpawner_BP.QtnWaveSpawner_BP_C.OnQtnSpawnerSpawned
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      SpawnedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQtnWaveSpawner_BP_C::OnQtnSpawnerSpawned(class AActor* SpawnedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnWaveSpawner_BP_C", "OnQtnSpawnerSpawned");

	Params::AQtnWaveSpawner_BP_C_OnQtnSpawnerSpawned_Params Parms{};

	Parms.SpawnedActor = SpawnedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnWaveSpawner_BP.QtnWaveSpawner_BP_C.PerAISpawn_Spawner
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      SpawnedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQtnWaveSpawner_BP_C::PerAISpawn_Spawner(class AActor* SpawnedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnWaveSpawner_BP_C", "PerAISpawn_Spawner");

	Params::AQtnWaveSpawner_BP_C_PerAISpawn_Spawner_Params Parms{};

	Parms.SpawnedActor = SpawnedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnWaveSpawner_BP.QtnWaveSpawner_BP_C.ExecuteUbergraph_QtnWaveSpawner_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpawnGroupSpec             K2Node_CustomEvent_SpawnGroup                                    (HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_AttentionLocation                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_AssociatedActor                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClassPopulation            CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_LoadClassAsset_Blocking_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsQtn_Body_Pawn                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_SpawnWithTag_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_DynamicCast_AsQtn_Body_Pawn                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue                      (None)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyController*          CallFunc_GetBodyController_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnSkirmish*                K2Node_Event_spawningSkirmish                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnSkirmishRequestSpawnParamsK2Node_Event_skirmishRequestSpawnParams                          (ConstParm, NoDestructor)
// bool                               K2Node_CustomEvent_starting                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_DynamicCast_AsActor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_DynamicCast_AsActor_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ISpawningInterface_C>K2Node_DynamicCast_AsSpawning_Interface                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ISpawningInterface_C>K2Node_DynamicCast_AsSpawning_Interface_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_spawnedActor                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_DynamicCast_AsQtn_Body_Pawn_1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_SpawnedActor                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AQtnBodyPawn*>        CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies                 (ReferenceParm, ContainsInstancedReference)
// class AQtnBodyPawn*                CallFunc_Array_Random_OutItem                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Random_OutIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerControllerBP_localPlayerController        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerControllerBP_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AQtnPawn*>            CallFunc_GetTrackedThreats_ReturnValue                           (ConstParm, ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQtnWaveSpawner_BP_C::ExecuteUbergraph_QtnWaveSpawner_BP(int32 EntryPoint, const struct FSpawnGroupSpec& K2Node_CustomEvent_SpawnGroup, const struct FVector& K2Node_CustomEvent_AttentionLocation, class AActor* K2Node_CustomEvent_AssociatedActor, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FClassPopulation& CallFunc_Array_Get_Item, bool CallFunc_LessEqual_IntInt_ReturnValue, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsQtn_Body_Pawn, bool K2Node_ClassDynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue, float K2Node_Event_DeltaSeconds, float CallFunc_Abs_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UClass* CallFunc_Array_Get_Item_1, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_SpawnWithTag_ReturnValue, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Variable_1, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_2, class AQtnSkirmish* K2Node_Event_spawningSkirmish, const struct FQtnSkirmishRequestSpawnParams& K2Node_Event_skirmishRequestSpawnParams, bool K2Node_CustomEvent_starting, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess_1, class AActor* K2Node_DynamicCast_AsActor_1, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class ISpawningInterface_C> K2Node_DynamicCast_AsSpawning_Interface, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class ISpawningInterface_C> K2Node_DynamicCast_AsSpawning_Interface_1, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, class AActor* K2Node_Event_spawnedActor, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn_1, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, class AActor* K2Node_CustomEvent_SpawnedActor, TArray<class AQtnBodyPawn*>& CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies, class AQtnBodyPawn* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, TArray<class AQtnPawn*>& CallFunc_GetTrackedThreats_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnWaveSpawner_BP_C", "ExecuteUbergraph_QtnWaveSpawner_BP");

	Params::AQtnWaveSpawner_BP_C_ExecuteUbergraph_QtnWaveSpawner_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_SpawnGroup = K2Node_CustomEvent_SpawnGroup;
	Parms.K2Node_CustomEvent_AttentionLocation = K2Node_CustomEvent_AttentionLocation;
	Parms.K2Node_CustomEvent_AssociatedActor = K2Node_CustomEvent_AssociatedActor;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_LoadClassAsset_Blocking_ReturnValue = CallFunc_LoadClassAsset_Blocking_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsQtn_Body_Pawn = K2Node_ClassDynamicCast_AsQtn_Body_Pawn;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_SpawnWithTag_ReturnValue = CallFunc_SpawnWithTag_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Body_Pawn = K2Node_DynamicCast_AsQtn_Body_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue = CallFunc_StaticMakeEventMessage_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_GetBodyController_ReturnValue = CallFunc_GetBodyController_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue_2 = CallFunc_IsServer_ReturnValue_2;
	Parms.K2Node_Event_spawningSkirmish = K2Node_Event_spawningSkirmish;
	Parms.K2Node_Event_skirmishRequestSpawnParams = K2Node_Event_skirmishRequestSpawnParams;
	Parms.K2Node_CustomEvent_starting = K2Node_CustomEvent_starting;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsActor = K2Node_DynamicCast_AsActor;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsActor_1 = K2Node_DynamicCast_AsActor_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsSpawning_Interface = K2Node_DynamicCast_AsSpawning_Interface;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsSpawning_Interface_1 = K2Node_DynamicCast_AsSpawning_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_Event_spawnedActor = K2Node_Event_spawnedActor;
	Parms.K2Node_DynamicCast_AsQtn_Body_Pawn_1 = K2Node_DynamicCast_AsQtn_Body_Pawn_1;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.K2Node_CustomEvent_SpawnedActor = K2Node_CustomEvent_SpawnedActor;
	Parms.CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies = CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies;
	Parms.CallFunc_Array_Random_OutItem = CallFunc_Array_Random_OutItem;
	Parms.CallFunc_Array_Random_OutIndex = CallFunc_Array_Random_OutIndex;
	Parms.CallFunc_GetLocalPlayerControllerBP_localPlayerController = CallFunc_GetLocalPlayerControllerBP_localPlayerController;
	Parms.CallFunc_GetLocalPlayerControllerBP_outputPin = CallFunc_GetLocalPlayerControllerBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetTrackedThreats_ReturnValue = CallFunc_GetTrackedThreats_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnWaveSpawner_BP.QtnWaveSpawner_BP_C.SpawningComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnWaveSpawner_BP_C*        CompletedSpawner                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQtnWaveSpawner_BP_C::SpawningComplete__DelegateSignature(class AQtnWaveSpawner_BP_C* CompletedSpawner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnWaveSpawner_BP_C", "SpawningComplete__DelegateSignature");

	Params::AQtnWaveSpawner_BP_C_SpawningComplete__DelegateSignature_Params Parms{};

	Parms.CompletedSpawner = CompletedSpawner;

	UObject::ProcessEvent(Func, &Parms);

}

}


