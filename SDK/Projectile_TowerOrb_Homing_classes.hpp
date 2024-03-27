#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x518 - 0x504)
// BlueprintGeneratedClass Projectile_TowerOrb_Homing.Projectile_TowerOrb_Homing_C
class AProjectile_TowerOrb_Homing_C : public AProjectile_TowerOrb_C
{
public:
	uint8                                        Pad_167B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x508(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     Niagara;                                           // 0x510(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AProjectile_TowerOrb_Homing_C* GetDefaultObj();

	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_Projectile_TowerOrb_Homing(int32 EntryPoint, class UQtnProjectileMovementComponent* CallFunc_GetProjectileMovement_ReturnValue, float K2Node_Event_DeltaSeconds, float CallFunc_Add_FloatFloat_ReturnValue);
};

}


