#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xBD (0x575 - 0x4B8)
// BlueprintGeneratedClass BS_Spawn_MonsterCloset_Snow.BS_Spawn_MonsterCloset_Snow_C
class ABS_Spawn_MonsterCloset_Snow_C : public ABS_Spawn_MonsterCloset_Archetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Plane;                                             // 0x4C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Banner_SM;                                         // 0x4C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Attach_SM;                                         // 0x4D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Sfx_amb_banner_loop_01_Cue;                        // 0x4D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     PerSpawn;                                          // 0x4E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Niagara;                                           // 0x4E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UAnimMontage*>                  Anims;                                             // 0x4F0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<enum class EUIFactionEnum, class UMaterialInstance*> FactionToMaterial;                                 // 0x500(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class EUIFactionEnum                    CurrentFaction;                                    // 0x550(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                         LOCAL_init;                                        // 0x551(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2AFE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRandomStream                         RandomStream;                                      // 0x554(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor)
	struct FVector                               Banner_Location_A;                                 // 0x55C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Banner_Location_B;                                 // 0x568(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ArcisSet;                                          // 0x574(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABS_Spawn_MonsterCloset_Snow_C* GetDefaultObj();

	class USceneComponent* GetSpawnTransformComponent(TSubclassOf<class AActor> DesiredClassToSpawn);
	void InitCurrentFaction(const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManagerBase_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue, int32 CallFunc_GetCurrentArc_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
	void OnRep_CurrentFaction();
	void LOCAL_UpdateDecoration(const struct FVector& L_BannerLocation, class UMaterialInstance* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_RandomBoolFromStream_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, bool CallFunc_RandomBoolFromStream_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, int32 CallFunc_FFloor_ReturnValue);
	void SpawnTelegraph(bool Starting);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SpawnPresentationStart();
	void SpawnTelegraph_client(bool Starting);
	void SpawnPresentationStop();
	void PerAISpawn_Spawner(class AActor* SpawnedActor);
	void OnArcChangeEvent(int32 NewArc);
	void OnQtnReadyForGameplay();
	void ExecuteUbergraph_BS_Spawn_MonsterCloset_Snow(int32 EntryPoint, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, float K2Node_Event_DeltaSeconds, bool K2Node_CustomEvent_starting, class AActor* K2Node_Event_spawnedActor, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManagerBase_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Base, bool K2Node_DynamicCast_bSuccess, int32 K2Node_CustomEvent_NewArc);
};

}


