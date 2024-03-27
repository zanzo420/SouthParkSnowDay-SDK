#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0xA50 - 0x9F0)
// BlueprintGeneratedClass RangedTowerVerb.RangedTowerVerb_C
class URangedTowerVerb_C : public UQtnVerb_Archetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         M_waitingForButtonPress;                           // 0x9F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_61BC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        M_timeToForceButtonPress;                          // 0x9FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         R_verbDone;                                        // 0xA00(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_61BD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpawnLocationOffset;                               // 0xA04(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARangedTowerFootprint_C*               R_myFootprint;                                     // 0xA08(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Upgrade_ExplodeOnDeath;                            // 0xA10(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_61BE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ExplodeOnDeathRadius;                              // 0xA14(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ExplodeonDeath_BaseDamage;                         // 0xA18(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Upgrade_Homing;                                    // 0xA1C(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_61BF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Upgrade_HomingScalar;                              // 0xA20(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Upgrade_UseGrossOutDamage;                         // 0xA24(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_61C0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Upgrade_GrossOutPoolRadius;                        // 0xA28(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Upgrade_GrossOutPoolDuration;                      // 0xA2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Upgrade_UseConcussiveDamage;                       // 0xA30(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_61C1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Upgrade_ConcussiveBlastRange;                      // 0xA34(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Upgrade_ConcussiveProjectileCount;                 // 0xA38(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Upgrade_MineField;                                 // 0xA3C(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_61C2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Upgrade_MineField_TotalMines;                      // 0xA40(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Upgrade_MineField_MineDamage;                      // 0xA44(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeLastPlaced;                                    // 0xA48(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeBetweenPlacements;                             // 0xA4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URangedTowerVerb_C* GetDefaultObj();

	void UpdateWaitingForButtonPress(float CallFunc_GetElapsedVerbTime_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FQtnPawnIntentions& CallFunc_GetIntentions_ReturnValue, enum class EQtnUIBodyActionEnum CallFunc_GetAssociatedInputAction_ReturnValue, bool CallFunc_IsBodyActionPressed_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	bool AllowOtherVerbToInterrupt(class UQtnVerb* OtherVerb);
	bool IsVerbFinished(bool CallFunc_IsVerbFinished_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	bool CanVerbStart(class UObject* PotentialTarget, bool CallFunc_CanVerbStart_ReturnValue, float CallFunc_GetQtnTimeSeconds_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_IsAirborne_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer);
	void FootprintPlanted();
	void FootprintDestroyed();
	void OnActiveVerbTicked(struct FQtnPawnIntentions& PawnIntentions, float DeltaSeconds, float ElapsedTime, bool IsServer);
	void ExecuteUbergraph_RangedTowerVerb(int32 EntryPoint, float CallFunc_GetQtnTimeSeconds_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class ARangedTowerFootprint_C* CallFunc_SpawnActor_ServerOnly_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FQtnPawnIntentions& K2Node_Event_pawnIntentions, float K2Node_Event_DeltaSeconds, float K2Node_Event_elapsedTime, bool K2Node_Event_isServer, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsBodyActionPressed_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, enum class EQtnBodyAliveness CallFunc_GetBodyAliveness_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_2, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer_1, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer_2, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
};

}


