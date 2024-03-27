#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0xA80 - 0x9F0)
// BlueprintGeneratedClass Bombardier_RangedVerb.Bombardier_RangedVerb_C
class UBombardier_RangedVerb_C : public UQtnVerb_Archetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UObject*                               Target;                                            // 0x9F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Target_Location;                                   // 0xA00(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_62AF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnPawnMontage                       Verb_Action;                                       // 0xA10(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         Verb_Finished;                                     // 0xA20(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62B0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Projectile;                                        // 0xA28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Fired;                                             // 0xA30(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62B1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Target_Velocity;                                   // 0xA34(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Default_Forward_Attack_Distance_Without_Target;    // 0xA40(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Standard_Projectile_Speed;                         // 0xA44(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Standard_Projectile_Distance;                      // 0xA48(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Minimum_Projectile_Speed;                          // 0xA4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Projectile_Velocity;                               // 0xA50(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Maximum_Muzzle_Deviation;                          // 0xA5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Muzzle_Position;                                   // 0xA60(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Projectile_Launch_Speed;                           // 0xA6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                ProjectileClass;                                   // 0xA70(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                MuzzleFlash;                                       // 0xA78(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBombardier_RangedVerb_C* GetDefaultObj();

	void FireProjectile_ServerOnly(const struct FVector& Launch_Velocity, const struct FVector& Muzzle_Location, class AQtnProjectile* CallFunc_SpawnProjectile_ServerOnly_ReturnValue, bool CallFunc_IsValidClass_ReturnValue);
	void Get_Target_Position(bool Directly_Set_Target_Location_, struct FVector* Found_Position, const struct FVector& Local_Found_Location, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	void Get_Target_Velocity(class UObject* Object, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetLastUpdateVelocity_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue);
	bool CanVerbStart(class UObject* PotentialTarget, class AQtnItem* CallFunc_GetOwningItem_ReturnValue, bool CallFunc_CanVerbStart_ReturnValue, class ABombardierWeapon_C* K2Node_DynamicCast_AsBombardier_Weapon, bool K2Node_DynamicCast_bSuccess, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, bool CallFunc_IsTouchingGround_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	bool IsVerbFinished();
	void OnAnimNotify(class UQtnAnimNotify* AnimNotify, bool IsServer);
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool Interrupted, bool IsServer);
	void OnMontageEnded(class UAnimMontage* Montage, bool Interrupted, bool IsServer);
	void OnActiveVerbTicked(struct FQtnPawnIntentions& PawnIntentions, float DeltaSeconds, float ElapsedTime, bool IsServer);
	void OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer);
	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void OnProjectileSpawned(class AQtnProjectile* SpawnedProjectile, bool IsServer);
	void ExecuteUbergraph_Bombardier_RangedVerb(int32 EntryPoint, class UQtnAnimNotify* K2Node_Event_animNotify, bool K2Node_Event_isServer_6, class UAnimNotify_Custom1_C* K2Node_DynamicCast_AsQtn_Anim_Notify_Custom_1, bool K2Node_DynamicCast_bSuccess, class UAnimMontage* K2Node_Event_montage_1, bool K2Node_Event_interrupted_1, bool K2Node_Event_isServer_5, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_interrupted, bool K2Node_Event_isServer_4, const struct FVector& CallFunc_GetWorldGravity_ReturnValue, const struct FQtnPawnIntentions& K2Node_Event_pawnIntentions, float K2Node_Event_DeltaSeconds, float K2Node_Event_elapsedTime, bool K2Node_Event_isServer_3, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer_2, const struct FVector& CallFunc_Get_Target_Position_Found_Position, const struct FVector& CallFunc_Get_Target_Position_Found_Position_1, float CallFunc_StartVerbAction_ReturnValue, const struct FVector& CallFunc_GetWorldGravity_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class AQtnPawn* K2Node_DynamicCast_AsQtn_Pawn, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, float CallFunc_Vector_Distance_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, const struct FVector& CallFunc_GetPredictiveAimVelocity_projectileVelocity, bool CallFunc_GetPredictiveAimVelocity_ReturnValue, const struct FVector& CallFunc_GetPredictiveAimVelocityForPawnTarget_projectileVelocity, bool CallFunc_GetPredictiveAimVelocityForPawnTarget_ReturnValue, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_GetPredictiveAimVelocity_projectileVelocity_1, bool CallFunc_GetPredictiveAimVelocity_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, const struct FVector& CallFunc_GetPredictiveAimVelocity_projectileVelocity_2, bool CallFunc_GetPredictiveAimVelocity_ReturnValue_2, bool CallFunc_IsLocallyControlled_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, bool Temp_bool_Variable, class AQtnProjectile* K2Node_Event_spawnedProjectile, bool K2Node_Event_isServer, const struct FVector& K2Node_Select_Default, bool CallFunc_IsValidClass_ReturnValue, class AQtnItem* CallFunc_GetOwningItem_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue);
};

}


