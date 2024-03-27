#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA9 (0x411 - 0x368)
// BlueprintGeneratedClass QtnWaveSpawner_BP.QtnWaveSpawner_BP_C
class AQtnWaveSpawner_BP_C : public AQtnSpawner
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x368(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        NumToSpawn;                                        // 0x370(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Spawn_Wave_Triggered;                              // 0x374(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_76[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Place_Enemies_Know_About;                          // 0x378(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_78[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UClass*>                        Class_Order_To_Spawn;                              // 0x388(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        Time_To_First_Spawn;                               // 0x398(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Spawning_Sequence_Already_Begun;                   // 0x39C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Spawning_Finished;                                 // 0x39D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7A[0x2];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Current_Index_Of_Enemy_To_Spawn;                   // 0x3A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7B[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AQtnBodyPawn*>                  My_Owned_Spawns;                                   // 0x3A8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	float                                        Spawn_Delay_Timer;                                 // 0x3B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldSpawnsKnowAboutPlayer;                       // 0x3BC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         SpawningCompleteEventSent;                         // 0x3BD(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7C[0x2];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            SpawningComplete;                                  // 0x3C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        Time_Between_Spawns;                               // 0x3D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7D[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UQtnPatrolRouteComponent*              MyPatrolRouteComponent;                            // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class AActor>                 AssociatedSpawnActor;                              // 0x3E0(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class UClass*                                ClassForSpawnAnims;                                // 0x408(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NoSFX;                                             // 0x410(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AQtnWaveSpawner_BP_C* GetDefaultObj();

	void SpawnFinished(class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class ISpawningInterface_C> K2Node_DynamicCast_AsSpawning_Interface, bool K2Node_DynamicCast_bSuccess_1);
	void SpawnVisuals();
	void PostSpawnAIPresentation(class AQtnBodyPawn* Body, const TArray<class UAnimMontage*>& AnimArray_Local, TScriptInterface<class ISpawningInterface_C> K2Node_DynamicCast_AsSpawning_Interface, bool K2Node_DynamicCast_bSuccess, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue, const struct FBodySpawnAnimArray& CallFunc_GetSpawnAnimsFromBody_AnimArrayStruct, bool CallFunc_IsServer_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, class UAnimMontage* CallFunc_Array_Get_Item, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage, const struct FQtnActionIntention& K2Node_MakeStruct_QtnActionIntention, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class ISpawningInterface_C> K2Node_DynamicCast_AsSpawning_Interface_1, bool K2Node_DynamicCast_bSuccess_2);
	void SpawnTelegraph(bool Starting);
	void SpawnWave(const struct FSpawnGroupSpec& SpawnGroup, const struct FVector& AttentionLocation, class AActor* AssociatedActor);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveDestroyed();
	void SkirmishGroupTelegraphStart_ServerOnly(class AQtnSkirmish* SpawningSkirmish, struct FQtnSkirmishRequestSpawnParams& SkirmishRequestSpawnParams);
	void CallSpawnTelegraph_MULTI(bool Starting);
	void OnQtnSpawnerSpawned(class AActor* SpawnedActor);
	void PerAISpawn_Spawner(class AActor* SpawnedActor);
	void ExecuteUbergraph_QtnWaveSpawner_BP(int32 EntryPoint, const struct FSpawnGroupSpec& K2Node_CustomEvent_SpawnGroup, const struct FVector& K2Node_CustomEvent_AttentionLocation, class AActor* K2Node_CustomEvent_AssociatedActor, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FClassPopulation& CallFunc_Array_Get_Item, bool CallFunc_LessEqual_IntInt_ReturnValue, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsQtn_Body_Pawn, bool K2Node_ClassDynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue, float K2Node_Event_DeltaSeconds, float CallFunc_Abs_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UClass* CallFunc_Array_Get_Item_1, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_SpawnWithTag_ReturnValue, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Variable_1, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_2, class AQtnSkirmish* K2Node_Event_spawningSkirmish, const struct FQtnSkirmishRequestSpawnParams& K2Node_Event_skirmishRequestSpawnParams, bool K2Node_CustomEvent_starting, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess_1, class AActor* K2Node_DynamicCast_AsActor_1, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class ISpawningInterface_C> K2Node_DynamicCast_AsSpawning_Interface, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class ISpawningInterface_C> K2Node_DynamicCast_AsSpawning_Interface_1, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, class AActor* K2Node_Event_spawnedActor, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn_1, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, class AActor* K2Node_CustomEvent_SpawnedActor, TArray<class AQtnBodyPawn*>& CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies, class AQtnBodyPawn* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, TArray<class AQtnPawn*>& CallFunc_GetTrackedThreats_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue);
	void SpawningComplete__DelegateSignature(class AQtnWaveSpawner_BP_C* CompletedSpawner);
};

}


