#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0xF8 - 0x90)
// BlueprintGeneratedClass Grenade_ChainLightingUpgrade.Grenade_ChainLightingUpgrade_C
class UGrenade_ChainLightingUpgrade_C : public UGrenade_UpgradeArchetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x90(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        StreakCount;                                       // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_77BD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABodyPawnAI_C*>                 FilteredPawns;                                     // 0xA0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class AQtnBodyPawn*>                  DamagedPawns;                                      // 0xB0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        NumberOfJumps;                                     // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        L_randomEnemy;                                     // 0xC4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxStreak;                                         // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               JumpOrigin;                                        // 0xCC(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGrenadeProjectile_Parent_C*           L_grenade;                                         // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABodyPawnPlayer_C*                     OwningPlayer;                                      // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LightningDamage;                                   // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DamageIncrease;                                    // 0xEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LightningDelay;                                    // 0xF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LOCAL_MaxStreak;                                   // 0xF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGrenade_ChainLightingUpgrade_C* GetDefaultObj();

	void FindNearestEnemy(const struct FVector& OriginPoint, int32* NearestActorIndex, int32 LOCAL_SavedIndex, float LOCAL_ShortestDistance, const struct FVector& LOCAL_OriginPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AQtnBodyPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Vector_Distance_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class AQtnBodyPawn* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_Vector_Distance_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue);
	void OnSlottedEvent(class UQtnUpgradeSlot* TargetSlot, struct FQtnRolledUpgradeData& RolledData, bool LoadedRunProgress);
	void OnUnslottedEvent(class UQtnUpgradeSlot* PreviousSlot, struct FQtnRolledUpgradeData& RolledData);
	void OnUpgradeRolledDataChangedEvent(class UQtnUpgradeSlot* OwningSlot, struct FQtnRolledUpgradeData& PreviousRolledData, struct FQtnRolledUpgradeData& NewRolledData);
	void OnExplosion(class AGrenadeProjectile_Parent_C* Grenade, TArray<class AActor*>& DamagedActors);
	void ExecuteUbergraph_Grenade_ChainLightingUpgrade(int32 EntryPoint, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, class UQtnVerb* CallFunc_GetSourceVerb_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable, class UQtnUpgradeSlot* K2Node_Event_TargetSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData_1, bool K2Node_Event_LoadedRunProgress, class UQtnUpgradeSlot* K2Node_Event_PreviousSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData, float CallFunc_GetValueOfUpgrade_ReturnValue, float CallFunc_GetValueOfUpgrade_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue, class UQtnUpgradeSlot* K2Node_Event_OwningSlot, const struct FQtnRolledUpgradeData& K2Node_Event_PreviousRolledData, const struct FQtnRolledUpgradeData& K2Node_Event_NewRolledData, int32 Temp_int_Array_Index_Variable, float CallFunc_GetValueOfUpgrade_ReturnValue_2, float CallFunc_GetValueOfUpgrade_ReturnValue_3, int32 CallFunc_FTrunc_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, class AGrenadeProjectile_Parent_C* K2Node_Event_Grenade, TArray<class AActor*>& K2Node_Event_DamagedActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_IsAlly_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsServer_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 Temp_int_Variable_1, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_FindNearestEnemy_NearestActorIndex, float CallFunc_Multiply_FloatFloat_ReturnValue, class AQtnBodyPawn* CallFunc_Array_Get_Item_1, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_IsAliveAndConscious_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
};

}


