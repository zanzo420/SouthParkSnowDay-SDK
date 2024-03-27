#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyDamageReactionBruteGrab.BodyDamageReactionBruteGrab_C
// (None)

class UClass* UBodyDamageReactionBruteGrab_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyDamageReactionBruteGrab_C");

	return Clss;
}


// BodyDamageReactionBruteGrab_C BodyDamageReactionBruteGrab.Default__BodyDamageReactionBruteGrab_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBodyDamageReactionBruteGrab_C* UBodyDamageReactionBruteGrab_C::GetDefaultObj()
{
	static class UBodyDamageReactionBruteGrab_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBodyDamageReactionBruteGrab_C*>(UBodyDamageReactionBruteGrab_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BodyDamageReactionBruteGrab.BodyDamageReactionBruteGrab_C.TickGrabEscape
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnFullBodyStateHitReaction*CallFunc_GetOwningHitReaction_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTouchingGround_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBodyDamageReactionBruteGrab_C::TickGrabEscape(class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue, bool CallFunc_IsTouchingGround_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReactionBruteGrab_C", "TickGrabEscape");

	Params::UBodyDamageReactionBruteGrab_C_TickGrabEscape_Params Parms{};

	Parms.CallFunc_GetOwningHitReaction_ReturnValue = CallFunc_GetOwningHitReaction_ReturnValue;
	Parms.CallFunc_IsTouchingGround_ReturnValue = CallFunc_IsTouchingGround_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyDamageReactionBruteGrab.BodyDamageReactionBruteGrab_C.EndVictimCam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPawn*                    CallFunc_GetVictimPawn_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnCameraComponent*         CallFunc_GetQtnCameraComponent_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBodyDamageReactionBruteGrab_C::EndVictimCam(class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UQtnCameraComponent* CallFunc_GetQtnCameraComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReactionBruteGrab_C", "EndVictimCam");

	Params::UBodyDamageReactionBruteGrab_C_EndVictimCam_Params Parms{};

	Parms.CallFunc_GetVictimPawn_ReturnValue = CallFunc_GetVictimPawn_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetQtnCameraComponent_ReturnValue = CallFunc_GetQtnCameraComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyDamageReactionBruteGrab.BodyDamageReactionBruteGrab_C.StartVictimCam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPawn*                    CallFunc_GetVictimPawn_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnCameraComponent*         CallFunc_GetQtnCameraComponent_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnCameraBehavior*          CallFunc_RequestCameraBehavior_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBodyDamageReactionBruteGrab_C::StartVictimCam(class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UQtnCameraComponent* CallFunc_GetQtnCameraComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UQtnCameraBehavior* CallFunc_RequestCameraBehavior_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReactionBruteGrab_C", "StartVictimCam");

	Params::UBodyDamageReactionBruteGrab_C_StartVictimCam_Params Parms{};

	Parms.CallFunc_GetVictimPawn_ReturnValue = CallFunc_GetVictimPawn_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetQtnCameraComponent_ReturnValue = CallFunc_GetQtnCameraComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_RequestCameraBehavior_ReturnValue = CallFunc_RequestCameraBehavior_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyDamageReactionBruteGrab.BodyDamageReactionBruteGrab_C.DamageTouchingActors_ServerOnly
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     VictimLocation                                                   (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              OverlappingActors                                                (Edit, BlueprintVisible, DisableEditOnTemplate)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    CallFunc_GetDamagingCulprit_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPawn*                    CallFunc_GetVictimPawn_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnDamageInfo              CallFunc_GetDamageInfo_ReturnValue                               (ConstParm, ContainsInstancedReference)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnDamageInfo              K2Node_MakeStruct_QtnDamageInfo                                  (ContainsInstancedReference)
// bool                               CallFunc_ShouldFlyingBodyDamageThisActor_result                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPawn*                    CallFunc_GetVictimPawn_ReturnValue_1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetOverlappingActors_OverlappingActors                  (ReferenceParm)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBodyDamageReactionBruteGrab_C::DamageTouchingActors_ServerOnly(const struct FVector& VictimLocation, const TArray<class AActor*>& OverlappingActors, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AQtnPawn* CallFunc_GetDamagingCulprit_ReturnValue, class AActor* CallFunc_Array_Get_Item, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue, const struct FQtnDamageInfo& CallFunc_GetDamageInfo_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, const struct FQtnDamageInfo& K2Node_MakeStruct_QtnDamageInfo, bool CallFunc_ShouldFlyingBodyDamageThisActor_result, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue_1, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReactionBruteGrab_C", "DamageTouchingActors_ServerOnly");

	Params::UBodyDamageReactionBruteGrab_C_DamageTouchingActors_ServerOnly_Params Parms{};

	Parms.VictimLocation = VictimLocation;
	Parms.OverlappingActors = OverlappingActors;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetDamagingCulprit_ReturnValue = CallFunc_GetDamagingCulprit_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetVictimPawn_ReturnValue = CallFunc_GetVictimPawn_ReturnValue;
	Parms.CallFunc_GetDamageInfo_ReturnValue = CallFunc_GetDamageInfo_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.K2Node_MakeStruct_QtnDamageInfo = K2Node_MakeStruct_QtnDamageInfo;
	Parms.CallFunc_ShouldFlyingBodyDamageThisActor_result = CallFunc_ShouldFlyingBodyDamageThisActor_result;
	Parms.CallFunc_GetVictimPawn_ReturnValue_1 = CallFunc_GetVictimPawn_ReturnValue_1;
	Parms.CallFunc_GetOverlappingActors_OverlappingActors = CallFunc_GetOverlappingActors_OverlappingActors;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyDamageReactionBruteGrab.BodyDamageReactionBruteGrab_C.OnDebugDisplay
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UQtnDebugWrapper*            DebugWrapper                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)

void UBodyDamageReactionBruteGrab_C::OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_FloatToString_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Conv_BoolToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReactionBruteGrab_C", "OnDebugDisplay");

	Params::UBodyDamageReactionBruteGrab_C_OnDebugDisplay_Params Parms{};

	Parms.DebugWrapper = DebugWrapper;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_BoolToString_ReturnValue_1 = CallFunc_Conv_BoolToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Conv_BoolToString_ReturnValue_2 = CallFunc_Conv_BoolToString_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyDamageReactionBruteGrab.BodyDamageReactionBruteGrab_C.SetGrabState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBodyDamageReactionBruteGrabEnumGrabState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    CallFunc_GetDamagingCulprit_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    CallFunc_GetDamagingCulprit_ReturnValue_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    CallFunc_GetDamagingCulprit_ReturnValue_2                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPawn*                    CallFunc_GetVictimPawn_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    CallFunc_GetDamagingCulprit_ReturnValue_3                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_ApplyKnockback_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_SelectVector_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_SelectRotator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPawn*                    CallFunc_GetDamagingCulprit_ReturnValue_4                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_SetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnPawnMontage             K2Node_MakeStruct_QtnPawnMontage                                 (NoDestructor)
// class UQtnFullBodyStateHitReaction*CallFunc_GetOwningHitReaction_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    CallFunc_GetVictimPawn_ReturnValue_1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayReactionMontage_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnFXActor*                 CallFunc_BP_BeginEffect_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnFullBodyStateHitReaction*CallFunc_GetOwningHitReaction_ReturnValue_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnPawnMontage             K2Node_MakeStruct_QtnPawnMontage_1                               (NoDestructor)
// class UQtnFullBodyStateHitReaction*CallFunc_GetOwningHitReaction_ReturnValue_2                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayReactionMontage_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnPawnMontage             K2Node_MakeStruct_QtnPawnMontage_2                               (NoDestructor)
// float                              CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnFullBodyStateHitReaction*CallFunc_GetOwningHitReaction_ReturnValue_3                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayReactionMontage_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnFullBodyStateHitReaction*CallFunc_GetOwningHitReaction_ReturnValue_4                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnPawnMontage             K2Node_MakeStruct_QtnPawnMontage_3                               (NoDestructor)
// float                              CallFunc_PlayReactionMontage_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnFullBodyStateHitReaction*CallFunc_GetOwningHitReaction_ReturnValue_5                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnPawnMontage             K2Node_MakeStruct_QtnPawnMontage_4                               (NoDestructor)
// float                              CallFunc_PlayReactionMontage_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBodyDamageReactionBruteGrab_C::SetGrabState(enum class EBodyDamageReactionBruteGrabEnum GrabState, class AQtnPawn* CallFunc_GetDamagingCulprit_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class AQtnPawn* CallFunc_GetDamagingCulprit_ReturnValue_1, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue_1, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class AQtnPawn* CallFunc_GetDamagingCulprit_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue_1, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, class AQtnPawn* CallFunc_GetDamagingCulprit_ReturnValue_3, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, float CallFunc_ApplyKnockback_ReturnValue, const struct FVector& CallFunc_SelectVector_ReturnValue, const struct FRotator& CallFunc_SelectRotator_ReturnValue, class AQtnPawn* CallFunc_GetDamagingCulprit_ReturnValue_4, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, bool CallFunc_K2_SetActorRotation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_3, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue_1, float CallFunc_PlayReactionMontage_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue_1, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage_1, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue_2, float CallFunc_PlayReactionMontage_ReturnValue_1, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage_2, float CallFunc_FMin_ReturnValue, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue_3, float CallFunc_PlayReactionMontage_ReturnValue_2, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue_4, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage_3, float CallFunc_PlayReactionMontage_ReturnValue_3, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue_5, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage_4, float CallFunc_PlayReactionMontage_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReactionBruteGrab_C", "SetGrabState");

	Params::UBodyDamageReactionBruteGrab_C_SetGrabState_Params Parms{};

	Parms.GrabState = GrabState;
	Parms.CallFunc_GetDamagingCulprit_ReturnValue = CallFunc_GetDamagingCulprit_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_GetDamagingCulprit_ReturnValue_1 = CallFunc_GetDamagingCulprit_ReturnValue_1;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue_1 = CallFunc_GetActorForwardVector_ReturnValue_1;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_GetDamagingCulprit_ReturnValue_2 = CallFunc_GetDamagingCulprit_ReturnValue_2;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue_1 = CallFunc_Conv_VectorToRotator_ReturnValue_1;
	Parms.CallFunc_GetVictimPawn_ReturnValue = CallFunc_GetVictimPawn_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll_1 = CallFunc_BreakRotator_Roll_1;
	Parms.CallFunc_BreakRotator_Pitch_1 = CallFunc_BreakRotator_Pitch_1;
	Parms.CallFunc_BreakRotator_Yaw_1 = CallFunc_BreakRotator_Yaw_1;
	Parms.CallFunc_GetDamagingCulprit_ReturnValue_3 = CallFunc_GetDamagingCulprit_ReturnValue_3;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;
	Parms.CallFunc_ApplyKnockback_ReturnValue = CallFunc_ApplyKnockback_ReturnValue;
	Parms.CallFunc_SelectVector_ReturnValue = CallFunc_SelectVector_ReturnValue;
	Parms.CallFunc_SelectRotator_ReturnValue = CallFunc_SelectRotator_ReturnValue;
	Parms.CallFunc_GetDamagingCulprit_ReturnValue_4 = CallFunc_GetDamagingCulprit_ReturnValue_4;
	Parms.CallFunc_GetActorForwardVector_ReturnValue_2 = CallFunc_GetActorForwardVector_ReturnValue_2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_3 = CallFunc_K2_GetActorLocation_ReturnValue_3;
	Parms.CallFunc_Add_VectorVector_ReturnValue_2 = CallFunc_Add_VectorVector_ReturnValue_2;
	Parms.CallFunc_K2_SetActorRotation_ReturnValue = CallFunc_K2_SetActorRotation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_3 = CallFunc_Add_VectorVector_ReturnValue_3;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;
	Parms.K2Node_MakeStruct_QtnPawnMontage = K2Node_MakeStruct_QtnPawnMontage;
	Parms.CallFunc_GetOwningHitReaction_ReturnValue = CallFunc_GetOwningHitReaction_ReturnValue;
	Parms.CallFunc_GetVictimPawn_ReturnValue_1 = CallFunc_GetVictimPawn_ReturnValue_1;
	Parms.CallFunc_PlayReactionMontage_ReturnValue = CallFunc_PlayReactionMontage_ReturnValue;
	Parms.CallFunc_BP_BeginEffect_ReturnValue = CallFunc_BP_BeginEffect_ReturnValue;
	Parms.CallFunc_GetOwningHitReaction_ReturnValue_1 = CallFunc_GetOwningHitReaction_ReturnValue_1;
	Parms.K2Node_MakeStruct_QtnPawnMontage_1 = K2Node_MakeStruct_QtnPawnMontage_1;
	Parms.CallFunc_GetOwningHitReaction_ReturnValue_2 = CallFunc_GetOwningHitReaction_ReturnValue_2;
	Parms.CallFunc_PlayReactionMontage_ReturnValue_1 = CallFunc_PlayReactionMontage_ReturnValue_1;
	Parms.K2Node_MakeStruct_QtnPawnMontage_2 = K2Node_MakeStruct_QtnPawnMontage_2;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_GetOwningHitReaction_ReturnValue_3 = CallFunc_GetOwningHitReaction_ReturnValue_3;
	Parms.CallFunc_PlayReactionMontage_ReturnValue_2 = CallFunc_PlayReactionMontage_ReturnValue_2;
	Parms.CallFunc_GetOwningHitReaction_ReturnValue_4 = CallFunc_GetOwningHitReaction_ReturnValue_4;
	Parms.K2Node_MakeStruct_QtnPawnMontage_3 = K2Node_MakeStruct_QtnPawnMontage_3;
	Parms.CallFunc_PlayReactionMontage_ReturnValue_3 = CallFunc_PlayReactionMontage_ReturnValue_3;
	Parms.CallFunc_GetOwningHitReaction_ReturnValue_5 = CallFunc_GetOwningHitReaction_ReturnValue_5;
	Parms.K2Node_MakeStruct_QtnPawnMontage_4 = K2Node_MakeStruct_QtnPawnMontage_4;
	Parms.CallFunc_PlayReactionMontage_ReturnValue_4 = CallFunc_PlayReactionMontage_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyDamageReactionBruteGrab.BodyDamageReactionBruteGrab_C.IsReactionFinished
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBodyDamageReactionBruteGrab_C::IsReactionFinished(bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReactionBruteGrab_C", "IsReactionFinished");

	Params::UBodyDamageReactionBruteGrab_C_IsReactionFinished_Params Parms{};

	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BodyDamageReactionBruteGrab.BodyDamageReactionBruteGrab_C.Server_Attach
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    CallFunc_GetVictimPawn_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    CallFunc_GetDamagingCulprit_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPawn*                    CallFunc_GetVictimPawn_ReturnValue_1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnBase_C*             K2Node_DynamicCast_AsBody_Pawn_Base                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnCarrySettings           K2Node_MakeStruct_QtnCarrySettings                               (NoDestructor, ContainsInstancedReference)

void UBodyDamageReactionBruteGrab_C::Server_Attach(bool Temp_bool_Variable, const struct FVector& Temp_struct_Variable, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue, class AQtnPawn* CallFunc_GetDamagingCulprit_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue_1, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, const struct FVector& K2Node_Select_Default, const struct FQtnCarrySettings& K2Node_MakeStruct_QtnCarrySettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReactionBruteGrab_C", "Server_Attach");

	Params::UBodyDamageReactionBruteGrab_C_Server_Attach_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetVictimPawn_ReturnValue = CallFunc_GetVictimPawn_ReturnValue;
	Parms.CallFunc_GetDamagingCulprit_ReturnValue = CallFunc_GetDamagingCulprit_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetVictimPawn_ReturnValue_1 = CallFunc_GetVictimPawn_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Base = K2Node_DynamicCast_AsBody_Pawn_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_QtnCarrySettings = K2Node_MakeStruct_QtnCarrySettings;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyDamageReactionBruteGrab.BodyDamageReactionBruteGrab_C.HandleOtherDamage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnDamageInfo              OtherDamageInfo                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FQtnHitReactionInfo         OtherReactInfo                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               AllowNewReaction                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBodyDamageReactionBruteGrab_C::HandleOtherDamage(struct FQtnDamageInfo& OtherDamageInfo, struct FQtnHitReactionInfo& OtherReactInfo, bool* AllowNewReaction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReactionBruteGrab_C", "HandleOtherDamage");

	Params::UBodyDamageReactionBruteGrab_C_HandleOtherDamage_Params Parms{};

	Parms.OtherDamageInfo = OtherDamageInfo;
	Parms.OtherReactInfo = OtherReactInfo;

	UObject::ProcessEvent(Func, &Parms);

	if (AllowNewReaction != nullptr)
		*AllowNewReaction = Parms.AllowNewReaction;

}


// Function BodyDamageReactionBruteGrab.BodyDamageReactionBruteGrab_C.DoGrabDamage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                ReactionMontage                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBodyDamageReactionBruteGrab_C::DoGrabDamage(class UAnimMontage*& ReactionMontage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReactionBruteGrab_C", "DoGrabDamage");

	Params::UBodyDamageReactionBruteGrab_C_DoGrabDamage_Params Parms{};

	Parms.ReactionMontage = ReactionMontage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyDamageReactionBruteGrab.BodyDamageReactionBruteGrab_C.DetatchFromGrab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Interrupted                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPawn*                    CallFunc_GetVictimPawn_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    CallFunc_GetDamagingCulprit_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    CallFunc_GetVictimPawn_ReturnValue_1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPawn*                    CallFunc_GetDamagingCulprit_ReturnValue_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyKnockback_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    CallFunc_GetVictimPawn_ReturnValue_2                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnBase_C*             K2Node_DynamicCast_AsBody_Pawn_Base                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBodyDamageReactionBruteGrab_C::DetatchFromGrab(bool Interrupted, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue, class AQtnPawn* CallFunc_GetDamagingCulprit_ReturnValue, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AQtnPawn* CallFunc_GetDamagingCulprit_ReturnValue_1, float CallFunc_ApplyKnockback_ReturnValue, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue_2, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAuthority_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReactionBruteGrab_C", "DetatchFromGrab");

	Params::UBodyDamageReactionBruteGrab_C_DetatchFromGrab_Params Parms{};

	Parms.Interrupted = Interrupted;
	Parms.CallFunc_GetVictimPawn_ReturnValue = CallFunc_GetVictimPawn_ReturnValue;
	Parms.CallFunc_GetDamagingCulprit_ReturnValue = CallFunc_GetDamagingCulprit_ReturnValue;
	Parms.CallFunc_GetVictimPawn_ReturnValue_1 = CallFunc_GetVictimPawn_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetDamagingCulprit_ReturnValue_1 = CallFunc_GetDamagingCulprit_ReturnValue_1;
	Parms.CallFunc_ApplyKnockback_ReturnValue = CallFunc_ApplyKnockback_ReturnValue;
	Parms.CallFunc_GetVictimPawn_ReturnValue_2 = CallFunc_GetVictimPawn_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Base = K2Node_DynamicCast_AsBody_Pawn_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyDamageReactionBruteGrab.BodyDamageReactionBruteGrab_C.Do Touch Damage Server Only
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      OtherActor                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnDamageInfo              CallFunc_GetDamageInfo_ReturnValue                               (ConstParm, ContainsInstancedReference)
// bool                               CallFunc_ShouldFlyingBodyDamageThisActor_result                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    CallFunc_GetVictimPawn_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnDamageInfo              K2Node_MakeStruct_QtnDamageInfo                                  (ContainsInstancedReference)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBodyDamageReactionBruteGrab_C::Do_Touch_Damage_Server_Only(class AActor* OtherActor, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FQtnDamageInfo& CallFunc_GetDamageInfo_ReturnValue, bool CallFunc_ShouldFlyingBodyDamageThisActor_result, int32 CallFunc_Array_Add_ReturnValue, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, float CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FQtnDamageInfo& K2Node_MakeStruct_QtnDamageInfo, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReactionBruteGrab_C", "Do Touch Damage Server Only");

	Params::UBodyDamageReactionBruteGrab_C_Do_Touch_Damage_Server_Only_Params Parms{};

	Parms.OtherActor = OtherActor;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetDamageInfo_ReturnValue = CallFunc_GetDamageInfo_ReturnValue;
	Parms.CallFunc_ShouldFlyingBodyDamageThisActor_result = CallFunc_ShouldFlyingBodyDamageThisActor_result;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetVictimPawn_ReturnValue = CallFunc_GetVictimPawn_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.K2Node_MakeStruct_QtnDamageInfo = K2Node_MakeStruct_QtnDamageInfo;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyDamageReactionBruteGrab.BodyDamageReactionBruteGrab_C.ShouldFlyingBodyDamageThisActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      ActorToEvaluate                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    Culprit                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEnemy_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPawn*                    K2Node_DynamicCast_AsQtn_Pawn                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHitReactingOrKnockedDown_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBodyDamageReactionBruteGrab_C::ShouldFlyingBodyDamageThisActor(class AActor*& ActorToEvaluate, class AQtnPawn*& Culprit, bool* Result, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsEnemy_ReturnValue, class AQtnPawn* K2Node_DynamicCast_AsQtn_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsHitReactingOrKnockedDown_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReactionBruteGrab_C", "ShouldFlyingBodyDamageThisActor");

	Params::UBodyDamageReactionBruteGrab_C_ShouldFlyingBodyDamageThisActor_Params Parms{};

	Parms.ActorToEvaluate = ActorToEvaluate;
	Parms.Culprit = Culprit;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsEnemy_ReturnValue = CallFunc_IsEnemy_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Pawn = K2Node_DynamicCast_AsQtn_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsHitReactingOrKnockedDown_ReturnValue = CallFunc_IsHitReactingOrKnockedDown_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BodyDamageReactionBruteGrab.BodyDamageReactionBruteGrab_C.OnEnterReaction
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBodyDamageReactionBruteGrab_C::OnEnterReaction(bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReactionBruteGrab_C", "OnEnterReaction");

	Params::UBodyDamageReactionBruteGrab_C_OnEnterReaction_Params Parms{};

	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyDamageReactionBruteGrab.BodyDamageReactionBruteGrab_C.OnReactionMontageDone
// (Event, Public, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Interrupted                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBodyDamageReactionBruteGrab_C::OnReactionMontageDone(class UAnimMontage* Montage, bool Interrupted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReactionBruteGrab_C", "OnReactionMontageDone");

	Params::UBodyDamageReactionBruteGrab_C_OnReactionMontageDone_Params Parms{};

	Parms.Montage = Montage;
	Parms.Interrupted = Interrupted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyDamageReactionBruteGrab.BodyDamageReactionBruteGrab_C.OnExitReaction
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBodyDamageReactionBruteGrab_C::OnExitReaction(bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReactionBruteGrab_C", "OnExitReaction");

	Params::UBodyDamageReactionBruteGrab_C_OnExitReaction_Params Parms{};

	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyDamageReactionBruteGrab.BodyDamageReactionBruteGrab_C.OnTickReaction
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBodyDamageReactionBruteGrab_C::OnTickReaction(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReactionBruteGrab_C", "OnTickReaction");

	Params::UBodyDamageReactionBruteGrab_C_OnTickReaction_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyDamageReactionBruteGrab.BodyDamageReactionBruteGrab_C.OnTouchOtherActor_Event_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPawn*                    SelfPawn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     TouchLocation                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     TouchNormal                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBodyDamageReactionBruteGrab_C::OnTouchOtherActor_Event_0(class AQtnPawn* SelfPawn, class AActor* OtherActor, struct FVector& TouchLocation, struct FVector& TouchNormal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReactionBruteGrab_C", "OnTouchOtherActor_Event_0");

	Params::UBodyDamageReactionBruteGrab_C_OnTouchOtherActor_Event_0_Params Parms{};

	Parms.SelfPawn = SelfPawn;
	Parms.OtherActor = OtherActor;
	Parms.TouchLocation = TouchLocation;
	Parms.TouchNormal = TouchNormal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyDamageReactionBruteGrab.BodyDamageReactionBruteGrab_C.ExecuteUbergraph_BodyDamageReactionBruteGrab
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnDamageInfo              CallFunc_GetDamageInfo_ReturnValue                               (ConstParm, ContainsInstancedReference)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    CallFunc_GetVictimPawn_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnFullBodyStateHitReaction*CallFunc_GetOwningHitReaction_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTouchingGround_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPawn*                    CallFunc_GetVictimPawn_ReturnValue_1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnBase_C*             K2Node_DynamicCast_AsBody_Pawn_Base                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetVictimBody_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetVictimBody_ReturnValue_1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    CallFunc_GetDamagingCulprit_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    CallFunc_GetVictimPawn_ReturnValue_2                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    CallFunc_GetDamagingCulprit_ReturnValue_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCarrying_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAliveAndConscious_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPawn*                    CallFunc_GetDamagingCulprit_ReturnValue_2                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnAIBrute_C*          K2Node_DynamicCast_AsBody_Pawn_AIBrute                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_isServer                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*                K2Node_Event_montage                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_interrupted                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPawn*                    CallFunc_GetDamagingCulprit_ReturnValue_3                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    CallFunc_GetVictimPawn_ReturnValue_3                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnFullBodyStateHitReaction*CallFunc_GetOwningHitReaction_ReturnValue_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCarrying_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMontageFinishPending_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPawn*                    CallFunc_GetDamagingCulprit_ReturnValue_4                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isServer_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnDamageInfo              CallFunc_GetDamageInfo_ReturnValue_1                             (ConstParm, ContainsInstancedReference)
// class AQtnBodyPawn*                CallFunc_GetVictimBody_ReturnValue_2                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBrute_Grab_Verb_C*          K2Node_DynamicCast_AsBrute_Grab_Verb                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AcknowledgeGrab_success                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVerbActive_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetVictimBody_ReturnValue_3                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPawn*                    CallFunc_GetVictimPawn_ReturnValue_4                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPawn*                    K2Node_CustomEvent_selfPawn                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_otherActor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_touchLocation                                 (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_touchNormal                                   (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    CallFunc_GetVictimPawn_ReturnValue_5                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_GetButtonMashRatio_isFull                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetButtonMashRatio_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    CallFunc_GetVictimPawn_ReturnValue_6                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    CallFunc_GetDamagingCulprit_ReturnValue_5                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnVerbComponent*           CallFunc_GetVerbComponent_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerControlled_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetButtonMashRatio_isFull_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetButtonMashRatio_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBodyDamageReactionBruteGrab_C::ExecuteUbergraph_BodyDamageReactionBruteGrab(int32 EntryPoint, const struct FQtnDamageInfo& CallFunc_GetDamageInfo_ReturnValue, float K2Node_Event_DeltaSeconds, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue, bool CallFunc_IsTouchingGround_ReturnValue, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue_1, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue_1, class AQtnPawn* CallFunc_GetDamagingCulprit_ReturnValue, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue_2, class AQtnPawn* CallFunc_GetDamagingCulprit_ReturnValue_1, bool CallFunc_IsCarrying_ReturnValue, bool CallFunc_IsAliveAndConscious_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AQtnPawn* CallFunc_GetDamagingCulprit_ReturnValue_2, class ABodyPawnAIBrute_C* K2Node_DynamicCast_AsBody_Pawn_AIBrute, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_Event_isServer, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_interrupted, class AQtnPawn* CallFunc_GetDamagingCulprit_ReturnValue_3, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue_3, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue_1, bool CallFunc_IsCarrying_ReturnValue_1, bool CallFunc_IsMontageFinishPending_ReturnValue, class AQtnPawn* CallFunc_GetDamagingCulprit_ReturnValue_4, bool K2Node_Event_isServer_1, bool CallFunc_IsValid_ReturnValue_1, const struct FQtnDamageInfo& CallFunc_GetDamageInfo_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue_2, class UBrute_Grab_Verb_C* K2Node_DynamicCast_AsBrute_Grab_Verb, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_AcknowledgeGrab_success, bool CallFunc_IsVerbActive_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue_3, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue_4, bool CallFunc_HasAuthority_ReturnValue_1, class AQtnPawn* K2Node_CustomEvent_selfPawn, class AActor* K2Node_CustomEvent_otherActor, const struct FVector& K2Node_CustomEvent_touchLocation, const struct FVector& K2Node_CustomEvent_touchNormal, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_GetButtonMashRatio_isFull, float CallFunc_GetButtonMashRatio_ReturnValue, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue_6, class AQtnPawn* CallFunc_GetDamagingCulprit_ReturnValue_5, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue, bool CallFunc_IsPlayerControlled_ReturnValue, bool CallFunc_GetButtonMashRatio_isFull_1, float CallFunc_GetButtonMashRatio_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReactionBruteGrab_C", "ExecuteUbergraph_BodyDamageReactionBruteGrab");

	Params::UBodyDamageReactionBruteGrab_C_ExecuteUbergraph_BodyDamageReactionBruteGrab_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDamageInfo_ReturnValue = CallFunc_GetDamageInfo_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetVictimPawn_ReturnValue = CallFunc_GetVictimPawn_ReturnValue;
	Parms.CallFunc_GetOwningHitReaction_ReturnValue = CallFunc_GetOwningHitReaction_ReturnValue;
	Parms.CallFunc_IsTouchingGround_ReturnValue = CallFunc_IsTouchingGround_ReturnValue;
	Parms.CallFunc_GetVictimPawn_ReturnValue_1 = CallFunc_GetVictimPawn_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Base = K2Node_DynamicCast_AsBody_Pawn_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetVictimBody_ReturnValue = CallFunc_GetVictimBody_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetVictimBody_ReturnValue_1 = CallFunc_GetVictimBody_ReturnValue_1;
	Parms.CallFunc_GetDamagingCulprit_ReturnValue = CallFunc_GetDamagingCulprit_ReturnValue;
	Parms.CallFunc_GetVictimPawn_ReturnValue_2 = CallFunc_GetVictimPawn_ReturnValue_2;
	Parms.CallFunc_GetDamagingCulprit_ReturnValue_1 = CallFunc_GetDamagingCulprit_ReturnValue_1;
	Parms.CallFunc_IsCarrying_ReturnValue = CallFunc_IsCarrying_ReturnValue;
	Parms.CallFunc_IsAliveAndConscious_ReturnValue = CallFunc_IsAliveAndConscious_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDamagingCulprit_ReturnValue_2 = CallFunc_GetDamagingCulprit_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBody_Pawn_AIBrute = K2Node_DynamicCast_AsBody_Pawn_AIBrute;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Event_isServer = K2Node_Event_isServer;
	Parms.K2Node_Event_montage = K2Node_Event_montage;
	Parms.K2Node_Event_interrupted = K2Node_Event_interrupted;
	Parms.CallFunc_GetDamagingCulprit_ReturnValue_3 = CallFunc_GetDamagingCulprit_ReturnValue_3;
	Parms.CallFunc_GetVictimPawn_ReturnValue_3 = CallFunc_GetVictimPawn_ReturnValue_3;
	Parms.CallFunc_GetOwningHitReaction_ReturnValue_1 = CallFunc_GetOwningHitReaction_ReturnValue_1;
	Parms.CallFunc_IsCarrying_ReturnValue_1 = CallFunc_IsCarrying_ReturnValue_1;
	Parms.CallFunc_IsMontageFinishPending_ReturnValue = CallFunc_IsMontageFinishPending_ReturnValue;
	Parms.CallFunc_GetDamagingCulprit_ReturnValue_4 = CallFunc_GetDamagingCulprit_ReturnValue_4;
	Parms.K2Node_Event_isServer_1 = K2Node_Event_isServer_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetDamageInfo_ReturnValue_1 = CallFunc_GetDamageInfo_ReturnValue_1;
	Parms.CallFunc_GetVictimBody_ReturnValue_2 = CallFunc_GetVictimBody_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBrute_Grab_Verb = K2Node_DynamicCast_AsBrute_Grab_Verb;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_AcknowledgeGrab_success = CallFunc_AcknowledgeGrab_success;
	Parms.CallFunc_IsVerbActive_ReturnValue = CallFunc_IsVerbActive_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetVictimBody_ReturnValue_3 = CallFunc_GetVictimBody_ReturnValue_3;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetVictimPawn_ReturnValue_4 = CallFunc_GetVictimPawn_ReturnValue_4;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.K2Node_CustomEvent_selfPawn = K2Node_CustomEvent_selfPawn;
	Parms.K2Node_CustomEvent_otherActor = K2Node_CustomEvent_otherActor;
	Parms.K2Node_CustomEvent_touchLocation = K2Node_CustomEvent_touchLocation;
	Parms.K2Node_CustomEvent_touchNormal = K2Node_CustomEvent_touchNormal;
	Parms.CallFunc_GetVictimPawn_ReturnValue_5 = CallFunc_GetVictimPawn_ReturnValue_5;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetButtonMashRatio_isFull = CallFunc_GetButtonMashRatio_isFull;
	Parms.CallFunc_GetButtonMashRatio_ReturnValue = CallFunc_GetButtonMashRatio_ReturnValue;
	Parms.CallFunc_GetVictimPawn_ReturnValue_6 = CallFunc_GetVictimPawn_ReturnValue_6;
	Parms.CallFunc_GetDamagingCulprit_ReturnValue_5 = CallFunc_GetDamagingCulprit_ReturnValue_5;
	Parms.CallFunc_GetVerbComponent_ReturnValue = CallFunc_GetVerbComponent_ReturnValue;
	Parms.CallFunc_IsPlayerControlled_ReturnValue = CallFunc_IsPlayerControlled_ReturnValue;
	Parms.CallFunc_GetButtonMashRatio_isFull_1 = CallFunc_GetButtonMashRatio_isFull_1;
	Parms.CallFunc_GetButtonMashRatio_ReturnValue_1 = CallFunc_GetButtonMashRatio_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


