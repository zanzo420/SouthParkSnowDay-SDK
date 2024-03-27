#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x158 - 0x120)
// BlueprintGeneratedClass StatusEffect_BS_Traps.StatusEffect_BS_Traps_C
class UStatusEffect_BS_Traps_C : public UStatusEffect_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x120(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         DontDecreaseThreshold;                             // 0x128(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_518F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Time_Until_Next_Trap;                              // 0x12C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnRangedFloat                       Time_Between_Traps;                                // 0x130(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class AQtnPawn*                              Affected_Pawn;                                     // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEnemyBSManagerComponent_C*            Bullshit_Manager;                                  // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxTrapsPerBurst;                                  // 0x148(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5190[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnGameStateArchetype_C*              CachedGameState;                                   // 0x150(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UStatusEffect_BS_Traps_C* GetDefaultObj();

	void DropTraps_ServerOnly(const struct FVector& Position, const struct FVector& CenterPosition, int32 NumNearbyPlayers, int32 NumTrapsToSpawn, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AQtnBodyPawn*>& CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies, int32 Temp_int_Variable_2, class AQtnBodyPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class ATrapCrapperMine_C* CallFunc_GetClassDefaultObject_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_QtnGetRandomReachablePoint_foundRandomReachablePoint, const struct FVector& CallFunc_QtnGetRandomReachablePoint_ReturnValue, class ATrapCrapperMine_C* CallFunc_SpawnProjectileFromPawn_ServerOnly_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_2, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class ATrapCrapperMine_C* CallFunc_GetClassDefaultObject_ReturnValue_1, float CallFunc_Multiply_IntFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class ATrapCrapperMine_C* CallFunc_SpawnProjectileFromPawn_ServerOnly_ReturnValue_1);
	void DropObject_ServerOnly(bool* Succeeded, int32 PercentileDiceRoll, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_SnapToGround_foundGround, const struct FVector& CallFunc_SnapToGround_hitNormal, enum class EPhysicalSurface CallFunc_SnapToGround_physicalSurface, const struct FVector& CallFunc_SnapToGround_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class ATrapCrapperSoccerBall_C* CallFunc_SpawnActor_ServerOnly_ReturnValue, class ALoot_Container_Lunchbox_C* CallFunc_SpawnActor_ServerOnly_ReturnValue_1);
	void OnStatusEffectBegin(class AActor* AffectedActor, class AQtnPawn* Instigator);
	void OnStatusEffectEnd(class AActor* AffectedActor, class AQtnPawn* Instigator, bool IsActorBeingDestroyed);
	void OnStatusEffectTick(float DeltaSeconds);
	void Make_Player_Toot();
	void ExecuteUbergraph_StatusEffect_BS_Traps(int32 EntryPoint, float K2Node_Event_DeltaSeconds, bool CallFunc_IsCombatInhibited_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AActor* K2Node_Event_affectedActor, class AQtnPawn* K2Node_Event_instigator, bool K2Node_Event_isActorBeingDestroyed, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_DropObject_ServerOnly_Succeeded, float CallFunc_RandomFloatInRange_ReturnValue_1, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, bool CallFunc_IsServer_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess_1, class AActor* K2Node_Event_affectedActor_1, class AQtnPawn* K2Node_Event_instigator_1, class AQtnPawn* K2Node_DynamicCast_AsQtn_Pawn, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, bool CallFunc_IsServer_ReturnValue_2, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_IsServer_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue);
};

}


