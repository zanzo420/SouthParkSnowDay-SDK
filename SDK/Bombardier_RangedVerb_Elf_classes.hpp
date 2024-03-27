#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xA10 - 0x9F0)
// BlueprintGeneratedClass Bombardier_RangedVerb_Elf.Bombardier_RangedVerb_Elf_C
class UBombardier_RangedVerb_Elf_C : public UQtnVerb_Archetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        MaxNumSprouts;                                     // 0x9F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ExpectedEndTime;                                   // 0x9FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasPathToTarget;                                   // 0xA00(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D82[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxPathLength;                                     // 0xA04(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PathInterval;                                      // 0xA08(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ProjectileSpeed;                                   // 0xA0C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBombardier_RangedVerb_Elf_C* GetDefaultObj();

	void Determine_Launch_Velocity(struct FVector* LaunchVelocity, class AQtnItem* CallFunc_GetOwningItem_ReturnValue, class UObject* CallFunc_GetIntendedTarget_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AQtnPawn* K2Node_DynamicCast_AsQtn_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetWorldGravity_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_GetPawnFeetLocation_ReturnValue, const struct FVector& CallFunc_GetPredictiveAimVelocity_projectileVelocity, bool CallFunc_GetPredictiveAimVelocity_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue);
	void StartSeedThrow(float CallFunc_GetElapsedVerbTime_ReturnValue, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage, float CallFunc_StartVerbAction_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
	bool IsVerbFinished(float CallFunc_GetElapsedVerbTime_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
	bool CanVerbStart(class UObject* PotentialTarget, class AQtnPawn* K2Node_DynamicCast_AsQtn_Pawn, bool K2Node_DynamicCast_bSuccess);
	void OnAnimNotify(class UQtnAnimNotify* AnimNotify, bool IsServer);
	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void ExecuteUbergraph_Bombardier_RangedVerb_Elf(int32 EntryPoint, class UQtnAnimNotify* K2Node_Event_animNotify, bool K2Node_Event_isServer_1, class UAnimNotify_Custom1_C* K2Node_DynamicCast_AsQtn_Anim_Notify_Custom_1, bool K2Node_DynamicCast_bSuccess, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer, const struct FVector& CallFunc_Determine_Launch_Velocity_launchVelocity, class UObject* CallFunc_GetIntendedTarget_ReturnValue, class AQtnPawn* K2Node_DynamicCast_AsQtn_Pawn, bool K2Node_DynamicCast_bSuccess_1, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, class AQtnItem* CallFunc_GetOwningItem_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class ABombardierProjectile_ElvenSprout_C* CallFunc_SpawnProjectile_ServerOnly_ReturnValue);
};

}


