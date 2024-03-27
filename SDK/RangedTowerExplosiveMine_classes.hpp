#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x590 - 0x580)
// BlueprintGeneratedClass RangedTowerExplosiveMine.RangedTowerExplosiveMine_C
class ARangedTowerExplosiveMine_C : public AExplosiveMineBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x580(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UDecalComponent*                       SnowDecal;                                         // 0x588(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ARangedTowerExplosiveMine_C* GetDefaultObj();

	void SetDamage(int32 Damage, float CallFunc_Conv_IntToFloat_ReturnValue);
	void StartRotating();
	void StopRotating();
	void ExecuteUbergraph_RangedTowerExplosiveMine(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_RandomUnitVectorInConeInDegrees_ReturnValue, const struct FRotator& CallFunc_MakeRotFromZ_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult);
};

}


