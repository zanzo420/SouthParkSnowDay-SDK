#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x97 (0xAF0 - 0xA59)
// BlueprintGeneratedClass Cheat_HeatVisionVerb.Cheat_HeatVisionVerb_C
class UCheat_HeatVisionVerb_C : public UVerbPlayerCheatBase_C
{
public:
	uint8                                        Pad_64B3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA60(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         Verb_Done;                                         // 0xA68(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_64B4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        VerbTimer;                                         // 0xA6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnPawnMontage                       VerbAnim;                                          // 0xA70(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        Heat_Vision_Max_Range;                             // 0xA80(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HeatVisionOn;                                      // 0xA84(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_64B5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TickTimer;                                         // 0xA88(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Tick_Rate;                                         // 0xA8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VerbDistance;                                      // 0xA90(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_64B6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       SpawnedSound;                                      // 0xA98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnFXActor*                           Beam_FX;                                           // 0xAA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Niagara_Effect;                                    // 0xAA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Beam_Base;                                         // 0xAB0(0xC)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Beam_Tip;                                          // 0xABC(0xC)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HitSurface;                                        // 0xAC8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_64B7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Verb_Duration;                                     // 0xACC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Shoot_Direction;                                   // 0xAD0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Hit_Norm;                                          // 0xADC(0xC)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                HeatVisionCamClass;                                // 0xAE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCheat_HeatVisionVerb_C* GetDefaultObj();

	float GetLocomotionRatio(enum class EPlayerCheatInputStateEnum Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float K2Node_Select_Default);
	void StartCheatExecution(class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, bool CallFunc_IsServer_ReturnValue, class UQtnCameraComponent* CallFunc_GetQtnCameraComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UQtnCameraBehaviorAim* CallFunc_RequestCameraBehavior_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, float CallFunc_StartVerbAction_ReturnValue);
	void OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper);
	void Calculate_Beam_Parameters(bool* DidHit, struct FVector* Beam_Tip, struct FVector* HitNorm, bool LOCAL_DidHit, const struct FVector& LOCA_BeamTip, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class UQtnCameraComponent* CallFunc_GetQtnCameraComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Vector_Distance_ReturnValue, const struct FQtnCameraVerbAim& CallFunc_GetVerbLocalProjectileAim_ReturnValue, const struct FVector& CallFunc_Vector_NormalUnsafe_ReturnValue, const struct FVector& CallFunc_NegateVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, TArray<struct FHitResult>& CallFunc_LineTrace_hits, bool CallFunc_LineTrace_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Vector_Distance_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue);
	bool CanVerbStart(class UObject* PotentialTarget, bool CallFunc_CanVerbStart_ReturnValue);
	void OnActiveVerbTicked(struct FQtnPawnIntentions& PawnIntentions, float DeltaSeconds, float ElapsedTime, bool IsServer);
	void OnAnimNotify(class UQtnAnimNotify* AnimNotify, bool IsServer);
	void OnMontageEnded(class UAnimMontage* Montage, bool Interrupted, bool IsServer);
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool Interrupted, bool IsServer);
	void OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer);
	void Multi_Minus_Reset_Heat_Vision_Complete();
	void Multi_Minus_Finish_Heat_Vision();
	void Server_Minus_Set_Beam_Parameters(bool Hit_Surface, const struct FVector& Beam_Tip, const struct FVector& Hit_Normal);
	void ExecuteUbergraph_Cheat_HeatVisionVerb(int32 EntryPoint, const struct FQtnPawnIntentions& K2Node_Event_pawnIntentions, float K2Node_Event_DeltaSeconds, float K2Node_Event_elapsedTime, bool K2Node_Event_isServer_4, float CallFunc_Add_FloatFloat_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class UQtnAnimNotify* K2Node_Event_animNotify, bool K2Node_Event_isServer_3, class UAnimNotify_Custom1_C* K2Node_DynamicCast_AsQtn_Anim_Notify_Custom_1, bool K2Node_DynamicCast_bSuccess, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_2, bool CallFunc_Calculate_Beam_Parameters_DidHit, const struct FVector& CallFunc_Calculate_Beam_Parameters_Beam_Tip, const struct FVector& CallFunc_Calculate_Beam_Parameters_HitNorm, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_3, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_4, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, class UAnimMontage* K2Node_Event_montage_1, bool K2Node_Event_interrupted_1, bool K2Node_Event_isServer_2, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_interrupted, bool K2Node_Event_isServer_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_5, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_6, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, TArray<class AActor*>& CallFunc_GatherActorsWithinCapsule_otherActors, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_Array_Get_Item, bool CallFunc_IsAlly_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsValid_ReturnValue_2, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_7, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_IsTouchingGround_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_8, const struct FRotator& CallFunc_MakeRotFromZ_ReturnValue, bool CallFunc_IsLocallyControlledPlayer_ReturnValue_1, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue_1, bool K2Node_CustomEvent_Hit_Surface, const struct FVector& K2Node_CustomEvent_Beam_Tip, const struct FVector& K2Node_CustomEvent_Hit_Normal, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UNiagaraComponent* CallFunc_GetNiagaraComponent_ReturnValue, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_9, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_2, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_10, class UQtnCameraComponent* CallFunc_GetQtnCameraComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetDamageValue_baseDamage, float CallFunc_GetDamageValue_ReturnValue, const struct FQtnDamageInfo& K2Node_MakeStruct_QtnDamageInfo);
};

}

