#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x2F8 - 0x250)
// BlueprintGeneratedClass LevelFeatureSpawner.LevelFeatureSpawner_C
class ALevelFeatureSpawner_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x250(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                   Billboard;                                         // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       Arrow;                                             // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x268(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UClass*                                ClassToSpawn;                                      // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                SpawnedItem;                                       // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHiddenLocation;                                  // 0x280(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsStrategicLocation;                               // 0x281(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsGoodLocationForPlayersToHold;                    // 0x282(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsChumpLocation;                                   // 0x283(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4197[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            ItemSpawned;                                       // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         Init;                                              // 0x298(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_419D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnPatrolRoute*                       PatrolRoute;                                       // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxAdoption;                                       // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41A1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_HoldVolume_C*                      MyHoldVolume;                                      // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AQtnBodyPawn*>                  PatrolAIsToTrack;                                  // 0x2B8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	enum class EQtnGoalLocationType              LocationType;                                      // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41A4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          GoalTags;                                          // 0x2D0(0x10)(Edit, BlueprintVisible)
	class AEncounterZoneVolume_C*                MyEncounterZone;                                   // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_SafeSpawnLocation_C*               GoalSafeSpawn;                                     // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                AssociatedActor;                                   // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ALevelFeatureSpawner_C* GetDefaultObj();

	void Server_Activate_VOVolumes(bool CallFunc_IsServer_ReturnValue);
	void Is_Location_Of_Type(enum class EQtnGoalLocationType Type, class FName Goal_Item_Tag, bool* TypesMatch, bool Match, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Spawn();
	void IgnorePatrols();
	void AllowPatrols();
	void SetupHoldVolume();
	void ExecuteUbergraph_LevelFeatureSpawner(int32 EntryPoint, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IInterface_BP_Effigy_C> K2Node_DynamicCast_AsInterface_BP_Effigy, bool K2Node_DynamicCast_bSuccess, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, class ABP_GoalPickup_C* K2Node_DynamicCast_AsBP_Goal_Pickup, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_SwitchEnum_CmpSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_SnapToGround_foundGround, const struct FVector& CallFunc_SnapToGround_hitNormal, enum class EPhysicalSurface CallFunc_SnapToGround_physicalSurface, const struct FVector& CallFunc_SnapToGround_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsServer_ReturnValue_3, bool CallFunc_IsServer_ReturnValue_4);
	void ItemSpawned__DelegateSignature(class ALevelFeatureSpawner_C* Level_feature_spawner);
};

}


