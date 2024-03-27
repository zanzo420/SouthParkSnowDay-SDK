#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x620 - 0x568)
// BlueprintGeneratedClass Base_Item_Archetype.Base_Item_Archetype_C
class ABase_Item_Archetype_C : public AQtnItem
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x568(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UQtnDebugDisplayComponent*             Debugging_Component;                               // 0x570(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Spawn_Animation_Rotation_09A0D93E4E3E5916A2DDDAAB2F300983; // 0x578(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Spawn_Animation_Move_Height_09A0D93E4E3E5916A2DDDAAB2F300983; // 0x57C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Spawn_Animation_Move_Position_09A0D93E4E3E5916A2DDDAAB2F300983; // 0x580(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Spawn_Animation__Direction_09A0D93E4E3E5916A2DDDAAB2F300983; // 0x584(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56B7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Spawn_Animation;                                   // 0x588(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Dropped;                                           // 0x590(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_56B8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnBodyPawn*                          Body_Pawn;                                         // 0x598(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Has_hud_marker_on_drop;                            // 0x5A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Is_objective_item;                                 // 0x5A1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Tempfixfor_glowshader;                             // 0x5A2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         NotifyOnDrop;                                      // 0x5A3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ShowUIPopup;                                       // 0x5A4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UIInfoUp;                                          // 0x5A5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56B9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Spawn_Location;                                    // 0x5A8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Spawn_Target;                                      // 0x5B4(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Spawn_Height;                                      // 0x5C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Spawn_Height_Range;                                // 0x5C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Spawn_Delay;                                       // 0x5C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Pickup_Enabled;                                    // 0x5CC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56BA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       ComponentToSpawnFrom;                              // 0x5D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               GroundCheckOffset;                                 // 0x5D8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              TargetRotation;                                    // 0x5E4(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ZUp;                                               // 0x5F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56BB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              StartRotation;                                     // 0x5F4(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ForcedToActor;                                     // 0x600(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         InSpawnAnim;                                       // 0x601(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_56BC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        TraceIgnore;                                       // 0x608(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class UBP_Loot_C*                            MyPopUpWidget;                                     // 0x618(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABase_Item_Archetype_C* GetDefaultObj();

	struct FVector FetchWorldLocation(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
	bool FetchShowItemPopUpBool();
	struct FQtnItemData FetchItemData(const struct FQtnItemData& CallFunc_GetItemData_ReturnValue);
	class AActor* FetchItemActor();
	void OnRep_InSpawnAnim();
	void ShowUIInfo(bool UIOn);
	void OnRep_Dropped();
	void Spawn_Animation__FinishedFunc();
	void Spawn_Animation__UpdateFunc();
	void OnInventoryRemove(class AActor* OwningActor);
	void Spawn_Anim(class USceneComponent* SpawnComponent);
	void ReceiveBeginPlay();
	void GroundCheck();
	void OnInventoryAdd(class AActor* OwningActor);
	void OnQtnReadyForGameplay();
	void Multicast_SpawnAnim(float PlayRate, float SpawnHeight, const struct FVector& SpawnLocation, const struct FVector& SpawnTarget, const struct FRotator& StartRotation, const struct FRotator& TargetRotation);
	void ExecuteUbergraph_Base_Item_Archetype(int32 EntryPoint, class AActor* K2Node_Event_owningActor_1, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, class USceneComponent* K2Node_CustomEvent_spawnComponent, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class AActor* K2Node_Event_owningActor, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_3, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, bool CallFunc_IsHero_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_4, const struct FVector& CallFunc_VLerp_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_5, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit_1, bool CallFunc_LineTraceSingle_ReturnValue_1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FRotator& CallFunc_MakeRotFromY_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FRotator& CallFunc_MakeRotFromZ_ReturnValue, float K2Node_CustomEvent_playRate, float K2Node_CustomEvent_spawnHeight, const struct FVector& K2Node_CustomEvent_spawnLocation, const struct FVector& K2Node_CustomEvent_spawnTarget, const struct FRotator& K2Node_CustomEvent_startRotation, const struct FRotator& K2Node_CustomEvent_targetRotation, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, const struct FRotator& CallFunc_RLerp_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_HasLootRecipient_ReturnValue, const struct FQtnItemData& CallFunc_GetItemData_ReturnValue);
};

}


