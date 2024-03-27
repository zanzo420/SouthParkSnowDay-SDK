#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0xA80 - 0x9F0)
// BlueprintGeneratedClass EnemyCheat_VampireBatSwarm_Verb.EnemyCheat_VampireBatSwarm_Verb_C
class UEnemyCheat_VampireBatSwarm_Verb_C : public UQtnVerb_Archetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FQtnPawnMontage                       IntroMontage;                                      // 0x9F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         VerbDone;                                          // 0xA08(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5DB9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SwarmsToSummon;                                    // 0xA0C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Summoning;                                         // 0xA10(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5DBA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SummonedSwarms;                                    // 0xA14(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeBetweenSwarms;                                 // 0xA18(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timer;                                             // 0xA1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnPawnMontage                       SummonMontange;                                    // 0xA20(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FVector                               StartLoc;                                          // 0xA30(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RiseTimer;                                         // 0xA3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               HeightToRise;                                      // 0xA40(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5DBB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnPawnMontage                       OutroMontage;                                      // 0xA50(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         HasSwitchedToSummon;                               // 0xA60(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5DBC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABodyPawnBase_C*>               Target_Bodies;                                     // 0xA68(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	class UBattlefieldTrackingComponent_C*       Cached_Battlefield_Tracking_Component;             // 0xA78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UEnemyCheat_VampireBatSwarm_Verb_C* GetDefaultObj();

	void AcquireTargets_ServerOnly(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ABodyPawnBase_C*>& CallFunc_GetPlayerAndBotBodies_bodies, class ABodyPawnBase_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	float GetDamageValue(class AActor* VictimActor, float* BaseDamage, float DamageMultiplier, float CallFunc_GetDamageValue_baseDamage, float CallFunc_GetDamageValue_ReturnValue);
	bool IsVerbFinished();
	bool CanVerbStart(class UObject* PotentialTarget, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, bool CallFunc_CanVerbStart_ReturnValue, bool CallFunc_IsTouchingGround_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer);
	void OnAnimNotify(class UQtnAnimNotify* AnimNotify, bool IsServer);
	void OnVerbInit(bool IsServer);
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool Interrupted, bool IsServer);
	void OnMontageEnded(class UAnimMontage* Montage, bool Interrupted, bool IsServer);
	void ExecuteUbergraph_EnemyCheat_VampireBatSwarm_Verb(int32 EntryPoint, int32 CallFunc_Add_IntInt_ReturnValue, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer_5, float CallFunc_StartVerbAction_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_2, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UStatusEffect_Hover_Vampire_C* CallFunc_AddStatusEffect_ServerOnly_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_3, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class ABatSwarmProjectile_C* CallFunc_SpawnActor_ServerOnly_ReturnValue, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer_4, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_4, class UStatusEffect_Hover_Vampire_C* CallFunc_GetStatusEffect_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Variable, class UQtnAnimNotify* K2Node_Event_animNotify, bool K2Node_Event_isServer_3, class UAnimNotify_FireProjectile_C* K2Node_DynamicCast_AsAnim_Notify_Fire_Projectile, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_isServer_2, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess_1, class UAnimMontage* K2Node_Event_montage_1, bool K2Node_Event_interrupted_1, bool K2Node_Event_isServer_1, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_interrupted, bool K2Node_Event_isServer, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
};

}


