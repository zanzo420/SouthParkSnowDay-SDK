#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FacialAnimComponent.FacialAnimComponent_C
// (None)

class UClass* UFacialAnimComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FacialAnimComponent_C");

	return Clss;
}


// FacialAnimComponent_C FacialAnimComponent.Default__FacialAnimComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFacialAnimComponent_C* UFacialAnimComponent_C::GetDefaultObj()
{
	static class UFacialAnimComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFacialAnimComponent_C*>(UFacialAnimComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FacialAnimComponent.FacialAnimComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UFacialAnimComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FacialAnimComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FacialAnimComponent.FacialAnimComponent_C.SetFacialExpressionFromNotify
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Starting                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          EyeMat                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          MouthMat                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEyePositionStruct          Struct                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               PersistBrows                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFacialAnimComponent_C::SetFacialExpressionFromNotify(bool Starting, class UMaterialInterface* EyeMat, class UMaterialInterface* MouthMat, const struct FEyePositionStruct& Struct, bool PersistBrows)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FacialAnimComponent_C", "SetFacialExpressionFromNotify");

	Params::UFacialAnimComponent_C_SetFacialExpressionFromNotify_Params Parms{};

	Parms.Starting = Starting;
	Parms.EyeMat = EyeMat;
	Parms.MouthMat = MouthMat;
	Parms.Struct = Struct;
	Parms.PersistBrows = PersistBrows;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FacialAnimComponent.FacialAnimComponent_C.PlaySyncedAudio
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSyncedAudioStruct          AudioStruct                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              VO_Priority_Override                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TimeOffset                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFacialAnimComponent_C::PlaySyncedAudio(const struct FSyncedAudioStruct& AudioStruct, int32 VO_Priority_Override, float TimeOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FacialAnimComponent_C", "PlaySyncedAudio");

	Params::UFacialAnimComponent_C_PlaySyncedAudio_Params Parms{};

	Parms.AudioStruct = AudioStruct;
	Parms.VO_Priority_Override = VO_Priority_Override;
	Parms.TimeOffset = TimeOffset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FacialAnimComponent.FacialAnimComponent_C.AppearanceChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFacialAnimComponent_C::AppearanceChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FacialAnimComponent_C", "AppearanceChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FacialAnimComponent.FacialAnimComponent_C.BodyAlivenessChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                bodyPawn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      AlivenessInstigator                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnBodyAliveness       OldBodyAliveness                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnBodyAliveness       bodyAliveness                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFacialAnimComponent_C::BodyAlivenessChange(class AQtnBodyPawn* bodyPawn, class AActor* AlivenessInstigator, enum class EQtnBodyAliveness OldBodyAliveness, enum class EQtnBodyAliveness bodyAliveness, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FacialAnimComponent_C", "BodyAlivenessChange");

	Params::UFacialAnimComponent_C_BodyAlivenessChange_Params Parms{};

	Parms.bodyPawn = bodyPawn;
	Parms.AlivenessInstigator = AlivenessInstigator;
	Parms.OldBodyAliveness = OldBodyAliveness;
	Parms.bodyAliveness = bodyAliveness;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FacialAnimComponent.FacialAnimComponent_C.OnVOPlayed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*             AudioComponent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 FacialAnimCurve                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFacialAnimComponent_C::OnVOPlayed(class UAudioComponent* AudioComponent, class UCurveFloat* FacialAnimCurve)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FacialAnimComponent_C", "OnVOPlayed");

	Params::UFacialAnimComponent_C_OnVOPlayed_Params Parms{};

	Parms.AudioComponent = AudioComponent;
	Parms.FacialAnimCurve = FacialAnimCurve;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FacialAnimComponent.FacialAnimComponent_C.PlayAnimationFromVO
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                AnimMontage                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFacialAnimComponent_C::PlayAnimationFromVO(class UAnimMontage* AnimMontage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FacialAnimComponent_C", "PlayAnimationFromVO");

	Params::UFacialAnimComponent_C_PlayAnimationFromVO_Params Parms{};

	Parms.AnimMontage = AnimMontage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FacialAnimComponent.FacialAnimComponent_C.OnAudioFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFacialAnimComponent_C::OnAudioFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FacialAnimComponent_C", "OnAudioFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FacialAnimComponent.FacialAnimComponent_C.OnAudioPlayStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAudioComponentPlayStatePlayState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFacialAnimComponent_C::OnAudioPlayStateChanged(enum class EAudioComponentPlayState PlayState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FacialAnimComponent_C", "OnAudioPlayStateChanged");

	Params::UFacialAnimComponent_C_OnAudioPlayStateChanged_Params Parms{};

	Parms.PlayState = PlayState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FacialAnimComponent.FacialAnimComponent_C.SetCurrentSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*             NewSound                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFacialAnimComponent_C::SetCurrentSound(class UAudioComponent* NewSound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FacialAnimComponent_C", "SetCurrentSound");

	Params::UFacialAnimComponent_C_SetCurrentSound_Params Parms{};

	Parms.NewSound = NewSound;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FacialAnimComponent.FacialAnimComponent_C.ResetMesh
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFacialAnimComponent_C::ResetMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FacialAnimComponent_C", "ResetMesh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FacialAnimComponent.FacialAnimComponent_C.UpdateEyeTone
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NonBodySkinTone                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFacialAnimComponent_C::UpdateEyeTone(float NonBodySkinTone)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FacialAnimComponent_C", "UpdateEyeTone");

	Params::UFacialAnimComponent_C_UpdateEyeTone_Params Parms{};

	Parms.NonBodySkinTone = NonBodySkinTone;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FacialAnimComponent.FacialAnimComponent_C.ExecuteUbergraph_FacialAnimComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UQtnCharacterAppearanceComponent*CallFunc_GetBodyAppearanceComponent_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetBodyComponent_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnBase_C*             K2Node_DynamicCast_AsBody_Pawn_Base                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnBase_C*             K2Node_DynamicCast_AsBody_Pawn_Base_1                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_CustomEvent_BodyPawn                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_alivenessInstigator                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnBodyAliveness       K2Node_CustomEvent_oldBodyAliveness                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnBodyAliveness       K2Node_CustomEvent_bodyAliveness                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_isServer                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualExactly_VectorVector_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             K2Node_CustomEvent_audioComponent                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 K2Node_CustomEvent_facialAnimCurve                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UActorComponent*>     CallFunc_GetComponentsByTag_ReturnValue                          (ReferenceParm, ContainsInstancedReference)
// TArray<class UActorComponent*>     CallFunc_GetComponentsByTag_ReturnValue_1                        (ReferenceParm, ContainsInstancedReference)
// class UActorComponent*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      K2Node_DynamicCast_AsSkeletal_Mesh_Component                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      K2Node_DynamicCast_AsSkeletal_Mesh_Component_1                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnCharacterAppearanceComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnBase_C*             K2Node_DynamicCast_AsBody_Pawn_Base_2                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FSyncedAudioStruct          K2Node_CustomEvent_AudioStruct                                   (NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_VO_Priority_Override                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_TimeOffset                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_starting                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          K2Node_CustomEvent_eyeMat                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_CustomEvent_mouthMat                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEyePositionStruct          K2Node_CustomEvent_Struct                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_PersistBrows                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Montage_Play_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEyePosition                K2Node_MakeStruct_EyePosition                                    (NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetBodyComponent_ReturnValue_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetHeadComponent_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_CustomEvent_animMontage                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// float                              CallFunc_Montage_Play_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EAudioComponentPlayStateK2Node_CustomEvent_PlayState                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             K2Node_CustomEvent_newSound                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_14                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetSpeakerName_ReturnValue                              (None)
// struct FEyePositionStruct          CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEyePosition                K2Node_MakeStruct_EyePosition_1                                  (NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_NonBodySkinTone                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFacialAnimComponent_C::ExecuteUbergraph_FacialAnimComponent(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UQtnCharacterAppearanceComponent* CallFunc_GetBodyAppearanceComponent_ReturnValue, class USkeletalMeshComponent* CallFunc_GetBodyComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_2, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base_1, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetOwner_ReturnValue, class AQtnBodyPawn* K2Node_CustomEvent_BodyPawn, class AActor* K2Node_CustomEvent_alivenessInstigator, enum class EQtnBodyAliveness K2Node_CustomEvent_oldBodyAliveness, enum class EQtnBodyAliveness K2Node_CustomEvent_bodyAliveness, bool K2Node_CustomEvent_isServer, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_EqualExactly_VectorVector_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsGameplayTagValid_ReturnValue, class UAudioComponent* K2Node_CustomEvent_audioComponent, class UCurveFloat* K2Node_CustomEvent_facialAnimCurve, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, class AActor* CallFunc_GetOwner_ReturnValue_1, TArray<class UActorComponent*>& CallFunc_GetComponentsByTag_ReturnValue, TArray<class UActorComponent*>& CallFunc_GetComponentsByTag_ReturnValue_1, class UActorComponent* CallFunc_Array_Get_Item, class UActorComponent* CallFunc_Array_Get_Item_1, class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component, bool K2Node_DynamicCast_bSuccess_2, class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component_1, bool K2Node_DynamicCast_bSuccess_3, class UQtnCharacterAppearanceComponent* CallFunc_GetComponentByClass_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base_2, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsValid_ReturnValue_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FSyncedAudioStruct& K2Node_CustomEvent_AudioStruct, int32 K2Node_CustomEvent_VO_Priority_Override, float K2Node_CustomEvent_TimeOffset, bool K2Node_CustomEvent_starting, class UMaterialInterface* K2Node_CustomEvent_eyeMat, class UMaterialInterface* K2Node_CustomEvent_mouthMat, const struct FEyePositionStruct& K2Node_CustomEvent_Struct, bool K2Node_CustomEvent_PersistBrows, float CallFunc_Montage_Play_ReturnValue, const struct FEyePosition& K2Node_MakeStruct_EyePosition, class AActor* CallFunc_GetOwner_ReturnValue_2, class USkeletalMeshComponent* CallFunc_GetBodyComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_10, class USkeletalMeshComponent* CallFunc_GetHeadComponent_ReturnValue, class UAnimMontage* K2Node_CustomEvent_animMontage, bool CallFunc_IsValid_ReturnValue_11, bool CallFunc_IsValid_ReturnValue_12, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float CallFunc_Montage_Play_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_13, enum class EAudioComponentPlayState K2Node_CustomEvent_PlayState, bool K2Node_SwitchEnum_CmpSuccess_1, class UAudioComponent* K2Node_CustomEvent_newSound, bool CallFunc_IsValid_ReturnValue_14, int32 Temp_int_Array_Index_Variable, class FText CallFunc_GetSpeakerName_ReturnValue, const struct FEyePositionStruct& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue, const struct FEyePosition& K2Node_MakeStruct_EyePosition_1, bool CallFunc_Less_IntInt_ReturnValue, float K2Node_Event_NonBodySkinTone)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FacialAnimComponent_C", "ExecuteUbergraph_FacialAnimComponent");

	Params::UFacialAnimComponent_C_ExecuteUbergraph_FacialAnimComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetBodyAppearanceComponent_ReturnValue = CallFunc_GetBodyAppearanceComponent_ReturnValue;
	Parms.CallFunc_GetBodyComponent_ReturnValue = CallFunc_GetBodyComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Base = K2Node_DynamicCast_AsBody_Pawn_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Base_1 = K2Node_DynamicCast_AsBody_Pawn_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_CustomEvent_BodyPawn = K2Node_CustomEvent_BodyPawn;
	Parms.K2Node_CustomEvent_alivenessInstigator = K2Node_CustomEvent_alivenessInstigator;
	Parms.K2Node_CustomEvent_oldBodyAliveness = K2Node_CustomEvent_oldBodyAliveness;
	Parms.K2Node_CustomEvent_bodyAliveness = K2Node_CustomEvent_bodyAliveness;
	Parms.K2Node_CustomEvent_isServer = K2Node_CustomEvent_isServer;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_EqualExactly_VectorVector_ReturnValue = CallFunc_EqualExactly_VectorVector_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;
	Parms.K2Node_CustomEvent_audioComponent = K2Node_CustomEvent_audioComponent;
	Parms.K2Node_CustomEvent_facialAnimCurve = K2Node_CustomEvent_facialAnimCurve;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_GetComponentsByTag_ReturnValue = CallFunc_GetComponentsByTag_ReturnValue;
	Parms.CallFunc_GetComponentsByTag_ReturnValue_1 = CallFunc_GetComponentsByTag_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_DynamicCast_AsSkeletal_Mesh_Component = K2Node_DynamicCast_AsSkeletal_Mesh_Component;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsSkeletal_Mesh_Component_1 = K2Node_DynamicCast_AsSkeletal_Mesh_Component_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Base_2 = K2Node_DynamicCast_AsBody_Pawn_Base_2;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_AudioStruct = K2Node_CustomEvent_AudioStruct;
	Parms.K2Node_CustomEvent_VO_Priority_Override = K2Node_CustomEvent_VO_Priority_Override;
	Parms.K2Node_CustomEvent_TimeOffset = K2Node_CustomEvent_TimeOffset;
	Parms.K2Node_CustomEvent_starting = K2Node_CustomEvent_starting;
	Parms.K2Node_CustomEvent_eyeMat = K2Node_CustomEvent_eyeMat;
	Parms.K2Node_CustomEvent_mouthMat = K2Node_CustomEvent_mouthMat;
	Parms.K2Node_CustomEvent_Struct = K2Node_CustomEvent_Struct;
	Parms.K2Node_CustomEvent_PersistBrows = K2Node_CustomEvent_PersistBrows;
	Parms.CallFunc_Montage_Play_ReturnValue = CallFunc_Montage_Play_ReturnValue;
	Parms.K2Node_MakeStruct_EyePosition = K2Node_MakeStruct_EyePosition;
	Parms.CallFunc_GetOwner_ReturnValue_2 = CallFunc_GetOwner_ReturnValue_2;
	Parms.CallFunc_GetBodyComponent_ReturnValue_1 = CallFunc_GetBodyComponent_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_GetHeadComponent_ReturnValue = CallFunc_GetHeadComponent_ReturnValue;
	Parms.K2Node_CustomEvent_animMontage = K2Node_CustomEvent_animMontage;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.CallFunc_GetAnimInstance_ReturnValue_1 = CallFunc_GetAnimInstance_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_Montage_Play_ReturnValue_1 = CallFunc_Montage_Play_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_13 = CallFunc_IsValid_ReturnValue_13;
	Parms.K2Node_CustomEvent_PlayState = K2Node_CustomEvent_PlayState;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_CustomEvent_newSound = K2Node_CustomEvent_newSound;
	Parms.CallFunc_IsValid_ReturnValue_14 = CallFunc_IsValid_ReturnValue_14;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetSpeakerName_ReturnValue = CallFunc_GetSpeakerName_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_MakeStruct_EyePosition_1 = K2Node_MakeStruct_EyePosition_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Event_NonBodySkinTone = K2Node_Event_NonBodySkinTone;

	UObject::ProcessEvent(Func, &Parms);

}

}


