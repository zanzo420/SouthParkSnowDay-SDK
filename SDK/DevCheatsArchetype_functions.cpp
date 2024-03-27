#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DevCheatsArchetype.DevCheatsArchetype_C
// (None)

class UClass* UDevCheatsArchetype_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DevCheatsArchetype_C");

	return Clss;
}


// DevCheatsArchetype_C DevCheatsArchetype.Default__DevCheatsArchetype_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevCheatsArchetype_C* UDevCheatsArchetype_C::GetDefaultObj()
{
	static class UDevCheatsArchetype_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevCheatsArchetype_C*>(UDevCheatsArchetype_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DevCheatsArchetype.DevCheatsArchetype_C.TestLookAtCam_LocalOnly
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULookAtPerceptionComponent_C*L_enemyBSPerception                                              (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      L_lookAtTarget                                                   (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawnArchetype_C*   CallFunc_GetOwningPlayerPawn_owningPlayerPawn                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOriginalBodyPawn_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerControllerArchetype_C*CallFunc_GetOwningPlayerController_owningPlayerController        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetPlayerUI_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetDebugTargetActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDevCheatsArchetype_C::TestLookAtCam_LocalOnly(class ULookAtPerceptionComponent_C* L_enemyBSPerception, class AActor* L_lookAtTarget, class AQtnPlayerPawnArchetype_C* CallFunc_GetOwningPlayerPawn_owningPlayerPawn, class AQtnBodyPawn* CallFunc_GetOriginalBodyPawn_ReturnValue, class AQtnPlayerControllerArchetype_C* CallFunc_GetOwningPlayerController_owningPlayerController, class AQtnPlayerUI* CallFunc_GetPlayerUI_ReturnValue, class AActor* CallFunc_GetDebugTargetActor_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "TestLookAtCam_LocalOnly");

	Params::UDevCheatsArchetype_C_TestLookAtCam_LocalOnly_Params Parms{};

	Parms.L_enemyBSPerception = L_enemyBSPerception;
	Parms.L_lookAtTarget = L_lookAtTarget;
	Parms.CallFunc_GetOwningPlayerPawn_owningPlayerPawn = CallFunc_GetOwningPlayerPawn_owningPlayerPawn;
	Parms.CallFunc_GetOriginalBodyPawn_ReturnValue = CallFunc_GetOriginalBodyPawn_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_owningPlayerController = CallFunc_GetOwningPlayerController_owningPlayerController;
	Parms.CallFunc_GetPlayerUI_ReturnValue = CallFunc_GetPlayerUI_ReturnValue;
	Parms.CallFunc_GetDebugTargetActor_ReturnValue = CallFunc_GetDebugTargetActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.Set Enemy Bullshits
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      BS_Type                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Remaining_Bullshits                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetClassNameWithoutSuffix_ReturnValue                   (ZeroConstructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)

void UDevCheatsArchetype_C::Set_Enemy_Bullshits(class UClass* BS_Type, int32 Remaining_Bullshits, const class FString& CallFunc_GetClassNameWithoutSuffix_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "Set Enemy Bullshits");

	Params::UDevCheatsArchetype_C_Set_Enemy_Bullshits_Params Parms{};

	Parms.BS_Type = BS_Type;
	Parms.Remaining_Bullshits = Remaining_Bullshits;
	Parms.CallFunc_GetClassNameWithoutSuffix_ReturnValue = CallFunc_GetClassNameWithoutSuffix_ReturnValue;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype = K2Node_DynamicCast_AsQtn_Game_State_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.GetOwningPlayerController
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AQtnPlayerControllerArchetype_C*OwningPlayerController                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawnArchetype_C*   K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerController*        CallFunc_GetQtnPlayerController_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerControllerArchetype_C*K2Node_DynamicCast_AsQtn_Player_Controller_Archetype             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDevCheatsArchetype_C::GetOwningPlayerController(class AQtnPlayerControllerArchetype_C** OwningPlayerController, class AActor* CallFunc_GetOwner_ReturnValue, class AQtnPlayerPawnArchetype_C* K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype, bool K2Node_DynamicCast_bSuccess, class AQtnPlayerController* CallFunc_GetQtnPlayerController_ReturnValue, class AQtnPlayerControllerArchetype_C* K2Node_DynamicCast_AsQtn_Player_Controller_Archetype, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "GetOwningPlayerController");

	Params::UDevCheatsArchetype_C_GetOwningPlayerController_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype = K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetQtnPlayerController_ReturnValue = CallFunc_GetQtnPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Player_Controller_Archetype = K2Node_DynamicCast_AsQtn_Player_Controller_Archetype;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (OwningPlayerController != nullptr)
		*OwningPlayerController = Parms.OwningPlayerController;

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.GetOwningPlayerPawn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AQtnPlayerPawnArchetype_C*   OwningPlayerPawn                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawnArchetype_C*   K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDevCheatsArchetype_C::GetOwningPlayerPawn(class AQtnPlayerPawnArchetype_C** OwningPlayerPawn, class AActor* CallFunc_GetOwner_ReturnValue, class AQtnPlayerPawnArchetype_C* K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "GetOwningPlayerPawn");

	Params::UDevCheatsArchetype_C_GetOwningPlayerPawn_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype = K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (OwningPlayerPawn != nullptr)
		*OwningPlayerPawn = Parms.OwningPlayerPawn;

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.AddCheatVerbFromDebug
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      CheatVerbClass                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              K2Node_DynamicCast_AsQtn_Player_Pawn                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOriginalBodyPawn_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnVerbComponent*           CallFunc_GetVerbComponent_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtn_CheatVerb_Archetype_C*  CallFunc_AddVerb_ServerOnly_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDevCheatsArchetype_C::AddCheatVerbFromDebug(class UClass* CheatVerbClass, class AActor* CallFunc_GetOwner_ReturnValue, class AQtnPlayerPawn* K2Node_DynamicCast_AsQtn_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class AQtnBodyPawn* CallFunc_GetOriginalBodyPawn_ReturnValue, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue, class UQtn_CheatVerb_Archetype_C* CallFunc_AddVerb_ServerOnly_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "AddCheatVerbFromDebug");

	Params::UDevCheatsArchetype_C_AddCheatVerbFromDebug_Params Parms{};

	Parms.CheatVerbClass = CheatVerbClass;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Player_Pawn = K2Node_DynamicCast_AsQtn_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOriginalBodyPawn_ReturnValue = CallFunc_GetOriginalBodyPawn_ReturnValue;
	Parms.CallFunc_GetVerbComponent_ReturnValue = CallFunc_GetVerbComponent_ReturnValue;
	Parms.CallFunc_AddVerb_ServerOnly_ReturnValue = CallFunc_AddVerb_ServerOnly_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.Spawn Actor from Debug Server Only
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ActorClass                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Count                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MinZ                                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              PlayerPawn                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  SpawnTransform                                                   (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
// int32                              RemainingCount                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetClassNameWithoutSuffix_ReturnValue                   (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SnapToGround_foundGround                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_SnapToGround_hitNormal                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPhysicalSurface        CallFunc_SnapToGround_physicalSurface                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_SnapToGround_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorBounds_Origin                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorBounds_BoxExtent                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    K2Node_DynamicCast_AsQtn_Pawn                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              K2Node_DynamicCast_AsQtn_Player_Pawn                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)

void UDevCheatsArchetype_C::Spawn_Actor_from_Debug_Server_Only(class UClass*& ActorClass, int32& Count, float MinZ, class AQtnPlayerPawn* PlayerPawn, const struct FTransform& SpawnTransform, int32 RemainingCount, int32 Temp_int_Variable, const class FString& CallFunc_GetClassNameWithoutSuffix_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_SnapToGround_foundGround, const struct FVector& CallFunc_SnapToGround_hitNormal, enum class EPhysicalSurface CallFunc_SnapToGround_physicalSurface, const struct FVector& CallFunc_SnapToGround_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, class AActor* CallFunc_FinishSpawningActor_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetActorBounds_Origin, const struct FVector& CallFunc_GetActorBounds_BoxExtent, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, class AQtnPawn* K2Node_DynamicCast_AsQtn_Pawn, bool K2Node_DynamicCast_bSuccess, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_BreakVector_X_3, float CallFunc_BreakVector_Y_3, float CallFunc_BreakVector_Z_3, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AQtnPlayerPawn* K2Node_DynamicCast_AsQtn_Player_Pawn, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "Spawn Actor from Debug Server Only");

	Params::UDevCheatsArchetype_C_Spawn_Actor_from_Debug_Server_Only_Params Parms{};

	Parms.ActorClass = ActorClass;
	Parms.Count = Count;
	Parms.MinZ = MinZ;
	Parms.PlayerPawn = PlayerPawn;
	Parms.SpawnTransform = SpawnTransform;
	Parms.RemainingCount = RemainingCount;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetClassNameWithoutSuffix_ReturnValue = CallFunc_GetClassNameWithoutSuffix_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_BreakTransform_Location_1 = CallFunc_BreakTransform_Location_1;
	Parms.CallFunc_BreakTransform_Rotation_1 = CallFunc_BreakTransform_Rotation_1;
	Parms.CallFunc_BreakTransform_Scale_1 = CallFunc_BreakTransform_Scale_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_SnapToGround_foundGround = CallFunc_SnapToGround_foundGround;
	Parms.CallFunc_SnapToGround_hitNormal = CallFunc_SnapToGround_hitNormal;
	Parms.CallFunc_SnapToGround_physicalSurface = CallFunc_SnapToGround_physicalSurface;
	Parms.CallFunc_SnapToGround_ReturnValue = CallFunc_SnapToGround_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_2 = CallFunc_Add_VectorVector_ReturnValue_2;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetActorBounds_Origin = CallFunc_GetActorBounds_Origin;
	Parms.CallFunc_GetActorBounds_BoxExtent = CallFunc_GetActorBounds_BoxExtent;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_BreakVector_X_2 = CallFunc_BreakVector_X_2;
	Parms.CallFunc_BreakVector_Y_2 = CallFunc_BreakVector_Y_2;
	Parms.CallFunc_BreakVector_Z_2 = CallFunc_BreakVector_Z_2;
	Parms.K2Node_DynamicCast_AsQtn_Pawn = K2Node_DynamicCast_AsQtn_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_BreakVector_X_3 = CallFunc_BreakVector_X_3;
	Parms.CallFunc_BreakVector_Y_3 = CallFunc_BreakVector_Y_3;
	Parms.CallFunc_BreakVector_Z_3 = CallFunc_BreakVector_Z_3;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Player_Pawn = K2Node_DynamicCast_AsQtn_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.QtnHorde_LoadSnowmansLand
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDevCheatsArchetype_C::QtnHorde_LoadSnowmansLand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "QtnHorde_LoadSnowmansLand");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.QtnHorde_LoadBoomBridge
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDevCheatsArchetype_C::QtnHorde_LoadBoomBridge()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "QtnHorde_LoadBoomBridge");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.QtnHorde_LoadCitySquare
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDevCheatsArchetype_C::QtnHorde_LoadCitySquare()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "QtnHorde_LoadCitySquare");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.QtnHorde_LoadIsland
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDevCheatsArchetype_C::QtnHorde_LoadIsland()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "QtnHorde_LoadIsland");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.QtnHorde_LoadTwoFold
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDevCheatsArchetype_C::QtnHorde_LoadTwoFold()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "QtnHorde_LoadTwoFold");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.QtnHorde_LoadTrainstation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDevCheatsArchetype_C::QtnHorde_LoadTrainstation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "QtnHorde_LoadTrainstation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.ServerSpawnActor
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ActorClass                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Count                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDevCheatsArchetype_C::ServerSpawnActor(class UClass* ActorClass, int32 Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "ServerSpawnActor");

	Params::UDevCheatsArchetype_C_ServerSpawnActor_Params Parms{};

	Parms.ActorClass = ActorClass;
	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.LocalSpawnActor
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ActorClass                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Count                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDevCheatsArchetype_C::LocalSpawnActor(class UClass*& ActorClass, int32& Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "LocalSpawnActor");

	Params::UDevCheatsArchetype_C_LocalSpawnActor_Params Parms{};

	Parms.ActorClass = ActorClass;
	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.QtnSpawnAgain
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDevCheatsArchetype_C::QtnSpawnAgain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "QtnSpawnAgain");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.OnSpawnNPC_ServerOnly
// (Event, Public, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                SpawnedNPC                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDevCheatsArchetype_C::OnSpawnNPC_ServerOnly(class AQtnBodyPawn* SpawnedNPC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "OnSpawnNPC_ServerOnly");

	Params::UDevCheatsArchetype_C_OnSpawnNPC_ServerOnly_Params Parms{};

	Parms.SpawnedNPC = SpawnedNPC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.LocalAddCheatVerb
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      CheatVerbClass                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDevCheatsArchetype_C::LocalAddCheatVerb(class UClass*& CheatVerbClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "LocalAddCheatVerb");

	Params::UDevCheatsArchetype_C_LocalAddCheatVerb_Params Parms{};

	Parms.CheatVerbClass = CheatVerbClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.ServerAddCheatVerb
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      CheatVerbClass                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDevCheatsArchetype_C::ServerAddCheatVerb(class UClass* CheatVerbClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "ServerAddCheatVerb");

	Params::UDevCheatsArchetype_C_ServerAddCheatVerb_Params Parms{};

	Parms.CheatVerbClass = CheatVerbClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.ServerInduceEnemyCheatOnBody
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                AiBody                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CheatVerbClass                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDevCheatsArchetype_C::ServerInduceEnemyCheatOnBody(class AQtnBodyPawn* AiBody, class UClass* CheatVerbClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "ServerInduceEnemyCheatOnBody");

	Params::UDevCheatsArchetype_C_ServerInduceEnemyCheatOnBody_Params Parms{};

	Parms.AiBody = AiBody;
	Parms.CheatVerbClass = CheatVerbClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.QtnForceEnemyBullshitNerfed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDevCheatsArchetype_C::QtnForceEnemyBullshitNerfed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "QtnForceEnemyBullshitNerfed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.QtnForceEnemyBullshitProjectileKids
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDevCheatsArchetype_C::QtnForceEnemyBullshitProjectileKids()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "QtnForceEnemyBullshitProjectileKids");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.QtnForceEnemyBullshitBubbleShield
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDevCheatsArchetype_C::QtnForceEnemyBullshitBubbleShield()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "QtnForceEnemyBullshitBubbleShield");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.QtnForceEnemyBullshitDoOver
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDevCheatsArchetype_C::QtnForceEnemyBullshitDoOver()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "QtnForceEnemyBullshitDoOver");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.QtnForceEnemyBullshitVampirism
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDevCheatsArchetype_C::QtnForceEnemyBullshitVampirism()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "QtnForceEnemyBullshitVampirism");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.QtnForceEnemyBullshitHailStorm
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDevCheatsArchetype_C::QtnForceEnemyBullshitHailStorm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "QtnForceEnemyBullshitHailStorm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.QtnForceEnemyBullshitLaserSword
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDevCheatsArchetype_C::QtnForceEnemyBullshitLaserSword()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "QtnForceEnemyBullshitLaserSword");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.QtnForceEnemyBullshitSuperSize
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDevCheatsArchetype_C::QtnForceEnemyBullshitSuperSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "QtnForceEnemyBullshitSuperSize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.QtnForceEnemyBullshitStupidProjectiles
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDevCheatsArchetype_C::QtnForceEnemyBullshitStupidProjectiles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "QtnForceEnemyBullshitStupidProjectiles");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.QtnForceEnemyBullshitTraps
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDevCheatsArchetype_C::QtnForceEnemyBullshitTraps()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "QtnForceEnemyBullshitTraps");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.QtnToggleBullshitDebugInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDevCheatsArchetype_C::QtnToggleBullshitDebugInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "QtnToggleBullshitDebugInfo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.QtnAdvanceCartmanBossPhase
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDevCheatsArchetype_C::QtnAdvanceCartmanBossPhase()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "QtnAdvanceCartmanBossPhase");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.QtnRequestCartmanBullshitDoOver
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDevCheatsArchetype_C::QtnRequestCartmanBullshitDoOver()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "QtnRequestCartmanBullshitDoOver");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.QtnRequestCartmanBullshitNerfed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDevCheatsArchetype_C::QtnRequestCartmanBullshitNerfed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "QtnRequestCartmanBullshitNerfed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.QtnRequestCartmanBullshitBubbleShield
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDevCheatsArchetype_C::QtnRequestCartmanBullshitBubbleShield()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "QtnRequestCartmanBullshitBubbleShield");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.QtnRequestCartmanBullshitSuperSize
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDevCheatsArchetype_C::QtnRequestCartmanBullshitSuperSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "QtnRequestCartmanBullshitSuperSize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.QtnShizaCheat_NextPhase
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDevCheatsArchetype_C::QtnShizaCheat_NextPhase()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "QtnShizaCheat_NextPhase");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.QtnShizaCheat_Cannon!
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDevCheatsArchetype_C::QtnShizaCheat_Cannon_()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "QtnShizaCheat_Cannon!");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.QtnShizaCheat_Recovery!
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDevCheatsArchetype_C::QtnShizaCheat_Recovery_()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "QtnShizaCheat_Recovery!");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.QtnShizaCheat_UseExperimentalFightLogic
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDevCheatsArchetype_C::QtnShizaCheat_UseExperimentalFightLogic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "QtnShizaCheat_UseExperimentalFightLogic");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.QtnShizaCheat_RequestVerb
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              VerbIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDevCheatsArchetype_C::QtnShizaCheat_RequestVerb(int32 VerbIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "QtnShizaCheat_RequestVerb");

	Params::UDevCheatsArchetype_C_QtnShizaCheat_RequestVerb_Params Parms{};

	Parms.VerbIndex = VerbIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.QtnSkipHankeyCannon
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDevCheatsArchetype_C::QtnSkipHankeyCannon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "QtnSkipHankeyCannon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.QtnToggleInfiniteCannons
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDevCheatsArchetype_C::QtnToggleInfiniteCannons()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "QtnToggleInfiniteCannons");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.ServerToggleInfiniteCannons
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UDevCheatsArchetype_C::ServerToggleInfiniteCannons()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "ServerToggleInfiniteCannons");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.ServerAddEnemyUpgrade
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      EnemyUpgradeClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDevCheatsArchetype_C::ServerAddEnemyUpgrade(class UClass* EnemyUpgradeClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "ServerAddEnemyUpgrade");

	Params::UDevCheatsArchetype_C_ServerAddEnemyUpgrade_Params Parms{};

	Parms.EnemyUpgradeClass = EnemyUpgradeClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.QtnFTUXForceCompletion
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDevCheatsArchetype_C::QtnFTUXForceCompletion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "QtnFTUXForceCompletion");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.QtnLookAt
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDevCheatsArchetype_C::QtnLookAt()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "QtnLookAt");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.QtnSetDecalsSpawnRadius
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Radius                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDevCheatsArchetype_C::QtnSetDecalsSpawnRadius(float Radius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "QtnSetDecalsSpawnRadius");

	Params::UDevCheatsArchetype_C_QtnSetDecalsSpawnRadius_Params Parms{};

	Parms.Radius = Radius;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.QtnToggleDecalsDebug
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDevCheatsArchetype_C::QtnToggleDecalsDebug()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "QtnToggleDecalsDebug");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.QtnSetFartCloudOverlappedThreshold
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              OverlappedThreshold                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDevCheatsArchetype_C::QtnSetFartCloudOverlappedThreshold(float OverlappedThreshold)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "QtnSetFartCloudOverlappedThreshold");

	Params::UDevCheatsArchetype_C_QtnSetFartCloudOverlappedThreshold_Params Parms{};

	Parms.OverlappedThreshold = OverlappedThreshold;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.QtnToggleFartCloudOverlappedDebug
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDevCheatsArchetype_C::QtnToggleFartCloudOverlappedDebug()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "QtnToggleFartCloudOverlappedDebug");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.QtnSetFartCloudMergeTriggerThreshold
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TriggerThreshold                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDevCheatsArchetype_C::QtnSetFartCloudMergeTriggerThreshold(float TriggerThreshold)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "QtnSetFartCloudMergeTriggerThreshold");

	Params::UDevCheatsArchetype_C_QtnSetFartCloudMergeTriggerThreshold_Params Parms{};

	Parms.TriggerThreshold = TriggerThreshold;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.QtnRememberAllCards
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDevCheatsArchetype_C::QtnRememberAllCards()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "QtnRememberAllCards");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.QtnForgetAllCards
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDevCheatsArchetype_C::QtnForgetAllCards()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "QtnForgetAllCards");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.QtnRememberRandomCards
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDevCheatsArchetype_C::QtnRememberRandomCards()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "QtnRememberRandomCards");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.QtnEquipWeaponGrenadier
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDevCheatsArchetype_C::QtnEquipWeaponGrenadier()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "QtnEquipWeaponGrenadier");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.QtnLevelSocialHub
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDevCheatsArchetype_C::QtnLevelSocialHub()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "QtnLevelSocialHub");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.QtnLevelUpgradeTester
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDevCheatsArchetype_C::QtnLevelUpgradeTester()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "QtnLevelUpgradeTester");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.QtnRestartCurrentLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDevCheatsArchetype_C::QtnRestartCurrentLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "QtnRestartCurrentLevel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DevCheatsArchetype.DevCheatsArchetype_C.ExecuteUbergraph_DevCheatsArchetype
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerUIBP_localPlayerUI                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerUIBP_outputPin                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_actorClass_1                                  (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_count_1                                       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_CustomEvent_actorClass                                    (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_count                                         (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_Event_spawnedNPC                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_cheatVerbClass_2                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_cheatVerbClass_1                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_CustomEvent_aiBody                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_cheatVerbClass                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyController*          CallFunc_GetBodyController_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_SyncLoadClass_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_SyncLoadClass_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base_1     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_SyncLoadClass_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_SyncLoadClass_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base_2     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base_3     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_SyncLoadClass_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_SyncLoadClass_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base_4     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base_5     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_SyncLoadClass_ReturnValue_6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_SyncLoadClass_ReturnValue_7                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base_6     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base_7     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_7                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_SyncLoadClass_ReturnValue_8                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_SyncLoadClass_ReturnValue_9                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base_8     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_8                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base_9     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_9                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// TSubclassOf<class AActor>          CallFunc_SyncLoadActorClass_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IInterface_BodyPawn_CartmanBoss_C>K2Node_DynamicCast_AsInterface_Body_Pawn_Cartman_Boss            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_GetAllActorsOfClass_OutActors_1                         (ReferenceParm)
// TArray<class AActor*>              CallFunc_GetAllActorsOfClass_OutActors_2                         (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IInterface_BodyPawn_CartmanBoss_C>K2Node_DynamicCast_AsInterface_Body_Pawn_Cartman_Boss_1          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInterface_BodyPawn_CartmanBoss_C>K2Node_DynamicCast_AsInterface_Body_Pawn_Cartman_Boss_2          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_GetAllActorsOfClass_OutActors_3                         (ReferenceParm)
// TArray<class AActor*>              CallFunc_GetAllActorsOfClass_OutActors_4                         (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IInterface_BodyPawn_CartmanBoss_C>K2Node_DynamicCast_AsInterface_Body_Pawn_Cartman_Boss_3          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInterface_BodyPawn_CartmanBoss_C>K2Node_DynamicCast_AsInterface_Body_Pawn_Cartman_Boss_4          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class AActor>          CallFunc_SyncLoadActorClass_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetActorOfClass_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IInterface_QtnPawn_ShizaHulud_C>K2Node_DynamicCast_AsInterface_Qtn_Pawn_Shiza_Hulud              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInterface_QtnPawn_ShizaHulud_C>K2Node_DynamicCast_AsInterface_Qtn_Pawn_Shiza_Hulud_1            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetActorOfClass_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IInterface_QtnPawn_ShizaHulud_C>K2Node_DynamicCast_AsInterface_Qtn_Pawn_Shiza_Hulud_2            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetActorOfClass_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetActorOfClass_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IInterface_QtnPawn_ShizaHulud_C>K2Node_DynamicCast_AsInterface_Qtn_Pawn_Shiza_Hulud_3            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInterface_QtnPawn_ShizaHulud_C>K2Node_DynamicCast_AsInterface_Qtn_Pawn_Shiza_Hulud_4            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_VerbIndex                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_SewagePlant_C*K2Node_DynamicCast_AsQtn_Goal_Manager_Sewage_Plant               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInterface_QtnGoal_SewagePlant_Arc4_HankeyBattle_C>K2Node_DynamicCast_AsInterface_Qtn_Goal_Sewage_Plant_Arc_4_Hankey_Battle(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInterface_QtnGoal_SewagePlant_Arc4_HankeyBattle_C>K2Node_DynamicCast_AsInterface_Qtn_Goal_Sewage_Plant_Arc_4_Hankey_Battle_1(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetHankeyWorm_hankeyWorm                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IInterface_QtnPawn_ShizaHulud_C>K2Node_DynamicCast_AsInterface_Qtn_Pawn_Shiza_Hulud_5            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_14                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_CustomEvent_enemyUpgradeClass                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetClassNameWithoutSuffix_ReturnValue                   (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class UQtnEnemyUpgradeHandlerSubsystem*CallFunc_GetEnemyUpgradeHandlerSubsystem_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerControllerArchetype_C*CallFunc_GetOwningPlayerController_owningPlayerController        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_MakeLiteralString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UQtnLocalOptionsSaveData*    CallFunc_GetSaveLoadDataBP_localOptionsSaveData                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCloudOptionsSaveData*    CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnProgressSaveData*        CallFunc_GetSaveLoadDataBP_progressSaveData                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetSaveLoadDataBP_outputPin                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFTUXDataBag_C*              CallFunc_GetCustomDataBag_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_radius                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameModeMissionArchetype_C*K2Node_DynamicCast_AsQtn_Game_Mode_Mission_Archetype             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_15                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_OverlappedThreshold                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameModeMissionArchetype_C*K2Node_DynamicCast_AsQtn_Game_Mode_Mission_Archetype_1           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_16                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameModeMissionArchetype_C*K2Node_DynamicCast_AsQtn_Game_Mode_Mission_Archetype_2           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_17                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_TriggerThreshold                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameModeMissionArchetype_C*K2Node_DynamicCast_AsQtn_Game_Mode_Mission_Archetype_3           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_18                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameModeMissionArchetype_C*K2Node_DynamicCast_AsQtn_Game_Mode_Mission_Archetype_4           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_19                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerControllerBP_localPlayerController        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerControllerBP_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnLocalOptionsSaveData*    CallFunc_GetSaveLoadDataBP_localOptionsSaveData_1                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCloudOptionsSaveData*    CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData_1                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnProgressSaveData*        CallFunc_GetSaveLoadDataBP_progressSaveData_1                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetSaveLoadDataBP_outputPin_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USocialHubDataBag_C*         CallFunc_GetCustomDataBag_ReturnValue_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerControllerBP_localPlayerController_1      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerControllerBP_outputPin_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnUpgradeSettings         CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnLocalOptionsSaveData*    CallFunc_GetSaveLoadDataBP_localOptionsSaveData_2                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCloudOptionsSaveData*    CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData_2                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnProgressSaveData*        CallFunc_GetSaveLoadDataBP_progressSaveData_2                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetSaveLoadDataBP_outputPin_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USocialHubDataBag_C*         CallFunc_GetCustomDataBag_ReturnValue_2                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_1                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnUpgradeSettings         CallFunc_GetDataTableRowFromName_OutRow_1                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerControllerBP_localPlayerController_2      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerControllerBP_outputPin_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftClassPtr<class UQtnBullshitBPBaseArchetype_C>CallFunc_Array_Get_Item_7                                        (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnLocalOptionsSaveData*    CallFunc_GetSaveLoadDataBP_localOptionsSaveData_3                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCloudOptionsSaveData*    CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData_3                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnProgressSaveData*        CallFunc_GetSaveLoadDataBP_progressSaveData_3                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetSaveLoadDataBP_outputPin_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USocialHubDataBag_C*         CallFunc_GetCustomDataBag_ReturnValue_3                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RandomBool_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftClassPtr<class UQtn_CheatVerb_Archetype_C>CallFunc_Array_Get_Item_8                                        (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RandomBool_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_2                      (ReferenceParm)
// bool                               CallFunc_RandomBool_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item_9                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnUpgradeSettings         CallFunc_GetDataTableRowFromName_OutRow_2                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_3                      (ReferenceParm)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_10                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// struct FQtnUpgradeSettings         CallFunc_GetDataTableRowFromName_OutRow_3                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RandomBool_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerControllerArchetype_C*CallFunc_GetOwningPlayerController_owningPlayerController_1      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnLocalOptionsSaveData*    CallFunc_GetSaveLoadDataBP_localOptionsSaveData_4                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCloudOptionsSaveData*    CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData_4                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnProgressSaveData*        CallFunc_GetSaveLoadDataBP_progressSaveData_4                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetSaveLoadDataBP_outputPin_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerControllerArchetype_C*CallFunc_GetOwningPlayerController_owningPlayerController_2      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnBodyDataBag*             CallFunc_GetBodyDataBag_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBodyDataBag_C*              K2Node_DynamicCast_AsBody_Data_Bag                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_20                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerPawnArchetype_C*   CallFunc_GetOwningPlayerPawn_owningPlayerPawn                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOccupiedBodyPawn_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnInventoryComponent*      CallFunc_GetBodyInventory_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnItemData                CallFunc_Array_Get_Item_11                                       (None)
// int32                              CallFunc_Array_Length_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FQtnItemData>        CallFunc_GetVaultWeapons_ReturnValue                             (ConstParm, ReferenceParm)
// bool                               CallFunc_IsWeaponRanged_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDevCheatsArchetype_C::ExecuteUbergraph_DevCheatsArchetype(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Array_Index_Variable_4, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable_5, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_4, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, class UClass* K2Node_CustomEvent_actorClass_1, int32 K2Node_CustomEvent_count_1, bool K2Node_SwitchEnum_CmpSuccess, class UClass* K2Node_CustomEvent_actorClass, int32 K2Node_CustomEvent_count, class AQtnBodyPawn* K2Node_Event_spawnedNPC, bool CallFunc_IsValidClass_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, class UClass* K2Node_CustomEvent_cheatVerbClass_2, class UClass* K2Node_CustomEvent_cheatVerbClass_1, class AQtnBodyPawn* K2Node_CustomEvent_aiBody, class UClass* K2Node_CustomEvent_cheatVerbClass, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue, class UClass* CallFunc_SyncLoadClass_ReturnValue, class UClass* CallFunc_SyncLoadClass_ReturnValue_1, class UClass* K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base, bool K2Node_ClassDynamicCast_bSuccess, class UClass* K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base_1, bool K2Node_ClassDynamicCast_bSuccess_1, class UClass* CallFunc_SyncLoadClass_ReturnValue_2, class UClass* CallFunc_SyncLoadClass_ReturnValue_3, class UClass* K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base_2, bool K2Node_ClassDynamicCast_bSuccess_2, class UClass* K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base_3, bool K2Node_ClassDynamicCast_bSuccess_3, class UClass* CallFunc_SyncLoadClass_ReturnValue_4, class UClass* CallFunc_SyncLoadClass_ReturnValue_5, class UClass* K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base_4, bool K2Node_ClassDynamicCast_bSuccess_4, class UClass* K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base_5, bool K2Node_ClassDynamicCast_bSuccess_5, class UClass* CallFunc_SyncLoadClass_ReturnValue_6, class UClass* CallFunc_SyncLoadClass_ReturnValue_7, class UClass* K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base_6, bool K2Node_ClassDynamicCast_bSuccess_6, class UClass* K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base_7, bool K2Node_ClassDynamicCast_bSuccess_7, class UClass* CallFunc_SyncLoadClass_ReturnValue_8, class UClass* CallFunc_SyncLoadClass_ReturnValue_9, class UClass* K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base_8, bool K2Node_ClassDynamicCast_bSuccess_8, class UClass* K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base_9, bool K2Node_ClassDynamicCast_bSuccess_9, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Conv_BoolToString_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, TSubclassOf<class AActor> CallFunc_SyncLoadActorClass_ReturnValue, int32 Temp_int_Loop_Counter_Variable_5, TArray<class AActor*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Add_IntInt_ReturnValue_5, class AActor* CallFunc_Array_Get_Item, TScriptInterface<class IInterface_BodyPawn_CartmanBoss_C> K2Node_DynamicCast_AsInterface_Body_Pawn_Cartman_Boss, bool K2Node_DynamicCast_bSuccess_1, TArray<class AActor*>& CallFunc_GetAllActorsOfClass_OutActors_1, TArray<class AActor*>& CallFunc_GetAllActorsOfClass_OutActors_2, class AActor* CallFunc_Array_Get_Item_1, class AActor* CallFunc_Array_Get_Item_2, TScriptInterface<class IInterface_BodyPawn_CartmanBoss_C> K2Node_DynamicCast_AsInterface_Body_Pawn_Cartman_Boss_1, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IInterface_BodyPawn_CartmanBoss_C> K2Node_DynamicCast_AsInterface_Body_Pawn_Cartman_Boss_2, bool K2Node_DynamicCast_bSuccess_3, TArray<class AActor*>& CallFunc_GetAllActorsOfClass_OutActors_3, TArray<class AActor*>& CallFunc_GetAllActorsOfClass_OutActors_4, class AActor* CallFunc_Array_Get_Item_3, class AActor* CallFunc_Array_Get_Item_4, TScriptInterface<class IInterface_BodyPawn_CartmanBoss_C> K2Node_DynamicCast_AsInterface_Body_Pawn_Cartman_Boss_3, bool K2Node_DynamicCast_bSuccess_4, TScriptInterface<class IInterface_BodyPawn_CartmanBoss_C> K2Node_DynamicCast_AsInterface_Body_Pawn_Cartman_Boss_4, bool K2Node_DynamicCast_bSuccess_5, TSubclassOf<class AActor> CallFunc_SyncLoadActorClass_ReturnValue_1, class AActor* CallFunc_GetActorOfClass_ReturnValue, class AActor* CallFunc_GetActorOfClass_ReturnValue_1, TScriptInterface<class IInterface_QtnPawn_ShizaHulud_C> K2Node_DynamicCast_AsInterface_Qtn_Pawn_Shiza_Hulud, bool K2Node_DynamicCast_bSuccess_6, TScriptInterface<class IInterface_QtnPawn_ShizaHulud_C> K2Node_DynamicCast_AsInterface_Qtn_Pawn_Shiza_Hulud_1, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_GetActorOfClass_ReturnValue_2, TScriptInterface<class IInterface_QtnPawn_ShizaHulud_C> K2Node_DynamicCast_AsInterface_Qtn_Pawn_Shiza_Hulud_2, bool K2Node_DynamicCast_bSuccess_8, bool CallFunc_IsValid_ReturnValue_2, class AActor* CallFunc_GetActorOfClass_ReturnValue_3, class AActor* CallFunc_GetActorOfClass_ReturnValue_4, TScriptInterface<class IInterface_QtnPawn_ShizaHulud_C> K2Node_DynamicCast_AsInterface_Qtn_Pawn_Shiza_Hulud_3, bool K2Node_DynamicCast_bSuccess_9, TScriptInterface<class IInterface_QtnPawn_ShizaHulud_C> K2Node_DynamicCast_AsInterface_Qtn_Pawn_Shiza_Hulud_4, bool K2Node_DynamicCast_bSuccess_10, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, int32 K2Node_CustomEvent_VerbIndex, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManager_SewagePlant_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Sewage_Plant, bool K2Node_DynamicCast_bSuccess_11, TScriptInterface<class IInterface_QtnGoal_SewagePlant_Arc4_HankeyBattle_C> K2Node_DynamicCast_AsInterface_Qtn_Goal_Sewage_Plant_Arc_4_Hankey_Battle, bool K2Node_DynamicCast_bSuccess_12, TScriptInterface<class IInterface_QtnGoal_SewagePlant_Arc4_HankeyBattle_C> K2Node_DynamicCast_AsInterface_Qtn_Goal_Sewage_Plant_Arc_4_Hankey_Battle_1, bool K2Node_DynamicCast_bSuccess_13, class AActor* CallFunc_GetHankeyWorm_hankeyWorm, TScriptInterface<class IInterface_QtnPawn_ShizaHulud_C> K2Node_DynamicCast_AsInterface_Qtn_Pawn_Shiza_Hulud_5, bool K2Node_DynamicCast_bSuccess_14, bool CallFunc_IsValid_ReturnValue_5, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_Not_PreBool_ReturnValue_2, class UClass* K2Node_CustomEvent_enemyUpgradeClass, const class FString& CallFunc_GetClassNameWithoutSuffix_ReturnValue, bool CallFunc_IsValidClass_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class UQtnEnemyUpgradeHandlerSubsystem* CallFunc_GetEnemyUpgradeHandlerSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, class AQtnPlayerControllerArchetype_C* CallFunc_GetOwningPlayerController_owningPlayerController, const class FString& CallFunc_MakeLiteralString_ReturnValue, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess_2, class UFTUXDataBag_C* CallFunc_GetCustomDataBag_ReturnValue, float K2Node_CustomEvent_radius, int32 Temp_int_Array_Index_Variable_6, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AQtnGameModeMissionArchetype_C* K2Node_DynamicCast_AsQtn_Game_Mode_Mission_Archetype, bool K2Node_DynamicCast_bSuccess_15, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_1, float K2Node_CustomEvent_OverlappedThreshold, class AQtnGameModeMissionArchetype_C* K2Node_DynamicCast_AsQtn_Game_Mode_Mission_Archetype_1, bool K2Node_DynamicCast_bSuccess_16, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, class AQtnGameModeMissionArchetype_C* K2Node_DynamicCast_AsQtn_Game_Mode_Mission_Archetype_2, bool K2Node_DynamicCast_bSuccess_17, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_3, float K2Node_CustomEvent_TriggerThreshold, class AQtnGameModeMissionArchetype_C* K2Node_DynamicCast_AsQtn_Game_Mode_Mission_Archetype_3, bool K2Node_DynamicCast_bSuccess_18, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_4, class AQtnGameModeMissionArchetype_C* K2Node_DynamicCast_AsQtn_Game_Mode_Mission_Archetype_4, bool K2Node_DynamicCast_bSuccess_19, bool CallFunc_Not_PreBool_ReturnValue_4, int32 Temp_int_Loop_Counter_Variable_6, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess_3, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData_1, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData_1, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData_1, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin_1, int32 CallFunc_Add_IntInt_ReturnValue_6, bool K2Node_SwitchEnum_CmpSuccess_4, class USocialHubDataBag_C* CallFunc_GetCustomDataBag_ReturnValue_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController_1, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin_1, class FName CallFunc_Array_Get_Item_5, bool K2Node_SwitchEnum_CmpSuccess_5, const struct FQtnUpgradeSettings& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData_2, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData_2, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData_2, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin_2, int32 CallFunc_Array_Length_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_6, bool CallFunc_Less_IntInt_ReturnValue, class USocialHubDataBag_C* CallFunc_GetCustomDataBag_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, class FName CallFunc_Array_Get_Item_6, const struct FQtnUpgradeSettings& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController_2, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin_2, bool K2Node_SwitchEnum_CmpSuccess_7, TSoftClassPtr<class UQtnBullshitBPBaseArchetype_C> CallFunc_Array_Get_Item_7, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData_3, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData_3, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData_3, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin_3, bool K2Node_SwitchEnum_CmpSuccess_8, class USocialHubDataBag_C* CallFunc_GetCustomDataBag_ReturnValue_3, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_RandomBool_ReturnValue, TSoftClassPtr<class UQtn_CheatVerb_Archetype_C> CallFunc_Array_Get_Item_8, int32 CallFunc_Array_Length_ReturnValue_3, int32 CallFunc_Array_AddUnique_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_RandomBool_ReturnValue_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_2, bool CallFunc_RandomBool_ReturnValue_2, class FName CallFunc_Array_Get_Item_9, const struct FQtnUpgradeSettings& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_4, int32 CallFunc_Array_AddUnique_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_3, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, class FName CallFunc_Array_Get_Item_10, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const struct FQtnUpgradeSettings& CallFunc_GetDataTableRowFromName_OutRow_3, bool CallFunc_GetDataTableRowFromName_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_5, int32 CallFunc_Array_AddUnique_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_5, bool CallFunc_RandomBool_ReturnValue_3, class AQtnPlayerControllerArchetype_C* CallFunc_GetOwningPlayerController_owningPlayerController_1, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData_4, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData_4, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData_4, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin_4, class AQtnPlayerControllerArchetype_C* CallFunc_GetOwningPlayerController_owningPlayerController_2, bool K2Node_SwitchEnum_CmpSuccess_9, class UQtnBodyDataBag* CallFunc_GetBodyDataBag_ReturnValue, class UBodyDataBag_C* K2Node_DynamicCast_AsBody_Data_Bag, bool K2Node_DynamicCast_bSuccess_20, class AQtnPlayerPawnArchetype_C* CallFunc_GetOwningPlayerPawn_owningPlayerPawn, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, const struct FQtnItemData& CallFunc_Array_Get_Item_11, int32 CallFunc_Array_Length_ReturnValue_6, bool CallFunc_Less_IntInt_ReturnValue_6, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, TArray<struct FQtnItemData>& CallFunc_GetVaultWeapons_ReturnValue, bool CallFunc_IsWeaponRanged_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DevCheatsArchetype_C", "ExecuteUbergraph_DevCheatsArchetype");

	Params::UDevCheatsArchetype_C_ExecuteUbergraph_DevCheatsArchetype_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable_5 = Temp_int_Array_Index_Variable_5;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_GetLocalPlayerUIBP_localPlayerUI = CallFunc_GetLocalPlayerUIBP_localPlayerUI;
	Parms.CallFunc_GetLocalPlayerUIBP_outputPin = CallFunc_GetLocalPlayerUIBP_outputPin;
	Parms.K2Node_CustomEvent_actorClass_1 = K2Node_CustomEvent_actorClass_1;
	Parms.K2Node_CustomEvent_count_1 = K2Node_CustomEvent_count_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CustomEvent_actorClass = K2Node_CustomEvent_actorClass;
	Parms.K2Node_CustomEvent_count = K2Node_CustomEvent_count;
	Parms.K2Node_Event_spawnedNPC = K2Node_Event_spawnedNPC;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.K2Node_CustomEvent_cheatVerbClass_2 = K2Node_CustomEvent_cheatVerbClass_2;
	Parms.K2Node_CustomEvent_cheatVerbClass_1 = K2Node_CustomEvent_cheatVerbClass_1;
	Parms.K2Node_CustomEvent_aiBody = K2Node_CustomEvent_aiBody;
	Parms.K2Node_CustomEvent_cheatVerbClass = K2Node_CustomEvent_cheatVerbClass;
	Parms.CallFunc_GetBodyController_ReturnValue = CallFunc_GetBodyController_ReturnValue;
	Parms.CallFunc_SyncLoadClass_ReturnValue = CallFunc_SyncLoadClass_ReturnValue;
	Parms.CallFunc_SyncLoadClass_ReturnValue_1 = CallFunc_SyncLoadClass_ReturnValue_1;
	Parms.K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base = K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base_1 = K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base_1;
	Parms.K2Node_ClassDynamicCast_bSuccess_1 = K2Node_ClassDynamicCast_bSuccess_1;
	Parms.CallFunc_SyncLoadClass_ReturnValue_2 = CallFunc_SyncLoadClass_ReturnValue_2;
	Parms.CallFunc_SyncLoadClass_ReturnValue_3 = CallFunc_SyncLoadClass_ReturnValue_3;
	Parms.K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base_2 = K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base_2;
	Parms.K2Node_ClassDynamicCast_bSuccess_2 = K2Node_ClassDynamicCast_bSuccess_2;
	Parms.K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base_3 = K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base_3;
	Parms.K2Node_ClassDynamicCast_bSuccess_3 = K2Node_ClassDynamicCast_bSuccess_3;
	Parms.CallFunc_SyncLoadClass_ReturnValue_4 = CallFunc_SyncLoadClass_ReturnValue_4;
	Parms.CallFunc_SyncLoadClass_ReturnValue_5 = CallFunc_SyncLoadClass_ReturnValue_5;
	Parms.K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base_4 = K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base_4;
	Parms.K2Node_ClassDynamicCast_bSuccess_4 = K2Node_ClassDynamicCast_bSuccess_4;
	Parms.K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base_5 = K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base_5;
	Parms.K2Node_ClassDynamicCast_bSuccess_5 = K2Node_ClassDynamicCast_bSuccess_5;
	Parms.CallFunc_SyncLoadClass_ReturnValue_6 = CallFunc_SyncLoadClass_ReturnValue_6;
	Parms.CallFunc_SyncLoadClass_ReturnValue_7 = CallFunc_SyncLoadClass_ReturnValue_7;
	Parms.K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base_6 = K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base_6;
	Parms.K2Node_ClassDynamicCast_bSuccess_6 = K2Node_ClassDynamicCast_bSuccess_6;
	Parms.K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base_7 = K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base_7;
	Parms.K2Node_ClassDynamicCast_bSuccess_7 = K2Node_ClassDynamicCast_bSuccess_7;
	Parms.CallFunc_SyncLoadClass_ReturnValue_8 = CallFunc_SyncLoadClass_ReturnValue_8;
	Parms.CallFunc_SyncLoadClass_ReturnValue_9 = CallFunc_SyncLoadClass_ReturnValue_9;
	Parms.K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base_8 = K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base_8;
	Parms.K2Node_ClassDynamicCast_bSuccess_8 = K2Node_ClassDynamicCast_bSuccess_8;
	Parms.K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base_9 = K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base_9;
	Parms.K2Node_ClassDynamicCast_bSuccess_9 = K2Node_ClassDynamicCast_bSuccess_9;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype = K2Node_DynamicCast_AsQtn_Game_State_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_SyncLoadActorClass_ReturnValue = CallFunc_SyncLoadActorClass_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_5 = Temp_int_Loop_Counter_Variable_5;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsInterface_Body_Pawn_Cartman_Boss = K2Node_DynamicCast_AsInterface_Body_Pawn_Cartman_Boss;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_1 = CallFunc_GetAllActorsOfClass_OutActors_1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_2 = CallFunc_GetAllActorsOfClass_OutActors_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.K2Node_DynamicCast_AsInterface_Body_Pawn_Cartman_Boss_1 = K2Node_DynamicCast_AsInterface_Body_Pawn_Cartman_Boss_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsInterface_Body_Pawn_Cartman_Boss_2 = K2Node_DynamicCast_AsInterface_Body_Pawn_Cartman_Boss_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_3 = CallFunc_GetAllActorsOfClass_OutActors_3;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_4 = CallFunc_GetAllActorsOfClass_OutActors_4;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.K2Node_DynamicCast_AsInterface_Body_Pawn_Cartman_Boss_3 = K2Node_DynamicCast_AsInterface_Body_Pawn_Cartman_Boss_3;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsInterface_Body_Pawn_Cartman_Boss_4 = K2Node_DynamicCast_AsInterface_Body_Pawn_Cartman_Boss_4;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_SyncLoadActorClass_ReturnValue_1 = CallFunc_SyncLoadActorClass_ReturnValue_1;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_GetActorOfClass_ReturnValue_1 = CallFunc_GetActorOfClass_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsInterface_Qtn_Pawn_Shiza_Hulud = K2Node_DynamicCast_AsInterface_Qtn_Pawn_Shiza_Hulud;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.K2Node_DynamicCast_AsInterface_Qtn_Pawn_Shiza_Hulud_1 = K2Node_DynamicCast_AsInterface_Qtn_Pawn_Shiza_Hulud_1;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetActorOfClass_ReturnValue_2 = CallFunc_GetActorOfClass_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsInterface_Qtn_Pawn_Shiza_Hulud_2 = K2Node_DynamicCast_AsInterface_Qtn_Pawn_Shiza_Hulud_2;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetActorOfClass_ReturnValue_3 = CallFunc_GetActorOfClass_ReturnValue_3;
	Parms.CallFunc_GetActorOfClass_ReturnValue_4 = CallFunc_GetActorOfClass_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsInterface_Qtn_Pawn_Shiza_Hulud_3 = K2Node_DynamicCast_AsInterface_Qtn_Pawn_Shiza_Hulud_3;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.K2Node_DynamicCast_AsInterface_Qtn_Pawn_Shiza_Hulud_4 = K2Node_DynamicCast_AsInterface_Qtn_Pawn_Shiza_Hulud_4;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_CustomEvent_VerbIndex = K2Node_CustomEvent_VerbIndex;
	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Sewage_Plant = K2Node_DynamicCast_AsQtn_Goal_Manager_Sewage_Plant;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.K2Node_DynamicCast_AsInterface_Qtn_Goal_Sewage_Plant_Arc_4_Hankey_Battle = K2Node_DynamicCast_AsInterface_Qtn_Goal_Sewage_Plant_Arc_4_Hankey_Battle;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.K2Node_DynamicCast_AsInterface_Qtn_Goal_Sewage_Plant_Arc_4_Hankey_Battle_1 = K2Node_DynamicCast_AsInterface_Qtn_Goal_Sewage_Plant_Arc_4_Hankey_Battle_1;
	Parms.K2Node_DynamicCast_bSuccess_13 = K2Node_DynamicCast_bSuccess_13;
	Parms.CallFunc_GetHankeyWorm_hankeyWorm = CallFunc_GetHankeyWorm_hankeyWorm;
	Parms.K2Node_DynamicCast_AsInterface_Qtn_Pawn_Shiza_Hulud_5 = K2Node_DynamicCast_AsInterface_Qtn_Pawn_Shiza_Hulud_5;
	Parms.K2Node_DynamicCast_bSuccess_14 = K2Node_DynamicCast_bSuccess_14;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_IsObjectOfType_outputPin = CallFunc_IsObjectOfType_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.K2Node_CustomEvent_enemyUpgradeClass = K2Node_CustomEvent_enemyUpgradeClass;
	Parms.CallFunc_GetClassNameWithoutSuffix_ReturnValue = CallFunc_GetClassNameWithoutSuffix_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue_1 = CallFunc_IsValidClass_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetEnemyUpgradeHandlerSubsystem_ReturnValue = CallFunc_GetEnemyUpgradeHandlerSubsystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_GetOwningPlayerController_owningPlayerController = CallFunc_GetOwningPlayerController_owningPlayerController;
	Parms.CallFunc_MakeLiteralString_ReturnValue = CallFunc_MakeLiteralString_ReturnValue;
	Parms.CallFunc_GetSaveLoadDataBP_localOptionsSaveData = CallFunc_GetSaveLoadDataBP_localOptionsSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData = CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_progressSaveData = CallFunc_GetSaveLoadDataBP_progressSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_outputPin = CallFunc_GetSaveLoadDataBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_GetCustomDataBag_ReturnValue = CallFunc_GetCustomDataBag_ReturnValue;
	Parms.K2Node_CustomEvent_radius = K2Node_CustomEvent_radius;
	Parms.Temp_int_Array_Index_Variable_6 = Temp_int_Array_Index_Variable_6;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Game_Mode_Mission_Archetype = K2Node_DynamicCast_AsQtn_Game_Mode_Mission_Archetype;
	Parms.K2Node_DynamicCast_bSuccess_15 = K2Node_DynamicCast_bSuccess_15;
	Parms.CallFunc_GetGameMode_ReturnValue_1 = CallFunc_GetGameMode_ReturnValue_1;
	Parms.K2Node_CustomEvent_OverlappedThreshold = K2Node_CustomEvent_OverlappedThreshold;
	Parms.K2Node_DynamicCast_AsQtn_Game_Mode_Mission_Archetype_1 = K2Node_DynamicCast_AsQtn_Game_Mode_Mission_Archetype_1;
	Parms.K2Node_DynamicCast_bSuccess_16 = K2Node_DynamicCast_bSuccess_16;
	Parms.CallFunc_GetGameMode_ReturnValue_2 = CallFunc_GetGameMode_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsQtn_Game_Mode_Mission_Archetype_2 = K2Node_DynamicCast_AsQtn_Game_Mode_Mission_Archetype_2;
	Parms.K2Node_DynamicCast_bSuccess_17 = K2Node_DynamicCast_bSuccess_17;
	Parms.CallFunc_GetGameMode_ReturnValue_3 = CallFunc_GetGameMode_ReturnValue_3;
	Parms.K2Node_CustomEvent_TriggerThreshold = K2Node_CustomEvent_TriggerThreshold;
	Parms.K2Node_DynamicCast_AsQtn_Game_Mode_Mission_Archetype_3 = K2Node_DynamicCast_AsQtn_Game_Mode_Mission_Archetype_3;
	Parms.K2Node_DynamicCast_bSuccess_18 = K2Node_DynamicCast_bSuccess_18;
	Parms.CallFunc_GetGameMode_ReturnValue_4 = CallFunc_GetGameMode_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsQtn_Game_Mode_Mission_Archetype_4 = K2Node_DynamicCast_AsQtn_Game_Mode_Mission_Archetype_4;
	Parms.K2Node_DynamicCast_bSuccess_19 = K2Node_DynamicCast_bSuccess_19;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.Temp_int_Loop_Counter_Variable_6 = Temp_int_Loop_Counter_Variable_6;
	Parms.CallFunc_GetLocalPlayerControllerBP_localPlayerController = CallFunc_GetLocalPlayerControllerBP_localPlayerController;
	Parms.CallFunc_GetLocalPlayerControllerBP_outputPin = CallFunc_GetLocalPlayerControllerBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_GetSaveLoadDataBP_localOptionsSaveData_1 = CallFunc_GetSaveLoadDataBP_localOptionsSaveData_1;
	Parms.CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData_1 = CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData_1;
	Parms.CallFunc_GetSaveLoadDataBP_progressSaveData_1 = CallFunc_GetSaveLoadDataBP_progressSaveData_1;
	Parms.CallFunc_GetSaveLoadDataBP_outputPin_1 = CallFunc_GetSaveLoadDataBP_outputPin_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.CallFunc_GetCustomDataBag_ReturnValue_1 = CallFunc_GetCustomDataBag_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_GetLocalPlayerControllerBP_localPlayerController_1 = CallFunc_GetLocalPlayerControllerBP_localPlayerController_1;
	Parms.CallFunc_GetLocalPlayerControllerBP_outputPin_1 = CallFunc_GetLocalPlayerControllerBP_outputPin_1;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.K2Node_SwitchEnum_CmpSuccess_5 = K2Node_SwitchEnum_CmpSuccess_5;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetSaveLoadDataBP_localOptionsSaveData_2 = CallFunc_GetSaveLoadDataBP_localOptionsSaveData_2;
	Parms.CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData_2 = CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData_2;
	Parms.CallFunc_GetSaveLoadDataBP_progressSaveData_2 = CallFunc_GetSaveLoadDataBP_progressSaveData_2;
	Parms.CallFunc_GetSaveLoadDataBP_outputPin_2 = CallFunc_GetSaveLoadDataBP_outputPin_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_6 = K2Node_SwitchEnum_CmpSuccess_6;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetCustomDataBag_ReturnValue_2 = CallFunc_GetCustomDataBag_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_1 = CallFunc_GetDataTableRowNames_OutRowNames_1;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_GetLocalPlayerControllerBP_localPlayerController_2 = CallFunc_GetLocalPlayerControllerBP_localPlayerController_2;
	Parms.CallFunc_GetLocalPlayerControllerBP_outputPin_2 = CallFunc_GetLocalPlayerControllerBP_outputPin_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_7 = K2Node_SwitchEnum_CmpSuccess_7;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_GetSaveLoadDataBP_localOptionsSaveData_3 = CallFunc_GetSaveLoadDataBP_localOptionsSaveData_3;
	Parms.CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData_3 = CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData_3;
	Parms.CallFunc_GetSaveLoadDataBP_progressSaveData_3 = CallFunc_GetSaveLoadDataBP_progressSaveData_3;
	Parms.CallFunc_GetSaveLoadDataBP_outputPin_3 = CallFunc_GetSaveLoadDataBP_outputPin_3;
	Parms.K2Node_SwitchEnum_CmpSuccess_8 = K2Node_SwitchEnum_CmpSuccess_8;
	Parms.CallFunc_GetCustomDataBag_ReturnValue_3 = CallFunc_GetCustomDataBag_ReturnValue_3;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_RandomBool_ReturnValue = CallFunc_RandomBool_ReturnValue;
	Parms.CallFunc_Array_Get_Item_8 = CallFunc_Array_Get_Item_8;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_RandomBool_ReturnValue_1 = CallFunc_RandomBool_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_2 = CallFunc_GetDataTableRowNames_OutRowNames_2;
	Parms.CallFunc_RandomBool_ReturnValue_2 = CallFunc_RandomBool_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_9 = CallFunc_Array_Get_Item_9;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_2 = CallFunc_GetDataTableRowFromName_OutRow_2;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_2 = CallFunc_GetDataTableRowFromName_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_Array_AddUnique_ReturnValue_2 = CallFunc_Array_AddUnique_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_3 = CallFunc_GetDataTableRowNames_OutRowNames_3;
	Parms.CallFunc_Conv_BoolToString_ReturnValue_1 = CallFunc_Conv_BoolToString_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_10 = CallFunc_Array_Get_Item_10;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_3 = CallFunc_GetDataTableRowFromName_OutRow_3;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_3 = CallFunc_GetDataTableRowFromName_ReturnValue_3;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.CallFunc_Array_AddUnique_ReturnValue_3 = CallFunc_Array_AddUnique_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_5 = CallFunc_Less_IntInt_ReturnValue_5;
	Parms.CallFunc_RandomBool_ReturnValue_3 = CallFunc_RandomBool_ReturnValue_3;
	Parms.CallFunc_GetOwningPlayerController_owningPlayerController_1 = CallFunc_GetOwningPlayerController_owningPlayerController_1;
	Parms.CallFunc_GetSaveLoadDataBP_localOptionsSaveData_4 = CallFunc_GetSaveLoadDataBP_localOptionsSaveData_4;
	Parms.CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData_4 = CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData_4;
	Parms.CallFunc_GetSaveLoadDataBP_progressSaveData_4 = CallFunc_GetSaveLoadDataBP_progressSaveData_4;
	Parms.CallFunc_GetSaveLoadDataBP_outputPin_4 = CallFunc_GetSaveLoadDataBP_outputPin_4;
	Parms.CallFunc_GetOwningPlayerController_owningPlayerController_2 = CallFunc_GetOwningPlayerController_owningPlayerController_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_9 = K2Node_SwitchEnum_CmpSuccess_9;
	Parms.CallFunc_GetBodyDataBag_ReturnValue = CallFunc_GetBodyDataBag_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Data_Bag = K2Node_DynamicCast_AsBody_Data_Bag;
	Parms.K2Node_DynamicCast_bSuccess_20 = K2Node_DynamicCast_bSuccess_20;
	Parms.CallFunc_GetOwningPlayerPawn_owningPlayerPawn = CallFunc_GetOwningPlayerPawn_owningPlayerPawn;
	Parms.CallFunc_GetOccupiedBodyPawn_ReturnValue = CallFunc_GetOccupiedBodyPawn_ReturnValue;
	Parms.CallFunc_GetBodyInventory_ReturnValue = CallFunc_GetBodyInventory_ReturnValue;
	Parms.CallFunc_Array_Get_Item_11 = CallFunc_Array_Get_Item_11;
	Parms.CallFunc_Array_Length_ReturnValue_6 = CallFunc_Array_Length_ReturnValue_6;
	Parms.CallFunc_Less_IntInt_ReturnValue_6 = CallFunc_Less_IntInt_ReturnValue_6;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_GetVaultWeapons_ReturnValue = CallFunc_GetVaultWeapons_ReturnValue;
	Parms.CallFunc_IsWeaponRanged_ReturnValue = CallFunc_IsWeaponRanged_ReturnValue;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


