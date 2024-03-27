#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x4E0 - 0x4C8)
// BlueprintGeneratedClass AimableCannonProjectile_SpawnCannonball.AimableCannonProjectile_SpawnCannonball_C
class AAimableCannonProjectile_SpawnCannonball_C : public AAimableCannonProjectile_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_            CannonballSpawned;                                 // 0x4D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class AAimableCannonProjectile_SpawnCannonball_C* GetDefaultObj();

	void NotifyGoalOfCannonballSpawn(class ABP_Cannonball_C* Cannonball, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManagerBase_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Base, bool K2Node_DynamicCast_bSuccess, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class UQtnGoal* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class IInterface_CannonTutorial_C> K2Node_DynamicCast_AsInterface_Cannon_Tutorial, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_DoesImplementInterface_ReturnValue, class UQtnGoalManager_Playground_Boss_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Playground_Boss, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Add_IntInt_ReturnValue, TScriptInterface<class IInterface_StanBossBattle_C> K2Node_DynamicCast_AsInterface_Stan_Boss_Battle, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsServer_ReturnValue);
	void OnFinalizeImpactEvent(const struct FHitResult& HitResult, bool IsServer);
	void Multicast_Detonate();
	void ExecuteUbergraph_AimableCannonProjectile_SpawnCannonball(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, const struct FHitResult& K2Node_Event_HitResult, bool K2Node_Event_isServer, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class AAimableCannonPawn_C* K2Node_DynamicCast_AsAimable_Cannon_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class ABP_Cannonball_C* CallFunc_SpawnActor_ServerOnly_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_SnapToGround_foundGround, const struct FVector& CallFunc_SnapToGround_hitNormal, enum class EPhysicalSurface CallFunc_SnapToGround_physicalSurface, const struct FVector& CallFunc_SnapToGround_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue);
	void CannonballSpawned__DelegateSignature();
};

}


