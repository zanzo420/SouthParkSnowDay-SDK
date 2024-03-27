#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x27F (0x4F0 - 0x271)
// BlueprintGeneratedClass Snowman_BP.Snowman_BP_C
class ASnowman_BP_C : public AQtnAIJobActorBase_C
{
public:
	uint8                                        Pad_4AD1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Hat;                                               // 0x280(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQtnGoalMarkerComponent*               QtnGoalMarker;                                     // 0x288(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQtnAIJobComponentBaseNative*          QtnAIJobComponentBase_buildSnowman;                // 0x290(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ULootSpawnComponentArchetype_C*        LootSpawnComponentArchetype;                       // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Sfx_evt_snowperson_crumble_Cue;                    // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Niagara;                                           // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDamageReceptorSmashable_C*            DamageReceptorSmashable;                           // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                   Billboard;                                         // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Head;                                              // 0x2C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQtnSynchComponent*                    QtnSyncRight;                                      // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQtnSynchComponent*                    QtnSynchLeft;                                      // 0x2D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQtnFrobbableComponent*                RightFrobbable;                                    // 0x2D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQtnFrobbableComponent*                LeftFrobbable;                                     // 0x2E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Body;                                              // 0x2E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         Randomize;                                         // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4AD2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UStaticMesh*>                   Body_List;                                         // 0x2F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        Seed;                                              // 0x308(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRandomStream                         Stream;                                            // 0x30C(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor)
	uint8                                        Pad_4AD3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, class UQtnFrobbableComponent*> BuilderRoleToFrobbable;                            // 0x318(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, ContainsInstancedReference)
	bool                                         StartwOpenEmployement;                             // 0x368(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4AD4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Chance_to_Spawn_Enemy_Instead_of_Loot;             // 0x36C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnSpawnSnowmanEnemy;                               // 0x370(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TSubclassOf<class AQtnPawn>                  Pawn_Archetype;                                    // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnSnowmanDeath;                                    // 0x388(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ASkirmishBase_C*                       Skirmish;                                          // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         R_IsDestroyed;                                     // 0x3A0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_4AD5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UStaticMesh*>                   Head_List;                                         // 0x3A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         RandombyLocation;                                  // 0x3B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4AD6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIndicatorData                        Indicator_Data;                                    // 0x3C0(0x129)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_4AD7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASnowman_BP_C* GetDefaultObj();

	void GetIndicatorData(struct FIndicatorData* IndicatorData);
	void RandomizeSnowman(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, int32 CallFunc_FFloor_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue);
	void SetupSnowman(int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_RandomBoolWithWeightFromStream_ReturnValue, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue, class UStaticMesh* CallFunc_Array_Get_Item, bool CallFunc_SetStaticMesh_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, float CallFunc_RandomFloatInRangeFromStream_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, const struct FHitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue_1, class UStaticMesh* CallFunc_Array_Get_Item_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1, const struct FVector& CallFunc_InverseTransformLocation_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult);
	void OnRep_IsDestroyed(bool CallFunc_IsValid_ReturnValue);
	void DestroyAttachedFXActors(const TArray<class AActor*>& ActorArray, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AQtnFXActor* K2Node_DynamicCast_AsQtn_FXActor, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_GetAttachedActors_OutActors);
	void Spawn_Enemy(bool* Spawn_Successful, class ASkirmishBase_C* LOCAL_FoundSkirmish, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, class UQtnSkirmishManager* CallFunc_GetSkirmishManager_ReturnValue, bool CallFunc_IsServer_ReturnValue, TSubclassOf<class AQtnPawn> CallFunc_ApplyPawnSubstitution_ServerOnly_ReturnValue, class AQtnPawn* CallFunc_SpawnActor_ServerOnly_ReturnValue, TArray<class AQtnPlayerPawn*>& CallFunc_GetAllPlayerPawns_foundPlayerPawns, int32 CallFunc_Array_Length_ReturnValue, class AQtnPlayerPawn* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class AQtnPlayerController* CallFunc_GetQtnPlayerController_ReturnValue, TArray<class AQtnPawn*>& CallFunc_GetTrackedThreats_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class AQtnPawn* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, class ABodyPawnAI_C* K2Node_DynamicCast_AsBody_Pawn_AI, bool K2Node_DynamicCast_bSuccess, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue, class AQtnSkirmish* CallFunc_GetOwningSkirmish_ReturnValue, class ASkirmishBase_C* K2Node_DynamicCast_AsSkirmish_Base, bool K2Node_DynamicCast_bSuccess_1);
	void UpdateEditorIcon(class UTexture2D* LOCAL_ChosenSprite, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue_2, bool CallFunc_Array_Contains_ReturnValue_3, bool CallFunc_Array_Contains_ReturnValue_4);
	void UserConstructionScript();
	void BndEvt__Snowman_BP_DamageReceptorSmashable_K2Node_ComponentBoundEvent_1_QtnIncomingDamageEvent__DelegateSignature(class UQtnDamageReceptorComponent* DamagedReceptor, struct FQtnDamageInfo& DamageInfo, struct FQtnHitReactionInfo& HitReactionInfo, bool IsServer);
	void BndEvt__Snowman_BP_QtnAIJobComponentBase_buildSnowman_K2Node_ComponentBoundEvent_2_QtnAIEmployEvent__DelegateSignature(class UQtnAIJobRole* AiJobRole, class FName ClusterID, class FName RoleID, class AQtnBodyController* AIController, class UBlackboardComponent* BlackboardComponent, bool IsCombatJob);
	void Fling_Spawned_Enemy(class ACharacter* Spawned_Enemy);
	void ReceiveBeginPlay();
	void KillSnowman();
	void ExecuteUbergraph_Snowman_BP(int32 EntryPoint, class UQtnDamageReceptorComponent* K2Node_ComponentBoundEvent_damagedReceptor, const struct FQtnDamageInfo& K2Node_ComponentBoundEvent_damageInfo, const struct FQtnHitReactionInfo& K2Node_ComponentBoundEvent_hitReactionInfo, bool K2Node_ComponentBoundEvent_isServer, float CallFunc_SpawnLoot_ServerOnly_secondsToFinishSpawning, class UQtnAIJobRole* K2Node_ComponentBoundEvent_aiJobRole, class FName K2Node_ComponentBoundEvent_clusterID, class FName K2Node_ComponentBoundEvent_roleID, class AQtnBodyController* K2Node_ComponentBoundEvent_aiController, class UBlackboardComponent* K2Node_ComponentBoundEvent_blackboardComponent, bool K2Node_ComponentBoundEvent_isCombatJob, enum class EQtnOutputYesNoEnum CallFunc_IsThisMapAMissionWorldBP_outputPin, class UQtnFrobbableComponent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_IsValidInCurrentArc_Valid_today, bool CallFunc_IsServer_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_RandomFloat_ReturnValue, bool CallFunc_Spawn_Enemy_Spawn_Successful, bool CallFunc_LessEqual_FloatFloat_ReturnValue, class FName Temp_name_Variable, class ACharacter* K2Node_CustomEvent_Spawned_Enemy, float CallFunc_RandomFloat_ReturnValue_1, float CallFunc_RandomFloat_ReturnValue_2, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_1, class FName Temp_name_Variable_1, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_IsServer_ReturnValue_1);
	void OnSnowmanDeath__DelegateSignature(class ASnowman_BP_C* Snowman);
	void OnSpawnSnowmanEnemy__DelegateSignature(class ASkirmishBase_C* Skirmish, class AQtnPawn* New_Enemy);
};

}


