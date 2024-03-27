#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x4A4 - 0x494)
// BlueprintGeneratedClass Projectile_FireOrb_BulletHell.Projectile_FireOrb_BulletHell_C
class AProjectile_FireOrb_BulletHell_C : public AProjectile_Homing_FireOrb_C
{
public:
	uint8                                        Pad_56BD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x498(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Projectile_Speed;                                  // 0x4A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AProjectile_FireOrb_BulletHell_C* GetDefaultObj();

	void Secondary_Behavior();
	void ExecuteUbergraph_Projectile_FireOrb_BulletHell(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_Multiply_IntFloat_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue);
};

}


