#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x4A4 - 0x494)
// BlueprintGeneratedClass Projectile_FireOrb_BulletHellUntargeted.Projectile_FireOrb_BulletHellUntargeted_C
class AProjectile_FireOrb_BulletHellUntargeted_C : public AProjectile_Homing_FireOrb_C
{
public:
	uint8                                        Pad_5D1A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x498(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Projectile_Speed;                                  // 0x4A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AProjectile_FireOrb_BulletHellUntargeted_C* GetDefaultObj();

	void Secondary_Behavior(const struct FVector& Aim_Direction, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_Add_VectorInt_ReturnValue, const struct FVector& CallFunc_GetActorRightVector_ReturnValue_1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue);
	void UserConstructionScript(bool Temp_bool_Variable, class UNiagaraSystem* Temp_object_Variable, class UNiagaraSystem* Temp_object_Variable_1, class UNiagaraSystem* K2Node_Select_Default, enum class EQtnUtilitiesSwitchQuality CallFunc_BranchUseSwitchQuality_Branch, bool K2Node_SwitchEnum_CmpSuccess, class UQtnProjectileMovementComponent* CallFunc_GetProjectileMovement_ReturnValue, bool CallFunc_IsPlatform_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_Projectile_FireOrb_BulletHellUntargeted(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}


