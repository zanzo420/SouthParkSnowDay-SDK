#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x42 (0xA32 - 0x9F0)
// BlueprintGeneratedClass DodgeVerb.DodgeVerb_C
class UDodgeVerb_C : public UQtnVerb_Archetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FQtnPawnMontage                       DodgeAction;                                       // 0x9F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         IsDone;                                            // 0xA08(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsTryingToSprint;                                  // 0xA09(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_646A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DodgeTapPeriod;                                    // 0xA0C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            WaitingToDodgeReticleTexture;                      // 0xA10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            SprintingReticleTexture;                           // 0xA18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DoubleDodgeActive;                                 // 0xA20(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DoubleDodgeInputWindowOpen;                        // 0xA21(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DoubleDodgeActivated;                              // 0xA22(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsTryingToDoubleDodge;                             // 0xA23(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_646B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQtnPerkComponent*                     CachedPerkComponent;                               // 0xA28(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDodgeStates                      DodgeState;                                        // 0xA30(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ExitOutActive;                                     // 0xA31(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UDodgeVerb_C* GetDefaultObj();

	bool ShouldTiltRotationAlongSlopes(bool CallFunc_Not_PreBool_ReturnValue);
	void SetDodgeState(enum class EDodgeStates NewDodgeState, enum class EDodgeStates LOCAL_DodgeStateToSet, bool K2Node_SwitchEnum_CmpSuccess, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, class UQtnMovementComponent* CallFunc_GetQtnMovementComponent_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_1, bool CallFunc_IsPlayerControlled_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_2, bool CallFunc_IsPlayerControlled_ReturnValue_1);
	class UTexture2D* GetReticleTexture(float CallFunc_GetElapsedVerbTime_ReturnValue, class UTexture2D* CallFunc_GetReticleTexture_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
	void HandleBlockedByLedge();
	bool CanMantle(class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, bool CallFunc_IsTouchingGround_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void HandleTouchLivingEnemy(class ABodyPawnBase_C*& EnemyBody);
	bool AllowOtherVerbToInterrupt(class UQtnVerb* OtherVerb);
	float GetLocomotionRatio();
	void StartDodge_Derived(bool CallFunc_Is_Pushing_Into_Enemy_isPushingIntoEnemy, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsPlayerControlled_ReturnValue, const struct FVector& CallFunc_GetPawnForwardVectorAlongGround_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class UQtnMovementComponent* CallFunc_GetQtnMovementComponent_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void StartDodge(int32 CallFunc_GetPerkInstanceCount_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_StartVerbAction_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, class UQtnUpgradeSlot* CallFunc_FindUpgrade_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetValueOfUpgrade_ReturnValue);
	void GetDodgeDirection(struct FVector* DodgeDirection, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, const struct FQtnPawnIntentions& CallFunc_GetIntentions_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, float CallFunc_VSizeSquared_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
	void Is_Pushing_Into_Enemy(bool* IsPushingIntoEnemy, const struct FVector& SelfLocation, const struct FVector& DodgeDirection, bool Result, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_GetDodgeDirection_dodgeDirection, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, TArray<class AQtnPawn*>& CallFunc_GetOverlappingPawns_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AQtnPawn* CallFunc_Array_Get_Item, bool CallFunc_IsAliveAndConscious_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_IsEnemy_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void ShowOnUI(bool* ShouldShow);
	void RotateBodyTowardsMovement(const struct FVector& CallFunc_GetDodgeDirection_dodgeDirection, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool CallFunc_K2_SetActorRotation_ReturnValue);
	bool CanVerbStart(class UObject* PotentialTarget, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, bool CallFunc_CanVerbStart_ReturnValue, bool CallFunc_IsTouchingGround_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	bool IsVerbFinished();
	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool Interrupted, bool IsServer);
	void OnMontageEnded(class UAnimMontage* Montage, bool Interrupted, bool IsServer);
	void OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer);
	void OnTouchOtherActor_Event_0(class AQtnPawn* SelfPawn, class AActor* OtherActor, struct FVector& TouchLocation, struct FVector& TouchNormal);
	void OnActiveVerbTicked(struct FQtnPawnIntentions& PawnIntentions, float DeltaSeconds, float ElapsedTime, bool IsServer);
	void BlockedByLedgeEvent_Event_0(class AQtnPawn* blockedPawn);
	void OnAnimNotify(class UQtnAnimNotify* AnimNotify, bool IsServer);
	void OnVerbInit(bool IsServer);
	void OnAnimWindowBegin(class UQtnAnimWindow* AnimWindow, float TotalDuration, bool IsServer);
	void OnAnimWindowEnd(class UQtnAnimWindow* AnimWindow, bool Interrupted, bool IsServer);
	void ResetDoubleDodge();
	void BindEventtoOnTouchOtherActor();
	void BindEventToBlockedbyLedgeEvent();
	void UnbindEventFromOnTouchOtherActor();
	void UnbindEventFromBlockedbyLedgeEvent();
	void ExecuteUbergraph_DodgeVerb(int32 EntryPoint, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer_8, class UAnimMontage* K2Node_Event_montage_1, bool K2Node_Event_interrupted_2, bool K2Node_Event_isServer_7, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_interrupted_1, bool K2Node_Event_isServer_6, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer_5, class AQtnPawn* K2Node_CustomEvent_selfPawn, class AActor* K2Node_CustomEvent_otherActor, const struct FVector& K2Node_CustomEvent_touchLocation, const struct FVector& K2Node_CustomEvent_touchNormal, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsEnemy_ReturnValue, bool CallFunc_IsAliveAndConscious_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsPlayerControlled_ReturnValue, class UQtnMovementComponent* CallFunc_GetQtnMovementComponent_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, const struct FQtnPawnIntentions& K2Node_Event_pawnIntentions, float K2Node_Event_DeltaSeconds, float K2Node_Event_elapsedTime, bool K2Node_Event_isServer_4, class AQtnPlayerPawn* CallFunc_GetOccupyingPlayerPawn_ReturnValue, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_IsAssociatedInputActionPressed_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_1, class AQtnPawn* K2Node_CustomEvent_blockedPawn, class UQtnMovementComponent* CallFunc_GetQtnMovementComponent_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, class UQtnAnimNotify* K2Node_Event_animNotify, bool K2Node_Event_isServer_3, class UAnimNotify_Custom2_C* K2Node_DynamicCast_AsQtn_Anim_Notify_Custom_2, bool K2Node_DynamicCast_bSuccess_1, class UAnimNotify_Custom1_C* K2Node_DynamicCast_AsQtn_Anim_Notify_Custom_1, bool K2Node_DynamicCast_bSuccess_2, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_2, class UQtnMovementComponent* CallFunc_GetQtnMovementComponent_ReturnValue_2, bool K2Node_Event_isServer_2, class UQtnAnimWindow* K2Node_Event_animWindow_1, float K2Node_Event_totalDuration, bool K2Node_Event_isServer_1, class UQtnAnimWindow* K2Node_Event_animWindow, bool K2Node_Event_interrupted, bool K2Node_Event_isServer, class UQtnAnimWindowInput* K2Node_DynamicCast_AsQtn_Anim_Window_Input, bool K2Node_DynamicCast_bSuccess_3, class UQtnAnimWindowInput* K2Node_DynamicCast_AsQtn_Anim_Window_Input_1, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsAssociatedInputActionPressed_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_IsAssociatedInputActionPressed_ReturnValue_2, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_3, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_4, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_5, class UQtnMovementComponent* CallFunc_GetQtnMovementComponent_ReturnValue_3, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_3, bool CallFunc_IsTouchingGround_ReturnValue);
};

}


