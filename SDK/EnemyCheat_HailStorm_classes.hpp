#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x910 - 0x900)
// BlueprintGeneratedClass EnemyCheat_HailStorm.EnemyCheat_HailStorm_C
class AEnemyCheat_HailStorm_C : public ARangedChaffWeapon_C
{
public:
	class UNiagaraComponent*                     FlameTrail;                                        // 0x900(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Audio;                                             // 0x908(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AEnemyCheat_HailStorm_C* GetDefaultObj();

};

}


